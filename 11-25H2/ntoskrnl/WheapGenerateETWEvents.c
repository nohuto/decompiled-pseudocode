/*
 * XREFs of WheapGenerateETWEvents @ 0x1404782FC
 * Callers:
 *     WheaReportHwError @ 0x140353D30 (WheaReportHwError.c)
 *     WheapProcessWorkQueueItem @ 0x1404781D0 (WheapProcessWorkQueueItem.c)
 *     WheapProcessWaitingETWEvents @ 0x1407B8EC0 (WheapProcessWaitingETWEvents.c)
 * Callees:
 *     WheaIsCriticalState @ 0x140478350 (WheaIsCriticalState.c)
 *     WheapCompressErrorRecord @ 0x140478378 (WheapCompressErrorRecord.c)
 *     WheapGenerateETWErrorRecord @ 0x1404784DC (WheapGenerateETWErrorRecord.c)
 *     WheapGenerateETWErrorRecordLarge @ 0x140652300 (WheapGenerateETWErrorRecordLarge.c)
 */

__int64 __fastcall WheapGenerateETWEvents(__int64 a1)
{
  __int64 result; // rax

  result = WheaIsCriticalState();
  if ( !(_BYTE)result && (*(_DWORD *)(a1 + 104) & 0x100) == 0 )
  {
    WheapCompressErrorRecord(3LL, a1);
    if ( *(_DWORD *)(a1 + 20) > 0xEFFBu )
      return WheapGenerateETWErrorRecordLarge(a1);
    else
      return WheapGenerateETWErrorRecord(a1);
  }
  return result;
}
