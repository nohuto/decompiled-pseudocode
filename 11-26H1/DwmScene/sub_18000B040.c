/*
 * XREFs of sub_18000B040 @ 0x18000B040
 * Callers:
 *     sub_18000B790 @ 0x18000B790 (sub_18000B790.c)
 * Callees:
 *     <none>
 */

const __m128i *__fastcall sub_18000B040(const __m128i *a1, const __m128i *a2, unsigned __int8 a3)
{
  signed __int64 v5; // r9
  unsigned __int64 v7; // rdx
  const __m128i *v9; // rdx
  unsigned int v16; // r9d
  unsigned __int64 v24; // r9
  const __m128i *v25; // rdx
  __m128i v26; // xmm1
  __int64 v27; // rax

  v5 = (char *)a2 - (char *)a1;
  v7 = ((char *)a2 - (char *)a1) & 0xFFFFFFFFFFFFFFE0uLL;
  if ( v7 && (dword_1801C7B44 & 0x20) != 0 )
  {
    _EAX = (char)a3;
    v9 = (const __m128i *)((char *)a1 + v7);
    __asm
    {
      vmovd   xmm3, eax
      vpxor   xmm0, xmm0, xmm0
      vpshufb xmm3, xmm3, xmm0
      vinsertf128 ymm3, ymm3, xmm3, 1
    }
    do
    {
      __asm
      {
        vpcmpeqb ymm1, ymm3, ymmword ptr [rcx]
        vpmovmskb eax, ymm1
      }
      if ( _EAX )
        goto LABEL_14;
      a1 += 2;
    }
    while ( a1 != v9 );
    v16 = v5 & 0x1C;
    if ( !v16 )
    {
LABEL_9:
      __asm { vzeroupper }
      goto LABEL_10;
    }
    _RAX = (char *)&unk_1800F9BE0 - (v16 & 0xFFFFFFFC);
    __asm
    {
      vmovdqu ymm2, ymmword ptr [rax]
      vpmaskmovd ymm0, ymm2, ymmword ptr [rcx]
      vpcmpeqb ymm1, ymm0, ymm3
      vpand   ymm2, ymm1, ymm2
      vpmovmskb eax, ymm2
    }
    if ( !_EAX )
    {
      a1 = (const __m128i *)((char *)a1 + v16);
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
    v24 = v5 & 0xFFFFFFFFFFFFFFF0uLL;
    if ( v24 && (dword_1801C7B44 & 4) != 0 )
    {
      v25 = (const __m128i *)((char *)a1 + v24);
      v26 = _mm_shuffle_epi8(_mm_cvtsi32_si128(a3), (__m128i)0LL);
      while ( 1 )
      {
        LODWORD(v27) = _mm_movemask_epi8(_mm_cmpeq_epi8(_mm_loadu_si128(a1), v26));
        if ( (_DWORD)v27 )
          break;
        if ( ++a1 == v25 )
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
        if ( a1->m128i_i8[0] == a3 )
          break;
        a1 = (const __m128i *)((char *)a1 + 1);
      }
      return a1;
    }
  }
}
