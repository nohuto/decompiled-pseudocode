/*
 * XREFs of RtlFindClearBitsAndSetEx @ 0x180140B10
 * Callers:
 *     <none>
 * Callees:
 *     RtlFindClearBitsEx @ 0x180140B60 (RtlFindClearBitsEx.c)
 *     RtlSetBitsEx @ 0x180141610 (RtlSetBitsEx.c)
 */

__int64 __fastcall RtlFindClearBitsAndSetEx(__int64 a1, __int64 a2)
{
  __int64 ClearBits; // rax
  __int64 v5; // rbx

  ClearBits = RtlFindClearBitsEx();
  v5 = ClearBits;
  if ( ClearBits != -1 )
    RtlSetBitsEx(a1, ClearBits, a2);
  return v5;
}
