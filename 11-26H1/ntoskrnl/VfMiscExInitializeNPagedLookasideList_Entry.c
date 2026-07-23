/*
 * XREFs of VfMiscExInitializeNPagedLookasideList_Entry @ 0x140C429B0
 * Callers:
 *     <none>
 * Callees:
 *     ViMiscValidateSynchronizationObject @ 0x140C26524 (ViMiscValidateSynchronizationObject.c)
 *     CarReportRuleViolationFromNt @ 0x140C31F2C (CarReportRuleViolationFromNt.c)
 */

BOOLEAN __fastcall VfMiscExInitializeNPagedLookasideList_Entry(__int64 *a1)
{
  ULONG_PTR v1; // r9

  v1 = a1[3];
  if ( v1 < 8 )
    CarReportRuleViolationFromNt(196, 205LL, a1[7], v1, 8LL, 0xBu, *a1);
  return ViMiscValidateSynchronizationObject((PVOID)a1[7], 0x80uLL, *a1);
}
