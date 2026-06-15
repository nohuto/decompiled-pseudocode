/*
 * XREFs of sub_140056930 @ 0x140056930
 * Callers:
 *     sub_1400471D8 @ 0x1400471D8 (sub_1400471D8.c)
 *     sub_1400481F8 @ 0x1400481F8 (sub_1400481F8.c)
 * Callees:
 *     <none>
 */

void __fastcall sub_140056930(PTP_TIMER pti)
{
  SetThreadpoolTimer(pti, 0LL, 0, 0);
  WaitForThreadpoolTimerCallbacks(pti, 1);
  CloseThreadpoolTimer(pti);
}
