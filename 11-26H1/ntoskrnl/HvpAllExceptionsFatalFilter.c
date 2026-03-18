/*
 * XREFs of HvpAllExceptionsFatalFilter @ 0x14085C964
 * Callers:
 *     HvpViewMapMigrateCOWData @ 0x14085C9CC (HvpViewMapMigrateCOWData.c)
 * Callees:
 *     CmSiBugCheck @ 0x140532864 (CmSiBugCheck.c)
 */

void __fastcall __noreturn HvpAllExceptionsFatalFilter(ULONG_PTR *a1)
{
  CmSiBugCheck(0x21uLL, *(int *)*a1, *a1, a1[1]);
}
