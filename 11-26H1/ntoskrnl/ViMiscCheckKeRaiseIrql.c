/*
 * XREFs of ViMiscCheckKeRaiseIrql @ 0x140C470BC
 * Callers:
 *     VfMiscKeAcquireSpinLockRaiseToDpc_Entry @ 0x140C3CD10 (VfMiscKeAcquireSpinLockRaiseToDpc_Entry.c)
 *     VfMiscKeSynchronizeExecution_Entry @ 0x140C3CFC0 (VfMiscKeSynchronizeExecution_Entry.c)
 * Callees:
 *     CarReportRuleViolationFromNt @ 0x140C2BF1C (CarReportRuleViolationFromNt.c)
 */

__int64 __fastcall ViMiscCheckKeRaiseIrql(unsigned __int8 a1, __int64 a2)
{
  ULONG_PTR v3; // rbx
  __int64 result; // rax
  ULONG_PTR v5; // rbp

  v3 = a1;
  result = KeGetCurrentIrql();
  v5 = (unsigned __int8)result;
  if ( (unsigned __int8)result > a1 )
    result = CarReportRuleViolationFromNt(196, 48LL, (unsigned __int8)result, a1, 0LL, 0xBu, a2);
  if ( (unsigned __int8)v3 > 0xFu )
    return CarReportRuleViolationFromNt(196, 48LL, v5, v3, 0LL, 0xBu, a2);
  return result;
}
