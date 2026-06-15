/*
 * XREFs of sub_14005B310 @ 0x14005B310
 * Callers:
 *     sub_140047598 @ 0x140047598 (sub_140047598.c)
 * Callees:
 *     <none>
 */

wchar_t *__fastcall sub_14005B310(__int64 a1, unsigned __int16 a2, unsigned __int64 a3)
{
  unsigned int v4; // r10d
  unsigned __int64 v5; // r9
  unsigned __int64 v8; // rax
  __m128i v13; // xmm1
  unsigned __int64 v14; // rax
  __m128i v15; // xmm1
  unsigned __int64 v16; // rcx
  wchar_t *result; // rax
  unsigned __int16 v18; // dx
  unsigned __int8 v19; // cl
  unsigned __int64 v20; // rax
  __int64 v21; // [rsp+20h] [rbp+0h] BYREF

  _RBP = (unsigned __int64)&v21 & 0xFFFFFFFFFFFFFFE0uLL;
  v4 = (__int16)a2;
  v5 = 0LL;
  _RCX = (const __m128i *)L"/\\";
  if ( dword_1400E840C && a3 >= 0x10 )
  {
    _XMM0 = _mm_cvtsi32_si128(a2);
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
        vmovdqu ymm0, ymmword ptr [rcx]
        vpcmpeqw ymm1, ymm0, [rbp+40h+var_20]
        vpmovmskb edx, ymm1
      }
      if ( _EDX )
        break;
      v5 += 16LL;
      v8 += 16LL;
      _RCX += 2;
      __asm { vzeroupper }
      if ( v8 > a3 )
        goto LABEL_6;
    }
    _BitScanForward((unsigned int *)&v16, _EDX);
    result = &asc_1400C7460[v5 + (v16 >> 1)];
    __asm { vzeroupper }
  }
  else
  {
LABEL_6:
    if ( v5 + 4 > a3 )
      goto LABEL_20;
    v13 = _mm_cvtsi32_si128(v4);
    v14 = v5 + 8;
    v15 = _mm_shuffle_epi32(_mm_unpacklo_epi16(v13, v13), 0);
    while ( v14 <= a3 )
    {
      v18 = _mm_movemask_epi8(_mm_cmpeq_epi16(_mm_loadu_si128(_RCX), v15));
      if ( v18 )
      {
        LODWORD(v20) = v18;
        goto LABEL_16;
      }
      v5 += 8LL;
      v14 += 8LL;
      ++_RCX;
    }
    if ( v5 + 4 > a3 )
      goto LABEL_20;
    v19 = _mm_movemask_epi8(_mm_cmpeq_epi16(_mm_loadl_epi64(_RCX), v15));
    if ( v19 )
    {
      LODWORD(v20) = v19;
LABEL_16:
      _BitScanForward((unsigned int *)&v20, v20);
      return &asc_1400C7460[v5 + (v20 >> 1)];
    }
    v5 += 4LL;
LABEL_20:
    while ( v5 < a3 )
    {
      result = &asc_1400C7460[v5];
      if ( *result == (_WORD)v4 )
        return result;
      ++v5;
    }
    return 0LL;
  }
  return result;
}
