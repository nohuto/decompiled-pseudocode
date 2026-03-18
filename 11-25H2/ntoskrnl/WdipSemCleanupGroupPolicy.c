/*
 * XREFs of WdipSemCleanupGroupPolicy @ 0x140793550
 * Callers:
 *     WdipSemCleanStart @ 0x1407919E8 (WdipSemCleanStart.c)
 *     WdipSemLoadGroupPolicy @ 0x14079357C (WdipSemLoadGroupPolicy.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

void WdipSemCleanupGroupPolicy()
{
  if ( WdipSemDisabledScenarioTable )
  {
    ExFreePoolWithTag(WdipSemDisabledScenarioTable, 0);
    WdipSemDisabledScenarioTable = 0LL;
  }
}
