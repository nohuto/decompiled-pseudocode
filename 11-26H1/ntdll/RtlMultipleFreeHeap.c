/*
 * XREFs of RtlMultipleFreeHeap @ 0x1801444B0
 * Callers:
 *     <none>
 * Callees:
 *     RtlFreeHeap_0 @ 0x18003FD10 (RtlFreeHeap_0.c)
 */

__int64 __fastcall RtlMultipleFreeHeap(__int64 a1, __int64 a2, unsigned int a3)
{
  unsigned int i; // ebx

  for ( i = 0; i < a3; ++i )
  {
    if ( !(unsigned int)RtlFreeHeap_0() )
      return i;
  }
  return a3;
}
