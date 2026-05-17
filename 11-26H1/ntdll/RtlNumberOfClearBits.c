/*
 * XREFs of RtlNumberOfClearBits @ 0x1800E6160
 * Callers:
 *     <none>
 * Callees:
 *     RtlNumberOfSetBits @ 0x1800E6180 (RtlNumberOfSetBits.c)
 */

__int64 __fastcall RtlNumberOfClearBits(int *a1)
{
  int v1; // ebx

  v1 = *a1;
  return v1 - (unsigned int)RtlNumberOfSetBits(a1);
}
