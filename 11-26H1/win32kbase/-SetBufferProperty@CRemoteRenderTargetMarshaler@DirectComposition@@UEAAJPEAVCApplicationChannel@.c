/*
 * XREFs of ?SetBufferProperty@CRemoteRenderTargetMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@UDCOMPOSITION_PROPERTY_ID@@PEBX_KPEA_N@Z @ 0x140242F80
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CRemoteRenderTargetMarshaler::SetBufferProperty(
        __int64 a1,
        __int64 a2,
        int a3,
        const __m128i *a4,
        __int64 a5,
        _BYTE *a6)
{
  unsigned int v6; // edx
  int v7; // r8d
  __m128 v8; // xmm1
  float v9; // xmm2_4
  __int64 v10; // rax

  v6 = 0;
  *a6 = 0;
  v7 = a3 - 2;
  if ( !v7 )
  {
    if ( a5 == 8 && !*(_DWORD *)(a1 + 56) && !*(_DWORD *)(a1 + 60) )
    {
      v10 = a4->m128i_i64[0];
      *(_DWORD *)(a1 + 16) |= 0x40u;
      *(_QWORD *)(a1 + 56) = v10;
      goto LABEL_11;
    }
    return (unsigned int)-1073741811;
  }
  if ( v7 != 1 )
    return (unsigned int)-1073741811;
  if ( a5 != 16 )
    return (unsigned int)-1073741811;
  v8 = (__m128)_mm_loadu_si128(a4);
  LODWORD(v9) = _mm_shuffle_ps(v8, v8, 85).m128_u32[0];
  if ( _mm_shuffle_ps(v8, v8, 170).m128_f32[0] < v8.m128_f32[0] || _mm_shuffle_ps(v8, v8, 255).m128_f32[0] < v9 )
    return (unsigned int)-1073741811;
  *(_DWORD *)(a1 + 16) |= 0x100u;
  *(__m128 *)(a1 + 72) = v8;
LABEL_11:
  *a6 = 1;
  return v6;
}
