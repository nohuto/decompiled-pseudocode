/*
 * XREFs of VfMiscExInitializeLookasideListEx_Entry @ 0x140B8D8D0
 * Callers:
 *     <none>
 * Callees:
 *     CarReportRuleViolationFromNt @ 0x140B7D934 (CarReportRuleViolationFromNt.c)
 *     ViMiscValidateSynchronizationObject @ 0x140B8F6C8 (ViMiscValidateSynchronizationObject.c)
 */

__int64 __fastcall VfMiscExInitializeLookasideListEx_Entry(__int64 *a1)
{
  ULONG_PTR v1; // r9

  v1 = a1[3];
  if ( v1 < 8 )
    CarReportRuleViolationFromNt(196, 205LL, a1[7], v1, 8LL, 0xBu, *a1);
  return ViMiscValidateSynchronizationObject(a1[7]);
}
