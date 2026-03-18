/*
 * XREFs of RtlClearBitEx @ 0x14047D260
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __fastcall RtlClearBitEx(__int64 a1, unsigned __int64 a2)
{
  __int64 v2; // r8
  int result; // eax

  v2 = *(_QWORD *)(a1 + 8);
  result = *(char *)((a2 >> 3) + v2) & ~(1 << (a2 & 7));
  *(_BYTE *)((a2 >> 3) + v2) = result;
  return result;
}
