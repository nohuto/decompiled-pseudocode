/*
 * XREFs of __std_find_trivial_2 @ 0x1802D5540
 * Callers:
 *     ?GetFileDescription@StartupNotification@@SA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEBV23@@Z @ 0x18005A6C4 (-GetFileDescription@StartupNotification@@SA-AV-$basic_string@GU-$char_traits@G@std@@V-$allocator.c)
 *     ?has_extension@path@filesystem@std@@QEBA_NXZ @ 0x18005AF24 (-has_extension@path@filesystem@std@@QEBA_NXZ.c)
 * Callees:
 *     <none>
 */

const __m128i *__fastcall _std_find_trivial_2(const __m128i *a1, const __m128i *a2, __int16 a3)
{
  signed __int64 v4; // r9
  const __m128i *v6; // r10
  unsigned __int64 v13; // r9
  const __m128i *v14; // r10
  __m128i v15; // xmm1
  __m128i v16; // xmm1
  __int64 v17; // rax

  v4 = (char *)a2 - (char *)a1;
  if ( (((char *)a2 - (char *)a1) & 0xFFFFFFFFFFFFFFE0uLL) != 0 && (_isa_enabled & 0x20) != 0 )
  {
    _EAX = a3;
    v6 = (const __m128i *)((char *)a1 + (((char *)a2 - (char *)a1) & 0xFFFFFFFFFFFFFFE0uLL));
    __asm
    {
      vmovd   xmm2, eax
      vpunpcklwd xmm2, xmm2, xmm2
      vpshufd xmm2, xmm2, 0
      vinsertf128 ymm2, ymm2, xmm2, 1
    }
    while ( 1 )
    {
      __asm
      {
        vpcmpeqw ymm1, ymm2, ymmword ptr [rcx]
        vpmovmskb eax, ymm1
      }
      if ( _EAX )
        break;
      a1 += 2;
      if ( a1 == v6 )
      {
        v4 &= 0x1Fu;
        __asm { vzeroupper }
        goto LABEL_7;
      }
    }
    __asm
    {
      vzeroupper
      tzcnt   eax, eax
    }
    return (const __m128i *)((char *)a1 + _EAX);
  }
  else
  {
LABEL_7:
    v13 = v4 & 0xFFFFFFFFFFFFFFF0uLL;
    if ( v13 )
    {
      v14 = (const __m128i *)((char *)a1 + v13);
      v15 = _mm_cvtsi32_si128(a3);
      v16 = _mm_shuffle_epi32(_mm_unpacklo_epi16(v15, v15), 0);
      while ( 1 )
      {
        LODWORD(v17) = _mm_movemask_epi8(_mm_cmpeq_epi16(_mm_loadu_si128(a1), v16));
        if ( (_DWORD)v17 )
          break;
        if ( ++a1 == v14 )
          goto LABEL_11;
      }
      _BitScanForward((unsigned int *)&v17, v17);
      return (const __m128i *)((char *)a1 + v17);
    }
    else
    {
LABEL_11:
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
