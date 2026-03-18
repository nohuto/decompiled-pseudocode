/*
 * XREFs of ?GetContentBoundsAndTransform@CDxHandleYUVBitmapRealization@@UEBA_NPEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@0PEAVCMILMatrix@@@Z @ 0x1802AEF50
 * Callers:
 *     ?GetContentBoundsAndTransform@CDxHandleYUVBitmapRealization@@WBAA@EBA_NPEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@0PEAVCMILMatrix@@@Z @ 0x1802AF1E0 (-GetContentBoundsAndTransform@CDxHandleYUVBitmapRealization@@WBAA@EBA_NPEAV-$TMilRect_@MUD2D_REC.c)
 * Callees:
 *     ?Get2DScaleDimensions@CMILMatrix@@QEBAXPEAM0@Z @ 0x180016450 (-Get2DScaleDimensions@CMILMatrix@@QEBAXPEAM0@Z.c)
 *     ?CalcDecodedSourceRectAndTransform@CDxHandleYUVBitmapRealization@@IEBAXPEAVCMILMatrix@@PEAV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@1@Z @ 0x18005EFCC (-CalcDecodedSourceRectAndTransform@CDxHandleYUVBitmapRealization@@IEBAXPEAVCMILMatrix@@PEAV-$TMi.c)
 *     ?CalcRotationTransform@CBitmapRealization@@IEBA_NAEBUD2D_SIZE_U@@PEAVCMILMatrix@@@Z @ 0x18005FC80 (-CalcRotationTransform@CBitmapRealization@@IEBA_NAEBUD2D_SIZE_U@@PEAVCMILMatrix@@@Z.c)
 *     ?Translate@CMILMatrix@@QEAAXMM@Z @ 0x18006010C (-Translate@CMILMatrix@@QEAAXMM@Z.c)
 *     ?Multiply@CMILMatrix@@QEAAXAEBV1@@Z @ 0x180061980 (-Multiply@CMILMatrix@@QEAAXAEBV1@@Z.c)
 *     ??$IsIdentity@$0A@@CMILMatrix@@AEBA_NXZ @ 0x1800F2210 (--$IsIdentity@$0A@@CMILMatrix@@AEBA_NXZ.c)
 *     ?GetSize@CDxHandleYUVBitmapRealization@@UEBA?AUD2D_SIZE_U@@XZ @ 0x1801A1FD0 (-GetSize@CDxHandleYUVBitmapRealization@@UEBA-AUD2D_SIZE_U@@XZ.c)
 *     ?PrependTranslate@CMILMatrix@@QEAAXMM@Z @ 0x18028C4E4 (-PrependTranslate@CMILMatrix@@QEAAXMM@Z.c)
 */

