/*
 * XREFs of ?CalcDecodedSourceRectAndTransform@CDxHandleYUVBitmapRealization@@IEBAXPEAVCMILMatrix@@PEAV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@1@Z @ 0x18005EFCC
 * Callers:
 *     ?VPBltToDecodeBitmap@CDxHandleYUVBitmapRealization@@IEAAJXZ @ 0x1800133E8 (-VPBltToDecodeBitmap@CDxHandleYUVBitmapRealization@@IEAAJXZ.c)
 *     ?GetTransform@CDxHandleYUVBitmapRealization@@UEBA_NPEAVCMILMatrix@@PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18005F8A0 (-GetTransform@CDxHandleYUVBitmapRealization@@UEBA_NPEAVCMILMatrix@@PEAV-$TMilRect_@MUD2D_RECT_F@.c)
 *     ?GetSize@CDxHandleYUVBitmapRealization@@UEBA?AUD2D_SIZE_U@@XZ @ 0x1801A1FD0 (-GetSize@CDxHandleYUVBitmapRealization@@UEBA-AUD2D_SIZE_U@@XZ.c)
 *     ?GetMPORects@CDxHandleYUVBitmapRealization@@UEBAXAEBVCMILMatrix@@PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@1@Z @ 0x1801AF450 (-GetMPORects@CDxHandleYUVBitmapRealization@@UEBAXAEBVCMILMatrix@@PEAV-$TMilRect_@MUD2D_RECT_F@@U.c)
 *     ?GetContentBoundsAndTransform@CDxHandleYUVBitmapRealization@@UEBA_NPEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@0PEAVCMILMatrix@@@Z @ 0x1802AEF50 (-GetContentBoundsAndTransform@CDxHandleYUVBitmapRealization@@UEBA_NPEAV-$TMilRect_@MUD2D_RECT_F@.c)
 * Callees:
 *     ?CalcImageTransform@CBitmapRealization@@IEBA_NPEAVCMILMatrix@@@Z @ 0x18005EE70 (-CalcImageTransform@CBitmapRealization@@IEBA_NPEAVCMILMatrix@@@Z.c)
 *     ?CalcSourceRect@CBitmapRealization@@IEBAAEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@XZ @ 0x18005F680 (-CalcSourceRect@CBitmapRealization@@IEBAAEBV-$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectU.c)
 *     ??$IsTranslateAndScale@$00@CMILMatrix@@AEBA_NXZ @ 0x1800B1930 (--$IsTranslateAndScale@$00@CMILMatrix@@AEBA_NXZ.c)
 */

char __fastcall CDxHandleYUVBitmapRealization::CalcDecodedSourceRectAndTransform(
        CBitmapRealization *this,
        struct CMILMatrix *a2,
        __int64 a3,
        __m128i *a4)
{
  __m128i v8; // xmm1
  unsigned __int64 v9; // xmm0_8
  unsigned int v10; // eax
  __int64 v11; // r9
  __m128 v12; // xmm2
  __m128i v13; // xmm0
  int v14; // ecx
  int v15; // eax
  __m128i v16; // xmm0
  int v17; // ecx
  float v19; // [rsp+40h] [rbp+18h]
  float v20; // [rsp+40h] [rbp+18h]

  v8 = *(__m128i *)CBitmapRealization::CalcSourceRect();
  if ( a4 )
    *a4 = v8;
  *(_QWORD *)a3 = 0LL;
  v9 = _mm_srli_si128(v8, 8).m128i_u64[0];
  *(_DWORD *)(a3 + 8) = v9 - v8.m128i_i32[0];
  *(_DWORD *)(a3 + 12) = HIDWORD(v9) - v8.m128i_i32[1];
  LOBYTE(v10) = CBitmapRealization::CalcImageTransform(this, a2);
  if ( (_BYTE)v10 )
  {
    LOBYTE(v10) = CMILMatrix::IsTranslateAndScale<1>(a2);
    if ( (_BYTE)v10 )
    {
      v12 = (__m128)*(unsigned int *)a2;
      if ( v12.m128_f32[0] > 0.0 && *((float *)a2 + 5) > 0.0 )
      {
        v13 = 0LL;
        *(float *)v13.m128i_i32 = (float)*(int *)(a3 + 8) * v12.m128_f32[0];
        if ( (_mm_cvtsi128_si32(v13) & 0x7FFFFFFFu) > 0x497FFFF0 )
        {
          v12.m128_f32[0] = (float)(int)*(float *)v13.m128i_i32 - *(float *)v13.m128i_i32;
          v12 = _mm_cmple_ss(v12, (__m128)LODWORD(FLOAT_N0_5));
          v14 = (int)*(float *)v13.m128i_i32 - _mm_cvtsi128_si32((__m128i)v12);
        }
        else
        {
          v19 = *(float *)v13.m128i_i32 + 6291456.25;
          v14 = (int)(LODWORD(v19) << 10) >> 11;
        }
        v15 = *(_DWORD *)(a3 + 12);
        v16 = 0LL;
        *(_DWORD *)(a3 + 8) = v14;
        *(float *)v16.m128i_i32 = (float)v15 * *((float *)a2 + 5);
        v10 = _mm_cvtsi128_si32(v16) & 0x7FFFFFFF;
        if ( v10 > 0x497FFFF0 )
        {
          v12.m128_f32[0] = (float)(int)*(float *)v16.m128i_i32 - *(float *)v16.m128i_i32;
          v10 = _mm_cvtsi128_si32((__m128i)_mm_cmple_ss(v12, (__m128)LODWORD(FLOAT_N0_5)));
          v17 = (int)*(float *)v16.m128i_i32 - v10;
        }
        else
        {
          v20 = *(float *)v16.m128i_i32 + 6291456.25;
          v17 = (int)(LODWORD(v20) << 10) >> 11;
        }
        *(_DWORD *)(a3 + 12) = v17;
        *(_QWORD *)((char *)a2 + 60) = 1065353216LL;
        *((_BYTE *)a2 + 65) &= 0xE9u;
        *((_BYTE *)a2 + 65) |= 0x29u;
        *(_QWORD *)a2 = 1065353216LL;
        *((_QWORD *)a2 + 1) = v11;
        *((_DWORD *)a2 + 4) = v11;
        *(_QWORD *)((char *)a2 + 20) = 1065353216LL;
        *(_QWORD *)((char *)a2 + 28) = v11;
        *((_DWORD *)a2 + 9) = v11;
        *((_QWORD *)a2 + 5) = 1065353216LL;
        *((_DWORD *)a2 + 14) = v11;
        *((_BYTE *)a2 + 64) = -120;
      }
    }
  }
  return v10;
}
