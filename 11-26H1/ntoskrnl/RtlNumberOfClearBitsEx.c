/*
 * XREFs of RtlNumberOfClearBitsEx @ 0x14061BBA0
 * Callers:
 *     <none>
 * Callees:
 *     RtlNumberOfSetBitsEx @ 0x140200820 (RtlNumberOfSetBitsEx.c)
 */

__int64 __fastcall RtlNumberOfClearBitsEx(__int64 *a1)
{
  __int64 v1; // rbx

  v1 = *a1;
  return v1 - RtlNumberOfSetBitsEx(a1);
}
