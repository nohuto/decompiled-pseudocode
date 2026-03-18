/*
 * XREFs of ?GrepAuditBehaviorRestrictionViolations@@YA_NW4GreBehaviorRestriction@@@Z @ 0x140141500
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall GrepAuditBehaviorRestrictionViolations(int a1)
{
  return (unsigned __int8)PsIsWin32KFilterAuditEnabled() && (unsigned int)PsGetWin32KFilterSet() == 5 && a1 == 1;
}
