/*
 * XREFs of RtlNumberOfClearBitsInRange @ 0x180141500
 * Callers:
 *     <none>
 * Callees:
 *     RtlNumberOfSetBitsInRange @ 0x180141530 (RtlNumberOfSetBitsInRange.c)
 */

__int64 __fastcall RtlNumberOfClearBitsInRange(__int64 a1, __int64 a2, int a3)
{
  int v4; // eax
  unsigned int v5; // ebx

  v4 = RtlNumberOfSetBitsInRange();
  v5 = a3 - v4;
  if ( v4 == -1 )
    return (unsigned int)-1;
  return v5;
}
