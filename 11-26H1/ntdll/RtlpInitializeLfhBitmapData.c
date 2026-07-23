/*
 * XREFs of RtlpInitializeLfhBitmapData @ 0x180096240
 * Callers:
 *     RtlpSubSegmentDebugInitialize @ 0x180095F9C (RtlpSubSegmentDebugInitialize.c)
 * Callees:
 *     memset$thunk$772440563353939046 @ 0x18016F030 (memset$thunk$772440563353939046.c)
 */

unsigned __int64 __fastcall RtlpInitializeLfhBitmapData(__int64 *a1)
{
  __int64 v1; // rsi
  char *v2; // rdi
  size_t v3; // rbx
  unsigned __int64 result; // rax

  v1 = *a1;
  v2 = (char *)a1[1];
  v3 = 8 * ((unsigned __int64)(*a1 + 63) >> 6);
  memset_thunk_772440563353939046(v2, 0, v3);
  result = ~(0xFFFFFFFFFFFFFFFFuLL >> (-(char)v1 & 0x3F));
  *(_QWORD *)&v2[v3 - 8] |= result;
  return result;
}
