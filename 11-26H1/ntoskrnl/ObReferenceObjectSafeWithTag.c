/*
 * XREFs of ObReferenceObjectSafeWithTag @ 0x140259C30
 * Callers:
 *     PsGetNextPartitionUnsafe @ 0x140259B7C (PsGetNextPartitionUnsafe.c)
 *     ?KiAbProcessThreadLocks@LegacyAutoBoost@@YAXPEAU_KTHREAD@@T_KI_AB_BOOST_STRATEGY@1@PEAU_SINGLE_LIST_ENTRY@@22@Z @ 0x1402707CC (-KiAbProcessThreadLocks@LegacyAutoBoost@@YAXPEAU_KTHREAD@@T_KI_AB_BOOST_STRATEGY@1@PEAU_SINGLE_L.c)
 *     MiEmptyPageAccessLog @ 0x1402B1B9C (MiEmptyPageAccessLog.c)
 *     ?KiAbpProcessThreadState@AutoBoost@@YAXPEAU_KTHREAD@@PEAU_AB_THREAD_STATE@1@PEAU_AB_BOOST_CONTEXT@1@@Z @ 0x1403777D0 (-KiAbpProcessThreadState@AutoBoost@@YAXPEAU_KTHREAD@@PEAU_AB_THREAD_STATE@1@PEAU_AB_BOOST_CONTEX.c)
 *     ?KiAbpProcessEntry@AutoBoost@@YAXPEAU_KTHREAD@@PEAU_AB_THREAD_ENTRY@1@PEAU_AB_BOOST_CONTEXT@1@@Z @ 0x1403789A0 (-KiAbpProcessEntry@AutoBoost@@YAXPEAU_KTHREAD@@PEAU_AB_THREAD_ENTRY@1@PEAU_AB_BOOST_CONTEXT@1@@Z.c)
 *     MiViewMayContainPage @ 0x1404C09A8 (MiViewMayContainPage.c)
 *     IoNotifyQuotaState @ 0x1404D0850 (IoNotifyQuotaState.c)
 *     MiWakeAllZeroingThreads @ 0x1405075FC (MiWakeAllZeroingThreads.c)
 *     MiCapturePfnVm @ 0x14050D140 (MiCapturePfnVm.c)
 *     HalpDmaFindAdapterByDeviceId @ 0x14057B12C (HalpDmaFindAdapterByDeviceId.c)
 *     HalpDmaFindAdapterByDeviceObject @ 0x14057C88C (HalpDmaFindAdapterByDeviceObject.c)
 *     PspProcessQosChangeNotificationInsertList @ 0x140618118 (PspProcessQosChangeNotificationInsertList.c)
 *     PspJobCycleTimeNotificationDpcRoutine @ 0x140618790 (PspJobCycleTimeNotificationDpcRoutine.c)
 *     MiLocateSharedPageViews @ 0x1406FCFF0 (MiLocateSharedPageViews.c)
 *     PspGetNextSyscallProviderProcess @ 0x1407F3310 (PspGetNextSyscallProviderProcess.c)
 *     PspQueryProcessInterferenceCountCallback @ 0x1407FEB00 (PspQueryProcessInterferenceCountCallback.c)
 *     ExGetNextProcess @ 0x14091E590 (ExGetNextProcess.c)
 *     IopCancelIrpsInThreadListForCurrentProcess @ 0x14094A5DC (IopCancelIrpsInThreadListForCurrentProcess.c)
 *     PspGetPreviousProcessThread @ 0x14094AD00 (PspGetPreviousProcessThread.c)
 *     PsGetNextProcessThread @ 0x14094ADD0 (PsGetNextProcessThread.c)
 *     PsGetPreviousProcess @ 0x1409B92F8 (PsGetPreviousProcess.c)
 *     PsGetNextProcess @ 0x1409BC470 (PsGetNextProcess.c)
 *     PopEtGetNextEnergyTracker @ 0x1409CC6A4 (PopEtGetNextEnergyTracker.c)
 *     PspEnforceLimitsProcessCallback @ 0x1409CDE90 (PspEnforceLimitsProcessCallback.c)
 *     ExpGetNextProcessThread @ 0x1409DD7B0 (ExpGetNextProcessThread.c)
 *     PspExitLastThread @ 0x1409FD314 (PspExitLastThread.c)
 *     PspGetNextJobProcess @ 0x1409FF594 (PspGetNextJobProcess.c)
 *     PspGetNextJob @ 0x1409FFAA0 (PspGetNextJob.c)
 *     PspEnumJobsAndProcessesInJobHierarchy @ 0x1409FFC10 (PspEnumJobsAndProcessesInJobHierarchy.c)
 *     PspGetNextChildJob @ 0x140A00044 (PspGetNextChildJob.c)
 *     PspSelectSessionAttachProcess @ 0x140A838E8 (PspSelectSessionAttachProcess.c)
 *     PsGetNextProcessEx @ 0x140ACA600 (PsGetNextProcessEx.c)
 *     ExpGetNextCallback @ 0x140AFC570 (ExpGetNextCallback.c)
 *     KiAvailableCpusProcessWorkItemCallback @ 0x140B06CA0 (KiAvailableCpusProcessWorkItemCallback.c)
 *     SepCleanupLUIDDeviceMapDirectory @ 0x140B255E0 (SepCleanupLUIDDeviceMapDirectory.c)
 *     PspAddProcessToWorkingSetChangeList @ 0x140B3BA5C (PspAddProcessToWorkingSetChangeList.c)
 * Callees:
 *     ObpTraceObjectReferenceIfActive @ 0x140278120 (ObpTraceObjectReferenceIfActive.c)
 */

char __fastcall ObReferenceObjectSafeWithTag(__int64 a1, unsigned int a2)
{
  volatile signed __int64 *v2; // r9
  signed __int64 v3; // rax
  signed __int64 v4; // rtt

  v2 = (volatile signed __int64 *)(a1 - 48);
  _m_prefetchw((const void *)(a1 - 48));
  v3 = *(_QWORD *)(a1 - 48);
  while ( v3 )
  {
    v4 = v3;
    v3 = _InterlockedCompareExchange64(v2, v3 + 1, v3);
    if ( v4 == v3 )
    {
      ObpTraceObjectReferenceIfActive(v2, 1LL, a2);
      LOBYTE(v3) = 1;
      return v3;
    }
  }
  return v3;
}
