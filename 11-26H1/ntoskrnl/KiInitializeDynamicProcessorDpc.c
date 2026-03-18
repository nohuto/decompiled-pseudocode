/*
 * XREFs of KiInitializeDynamicProcessorDpc @ 0x140BF5030
 * Callers:
 *     <none>
 * Callees:
 *     KeAddProcessorAffinityEx @ 0x140246720 (KeAddProcessorAffinityEx.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x140246770 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiIpiStallOnPacketTargets @ 0x14025220C (KiIpiStallOnPacketTargets.c)
 *     KeSignalCallDpcSynchronize @ 0x1402BCAD0 (KeSignalCallDpcSynchronize.c)
 *     KiIpiSendPacket @ 0x140497DF4 (KiIpiSendPacket.c)
 *     KeIpiGenericCall @ 0x1404AAD60 (KeIpiGenericCall.c)
 *     KeSetAffinityProcess @ 0x14050BCE4 (KeSetAffinityProcess.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1405209F0 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiConfigureCooperativeIdleSearchTargets @ 0x1405EAB38 (KiConfigureCooperativeIdleSearchTargets.c)
 *     KiConfigureSubNodeShareCounts @ 0x1405EADD8 (KiConfigureSubNodeShareCounts.c)
 *     KiFinalizeCoreControlBlockAssignment @ 0x1405EB014 (KiFinalizeCoreControlBlockAssignment.c)
 *     KiReconfigureSubNodeSchedulingInformation @ 0x1405EB788 (KiReconfigureSubNodeSchedulingInformation.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 *     KiConfigureProcessorBlock @ 0x140BF3A10 (KiConfigureProcessorBlock.c)
 *     KiConfigureSchedulingInformation @ 0x140BF3AF0 (KiConfigureSchedulingInformation.c)
 *     KiInitializeProcessor @ 0x140BF3FD4 (KiInitializeProcessor.c)
 *     KeRestoreMtrrBroadcast @ 0x140BF52B0 (KeRestoreMtrrBroadcast.c)
 */

__int64 __fastcall KiInitializeDynamicProcessorDpc(__int64 a1, __int64 *a2, volatile signed __int32 *a3, __int64 a4)
{
  __int64 v7; // rax
  unsigned __int8 CurrentIrql; // bl
  __int64 v9; // rcx
  char v10; // dl
  __int64 result; // rax
  ULONG_PTR Context; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v13; // [rsp+38h] [rbp-C8h]
  int v14; // [rsp+40h] [rbp-C0h]
  __int64 v15; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE v16[264]; // [rsp+58h] [rbp-A8h] BYREF

  memset_0(v16, 0, 0x100uLL);
  if ( (unsigned int)KeSignalCallDpcSynchronize(a4) )
  {
    v7 = *a2;
    v13 = 0LL;
    v14 = 0;
    LODWORD(Context) = *(_DWORD *)(v7 + 36);
    HIDWORD(Context) = KeGetPcr()->Prcb.Number;
    LODWORD(v13) = KeNumberProcessors_0 - 1;
    HIDWORD(v13) = KeNumberProcessors_0 - 1;
    v14 = 0;
    KeIpiGenericCall(KiUpdateNumberProcessorsIpi, (ULONG_PTR)&Context);
    KiInitializeProcessor(*a2);
    KiConfigureProcessorBlock(*a2);
    KeSetAffinityProcess((__int64)PsInitialSystemProcess, 0, (struct _KAFFINITY_EX *)&stru_140FC01F0.WaitRegister);
    v15 = 2097153LL;
    memset_0(v16, 0, 0x100uLL);
    KeAddProcessorAffinityEx((unsigned __int16 *)&v15, *(_DWORD *)(*a2 + 36));
    CurrentIrql = KeGetCurrentIrql();
    if ( CurrentIrql != 12 )
      __writecr8(0xCuLL);
    if ( KiIrqlFlags )
      KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 12);
    KiIpiSendPacket(0, (char *)&v15, (__int64)KiInitDynamicProcessorIpi, 0LL, 0LL, 0LL);
    KiIpiStallOnPacketTargets(v9);
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
    __writecr8(CurrentIrql);
    KeRestoreMtrrBroadcast();
    guard_dispatch_icall_no_overrides(0LL, *a2 + 36);
    KiConfigureSchedulingInformation(*a2);
    KiFinalizeCoreControlBlockAssignment(*a2, v10);
    KiReconfigureSubNodeSchedulingInformation(*(_QWORD *)(*a2 + 192), (_QWORD *)*a2);
    KiConfigureSubNodeShareCounts();
    KiConfigureCooperativeIdleSearchTargets();
    KiBarrierWait = 0;
    *((_BYTE *)a2 + 8) = 1;
  }
  else
  {
    while ( !*((_BYTE *)a2 + 8) )
      _mm_pause();
  }
  result = KiConfigureSchedulingInformation((__int64)KeGetCurrentPrcb());
  _InterlockedDecrement(a3);
  return result;
}
