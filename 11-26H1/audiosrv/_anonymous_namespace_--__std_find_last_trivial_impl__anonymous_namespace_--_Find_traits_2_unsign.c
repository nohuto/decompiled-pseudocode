/*
 * XREFs of _anonymous_namespace_::__std_find_last_trivial_impl__anonymous_namespace_::_Find_traits_2_unsigned_short_ @ 0x1800B1720
 * Callers:
 *     _anonymous_namespace_::__std_find_end_impl__anonymous_namespace_::_Find_traits_2_unsigned_short_ @ 0x1800B1380 (_anonymous_namespace_--__std_find_end_impl__anonymous_namespace_--_Find_traits_2_unsigned_short_.c)
 *     __std_find_last_trivial_2 @ 0x1800B1B40 (__std_find_last_trivial_2.c)
 * Callees:
 *     <none>
 */

const __m128i *__fastcall anonymous_namespace_::__std_find_last_trivial_impl__anonymous_namespace_::_Find_traits_2_unsigned_short_(
        const __m128i *a1,
        const __m128i *a2,
        __int16 a3)
{
  signed __int64 v4; // r9
  const __m128i *v6; // rbx
  const __m128i *v12; // rcx
  unsigned int v15; // r9d
  const __m128i *result; // rax
  unsigned __int64 v23; // r9
  const __m128i *v24; // rcx
  __m128i v25; // xmm1
  __m128i v26; // xmm1
  __m128i v27; // xmm0
  __int64 v28; // rax

  v4 = (char *)a2 - (char *)a1;
  v6 = a2;
  if ( (((char *)a2 - (char *)a1) & 0xFFFFFFFFFFFFFFE0uLL) != 0 && (_isa_enabled & 0x20) != 0 )
  {
    _EAX = a3;
    __asm
    {
      vmovd   xmm3, eax
      vpunpcklwd xmm3, xmm3, xmm3
      vpshufd xmm3, xmm3, 0
      vinsertf128 ymm3, ymm3, xmm3, 1
    }
    v12 = (const __m128i *)((char *)a2 - (((char *)a2 - (char *)a1) & 0xFFFFFFFFFFFFFFE0uLL));
    do
    {
      __asm { vpcmpeqw ymm1, ymm3, ymmword ptr [rdx-20h] }
      a2 -= 2;
      __asm { vpmovmskb eax, ymm1 }
      if ( _EAX )
      {
        __asm { vzeroupper }
        return (const __m128i *)((char *)a2 + 31 - __lzcnt(_EAX) - 1);
      }
    }
    while ( a2 != v12 );
    v15 = v4 & 0x1C;
    if ( v15 )
    {
      a2 = (const __m128i *)((char *)a2 - v15);
      _RAX = (char *)&unk_18018CEE0 - (v15 & 0xFFFFFFFC);
      __asm
      {
        vmovdqu ymm2, ymmword ptr [rax]
        vpmaskmovd ymm0, ymm2, ymmword ptr [rdx]
        vpcmpeqw ymm1, ymm0, ymm3
        vpand   ymm2, ymm1, ymm2
        vpmovmskb eax, ymm2
      }
      if ( _EAX )
      {
        result = (const __m128i *)((char *)a2 + 31 - __lzcnt(_EAX) - 1);
        __asm { vzeroupper }
        return result;
      }
    }
    __asm { vzeroupper }
    goto LABEL_10;
  }
  v23 = v4 & 0xFFFFFFFFFFFFFFF0uLL;
  if ( !v23 || (_isa_enabled & 4) == 0 )
  {
LABEL_10:
    if ( a2 == a1 )
      return v6;
    while ( 1 )
    {
      a2 = (const __m128i *)((char *)a2 - 2);
      if ( a2->m128i_i16[0] == a3 )
        break;
      if ( a2 == a1 )
        return v6;
    }
    return a2;
  }
  v24 = (const __m128i *)((char *)a2 - v23);
  v25 = _mm_cvtsi32_si128(a3);
  v26 = _mm_shuffle_epi32(_mm_unpacklo_epi16(v25, v25), 0);
  while ( 1 )
  {
    v27 = _mm_loadu_si128(--a2);
    LODWORD(v28) = _mm_movemask_epi8(_mm_cmpeq_epi16(v27, v26));
    if ( (_DWORD)v28 )
      break;
    if ( a2 == v24 )
      goto LABEL_10;
  }
  _BitScanReverse((unsigned int *)&v28, v28);
  return (const __m128i *)((char *)a2 + v28 - 1);
}
