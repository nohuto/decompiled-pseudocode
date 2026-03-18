/*
 * XREFs of ?SetBufferProperty@CLegacyRenderTargetMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@UDCOMPOSITION_PROPERTY_ID@@PEBX_KPEA_N@Z @ 0x140242A90
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CLegacyRenderTargetMarshaler::SetBufferProperty(
        __int64 a1,
        __int64 a2,
        int a3,
        const __m128i *a4,
        __int64 a5,
        _BYTE *a6)
{
  unsigned int v6; // edx
  __int64 v7; // rax
  __m128 v8; // xmm1
  float v9; // xmm2_4
  __int64 v10; // rax

  v6 = 0;
  *a6 = 0;
  if ( a3 == 2 )
  {
    if ( a5 == 8 && !*(_DWORD *)(a1 + 56) && !*(_DWORD *)(a1 + 60) )
    {
      v10 = a4->m128i_i64[0];
      *(_DWORD *)(a1 + 16) |= 0x40u;
      *(_QWORD *)(a1 + 56) = v10;
      goto LABEL_17;
    }
    return (unsigned int)-1073741811;
  }
  if ( a3 == 6 )
  {
    if ( a5 == 16 )
    {
      v8 = (__m128)_mm_loadu_si128(a4);
      LODWORD(v9) = _mm_shuffle_ps(v8, v8, 85).m128_u32[0];
      if ( _mm_shuffle_ps(v8, v8, 170).m128_f32[0] >= v8.m128_f32[0] && _mm_shuffle_ps(v8, v8, 255).m128_f32[0] >= v9 )
      {
        *(__m128 *)(a1 + 88) = v8;
        goto LABEL_8;
      }
    }
    return (unsigned int)-1073741811;
  }
  if ( a3 != 9 )
    return (unsigned int)-1073741811;
  if ( a5 != 16 )
    return (unsigned int)-1073741811;
  v7 = a4->m128i_i64[1];
  if ( (unsigned int)v7 <= (unsigned int)a4->m128i_i64[0] || HIDWORD(v7) <= HIDWORD(a4->m128i_i64[0]) )
    return (unsigned int)-1073741811;
  *(__m128i *)(a1 + 112) = *a4;
LABEL_8:
  *(_DWORD *)(a1 + 16) |= 0x100u;
LABEL_17:
  *a6 = 1;
  return v6;
}
