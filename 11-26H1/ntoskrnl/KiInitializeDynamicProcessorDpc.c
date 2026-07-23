/*
 * XREFs of KiInitializeDynamicProcessorDpc @ 0x140BFB030
 * Callers:
 *     <none>
 * Callees:
 *     KeAddProcessorAffinityEx @ 0x140248080 (KeAddProcessorAffinityEx.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiIpiStallOnPacketTargets @ 0x140253B6C (KiIpiStallOnPacketTargets.c)
 *     KeSignalCallDpcSynchronize @ 0x140307790 (KeSignalCallDpcSynchronize.c)
 *     KiIpiSendPacket @ 0x140491944 (KiIpiSendPacket.c)
 *     KeIpiGenericCall @ 0x1404A43F0 (KeIpiGenericCall.c)
 *     KeSetAffinityProcess @ 0x140505754 (KeSetAffinityProcess.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiConfigureCooperativeIdleSearchTargets @ 0x1405ED4A8 (KiConfigureCooperativeIdleSearchTargets.c)
 *     KiConfigureSubNodeShareCounts @ 0x1405ED748 (KiConfigureSubNodeShareCounts.c)
 *     KiFinalizeCoreControlBlockAssignment @ 0x1405ED984 (KiFinalizeCoreControlBlockAssignment.c)
 *     KiReconfigureSubNodeSchedulingInformation @ 0x1405EE0F8 (KiReconfigureSubNodeSchedulingInformation.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     KiConfigureProcessorBlock @ 0x140BF9A10 (KiConfigureProcessorBlock.c)
 *     KiConfigureSchedulingInformation @ 0x140BF9AF0 (KiConfigureSchedulingInformation.c)
 *     KiInitializeProcessor @ 0x140BF9FD4 (KiInitializeProcessor.c)
 *     KeRestoreMtrrBroadcast @ 0x140BFB2B0 (KeRestoreMtrrBroadcast.c)
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
    KeSetAffinityProcess((__int64)PsInitialSystemProcess, 0, (struct _KAFFINITY_EX *)&stru_140FC11F0.WaitRegister);
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
