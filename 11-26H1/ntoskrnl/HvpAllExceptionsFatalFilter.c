/*
 * XREFs of HvpAllExceptionsFatalFilter @ 0x140862C54
 * Callers:
 *     HvpViewMapMigrateCOWData @ 0x140862CBC (HvpViewMapMigrateCOWData.c)
 * Callees:
 *     CmSiBugCheck @ 0x140534D04 (CmSiBugCheck.c)
 */

void __fastcall __noreturn HvpAllExceptionsFatalFilter(ULONG_PTR *a1)
{
  CmSiBugCheck(0x21uLL, *(int *)*a1, *a1, a1[1]);
}
