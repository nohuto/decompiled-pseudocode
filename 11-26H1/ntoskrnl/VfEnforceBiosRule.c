/*
 * XREFs of VfEnforceBiosRule @ 0x140644270
 * Callers:
 *     <none>
 * Callees:
 *     CarReportRuleViolationFromNt @ 0x140C31F2C (CarReportRuleViolationFromNt.c)
 */

void __fastcall VfEnforceBiosRule(ULONG_PTR BugCheckParameter2, ULONG BugCheckCode, ULONG_PTR BugCheckParameter1)
{
  ULONG_PTR v3; // r9
  __int64 v4; // rax
  __int64 v5; // r8

  v3 = (unsigned int)BugCheckParameter1;
  if ( (VfRuleClasses & 0x40000000) != 0 )
  {
    if ( BugCheckParameter2 && (v4 = *(_QWORD *)(BugCheckParameter2 + 8)) != 0 )
      v5 = *(_QWORD *)(v4 + 24);
    else
      v5 = 0LL;
    CarReportRuleViolationFromNt(BugCheckCode, v3, BugCheckParameter2, 0LL, 0LL, 30, v5);
  }
}
