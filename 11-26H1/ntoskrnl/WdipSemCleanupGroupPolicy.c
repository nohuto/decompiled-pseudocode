/*
 * XREFs of WdipSemCleanupGroupPolicy @ 0x140820ED0
 * Callers:
 *     WdipSemCleanStart @ 0x14081F4F0 (WdipSemCleanStart.c)
 *     WdipSemLoadGroupPolicy @ 0x140820F00 (WdipSemLoadGroupPolicy.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

void WdipSemCleanupGroupPolicy()
{
  if ( stru_140F066E8.Header.WaitListHead.Blink )
  {
    ExFreePoolWithTag(stru_140F066E8.Header.WaitListHead.Blink, 0);
    stru_140F066E8.Header.WaitListHead.Blink = 0LL;
  }
}
