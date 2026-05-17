/*
 * XREFs of RtlpHpTlLogGCScheduled @ 0x180096B64
 * Callers:
 *     RtlpHpLfhContextFree @ 0x180019DA0 (RtlpHpLfhContextFree.c)
 *     RtlpHpLfhSubsegmentCommitBlock @ 0x18003F520 (RtlpHpLfhSubsegmentCommitBlock.c)
 *     RtlpHpSegPageRangeCoalesce @ 0x18006A960 (RtlpHpSegPageRangeCoalesce.c)
 *     RtlpHpVsCommitLimitCheck @ 0x18006CE50 (RtlpHpVsCommitLimitCheck.c)
 *     RtlpHpLfhContextUpdateFreeCommitCount @ 0x180095998 (RtlpHpLfhContextUpdateFreeCommitCount.c)
 *     RtlpHpGCTimerSchedule @ 0x1800961E4 (RtlpHpGCTimerSchedule.c)
 *     RtlpHpLfhSubsegmentDecBlockCounts @ 0x180096580 (RtlpHpLfhSubsegmentDecBlockCounts.c)
 *     RtlpHpLfhSubsegmentDecommitPages @ 0x1800966D8 (RtlpHpLfhSubsegmentDecommitPages.c)
 *     RtlpHpLfhSlotAllocateSlow @ 0x1800B2AA0 (RtlpHpLfhSlotAllocateSlow.c)
 * Callees:
 *     _tlgWriteTransfer_EtwEventWriteTransfer @ 0x18006A8B0 (_tlgWriteTransfer_EtwEventWriteTransfer.c)
 *     __security_check_cookie @ 0x180162C90 (__security_check_cookie.c)
 */

__int64 __fastcall RtlpHpTlLogGCScheduled(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax
  _BYTE v5[32]; // [rsp+30h] [rbp-38h] BYREF

  if ( (unsigned int)dword_1801C5680 > 5 )
    return tlgWriteTransfer_EtwEventWriteTransfer(
             (__int64)&dword_1801C5680,
             (unsigned __int8 *)&unk_18019BEE3,
             a3,
             a4,
             2,
             (__int64)v5);
  return result;
}
