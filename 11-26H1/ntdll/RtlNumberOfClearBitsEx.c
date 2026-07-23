/*
 * XREFs of RtlNumberOfClearBitsEx @ 0x1801413D0
 * Callers:
 *     <none>
 * Callees:
 *     RtlNumberOfSetBitsEx @ 0x180106C30 (RtlNumberOfSetBitsEx.c)
 */

unsigned __int64 __fastcall RtlNumberOfClearBitsEx(unsigned __int64 *a1)
{
  unsigned __int64 v1; // rbx

  v1 = *a1;
  return v1 - RtlNumberOfSetBitsEx(a1);
}
