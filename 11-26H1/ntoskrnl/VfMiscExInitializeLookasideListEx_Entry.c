/*
 * XREFs of VfMiscExInitializeLookasideListEx_Entry @ 0x140C42920
 * Callers:
 *     <none>
 * Callees:
 *     ViMiscValidateSynchronizationObject @ 0x140C26524 (ViMiscValidateSynchronizationObject.c)
 *     CarReportRuleViolationFromNt @ 0x140C31F2C (CarReportRuleViolationFromNt.c)
 */

BOOLEAN __fastcall VfMiscExInitializeLookasideListEx_Entry(__int64 *a1)
{
  ULONG_PTR v1; // r9

  v1 = a1[3];
  if ( v1 < 8 )
    CarReportRuleViolationFromNt(196, 205LL, a1[7], v1, 8LL, 0xBu, *a1);
  return ViMiscValidateSynchronizationObject((PVOID)a1[7], 0x60uLL, *a1);
}
