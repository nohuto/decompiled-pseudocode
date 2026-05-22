/*
 * XREFs of wmemchr @ 0x1800D8EFC
 * Callers:
 *     ??$_Traits_find_last_of@U?$char_traits@G@std@@@std@@YA_KQEBG_K101@Z @ 0x1800D3DE0 (--$_Traits_find_last_of@U-$char_traits@G@std@@@std@@YA_KQEBG_K101@Z.c)
 * Callees:
 *     <none>
 */

wchar_t *__cdecl wmemchr(const wchar_t *S, wchar_t C, size_t N)
{
  size_t v5; // r9
  size_t v8; // rax
  __m128i v13; // xmm1
  size_t v14; // rax
  __m128i v15; // xmm1
  wchar_t *result; // rax
  unsigned __int16 v17; // cx
  unsigned __int8 v18; // cl
  unsigned __int64 v19; // rax
  __int64 v20; // [rsp+20h] [rbp+0h] BYREF

  _RBP = (unsigned __int64)&v20 & 0xFFFFFFFFFFFFFFE0uLL;
  v5 = 0LL;
  _R10 = (const __m128i *)S;
  if ( Avx2WmemEnabledWeakValue && N >= 0x10 )
  {
    _XMM0 = _mm_cvtsi32_si128(C);
    v8 = 16LL;
    __asm
    {
      vpbroadcastw ymm0, xmm0
      vmovdqu [rbp+40h+var_20], ymm0
      vzeroupper
    }
    while ( 1 )
    {
      __asm
      {
        vmovdqu ymm0, ymmword ptr [r10]
        vpcmpeqw ymm1, ymm0, [rbp+40h+var_20]
        vpmovmskb ecx, ymm1
      }
      if ( (_DWORD)_RCX )
        break;
      v5 += 16LL;
      v8 += 16LL;
      _R10 += 2;
      __asm { vzeroupper }
      if ( v8 > N )
        goto LABEL_6;
    }
    _BitScanForward((unsigned int *)&_RCX, _RCX);
    result = (wchar_t *)&S[v5 + (_RCX >> 1)];
    __asm { vzeroupper }
  }
  else
  {
LABEL_6:
    if ( v5 + 4 <= N )
    {
      v13 = _mm_cvtsi32_si128((__int16)C);
      v14 = v5 + 8;
      v15 = _mm_shuffle_epi32(_mm_unpacklo_epi16(v13, v13), 0);
      while ( v14 <= N )
      {
        v17 = _mm_movemask_epi8(_mm_cmpeq_epi16(_mm_loadu_si128(_R10), v15));
        if ( v17 )
        {
          LODWORD(v19) = v17;
          goto LABEL_16;
        }
        v5 += 8LL;
        v14 += 8LL;
        ++_R10;
      }
      if ( v5 + 4 > N )
        goto LABEL_18;
      v18 = _mm_movemask_epi8(_mm_cmpeq_epi16(_mm_loadl_epi64(_R10), v15));
      if ( v18 )
      {
        LODWORD(v19) = v18;
LABEL_16:
        _BitScanForward((unsigned int *)&v19, v19);
        return (wchar_t *)&S[v5 + (v19 >> 1)];
      }
      v5 += 4LL;
    }
LABEL_18:
    if ( v5 >= N )
    {
      return 0LL;
    }
    else
    {
      for ( result = (wchar_t *)&S[v5]; *result != C; ++result )
      {
        if ( ++v5 >= N )
          return 0LL;
      }
    }
  }
  return result;
}
