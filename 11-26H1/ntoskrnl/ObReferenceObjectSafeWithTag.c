/*
 * XREFs of ObReferenceObjectSafeWithTag @ 0x140258450
 * Callers:
 *     PsGetNextPartitionUnsafe @ 0x14025839C (PsGetNextPartitionUnsafe.c)
 *     ?KiAbProcessThreadLocks@LegacyAutoBoost@@YAXPEAU_KTHREAD@@T_KI_AB_BOOST_STRATEGY@1@PEAU_SINGLE_LIST_ENTRY@@22@Z @ 0x14027125C (-KiAbProcessThreadLocks@LegacyAutoBoost@@YAXPEAU_KTHREAD@@T_KI_AB_BOOST_STRATEGY@1@PEAU_SINGLE_L.c)
 *     MiEmptyPageAccessLog @ 0x1402CFDDC (MiEmptyPageAccessLog.c)
 *     ?KiAbpProcessThreadState@AutoBoost@@YAXPEAU_KTHREAD@@PEAU_AB_THREAD_STATE@1@PEAU_AB_BOOST_CONTEXT@1@@Z @ 0x140375A20 (-KiAbpProcessThreadState@AutoBoost@@YAXPEAU_KTHREAD@@PEAU_AB_THREAD_STATE@1@PEAU_AB_BOOST_CONTEX.c)
 *     ?KiAbpProcessEntry@AutoBoost@@YAXPEAU_KTHREAD@@PEAU_AB_THREAD_ENTRY@1@PEAU_AB_BOOST_CONTEXT@1@@Z @ 0x140376BF0 (-KiAbpProcessEntry@AutoBoost@@YAXPEAU_KTHREAD@@PEAU_AB_THREAD_ENTRY@1@PEAU_AB_BOOST_CONTEXT@1@@Z.c)
 *     MiViewMayContainPage @ 0x1404C70F4 (MiViewMayContainPage.c)
 *     IoNotifyQuotaState @ 0x1404D7080 (IoNotifyQuotaState.c)
 *     MiWakeAllZeroingThreads @ 0x14050DB8C (MiWakeAllZeroingThreads.c)
 *     MiCapturePfnVm @ 0x1405136D0 (MiCapturePfnVm.c)
 *     HalpDmaFindAdapterByDeviceId @ 0x140578BFC (HalpDmaFindAdapterByDeviceId.c)
 *     HalpDmaFindAdapterByDeviceObject @ 0x14057A35C (HalpDmaFindAdapterByDeviceObject.c)
 *     PspJobCycleTimeNotificationDpcRoutine @ 0x1406157C0 (PspJobCycleTimeNotificationDpcRoutine.c)
 *     MiLocateSharedPageViews @ 0x1406F8320 (MiLocateSharedPageViews.c)
 *     PspGetNextSyscallProviderProcess @ 0x1407ED7B0 (PspGetNextSyscallProviderProcess.c)
 *     PspQueryProcessInterferenceCountCallback @ 0x1407F9000 (PspQueryProcessInterferenceCountCallback.c)
 *     PopEtGetNextEnergyTracker @ 0x140950D64 (PopEtGetNextEnergyTracker.c)
 *     PspEnforceLimitsProcessCallback @ 0x140952550 (PspEnforceLimitsProcessCallback.c)
 *     IopCancelIrpsInThreadListForCurrentProcess @ 0x140956BB4 (IopCancelIrpsInThreadListForCurrentProcess.c)
 *     PspGetPreviousProcessThread @ 0x1409572D8 (PspGetPreviousProcessThread.c)
 *     PsGetNextProcessThread @ 0x1409573A0 (PsGetNextProcessThread.c)
 *     PspGetNextJobProcess @ 0x140959CD4 (PspGetNextJobProcess.c)
 *     PspGetNextJob @ 0x14095A1E0 (PspGetNextJob.c)
 *     PspEnumJobsAndProcessesInJobHierarchy @ 0x14095A350 (PspEnumJobsAndProcessesInJobHierarchy.c)
 *     PspGetNextChildJob @ 0x14095A784 (PspGetNextChildJob.c)
 *     ExpGetNextProcessThread @ 0x140968C70 (ExpGetNextProcessThread.c)
 *     ExGetNextProcess @ 0x140969F30 (ExGetNextProcess.c)
 *     PsGetNextProcess @ 0x14096EE20 (PsGetNextProcess.c)
 *     PspExitLastThread @ 0x140A41964 (PspExitLastThread.c)
 *     PspSelectSessionAttachProcess @ 0x140A7DA78 (PspSelectSessionAttachProcess.c)
 *     PsGetNextProcessEx @ 0x140AC8A10 (PsGetNextProcessEx.c)
 *     PsGetPreviousProcess @ 0x140AEFB30 (PsGetPreviousProcess.c)
 *     ExpGetNextCallback @ 0x140AFA0E0 (ExpGetNextCallback.c)
 *     KiAvailableCpusProcessWorkItemCallback @ 0x140B05090 (KiAvailableCpusProcessWorkItemCallback.c)
 *     SepCleanupLUIDDeviceMapDirectory @ 0x140B231E0 (SepCleanupLUIDDeviceMapDirectory.c)
 *     PspAddProcessToWorkingSetChangeList @ 0x140B3984C (PspAddProcessToWorkingSetChangeList.c)
 * Callees:
 *     ObpTraceObjectReferenceIfActive @ 0x140278BB0 (ObpTraceObjectReferenceIfActive.c)
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
