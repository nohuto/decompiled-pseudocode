/*
 * XREFs of WdipSemCleanupGroupPolicy @ 0x1408270E0
 * Callers:
 *     WdipSemCleanStart @ 0x140825700 (WdipSemCleanStart.c)
 *     WdipSemLoadGroupPolicy @ 0x140827110 (WdipSemLoadGroupPolicy.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

void WdipSemCleanupGroupPolicy()
{
  if ( stru_140F042A0.Timer.Header.WaitListHead.Blink )
  {
    ExFreePoolWithTag(stru_140F042A0.Timer.Header.WaitListHead.Blink, 0);
    stru_140F042A0.Timer.Header.WaitListHead.Blink = 0LL;
  }
}
