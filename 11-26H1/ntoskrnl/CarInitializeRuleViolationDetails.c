/*
 * XREFs of CarInitializeRuleViolationDetails @ 0x14064D840
 * Callers:
 *     CarCreateRuleViolationDetails @ 0x14064D430 (CarCreateRuleViolationDetails.c)
 *     CarReportRuleViolationFromNt @ 0x140C31F2C (CarReportRuleViolationFromNt.c)
 * Callees:
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 __fastcall CarInitializeRuleViolationDetails(void *a1)
{
  unsigned int v1; // ebx

  v1 = 0;
  if ( a1 )
    memset_0(a1, 0, 0x58uLL);
  else
    return (unsigned int)-1073741811;
  return v1;
}
