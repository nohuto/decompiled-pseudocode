/*
 * XREFs of MiCreateInitialLargeLeafPfns @ 0x1404645B0
 * Callers:
 *     MiDeleteSectionCluster @ 0x14031A390 (MiDeleteSectionCluster.c)
 *     MiInitializeNewPfns @ 0x1406EB1F8 (MiInitializeNewPfns.c)
 *     MxInsertFreePages @ 0x140CFD680 (MxInsertFreePages.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall MiCreateInitialLargeLeafPfns(
        __int64 a1,
        unsigned __int64 a2,
        int a3,
        int a4,
        unsigned __int16 a5,
        int a6)
{
  __int64 v6; // r10
  __int64 v8; // rsi
  __m128i v9; // xmm0
  __m128i *v10; // rcx
  unsigned __int64 result; // rax
  __int64 v12; // rbx
  __m128i v13; // xmm1
  __m128i v14; // xmm2
  __m128i v15; // xmm0
  unsigned __int64 v16; // r9
  unsigned __int64 v17; // r8
  __m128i *v18; // rdx
  __m128i *v19; // rax
  __m128i si128; // [rsp+0h] [rbp-38h] BYREF
  __m128i v21; // [rsp+10h] [rbp-28h] BYREF
  __m128i v22; // [rsp+20h] [rbp-18h] BYREF

  v6 = a1;
  v8 = MiPageSizes[a3];
  si128 = _mm_load_si128((const __m128i *)&xmmword_140E2EC00);
  v21 = _mm_load_si128((const __m128i *)&xmmword_140E2EC10);
  v9 = _mm_load_si128((const __m128i *)&xmmword_140E2EC20);
  v22.m128i_i64[0] = v9.m128i_i64[0];
  v22.m128i_i64[1] = ((unsigned __int64)a5 << 43) ^ (v9.m128i_i64[1] ^ ((unsigned __int64)a5 << 43)) & 0xFFE007FFFFFFFFFFuLL;
  v10 = (__m128i *)(48 * a1 - 0x220000000000LL);
  if ( a6 )
    v21.m128i_i64[1] |= 0x8000000000000000uLL;
  result = v22.m128i_u32[0];
  v12 = v8 - 1;
  v13 = _mm_loadu_si128(&v21);
  v14 = _mm_loadu_si128(&si128);
  v22.m128i_i32[0] = (a4 << 22) ^ (v22.m128i_i32[0] ^ (a4 << 22)) & 0xFF3FFFFF;
  v15 = _mm_loadu_si128(&v22);
  do
  {
    if ( (v12 & v6) == 0 )
    {
      if ( !--a2 )
        return result;
      ++v6;
      v10 += 3;
    }
    v16 = v8 - (v6 & v12);
    if ( ((v6 ^ (v6 + a2 - 1)) & ~(v8 - 1)) == 0 )
      v16 = a2;
    v17 = v16 >> 1;
    if ( v16 >> 1 )
    {
      v18 = v10 + 2;
      v19 = v10 + 1;
      do
      {
        _mm_stream_si128(v10, v14);
        _mm_stream_si128(v19, v13);
        _mm_stream_si128(v18, v15);
        _mm_stream_si128(v10 + 3, v14);
        _mm_stream_si128(v19 + 3, v13);
        v10 += 6;
        v19 += 6;
        _mm_stream_si128(v18 + 3, v15);
        v18 += 6;
        --v17;
      }
      while ( v17 );
    }
    if ( (v16 & 1) != 0 )
    {
      _mm_stream_si128(v10, v14);
      _mm_stream_si128(v10 + 1, v13);
      _mm_stream_si128(v10 + 2, v15);
    }
    _mm_sfence();
    v6 += v16;
    result = 0xFFFFDE0000000000uLL;
    v10 = (__m128i *)(48 * v6 - 0x220000000000LL);
    a2 -= v16;
  }
  while ( a2 );
  return result;
}
