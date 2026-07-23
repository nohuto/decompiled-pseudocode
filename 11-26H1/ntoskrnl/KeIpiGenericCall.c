/*
 * XREFs of KeIpiGenericCall @ 0x1404A43F0
 * Callers:
 *     KeAdjustInterruptTime @ 0x1403E8B1C (KeAdjustInterruptTime.c)
 *     KeStopProfile @ 0x1404A4318 (KeStopProfile.c)
 *     HalpCmciHandler @ 0x140522EB0 (HalpCmciHandler.c)
 *     HalpTimerInitSystem @ 0x140579A20 (HalpTimerInitSystem.c)
 *     HalpTscFallbackToPlatformSource @ 0x140586204 (HalpTscFallbackToPlatformSource.c)
 *     HalpTscSynchronization @ 0x140586490 (HalpTscSynchronization.c)
 *     KeOptimizeSpecCtrlSettings @ 0x1405F4308 (KeOptimizeSpecCtrlSettings.c)
 *     KeStartProfile @ 0x1405F5C68 (KeStartProfile.c)
 *     MiWritePteHighLevel @ 0x1406F7808 (MiWritePteHighLevel.c)
 *     MiReapplyImportOptimizationForDriverVerifier @ 0x1406FFE48 (MiReapplyImportOptimizationForDriverVerifier.c)
 *     HalpLoadMicrocode @ 0x140787970 (HalpLoadMicrocode.c)
 *     HalpLbrConfigurationWorker @ 0x14078A1D8 (HalpLbrConfigurationWorker.c)
 *     KiUpdateSavedSupervisorState @ 0x140BFAD94 (KiUpdateSavedSupervisorState.c)
 *     KiInitializeDynamicProcessorDpc @ 0x140BFB030 (KiInitializeDynamicProcessorDpc.c)
 *     KeRestoreMtrrBroadcast @ 0x140BFB2B0 (KeRestoreMtrrBroadcast.c)
 * Callees:
 *     KeQueryActiveProcessorCountEx @ 0x140211F80 (KeQueryActiveProcessorCountEx.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiIpiStallOnPacketTargets @ 0x140253B6C (KiIpiStallOnPacketTargets.c)
 *     KeYieldProcessorEx @ 0x140278210 (KeYieldProcessorEx.c)
 *     KxReleaseSpinLock @ 0x140308BB0 (KxReleaseSpinLock.c)
 *     KiIpiSendRequest @ 0x14032BF00 (KiIpiSendRequest.c)
 *     KxAcquireSpinLock @ 0x1403312F0 (KxAcquireSpinLock.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

ULONG_PTR __stdcall KeIpiGenericCall(PKIPI_BROADCAST_WORKER BroadcastFunction, ULONG_PTR Context)
{
  ULONG_PTR v2; // rdi
  unsigned __int8 CurrentIrql; // bl
  __int64 v5; // rcx
  ULONG v6; // esi
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // rcx
  ULONG_PTR v10; // rdi
  __int128 v12; // [rsp+30h] [rbp-20h] BYREF
  ULONG *p_ActiveProcessorCount; // [rsp+40h] [rbp-10h]
  __int64 (__fastcall *v14)(__int64, ULONG_PTR, __int64, volatile signed __int32 *); // [rsp+48h] [rbp-8h]
  ULONG ActiveProcessorCount; // [rsp+80h] [rbp+30h] BYREF
  int v16; // [rsp+90h] [rbp+40h] BYREF

  v2 = Context;
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql < 0xCu )
  {
    v5 = KeGetCurrentIrql();
    if ( (_BYTE)v5 != 12 )
      __writecr8(0xCuLL);
    if ( KiIrqlFlags )
    {
      LOBYTE(Context) = 12;
      KiRaiseIrqlProcessIrqlFlags(v5, Context);
    }
  }
  v16 = 0;
  ActiveProcessorCount = KeQueryActiveProcessorCountEx(0xFFFFu);
  v6 = ActiveProcessorCount - 1;
  KxAcquireSpinLock(&KiReverseStallIpiLock);
  if ( v6 )
  {
    p_ActiveProcessorCount = &ActiveProcessorCount;
    *(_QWORD *)&v12 = BroadcastFunction;
    *((_QWORD *)&v12 + 1) = v2;
    v14 = KiIpiGenericCallTarget;
    KiIpiSendRequest((__int64)KeGetCurrentPrcb(), 1uLL, 0LL, &v12, 5LL);
  }
  while ( ActiveProcessorCount != 1 )
    KeYieldProcessorEx(&v16);
  v7 = KeGetCurrentIrql();
  v8 = 14LL;
  if ( (_BYTE)v7 != 14 )
    __writecr8(0xEuLL);
  if ( KiIrqlFlags )
    KiRaiseIrqlProcessIrqlFlags(v7, 14LL);
  ActiveProcessorCount = 0;
  KeGetCurrentPrcb()->IpiFrame = 0LL;
  v10 = guard_dispatch_icall_no_overrides(v2, v8);
  if ( v6 )
  {
    if ( CurrentIrql <= 0xCu )
    {
      if ( KiIrqlFlags )
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), 0xCu);
      __writecr8(0xCuLL);
    }
    KiIpiStallOnPacketTargets(v9);
  }
  KxReleaseSpinLock(&KiReverseStallIpiLock);
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
  __writecr8(CurrentIrql);
  return v10;
}
