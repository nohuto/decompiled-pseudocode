/*
 * XREFs of PpmCheckBeginNewAccountingPeriod @ 0x1402585C4
 * Callers:
 *     PpmCheckQueuePhaseActions @ 0x140253FF8 (PpmCheckQueuePhaseActions.c)
 *     PpmCheckRun @ 0x140258540 (PpmCheckRun.c)
 *     PpmCheckQueueControlAction @ 0x140258FDC (PpmCheckQueueControlAction.c)
 * Callees:
 *     RtlGetInterruptTimePrecise @ 0x1402081F0 (RtlGetInterruptTimePrecise.c)
 */

__int64 __fastcall PpmCheckBeginNewAccountingPeriod(__int64 a1)
{
  LARGE_INTEGER InterruptTimePrecise; // r9
  LONGLONG v3; // r8
  _DWORD *v4; // rdx
  __int64 result; // rax
  LARGE_INTEGER PerformanceCounter; // [rsp+30h] [rbp+8h] BYREF

  InterruptTimePrecise = RtlGetInterruptTimePrecise(&PerformanceCounter);
  if ( InterruptTimePrecise.QuadPart <= (unsigned __int64)PpmCheckPhaseTimestamp )
    v3 = 0LL;
  else
    v3 = InterruptTimePrecise.QuadPart - PpmCheckPhaseTimestamp;
  v4 = (_DWORD *)PpmCheckCurrentAccountingBucket;
  result = 0xFFFFFFFFLL;
  PpmCheckPhaseTimestamp = InterruptTimePrecise.QuadPart;
  PpmCheckCurrentAccountingBucket = a1;
  if ( v3 + (unsigned __int64)(unsigned int)*v4 < 0xFFFFFFFF )
    result = v3 + (unsigned int)*v4;
  *v4 = result;
  return result;
}
