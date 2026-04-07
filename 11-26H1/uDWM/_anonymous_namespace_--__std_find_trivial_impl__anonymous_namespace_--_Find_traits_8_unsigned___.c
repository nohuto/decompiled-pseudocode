/*
 * XREFs of _anonymous_namespace_::__std_find_trivial_impl__anonymous_namespace_::_Find_traits_8_unsigned___int64_ @ 0x18008E040
 * Callers:
 *     __std_find_trivial_8 @ 0x18008E140 (__std_find_trivial_8.c)
 * Callees:
 *     <none>
 */

const __m128i *__fastcall anonymous_namespace_::__std_find_trivial_impl__anonymous_namespace_::_Find_traits_8_unsigned___int64_(
        const __m128i *a1,
        const __m128i *a2,
        unsigned __int64 _R8)
{
  signed __int64 v4; // r9
  const __m128i *v8; // rdx
  unsigned int v11; // r9d
  const __m128i *result; // rax
  unsigned __int64 v19; // r9
  const __m128i *v20; // r10
  __m128i v21; // xmm1
  __int64 v22; // rax

  v4 = (char *)a2 - (char *)a1;
  if ( (((char *)a2 - (char *)a1) & 0xFFFFFFFFFFFFFFE0uLL) != 0 && (_isa_enabled & 0x20) != 0 )
  {
    __asm
    {
      vmovq   xmm3, r8
      vpunpcklqdq xmm3, xmm3, xmm3
      vinsertf128 ymm3, ymm3, xmm3, 1
    }
    v8 = (const __m128i *)((char *)a1 + (((char *)a2 - (char *)a1) & 0xFFFFFFFFFFFFFFE0uLL));
    do
    {
      __asm
      {
        vpcmpeqq ymm1, ymm3, ymmword ptr [rcx]
        vpmovmskb eax, ymm1
      }
      if ( _EAX )
        goto LABEL_10;
      a1 += 2;
    }
    while ( a1 != v8 );
    v11 = v4 & 0x1C;
    if ( !v11 )
    {
LABEL_9:
      result = a1;
      __asm { vzeroupper }
      return result;
    }
    _RAX = (char *)&unk_1800F73A0 - (v11 & 0xFFFFFFFC);
    __asm
    {
      vmovdqu ymm2, ymmword ptr [rax]
      vpmaskmovd ymm0, ymm2, ymmword ptr [rcx]
      vpcmpeqq ymm1, ymm0, ymm3
      vpand   ymm2, ymm1, ymm2
      vpmovmskb eax, ymm2
    }
    if ( !_EAX )
    {
      a1 = (const __m128i *)((char *)a1 + v11);
      goto LABEL_9;
    }
LABEL_10:
    __asm
    {
      vzeroupper
      tzcnt   eax, eax
    }
    return (const __m128i *)((char *)a1 + _EAX);
  }
  else
  {
    v19 = v4 & 0xFFFFFFFFFFFFFFF0uLL;
    if ( v19 && (_isa_enabled & 4) != 0 )
    {
      v20 = (const __m128i *)((char *)a1 + v19);
      v21 = _mm_unpacklo_epi64((__m128i)_R8, (__m128i)_R8);
      while ( 1 )
      {
        LODWORD(v22) = _mm_movemask_epi8(_mm_cmpeq_epi64(_mm_loadu_si128(a1), v21));
        if ( (_DWORD)v22 )
          break;
        if ( ++a1 == v20 )
          goto LABEL_16;
      }
      _BitScanForward((unsigned int *)&v22, v22);
      return (const __m128i *)((char *)a1 + v22);
    }
    else
    {
LABEL_16:
      while ( a1 != a2 )
      {
        if ( a1->m128i_i64[0] == _R8 )
          break;
        a1 = (const __m128i *)((char *)a1 + 8);
      }
      return a1;
    }
  }
}
