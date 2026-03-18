/*
 * XREFs of ?CalcInversedWorldShadowOffsetBoundsFromVisibleWorldOutputBounds@CLayerVisual@@QEAAXAEBVCMILMatrix@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEAV3@2@Z @ 0x180173050
 * Callers:
 *     ?CalcInversedWorldInputBoundsFromVisibleWorldOutputBounds@CLayerVisual@@UEAAJAEBVCMILMatrix@@AEBV?$TMil3DRect@MV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@UD3D_RECT_F@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@1PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@2@Z @ 0x1800157E0 (-CalcInversedWorldInputBoundsFromVisibleWorldOutputBounds@CLayerVisual@@UEAAJAEBVCMILMatrix@@AEB.c)
 *     ?RenderLayer@CTreeEffectLayer@@EEAAJPEAVCDrawingContext@@@Z @ 0x18005D650 (-RenderLayer@CTreeEffectLayer@@EEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ?GetMaskBounds@CLayerVisual@@QEBAJPEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180015660 (-GetMaskBounds@CLayerVisual@@QEBAJPEAV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F.c)
 *     ?GetRadius@CDropShadow@@QEBAMXZ @ 0x1800176A4 (-GetRadius@CDropShadow@@QEBAMXZ.c)
 *     ?Inflate@?$TMilRect@MUD2D_RECT_F@@UD3D_RECT_F@@UNotNeeded@RectUniqueness@@@@QEAAXMM@Z @ 0x180017A10 (-Inflate@-$TMilRect@MUD2D_RECT_F@@UD3D_RECT_F@@UNotNeeded@RectUniqueness@@@@QEAAXMM@Z.c)
 *     ??$Transform2DBoundsHelper@$00@CMILMatrix@@AEBAXAEBUD2D_RECT_F@@AEAU1@@Z @ 0x1800590B0 (--$Transform2DBoundsHelper@$00@CMILMatrix@@AEBAXAEBUD2D_RECT_F@@AEAU1@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?CalcInversedOffsetInputBoundsFromVisibleWorldOutputBounds@CLayerVisual@@AEAAXAEBVCMILMatrix@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@1PEAV3@2@Z @ 0x18017338C (-CalcInversedOffsetInputBoundsFromVisibleWorldOutputBounds@CLayerVisual@@AEAAXAEBVCMILMatrix@@AE.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 */

void __fastcall CLayerVisual::CalcInversedWorldShadowOffsetBoundsFromVisibleWorldOutputBounds(
        __int64 a1,
        __int64 a2,
        _OWORD *a3,
        _OWORD *a4,
        __int64 a5)
{
  CDropShadow *v6; // rcx
  float Radius; // xmm9_4
  int MaskBounds; // eax
  float v12; // xmm0_4
  float left; // xmm7_4
  float right; // xmm8_4
  float top; // xmm5_4
  float bottom; // xmm6_4
  float v17; // xmm1_4
  float v18; // xmm3_4
  float v19; // xmm4_4
  float v20; // xmm2_4
  float v21; // xmm6_4
  float v22; // xmm5_4
  float v23; // xmm3_4
  float v24; // xmm4_4
  float v25; // xmm2_4
  struct D2D_RECT_F v26; // [rsp+38h] [rbp-91h] BYREF
  struct D2D_RECT_F v27; // [rsp+48h] [rbp-81h] BYREF
  struct D2D_RECT_F v28; // [rsp+58h] [rbp-71h] BYREF
  int v29[4]; // [rsp+68h] [rbp-61h] BYREF
  __int64 v30[2]; // [rsp+78h] [rbp-51h] BYREF
  struct D2D_RECT_F v31; // [rsp+88h] [rbp-41h] BYREF

  v6 = *(CDropShadow **)(a1 + 672);
  v27 = 0LL;
  *(_OWORD *)v30 = 0LL;
  v28 = 0LL;
  *(_OWORD *)v29 = 0LL;
  Radius = CDropShadow::GetRadius(v6);
  v31 = 0LL;
  MaskBounds = CLayerVisual::GetMaskBounds(a1, &v31);
  if ( MaskBounds < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, MaskBounds, 0x23Du, 0LL);
    *a4 = *a3;
    *(_OWORD *)a5 = *a3;
  }
  else
  {
    v26 = v31;
    if ( v31.right > v31.left && v31.bottom > v31.top )
      TMilRect<float,D2D_RECT_F,D3D_RECT_F,RectUniqueness::NotNeeded>::Inflate(&v26.left, Radius, Radius);
    CMILMatrix::Transform2DBoundsHelper<1>(a2, &v31, &v28.left);
    CMILMatrix::Transform2DBoundsHelper<1>(a2, &v26, (float *)v29);
    v26 = (struct D2D_RECT_F)*a3;
    CLayerVisual::CalcInversedOffsetInputBoundsFromVisibleWorldOutputBounds(
      a1,
      a2,
      (int)&v26,
      (int)v29,
      &v27,
      (__int64)v30);
    v12 = CDropShadow::GetRadius(*(CDropShadow **)(a1 + 672));
    left = v27.left;
    right = v27.right;
    top = v27.top;
    bottom = v27.bottom;
    v26 = v27;
    if ( v27.right > v27.left && v27.bottom > v27.top )
    {
      TMilRect<float,D2D_RECT_F,D3D_RECT_F,RectUniqueness::NotNeeded>::Inflate(&v26.left, v12, v12);
      top = v26.top;
      bottom = v26.bottom;
      right = v26.right;
      left = v26.left;
    }
    v17 = v28.left;
    v18 = v28.top;
    v19 = v28.right;
    v20 = v28.bottom;
    v27 = v28;
    if ( left > v28.left )
    {
      v27.left = left;
      v17 = left;
    }
    if ( top > v28.top )
    {
      v27.top = top;
      v18 = top;
    }
    if ( v28.right > right )
    {
      v19 = right;
      v27.right = right;
    }
    if ( v28.bottom > bottom )
    {
      v27.bottom = bottom;
      v20 = bottom;
    }
    if ( v19 <= v17 || v20 <= v18 )
    {
      v17 = 0.0;
      v20 = 0.0;
      v19 = 0.0;
      v27.bottom = 0.0;
      v18 = 0.0;
      v27.right = 0.0;
      v27.top = 0.0;
      v21 = 0.0;
      v27.left = 0.0;
      v22 = 0.0;
    }
    else
    {
      v21 = v19;
      v22 = v20;
    }
    v26.left = v17;
    *a4 = v27;
    v26.top = v18;
    v26.right = v19;
    v26.bottom = v20;
    if ( v21 > v17 && v22 > v18 )
    {
      TMilRect<float,D2D_RECT_F,D3D_RECT_F,RectUniqueness::NotNeeded>::Inflate(&v26.left, Radius, Radius);
      v19 = v26.right;
      v18 = v26.top;
      v17 = v26.left;
      v20 = v26.bottom;
    }
    *(_QWORD *)&v27.left = *(_QWORD *)(*(_QWORD *)(a1 + 672) + 96LL);
    v23 = v18 + v27.top;
    v24 = v19 + v27.left;
    v25 = v20 + v27.top;
    *(float *)a5 = v17 + v27.left;
    *(float *)(a5 + 4) = v23;
    *(float *)(a5 + 8) = v24;
    *(float *)(a5 + 12) = v25;
  }
}
