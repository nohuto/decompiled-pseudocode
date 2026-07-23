/*
 * XREFs of PopCheckpointSystemSleep @ 0x140C0C680
 * Callers:
 *     PopPrepareSleep @ 0x1404F8808 (PopPrepareSleep.c)
 *     PopIssueActionRequest @ 0x1409F3438 (PopIssueActionRequest.c)
 *     PopSuspendApps @ 0x1409F5528 (PopSuspendApps.c)
 *     PopResumeApps @ 0x1409F557C (PopResumeApps.c)
 *     PopSuspendServices @ 0x1409F5634 (PopSuspendServices.c)
 *     PopResumeServices @ 0x1409F5698 (PopResumeServices.c)
 *     PopDispatchSuperfetchNotification @ 0x140B51798 (PopDispatchSuperfetchNotification.c)
 *     PopNotifyCallbacksPreSleep @ 0x140B5EE28 (PopNotifyCallbacksPreSleep.c)
 *     PopAllocateHiberContext @ 0x140B75B48 (PopAllocateHiberContext.c)
 *     PopDecompressHiberBlocks @ 0x140C002A4 (PopDecompressHiberBlocks.c)
 *     PopHiberCheckResume @ 0x140C008A0 (PopHiberCheckResume.c)
 *     PopHiberChecksumHiberFileData @ 0x140C00B3C (PopHiberChecksumHiberFileData.c)
 *     PopRequestRead @ 0x140C013E8 (PopRequestRead.c)
 *     PopRequestWrite @ 0x140C01804 (PopRequestWrite.c)
 *     PopSaveHiberContext @ 0x140C01D50 (PopSaveHiberContext.c)
 *     PopWriteHiberPages @ 0x140C02C1C (PopWriteHiberPages.c)
 *     PopRestoreHiberContext @ 0x140C09348 (PopRestoreHiberContext.c)
 *     PopInvokeSystemStateHandler @ 0x140C0A314 (PopInvokeSystemStateHandler.c)
 *     PoBroadcastSystemState @ 0x140C0BF20 (PoBroadcastSystemState.c)
 *     PopTransitionSystemPowerStateEx @ 0x140C112B0 (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     PopRecordSleepCheckpoint @ 0x140B3077C (PopRecordSleepCheckpoint.c)
 *     PopCheckpointSystemSleepUnsafe @ 0x140C041C8 (PopCheckpointSystemSleepUnsafe.c)
 */

unsigned __int64 __fastcall PopCheckpointSystemSleep(int a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  ULONG_PTR v4; // rbx
  unsigned __int64 v5; // rax
  __int64 v6; // rdx
  unsigned __int64 v7; // rdi
  unsigned __int64 v8; // rax
  unsigned __int64 result; // rax
  __int64 v10; // rcx

  v4 = a1;
  v5 = __rdtsc();
  v6 = (unsigned __int64)HIDWORD(v5) << 32;
  PopSleepCheckpoint = a1;
  v7 = v5;
  if ( PopBootStatCheckpointAvailable )
    PopRecordSleepCheckpoint(a1, v6, a3, a4);
  if ( PopCheckpointSystemSleepEnabled )
  {
    v10 = (unsigned int)PopCheckpointSystemSleepSimulateFlags;
    if ( (PopCheckpointSystemSleepSimulateFlags & 1) == 0
      || (v10 = HIBYTE(PopCheckpointSystemSleepSimulateFlags), (unsigned int)v4 <= (unsigned int)v10) )
    {
      if ( PoAllProcIntrDisabled )
      {
        if ( KeGetCurrentPrcb()->Number )
          KeBugCheckEx(0xA0u, 0x10FuLL, v4, 1uLL, 0LL);
        if ( (unsigned __int8)guard_dispatch_icall_no_overrides(v10, v6) )
          KeBugCheckEx(0xA0u, 0x10FuLL, v4, 2uLL, 0LL);
      }
      else if ( !_InterlockedExchangeAdd(&PopPagingEnabled, 0) )
      {
        KeBugCheckEx(0xA0u, 0x10FuLL, v4, 0LL, 0LL);
      }
      PopCheckpointSystemSleepUnsafe(v4);
    }
  }
  v8 = __rdtsc();
  result = (((unsigned __int64)HIDWORD(v8) << 32) | (unsigned int)v8) - v7;
  qword_140F10A50 += result;
  return result;
}
