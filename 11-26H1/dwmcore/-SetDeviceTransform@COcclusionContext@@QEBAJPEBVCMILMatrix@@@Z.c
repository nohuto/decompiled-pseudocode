/*
 * XREFs of ?SetDeviceTransform@COcclusionContext@@QEBAJPEBVCMILMatrix@@@Z @ 0x180075000
 * Callers:
 *     ?UpdateDeviceTransform@COcclusionContext@@QEBAJAEBVCMILMatrix@@@Z @ 0x18005EC74 (-UpdateDeviceTransform@COcclusionContext@@QEBAJAEBVCMILMatrix@@@Z.c)
 *     ?RestoreState@CExternalLayer@@EEAAJPEAVCDrawingContext@@@Z @ 0x180063680 (-RestoreState@CExternalLayer@@EEAAJPEAVCDrawingContext@@@Z.c)
 *     ?Compute@COcclusionContext@@IEAAJPEBVCVisualTree@@AEBV?$span@$$CBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@$0?0@gsl@@MAEBV?$span@PEAVCOverlayContext@@$0?0@4@@Z @ 0x180171000 (-Compute@COcclusionContext@@IEAAJPEBVCVisualTree@@AEBV-$span@$$CBV-$TMilRect_@MUD2D_RECT_F@@UD3D.c)
 *     ?DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV?$TMil3DRect@MV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@UD3D_RECT_F@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBVCOcclusionContext@@W4Enum@ClearMode@@MPEAVCVisual@@@Z @ 0x180200410 (-DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV-$TMil3DRect@MV-$TMilRect_@MUD2D_RECT.c)
 * Callees:
 *     ?Is2DAxisAlignedPreserving@CMILMatrix@@QEBA_NXZ @ 0x1800111B0 (-Is2DAxisAlignedPreserving@CMILMatrix@@QEBA_NXZ.c)
 *     ?invert@Numerics@Foundation@Windows@@YA_NAEBUfloat4x4@123@PEAU4123@@Z @ 0x180063BB0 (-invert@Numerics@Foundation@Windows@@YA_NAEBUfloat4x4@123@PEAU4123@@Z.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUD2D_RECT_F@@AEAU1@@Z @ 0x180075440 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUD2D_RECT_F@@AEAU1@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??$IsIdentity@$0A@@CMILMatrix@@AEBA_NXZ @ 0x1800F2210 (--$IsIdentity@$0A@@CMILMatrix@@AEBA_NXZ.c)
 *     ??9CMILMatrix@@QEBA_NAEBV0@@Z @ 0x180148AB0 (--9CMILMatrix@@QEBA_NAEBV0@@Z.c)
 *     ceilf_0 @ 0x1802B96CC (ceilf_0.c)
 *     floorf_0 @ 0x1802B9708 (floorf_0.c)
 */

