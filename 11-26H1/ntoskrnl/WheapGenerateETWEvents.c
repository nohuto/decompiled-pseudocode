/*
 * XREFs of WheapGenerateETWEvents @ 0x1403E2E58
 * Callers:
 *     WheaReportHwError @ 0x1403E0F70 (WheaReportHwError.c)
 *     WheapProcessWorkQueueItem @ 0x1403E2D50 (WheapProcessWorkQueueItem.c)
 *     WheapProcessWaitingETWEvents @ 0x14084F860 (WheapProcessWaitingETWEvents.c)
 * Callees:
 *     WheaIsCriticalState @ 0x1403E2EB0 (WheaIsCriticalState.c)
 *     WheapCompressErrorRecord @ 0x1403E2ED8 (WheapCompressErrorRecord.c)
 *     WheapGenerateETWErrorRecord @ 0x1403E3030 (WheapGenerateETWErrorRecord.c)
 *     WheapGenerateETWErrorRecordLarge @ 0x1406DB370 (WheapGenerateETWErrorRecordLarge.c)
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
