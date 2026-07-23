/*
 * XREFs of RtlpHpExtrasAppend @ 0x1403549B4
 * Callers:
 *     RtlpHpAllocateHeapSlow @ 0x1403546B4 (RtlpHpAllocateHeapSlow.c)
 * Callees:
 *     RtlpHpExtrasSetPresent @ 0x14063AFB4 (RtlpHpExtrasSetPresent.c)
 */

unsigned __int64 __fastcall RtlpHpExtrasAppend(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        unsigned __int64 a5,
        int a6)
{
  __m128i *v6; // r11
  unsigned __int64 v7; // rbx
  __m128i *v8; // rbx
  char v9; // r9

  v6 = (__m128i *)(a2 + a3);
  if ( (a6 & 0x2000) != 0 )
    *v6 = _mm_load_si128((const __m128i *)&_xmm_abababababababababababababababab);
  v7 = 0LL;
  if ( (a6 & 0x20000F08) != 0 )
  {
    v8 = v6 + 1;
    if ( (a6 & 0x2000) == 0 )
      v8 = (__m128i *)(a2 + a3);
    v7 = ((unsigned __int64)&v8->m128i_u64[1] + 7) & 0xFFFFFFFFFFFFFFF0uLL;
    *(_OWORD *)v7 = 0LL;
    v9 = *(_BYTE *)(v7 + 2) & 0xF | (16 * (BYTE1(a6) & 0xFE));
    *(_BYTE *)(v7 + 3) = a5 >> 4;
    *(_BYTE *)(v7 + 2) = v9;
    RtlpHpExtrasSetPresent(a1);
  }
  return v7;
}