__int64 __fastcall COcclusionContext::SetDeviceTransform(COcclusionContext *this, const struct CMILMatrix *a2)
{
  char v2; // r10
  const struct CMILMatrix *v3; // r15
  unsigned int v5; // edi
  unsigned __int32 v6; // xmm7_4
  __int64 v7; // rbx
  _DWORD *v8; // rdx
  float v9; // xmm6_4
  float v10; // xmm1_4
  float v11; // xmm1_4
  float v12; // xmm1_4
  struct Windows::Foundation::Numerics::float4x4 *v14; // r8
  __m128 v15; // xmm0
  __int128 v16; // xmm1
  __int128 v17; // xmm0
  __int128 v18; // xmm1
  bool v19; // al
  char v20; // r10
  char *v21; // rcx
  __m128 v22; // xmm0
  int v23; // eax
  __int128 v24; // xmm1
  __int128 v25; // xmm0
  int v26; // eax
  __int128 v27; // xmm1
  __m128 v28; // [rsp+30h] [rbp-98h] BYREF
  __int128 v29; // [rsp+40h] [rbp-88h]
  __int128 v30; // [rsp+50h] [rbp-78h]
  __int128 v31; // [rsp+60h] [rbp-68h]
  int v32; // [rsp+70h] [rbp-58h]

  v2 = 0;
  v3 = a2;
  if ( !a2 || (unsigned __int8)CMILMatrix::IsIdentity<0>(a2) )
  {
    if ( *((_BYTE *)this + 1124) != v2 )
    {
      *((_BYTE *)this + 1124) = v2;
      v2 = 1;
    }
    *((_QWORD *)this + 149) = 1065353216LL;
    v3 = 0LL;
    *(_QWORD *)((char *)this + 1132) = 1065353216LL;
    *(_QWORD *)((char *)this + 1140) = 0LL;
    *((_DWORD *)this + 287) = 0;
    *((_QWORD *)this + 144) = 1065353216LL;
    *((_QWORD *)this + 145) = 0LL;
    *((_DWORD *)this + 292) = 0;
    *(_QWORD *)((char *)this + 1172) = 1065353216LL;
    *(_QWORD *)((char *)this + 1180) = 0LL;
    *((_DWORD *)this + 297) = 0;
    *((_BYTE *)this + 1197) &= 0xE9u;
    *((_BYTE *)this + 1197) |= 0x29u;
    *((_BYTE *)this + 1196) = -86;
    *(_QWORD *)((char *)this + 1260) = 1065353216LL;
    *((_QWORD *)this + 150) = 1065353216LL;
    *((_QWORD *)this + 151) = 0LL;
    *((_DWORD *)this + 304) = 0;
    *(_QWORD *)((char *)this + 1220) = 1065353216LL;
    *(_QWORD *)((char *)this + 1228) = 0LL;
    *((_DWORD *)this + 309) = 0;
    *((_QWORD *)this + 155) = 1065353216LL;
    *((_QWORD *)this + 156) = 0LL;
    *((_DWORD *)this + 314) = 0;
    *((_BYTE *)this + 1265) &= 0xE9u;
    *((_BYTE *)this + 1265) |= 0x29u;
    *((_BYTE *)this + 1264) = -86;
  }
  else
  {
    if ( !CMILMatrix::Is2DAxisAlignedPreserving(v3) )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2003304309, 0x67u, 0LL);
      return 2291662987LL;
    }
    v15 = *(__m128 *)v3;
    v16 = *((_OWORD *)v3 + 1);
    v32 = *((_DWORD *)v3 + 16);
    v28 = v15;
    v17 = *((_OWORD *)v3 + 2);
    v29 = v16;
    v18 = *((_OWORD *)v3 + 3);
    v30 = v17;
    v31 = v18;
    v19 = Windows::Foundation::Numerics::invert((Windows::Foundation::Numerics *)&v28, &v28, v14);
    LOWORD(v32) = v32 & 0xC003;
    if ( !v19 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2003304441, 0x62u, 0LL);
      return 2291662855LL;
    }
    v21 = (char *)this + 1132;
    if ( *((_BYTE *)this + 1124) == v20 || (unsigned __int8)CMILMatrix::operator!=(v21, v3) )
      v2 = 1;
    *(_OWORD *)v21 = *(_OWORD *)v3;
    *((_OWORD *)v21 + 1) = *((_OWORD *)v3 + 1);
    *((_OWORD *)v21 + 2) = *((_OWORD *)v3 + 2);
    v22 = v28;
    *((_OWORD *)v21 + 3) = *((_OWORD *)v3 + 3);
    v23 = *((_DWORD *)v3 + 16);
    v24 = v29;
    *((__m128 *)this + 75) = v22;
    *((_DWORD *)v21 + 16) = v23;
    v25 = v30;
    v26 = v32;
    *((_OWORD *)this + 76) = v24;
    *((_BYTE *)this + 1124) = 1;
    v27 = v31;
    *((_OWORD *)this + 77) = v25;
    *((_OWORD *)this + 78) = v27;
    *((_DWORD *)this + 316) = v26;
  }
  if ( !v2 )
    return 0LL;
  v5 = 0;
  if ( *((_DWORD *)this + 152) )
  {
    v6 = _mm_load_si128((const __m128i *)&_xmm).m128i_u32[0];
    do
    {
      v7 = *((_QWORD *)this + 73) + 48LL * v5;
      v8 = (_DWORD *)(v7 + 32);
      if ( v3 )
      {
        CMILMatrix::Transform2DBoundsHelper<0>(v3, v8, *((_QWORD *)this + 73) + 48LL * v5);
        v9 = *(float *)(v7 + 12);
      }
      else
      {
        v9 = *(float *)(v7 + 44);
        *(_DWORD *)v7 = *v8;
        *(_DWORD *)(v7 + 4) = *(_DWORD *)(v7 + 36);
        *(_DWORD *)(v7 + 8) = *(_DWORD *)(v7 + 40);
      }
      v10 = *(float *)v7;
      if ( COERCE_FLOAT(*(_DWORD *)v7 & v6) < 8388608.0 )
        v10 = (float)(int)ceilf_0(*(float *)v7);
      *(float *)v7 = v10;
      v11 = *(float *)(v7 + 4);
      if ( COERCE_FLOAT(LODWORD(v11) & v6) < 8388608.0 )
        v11 = (float)(int)ceilf_0(*(float *)(v7 + 4));
      *(float *)(v7 + 4) = v11;
      v12 = *(float *)(v7 + 8);
      if ( COERCE_FLOAT(LODWORD(v12) & v6) < 8388608.0 )
        v12 = (float)(int)floorf_0(*(float *)(v7 + 8));
      *(float *)(v7 + 8) = v12;
      if ( COERCE_FLOAT(LODWORD(v9) & v6) < 8388608.0 )
        v9 = (float)(int)floorf_0(v9);
      ++v5;
      *(float *)(v7 + 12) = v9;
    }
    while ( v5 < *((_DWORD *)this + 152) );
  }
  return 0LL;
}
