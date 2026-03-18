/*
 * XREFs of CarInitializeRuleViolationDetails @ 0x140649C60
 * Callers:
 *     CarCreateRuleViolationDetails @ 0x140649850 (CarCreateRuleViolationDetails.c)
 *     CarReportRuleViolationFromNt @ 0x140C2BF1C (CarReportRuleViolationFromNt.c)
 * Callees:
 *     memset_0 @ 0x14073D880 (memset_0.c)
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
