/*
 * XREFs of sub_18000AEA0 @ 0x18000AEA0
 * Callers:
 *     sub_180087CD4 @ 0x180087CD4 (sub_180087CD4.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_18000AEA0(const __m128i *a1, const __m128i *a2, unsigned __int8 a3)
{
  signed __int64 v7; // r9
  __int64 v9; // r10
  unsigned __int64 v11; // r11
  const __m128i *v13; // r8
  __int64 v19; // rax
  unsigned int v27; // r9d
  unsigned __int64 v33; // r9
  __m128i v34; // xmm2
  const __m128i *v35; // r8
  __int64 v36; // rax
  __m128i v37; // xmm1
  __m128i v38; // xmm0
  __m128i v39; // xmm1
  __int64 v40; // rdx

  v7 = (char *)a2 - (char *)a1;
  v9 = 0LL;
  v11 = ((char *)a2 - (char *)a1) & 0xFFFFFFFFFFFFFFE0uLL;
  if ( v11 && (dword_1801C7B44 & 0x20) != 0 )
  {
    _EAX = (char)a3;
    v13 = a1;
    __asm
    {
      vmovd   xmm3, eax
      vpxor   xmm0, xmm0, xmm0
      vpshufb xmm3, xmm3, xmm0
      vinsertf128 ymm3, ymm3, xmm3, 1
      vpxor   xmm4, xmm4, xmm4
    }
    do
    {
      v19 = 8160LL;
      __asm { vmovdqu ymm2, ymm4 }
      if ( v11 < 0x1FE0 )
        v19 = v11;
      v13 = (const __m128i *)((char *)v13 + v19);
      v11 -= v19;
      do
      {
        __asm { vpcmpeqb ymm1, ymm3, ymmword ptr [rcx] }
        a1 += 2;
        __asm { vpsubb  ymm2, ymm2, ymm1 }
      }
      while ( a1 != v13 );
      __asm
      {
        vpsadbw ymm0, ymm4, ymm2
        vextracti128 xmm1, ymm0, 1
        vpaddq  xmm1, xmm1, xmm0
        vmovq   rax, xmm1
      }
      __asm { vpextrq rdx, xmm1, 1 }
      v9 += _RDX + _RAX;
    }
    while ( v11 );
    v27 = v7 & 0x1C;
    if ( v27 )
    {
      _RAX = (char *)&unk_1800F9BE0 - (v27 & 0xFFFFFFFC);
      __asm
      {
        vmovdqu ymm2, ymmword ptr [rax]
        vpmaskmovd ymm0, ymm2, ymmword ptr [rcx]
        vpcmpeqb ymm1, ymm0, ymm3
        vpand   ymm2, ymm1, ymm2
        vpmovmskb eax, ymm2
      }
      v9 += __popcnt((unsigned int)_RAX);
      a1 = (const __m128i *)((char *)a1 + v27);
    }
    __asm { vzeroupper }
  }
  else
  {
    v33 = v7 & 0xFFFFFFFFFFFFFFF0uLL;
    if ( v33 && (dword_1801C7B44 & 4) != 0 )
    {
      v34 = _mm_shuffle_epi8(_mm_cvtsi32_si128(a3), (__m128i)0LL);
      v35 = a1;
      do
      {
        v36 = 4080LL;
        v37 = 0LL;
        if ( v33 < 0xFF0 )
          v36 = v33;
        v35 = (const __m128i *)((char *)v35 + v36);
        v33 -= v36;
        do
        {
          v38 = _mm_loadu_si128(a1++);
          v37 = _mm_sub_epi8(v37, _mm_cmpeq_epi8(v38, v34));
        }
        while ( a1 != v35 );
        v39 = _mm_sad_epu8(v37, (__m128i)0LL);
        v9 += _mm_extract_epi64(v39, 1) + v39.m128i_i64[0];
      }
      while ( v33 );
    }
  }
  for ( ; a1 != a2; v9 = v40 )
  {
    v40 = v9 + 1;
    if ( a1->m128i_i8[0] != a3 )
      v40 = v9;
    a1 = (const __m128i *)((char *)a1 + 1);
  }
  return v9;
}
