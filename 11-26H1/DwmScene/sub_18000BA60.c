/*
 * XREFs of sub_18000BA60 @ 0x18000BA60
 * Callers:
 *     sub_18001BEB4 @ 0x18001BEB4 (sub_18001BEB4.c)
 * Callees:
 *     <none>
 */

__m128i *__fastcall sub_18000BA60(const __m128i *a1, const __m128i *_RDX, unsigned __int64 a3)
{
  unsigned __int64 v4; // r10
  const __m128i *v6; // r11
  const __m128i *v12; // r10
  __m128i v16; // xmm2
  const __m128i *v17; // r10
  __m128i v18; // xmm1
  unsigned int v19; // edx

  v4 = (char *)_RDX - (char *)a1;
  _RBX = a3;
  v6 = _RDX;
  _R9 = (__m128i *)a1;
  if ( (dword_1801C7B44 & 0x20) != 0 && v4 >= 0x20 )
  {
    __asm
    {
      vmovq   xmm3, rbx
      vpunpcklqdq xmm3, xmm3, xmm3
    }
    _R8 = 0x180000000uLL;
    __asm { vinsertf128 ymm3, ymm3, xmm3, 1 }
    v12 = (const __m128i *)((char *)a1 + (v4 & 0xFFFFFFFFFFFFFFE0uLL));
    do
    {
      __asm
      {
        vpcmpeqq ymm0, ymm3, ymmword ptr [rcx]
        vmovmskpd edx, ymm0
        vpmovzxbd ymm1, ds:rva qword_1800F9B30[r8+rdx*8]
        vpermd  ymm2, ymm1, ymmword ptr [rcx]
        vmovdqu ymmword ptr [r9], ymm2
      }
      a1 += 2;
      _R9 = (__m128i *)((char *)_R9 + byte_1800F9BB0[(_QWORD)_RDX]);
    }
    while ( a1 != v12 );
    __asm { vzeroupper }
  }
  else if ( (dword_1801C7B44 & 4) != 0 && v4 >= 0x10 )
  {
    v16 = _mm_unpacklo_epi64((__m128i)a3, (__m128i)a3);
    v17 = (const __m128i *)((char *)a1 + (v4 & 0xFFFFFFFFFFFFFFF0uLL));
    do
    {
      v18 = _mm_loadu_si128(a1++);
      v19 = _mm_movemask_pd((__m128d)_mm_cmpeq_epi64(v18, v16));
      *_R9 = _mm_shuffle_epi8(v18, _mm_loadu_si128((const __m128i *)&xmmword_1800F9AE0[v19]));
      _R9 = (__m128i *)((char *)_R9 + byte_1800F9B20[v19]);
    }
    while ( a1 != v17 );
  }
  for ( ; a1 != v6; a1 = (const __m128i *)((char *)a1 + 8) )
  {
    if ( a1->m128i_i64[0] != _RBX )
    {
      _R9->m128i_i64[0] = a1->m128i_i64[0];
      _R9 = (__m128i *)((char *)_R9 + 8);
    }
  }
  return _R9;
}
