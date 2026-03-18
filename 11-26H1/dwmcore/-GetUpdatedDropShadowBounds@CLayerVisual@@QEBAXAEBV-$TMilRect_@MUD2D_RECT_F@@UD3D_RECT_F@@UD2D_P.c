/*
 * XREFs of ?GetUpdatedDropShadowBounds@CLayerVisual@@QEBAXAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEAV2@@Z @ 0x1801D0C2C
 * Callers:
 *     ?RenderLayer@CTreeEffectLayer@@EEAAJPEAVCDrawingContext@@@Z @ 0x18005D650 (-RenderLayer@CTreeEffectLayer@@EEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ?GetMaskForLayerVisualNoRef@CDropShadow@@QEAAPEAVCBrush@@XZ @ 0x180016420 (-GetMaskForLayerVisualNoRef@CDropShadow@@QEAAPEAVCBrush@@XZ.c)
 *     ?GetRadius@CDropShadow@@QEBAMXZ @ 0x1800176A4 (-GetRadius@CDropShadow@@QEBAMXZ.c)
 *     ?Inflate@?$TMilRect@MUD2D_RECT_F@@UD3D_RECT_F@@UNotNeeded@RectUniqueness@@@@QEAAXMM@Z @ 0x180017A10 (-Inflate@-$TMilRect@MUD2D_RECT_F@@UD3D_RECT_F@@UNotNeeded@RectUniqueness@@@@QEAAXMM@Z.c)
 *     ?UnionUnsafe@?$TMilRect@MUD2D_RECT_F@@UD3D_RECT_F@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z @ 0x180022120 (-UnionUnsafe@-$TMilRect@MUD2D_RECT_F@@UD3D_RECT_F@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z.c)
 */

void __fastcall CLayerVisual::GetUpdatedDropShadowBounds(__int64 a1, _OWORD *a2, _OWORD *a3)
{
  CDropShadow *v3; // rcx
  const __m128i *v4; // rdx
  CDropShadow *v5; // rcx
  __m128 v6; // xmm3
  float Radius; // xmm0_4
  __int64 v8; // rcx
  float *v9; // r8
  float v10[4]; // [rsp+20h] [rbp-20h]
  __m128 v11; // [rsp+30h] [rbp-10h] BYREF

  *a3 = *a2;
  v3 = *(CDropShadow **)(a1 + 672);
  if ( v3 )
  {
    if ( !CDropShadow::GetMaskForLayerVisualNoRef(v3) )
    {
      v6 = (__m128)_mm_loadu_si128(v4);
      v11 = v6;
      Radius = CDropShadow::GetRadius(v5);
      *(_QWORD *)v10 = *(_QWORD *)(v8 + 96);
      if ( _mm_shuffle_ps(v6, v6, 170).m128_f32[0] > v6.m128_f32[0]
        && _mm_shuffle_ps(v6, v6, 255).m128_f32[0] > _mm_shuffle_ps(v6, v6, 85).m128_f32[0] )
      {
        TMilRect<float,D2D_RECT_F,D3D_RECT_F,RectUniqueness::NotNeeded>::Inflate(v11.m128_f32, Radius, Radius);
        v11.m128_f32[1] = v11.m128_f32[1] + v10[1];
        v11.m128_f32[0] = v11.m128_f32[0] + v10[0];
        v11.m128_f32[2] = v11.m128_f32[2] + v10[0];
        v11.m128_f32[3] = v11.m128_f32[3] + v10[1];
        TMilRect<float,D2D_RECT_F,D3D_RECT_F,RectUniqueness::NotNeeded>::UnionUnsafe(v9, v11.m128_f32);
      }
    }
  }
}