char __fastcall CDxHandleYUVBitmapRealization::GetContentBoundsAndTransform(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 i; // rcx
  __int128 v9; // xmm0
  float v10; // xmm2_4
  __int32 v11; // xmm3_4
  float v12; // xmm5_4
  float v13; // xmm4_4
  float v14; // xmm1_4
  float v15; // xmm3_4
  float v16; // xmm2_4
  float v17; // xmm0_4
  float v18; // xmm4_4
  char result; // al
  const struct D2D_SIZE_U *Size; // rax
  float v21; // [rsp+20h] [rbp-49h] BYREF
  _QWORD v22[2]; // [rsp+28h] [rbp-41h] BYREF
  __int128 v23; // [rsp+38h] [rbp-31h]
  _BYTE v24[64]; // [rsp+50h] [rbp-19h] BYREF
  int v25; // [rsp+90h] [rbp+27h]
  __int64 v26; // [rsp+D0h] [rbp+67h] BYREF

  if ( (*(_DWORD *)(a1 + 160) & 0x4000) != 0 )
  {
    *(_QWORD *)a4 = 1065353216LL;
    *(_QWORD *)(a4 + 8) = 0LL;
    *(_DWORD *)(a4 + 16) = 0;
    *(_QWORD *)(a4 + 20) = 1065353216LL;
    *(_QWORD *)(a4 + 28) = 0LL;
    *(_DWORD *)(a4 + 36) = 0;
    *(_QWORD *)(a4 + 40) = 1065353216LL;
    *(_QWORD *)(a4 + 48) = 0LL;
    *(_DWORD *)(a4 + 56) = 0;
    *(_DWORD *)(a4 + 60) = 1065353216;
    *(_BYTE *)(a4 + 65) &= 0xE9u;
    *(_BYTE *)(a4 + 65) |= 0x29u;
    *(_BYTE *)(a4 + 64) = -86;
    v25 = 0;
    v22[0] = 0LL;
    v22[1] = 0LL;
    CDxHandleYUVBitmapRealization::CalcDecodedSourceRectAndTransform(
      (CBitmapRealization *)(a1 - 80),
      (struct CMILMatrix *)v24,
      (__int64)v22,
      0LL);
    for ( i = 0LL; i < 16; i += 4LL )
      *(float *)&v24[i - 8] = (float)*(int *)((char *)v22 + i);
    v9 = v23;
    *(_OWORD *)a3 = v23;
    *(_OWORD *)a2 = v9;
    CMILMatrix::Translate(
      (CMILMatrix *)a4,
      COERCE_FLOAT(*(_DWORD *)a3 ^ _xmm),
      COERCE_FLOAT(*(_DWORD *)(a3 + 4) ^ _xmm));
    if ( !CMILMatrix::IsIdentity<0>((__int64)v24) )
      CMILMatrix::Multiply((CMILMatrix *)a4, (const struct CMILMatrix *)v24);
    if ( (*(_DWORD *)(a1 + 160) & 0x8000) != 0 )
    {
      LODWORD(v26) = 0;
      v21 = 0.0;
      CMILMatrix::Get2DScaleDimensions((CMILMatrix *)a4, (float *)&v26, &v21);
      v10 = *(float *)&v26;
      COERCE_FLOAT(v11 = _mm_load_si128((const __m128i *)&_xmm).m128i_i32[0]);
      if ( COERCE_FLOAT(v26 & v11) < 0.0000011920929 )
        v10 = FLOAT_1_0;
      v12 = v21;
      if ( COERCE_FLOAT(LODWORD(v21) & v11) < 0.0000011920929 )
        v12 = FLOAT_1_0;
      v13 = *(float *)(a1 + 132);
      v14 = *(float *)(a1 + 120) / v10;
      v15 = (float)(*(float *)(a1 + 128) / v10) + *(float *)(a2 + 8);
      v16 = *(float *)(a1 + 124) / v12;
      *(float *)a2 = *(float *)a2 - v14;
      v17 = *(float *)(a2 + 4) - v16;
      *(float *)(a2 + 8) = v15;
      v18 = (float)(v13 / v12) + *(float *)(a2 + 12);
      *(float *)(a2 + 4) = v17;
      *(float *)(a2 + 12) = v18;
      CMILMatrix::PrependTranslate((CMILMatrix *)a4, v14, v16);
    }
    return CMILMatrix::IsIdentity<0>(a4) ^ 1;
  }
  else
  {
    Size = (const struct D2D_SIZE_U *)CDxHandleYUVBitmapRealization::GetSize((CDxHandleYUVBitmapRealization *)a1, &v26);
    result = CBitmapRealization::CalcRotationTransform((CBitmapRealization *)(a1 - 80), Size, (struct CMILMatrix *)a4);
    *(_QWORD *)a2 = 0LL;
    *(float *)(a2 + 8) = (float)*(int *)(a1 + 136);
    *(float *)(a2 + 12) = (float)*(int *)(a1 + 140);
    *(float *)a3 = (float)*(int *)(a1 + 144);
    *(float *)(a3 + 4) = (float)*(int *)(a1 + 148);
    *(float *)(a3 + 8) = (float)*(int *)(a1 + 152);
    *(float *)(a3 + 12) = (float)*(int *)(a1 + 156);
  }
  return result;
}
