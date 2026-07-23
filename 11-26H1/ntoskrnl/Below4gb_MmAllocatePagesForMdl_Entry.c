/*
 * XREFs of Below4gb_MmAllocatePagesForMdl_Entry @ 0x140C3FAB0
 * Callers:
 *     <none>
 * Callees:
 *     CarReportRuleViolationFromNt @ 0x140C31F2C (CarReportRuleViolationFromNt.c)
 */

__int64 __fastcall Below4gb_MmAllocatePagesForMdl_Entry(__int64 *a1)
{
  ULONG_PTR v1; // r8
  __int64 result; // rax

  v1 = a1[3];
  result = 0x100000000LL;
  if ( v1 < 0x100000000LL )
    return CarReportRuleViolationFromNt(196, 321LL, v1, a1[1], 0LL, 0x1Au, *a1);
  return result;
}
