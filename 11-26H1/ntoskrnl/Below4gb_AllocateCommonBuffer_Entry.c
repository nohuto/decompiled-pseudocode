/*
 * XREFs of Below4gb_AllocateCommonBuffer_Entry @ 0x140C3F914
 * Callers:
 *     VfAllocateCommonBufferEx @ 0x140C295B0 (VfAllocateCommonBufferEx.c)
 *     VfAllocateCommonBufferWithBounds @ 0x140C29700 (VfAllocateCommonBufferWithBounds.c)
 * Callees:
 *     CarReportRuleViolationFromNt @ 0x140C31F2C (CarReportRuleViolationFromNt.c)
 */

__int64 __fastcall Below4gb_AllocateCommonBuffer_Entry(__int64 a1, ULONG_PTR *a2, unsigned int a3)
{
  __int64 result; // rax

  result = a3;
  if ( a2 )
  {
    if ( *a2 < 0x100000000LL )
      return CarReportRuleViolationFromNt(196, 321LL, *a2, a3, 0LL, 0x1Au, a1);
  }
  return result;
}
