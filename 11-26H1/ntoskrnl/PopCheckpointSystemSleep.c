/*
 * XREFs of PopCheckpointSystemSleep @ 0x140C06470
 * Callers:
 *     PopPrepareSleep @ 0x1404FF018 (PopPrepareSleep.c)
 *     PopIssueActionRequest @ 0x140A37878 (PopIssueActionRequest.c)
 *     PopSuspendApps @ 0x140A39920 (PopSuspendApps.c)
 *     PopResumeApps @ 0x140A39974 (PopResumeApps.c)
 *     PopSuspendServices @ 0x140A39A2C (PopSuspendServices.c)
 *     PopResumeServices @ 0x140A39A90 (PopResumeServices.c)
 *     PopDispatchSuperfetchNotification @ 0x140B4EF08 (PopDispatchSuperfetchNotification.c)
 *     PopNotifyCallbacksPreSleep @ 0x140B5BB0C (PopNotifyCallbacksPreSleep.c)
 *     PopAllocateHiberContext @ 0x140B71364 (PopAllocateHiberContext.c)
 *     PopDecompressHiberBlocks @ 0x140BFA2A4 (PopDecompressHiberBlocks.c)
 *     PopHiberCheckResume @ 0x140BFA8A0 (PopHiberCheckResume.c)
 *     PopHiberChecksumHiberFileData @ 0x140BFAB3C (PopHiberChecksumHiberFileData.c)
 *     PopRequestRead @ 0x140BFB3E8 (PopRequestRead.c)
 *     PopRequestWrite @ 0x140BFB804 (PopRequestWrite.c)
 *     PopSaveHiberContext @ 0x140BFBD50 (PopSaveHiberContext.c)
 *     PopWriteHiberPages @ 0x140BFCC1C (PopWriteHiberPages.c)
 *     PopRestoreHiberContext @ 0x140C03138 (PopRestoreHiberContext.c)
 *     PopInvokeSystemStateHandler @ 0x140C04104 (PopInvokeSystemStateHandler.c)
 *     PoBroadcastSystemState @ 0x140C05D10 (PoBroadcastSystemState.c)
 *     PopTransitionSystemPowerStateEx @ 0x140C0B0A0 (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     KeBugCheckEx @ 0x1405339B0 (KeBugCheckEx.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 *     PopRecordSleepCheckpoint @ 0x140B2E82C (PopRecordSleepCheckpoint.c)
 *     PopCheckpointSystemSleepUnsafe @ 0x140BFE178 (PopCheckpointSystemSleepUnsafe.c)
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
  unk_140F10F1C = a1;
  v7 = v5;
  if ( PopBootStatCheckpointAvailable )
    PopRecordSleepCheckpoint(a1, v6, a3, a4);
  if ( unk_140F10F18 )
  {
    v10 = dword_140F10F14;
    if ( (dword_140F10F14 & 1) == 0 || (v10 = HIBYTE(dword_140F10F14), (unsigned int)v4 <= (unsigned int)v10) )
    {
      if ( LOBYTE(stru_140F10828.WriteOperationCount) )
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
  stru_140F10070.WaitBlock[0].WaitListEntry.Flink = (struct _LIST_ENTRY *)((char *)stru_140F10070.WaitBlock[0].WaitListEntry.Flink
                                                                         + result);
  return result;
}
