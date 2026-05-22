/*
 * XREFs of _anonymous_namespace_::__std_find_trivial_impl__anonymous_namespace_::_Find_traits_2_unsigned_short_ @ 0x18009C5B0
 * Callers:
 *     __std_find_trivial_2 @ 0x18009C8D0 (__std_find_trivial_2.c)
 * Callees:
 *     <none>
 */

const __m128i *__fastcall anonymous_namespace_::__std_find_trivial_impl__anonymous_namespace_::_Find_traits_2_unsigned_short_(
        const __m128i *a1,
        const __m128i *a2,
        __int16 a3)
{
  signed __int64 v4; // r9
  unsigned __int64 v6; // rdx
  const __m128i *v8; // rdx
  unsigned int v15; // r9d
  unsigned __int64 v23; // r9
  const __m128i *v24; // rdx
  __m128i v25; // xmm1
  __m128i v26; // xmm1
  __int64 v27; // rax

  v4 = (char *)a2 - (char *)a1;
  v6 = ((char *)a2 - (char *)a1) & 0xFFFFFFFFFFFFFFE0uLL;
  if ( v6 && (_isa_enabled & 0x20) != 0 )
  {
    _EAX = a3;
    v8 = (const __m128i *)((char *)a1 + v6);
    __asm
    {
      vmovd   xmm3, eax
      vpunpcklwd xmm3, xmm3, xmm3
      vpshufd xmm3, xmm3, 0
      vinsertf128 ymm3, ymm3, xmm3, 1
    }
    do
    {
      __asm
      {
        vpcmpeqw ymm1, ymm3, ymmword ptr [rcx]
        vpmovmskb eax, ymm1
      }
      if ( _EAX )
        goto LABEL_14;
      a1 += 2;
    }
    while ( a1 != v8 );
    v15 = v4 & 0x1C;
    if ( !v15 )
    {
LABEL_9:
      __asm { vzeroupper }
      goto LABEL_10;
    }
    _RAX = (char *)&unk_180202E30 - (v15 & 0xFFFFFFFC);
    __asm
    {
      vmovdqu ymm2, ymmword ptr [rax]
      vpmaskmovd ymm0, ymm2, ymmword ptr [rcx]
      vpcmpeqw ymm1, ymm0, ymm3
      vpand   ymm2, ymm1, ymm2
      vpmovmskb eax, ymm2
    }
    if ( !_EAX )
    {
      a1 = (const __m128i *)((char *)a1 + v15);
      goto LABEL_9;
    }
LABEL_14:
    __asm
    {
      vzeroupper
      tzcnt   eax, eax
    }
    return (const __m128i *)((char *)a1 + _EAX);
  }
  else
  {
    v23 = v4 & 0xFFFFFFFFFFFFFFF0uLL;
    if ( v23 && (_isa_enabled & 4) != 0 )
    {
      v24 = (const __m128i *)((char *)a1 + v23);
      v25 = _mm_cvtsi32_si128(a3);
      v26 = _mm_shuffle_epi32(_mm_unpacklo_epi16(v25, v25), 0);
      while ( 1 )
      {
        LODWORD(v27) = _mm_movemask_epi8(_mm_cmpeq_epi16(_mm_loadu_si128(a1), v26));
        if ( (_DWORD)v27 )
          break;
        if ( ++a1 == v24 )
          goto LABEL_10;
      }
      _BitScanForward((unsigned int *)&v27, v27);
      return (const __m128i *)((char *)a1 + v27);
    }
    else
    {
LABEL_10:
      while ( a1 != a2 )
      {
        if ( a1->m128i_i16[0] == a3 )
          break;
        a1 = (const __m128i *)((char *)a1 + 2);
      }
      return a1;
    }
  }
}
