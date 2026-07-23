/*
 * XREFs of RtlpHpTlLogGCScheduled @ 0x180064504
 * Callers:
 *     RtlpHpLfhContextFree @ 0x180004E80 (RtlpHpLfhContextFree.c)
 *     RtlpHpLfhSubsegmentCommitBlock @ 0x180029A90 (RtlpHpLfhSubsegmentCommitBlock.c)
 *     RtlpHpLfhContextUpdateFreeCommitCount @ 0x180063338 (RtlpHpLfhContextUpdateFreeCommitCount.c)
 *     RtlpHpGCTimerSchedule @ 0x180063B84 (RtlpHpGCTimerSchedule.c)
 *     RtlpHpLfhSubsegmentDecBlockCounts @ 0x180063F20 (RtlpHpLfhSubsegmentDecBlockCounts.c)
 *     RtlpHpLfhSubsegmentDecommitPages @ 0x180064078 (RtlpHpLfhSubsegmentDecommitPages.c)
 *     RtlpHpSegPageRangeCoalesce @ 0x18008ADB0 (RtlpHpSegPageRangeCoalesce.c)
 *     RtlpHpVsCommitLimitCheck @ 0x18008D2A0 (RtlpHpVsCommitLimitCheck.c)
 *     RtlpHpLfhSlotAllocateSlow @ 0x1800AFFC0 (RtlpHpLfhSlotAllocateSlow.c)
 * Callees:
 *     _tlgWriteTransfer_EtwEventWriteTransfer @ 0x18008AD00 (_tlgWriteTransfer_EtwEventWriteTransfer.c)
 *     __security_check_cookie @ 0x180162B90 (__security_check_cookie.c)
 */

__int64 __fastcall RtlpHpTlLogGCScheduled(__int64 a1, __int64 a2, int a3, int a4)
{
  __int64 result; // rax
  __int64 v5[4]; // [rsp+30h] [rbp-38h] BYREF

  if ( (unsigned int)dword_1801C4680 > 5 )
    return tlgWriteTransfer_EtwEventWriteTransfer((int)&dword_1801C4680, (int)&unk_18019AE8B, a3, a4, 2u, (__int64)v5);
  return result;
}
