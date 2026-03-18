/*
 * XREFs of __std_remove_8 @ 0x180220110
 * Callers:
 *     ??$remove@V?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@PEAVCDataSourceReader@@@std@@@std@@@std@@PEAVCDataSourceReader@@@std@@YA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@PEAVCDataSourceReader@@@std@@@std@@@0@V10@V10@AEBQEAVCDataSourceReader@@@Z @ 0x18022E2BC (--$remove@V-$_Vector_iterator@V-$_Vector_val@U-$_Simple_types@PEAVCDataSourceReader@@@std@@@std@.c)
 * Callees:
 *     <none>
 */

__m128i *__fastcall _std_remove_8(const __m128i *a1, const __m128i *_RDX, unsigned __int64 a3)
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
  if ( (_isa_enabled & 0x20) != 0 && v4 >= 0x20 )
  {
    __asm
    {
      vmovq   xmm3, rbx
      vpunpcklqdq xmm3, xmm3, xmm3
    }
    _R8 = &_ImageBase;
    __asm { vinsertf128 ymm3, ymm3, xmm3, 1 }
    v12 = (const __m128i *)((char *)a1 + (v4 & 0xFFFFFFFFFFFFFFE0uLL));
    do
    {
      __asm
      {
        vpcmpeqq ymm0, ymm3, ymmword ptr [rcx]
        vmovmskpd edx, ymm0
        vpmovzxbd ymm1, ds:rva qword_1803754F0[r8+rdx*8]
        vpermd  ymm2, ymm1, ymmword ptr [rcx]
        vmovdqu ymmword ptr [r9], ymm2
      }
      a1 += 2;
      _R9 = (__m128i *)((char *)_R9 + byte_180375570[(_QWORD)_RDX]);
    }
    while ( a1 != v12 );
    __asm { vzeroupper }
  }
  else if ( (_isa_enabled & 4) != 0 && v4 >= 0x10 )
  {
    v16 = _mm_unpacklo_epi64((__m128i)a3, (__m128i)a3);
    v17 = (const __m128i *)((char *)a1 + (v4 & 0xFFFFFFFFFFFFFFF0uLL));
    do
    {
      v18 = _mm_loadu_si128(a1++);
      v19 = _mm_movemask_pd((__m128d)_mm_cmpeq_epi64(v18, v16));
      *_R9 = _mm_shuffle_epi8(v18, _mm_loadu_si128((const __m128i *)&xmmword_1803754A0[v19]));
      _R9 = (__m128i *)((char *)_R9 + byte_1803754E0[v19]);
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
