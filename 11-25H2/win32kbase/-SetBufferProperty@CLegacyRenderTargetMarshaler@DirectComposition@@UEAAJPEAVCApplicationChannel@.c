/*
 * XREFs of ?SetBufferProperty@CLegacyRenderTargetMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_KPEA_N@Z @ 0x140139A20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CLegacyRenderTargetMarshaler::SetBufferProperty(
        DirectComposition::CLegacyRenderTargetMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        const __m128i *a4,
        unsigned __int64 a5,
        bool *a6)
{
  unsigned int v6; // edx
  __m128 v7; // xmm1
  float v8; // xmm2_4
  __int64 v10; // rax
  __int64 v11; // rax

  v6 = 0;
  *a6 = 0;
  if ( a3 != 6 )
  {
    if ( a3 == 2 )
    {
      if ( a5 == 8 && !*((_DWORD *)this + 14) && !*((_DWORD *)this + 15) )
      {
        v11 = a4->m128i_i64[0];
        *((_DWORD *)this + 4) |= 0x20u;
        *((_QWORD *)this + 7) = v11;
        goto LABEL_7;
      }
    }
    else if ( a3 == 9 && a5 == 16 )
    {
      v10 = a4->m128i_i64[1];
      if ( (unsigned int)v10 > (unsigned int)a4->m128i_i64[0] && HIDWORD(v10) > HIDWORD(a4->m128i_i64[0]) )
      {
        *((__m128i *)this + 7) = *a4;
        goto LABEL_6;
      }
    }
    return (unsigned int)-1073741811;
  }
  if ( a5 != 16 )
    return (unsigned int)-1073741811;
  v7 = (__m128)_mm_loadu_si128(a4);
  LODWORD(v8) = _mm_shuffle_ps(v7, v7, 85).m128_u32[0];
  if ( _mm_shuffle_ps(v7, v7, 170).m128_f32[0] < v7.m128_f32[0] || _mm_shuffle_ps(v7, v7, 255).m128_f32[0] < v8 )
    return (unsigned int)-1073741811;
  *(__m128 *)((char *)this + 88) = v7;
LABEL_6:
  *((_DWORD *)this + 4) |= 0x80u;
LABEL_7:
  *a6 = 1;
  return v6;
}
