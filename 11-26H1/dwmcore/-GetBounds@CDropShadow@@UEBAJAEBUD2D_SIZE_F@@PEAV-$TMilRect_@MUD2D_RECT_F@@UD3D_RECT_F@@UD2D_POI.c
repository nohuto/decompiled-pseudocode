/*
 * XREFs of ?GetBounds@CDropShadow@@UEBAJAEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800798A0
 * Callers:
 *     ?GetContentBounds@CSpriteVisual@@UEAAJPEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180079980 (-GetContentBounds@CSpriteVisual@@UEAAJPEAV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSI.c)
 * Callees:
 *     ?GetRadius@CDropShadow@@QEBAMXZ @ 0x1800176A4 (-GetRadius@CDropShadow@@QEBAMXZ.c)
 *     ?Inflate@?$TMilRect@MUD2D_RECT_F@@UD3D_RECT_F@@UNotNeeded@RectUniqueness@@@@QEAAXMM@Z @ 0x180017A10 (-Inflate@-$TMilRect@MUD2D_RECT_F@@UD3D_RECT_F@@UNotNeeded@RectUniqueness@@@@QEAAXMM@Z.c)
 *     ?IsEmptyDrawing@CDropShadow@@UEBA_NXZ @ 0x180079830 (-IsEmptyDrawing@CDropShadow@@UEBA_NXZ.c)
 */

__int64 __fastcall CDropShadow::GetBounds(CDropShadow *this, float *a2, __int64 a3)
{
  float v7; // xmm4_4
  float v8; // xmm5_4
  float v9; // xmm0_4
  float v10; // xmm3_4
  float Radius; // xmm0_4

  if ( *a2 <= 0.0 || a2[1] <= 0.0 || CDropShadow::IsEmptyDrawing(this) )
  {
    *(_QWORD *)(a3 + 8) = 0LL;
    *(_QWORD *)a3 = 0LL;
  }
  else
  {
    *(_QWORD *)a3 = 0LL;
    v7 = *a2;
    *(float *)(a3 + 8) = *a2;
    v8 = a2[1];
    *(float *)(a3 + 12) = v8;
    v9 = *((float *)this + 24);
    v10 = *((float *)this + 25) + v8;
    *(float *)(a3 + 4) = *((float *)this + 25) + 0.0;
    *(float *)a3 = v9 + 0.0;
    *(float *)(a3 + 8) = v9 + v7;
    *(float *)(a3 + 12) = v10;
    Radius = CDropShadow::GetRadius(this);
    TMilRect<float,D2D_RECT_F,D3D_RECT_F,RectUniqueness::NotNeeded>::Inflate((float *)a3, Radius, Radius);
  }
  return 0LL;
}
