/*
 * XREFs of ?GrepAuditBehaviorRestrictionViolations@@YA_NW4GreBehaviorRestriction@@@Z @ 0x1400FED80
 * Callers:
 *     ?vLockIgnoreAttributes@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x14001BB00 (-vLockIgnoreAttributes@XDCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall GrepAuditBehaviorRestrictionViolations(int a1)
{
  return (unsigned __int8)PsIsWin32KFilterAuditEnabled() && (unsigned int)PsGetWin32KFilterSet() == 5 && a1 == 1;
}
