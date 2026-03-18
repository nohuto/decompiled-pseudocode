/*
 * XREFs of ?GetBoundsWithEffects@CLayerVisual@@UEBAJAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEAV2@@Z @ 0x180015D10
 * Callers:
 *     <none>
 * Callees:
 *     ?GetBoundsWithEffects@CVisual@@UEBAJAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEAV2@@Z @ 0x180015E50 (-GetBoundsWithEffects@CVisual@@UEBAJAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE.c)
 *     ?GetMaskForLayerVisualNoRef@CDropShadow@@QEAAPEAVCBrush@@XZ @ 0x180016420 (-GetMaskForLayerVisualNoRef@CDropShadow@@QEAAPEAVCBrush@@XZ.c)
 *     ?GetRadius@CDropShadow@@QEBAMXZ @ 0x1800176A4 (-GetRadius@CDropShadow@@QEBAMXZ.c)
 *     ?Inflate@?$TMilRect@MUD2D_RECT_F@@UD3D_RECT_F@@UNotNeeded@RectUniqueness@@@@QEAAXMM@Z @ 0x180017A10 (-Inflate@-$TMilRect@MUD2D_RECT_F@@UD3D_RECT_F@@UNotNeeded@RectUniqueness@@@@QEAAXMM@Z.c)
 *     ?UnionUnsafe@?$TMilRect@MUD2D_RECT_F@@UD3D_RECT_F@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z @ 0x180022120 (-UnionUnsafe@-$TMilRect@MUD2D_RECT_F@@UD3D_RECT_F@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetEffectiveSize@CVisual@@QEBA_NPEAM0@Z @ 0x180196DBC (-GetEffectiveSize@CVisual@@QEBA_NPEAM0@Z.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CLayerVisual::GetBoundsWithEffects(CVisual *this, __int64 a2, __int128 *a3)
{
  int BoundsWithEffects; // eax
  unsigned int v6; // ebx
  CDropShadow *v7; // rcx
  CDropShadow *v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // r8
  struct CBrush *MaskForLayerVisualNoRef; // r9
  __int64 v13; // r9
  __int64 (__fastcall *v14)(__int64, float *, __int128 *); // rax
  int v15; // eax
  float v16[2]; // [rsp+30h] [rbp-50h] BYREF
  float v17; // [rsp+38h] [rbp-48h] BYREF
  float v18[4]; // [rsp+40h] [rbp-40h]
  __int128 v19; // [rsp+50h] [rbp-30h] BYREF

  BoundsWithEffects = CVisual::GetBoundsWithEffects();
  v6 = BoundsWithEffects;
  if ( BoundsWithEffects < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, BoundsWithEffects, 0xCEu, 0LL);
    return v6;
  }
  v7 = (CDropShadow *)*((_QWORD *)this + 84);
  if ( v7 )
  {
    v19 = 0LL;
    CDropShadow::GetRadius(v7);
    *(_QWORD *)v18 = *((_QWORD *)v9 + 12);
    MaskForLayerVisualNoRef = CDropShadow::GetMaskForLayerVisualNoRef(v9);
    if ( MaskForLayerVisualNoRef )
    {
      v16[0] = 0.0;
      v17 = 0.0;
      if ( !CVisual::GetEffectiveSize(this, v16, &v17) )
        return v6;
      v14 = *(__int64 (__fastcall **)(__int64, float *, __int128 *))(*(_QWORD *)v13 + 192LL);
      v16[1] = v17;
      v15 = v14(v13, v16, &v19);
      v6 = v15;
      if ( v15 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v15, 0xDEu, 0LL);
        return v6;
      }
    }
    else
    {
      v19 = *a3;
    }
    if ( *((float *)&v19 + 2) > *(float *)&v19 && *((float *)&v19 + 3) > *((float *)&v19 + 1) )
    {
      TMilRect<float,D2D_RECT_F,D3D_RECT_F,RectUniqueness::NotNeeded>::Inflate(&v19, v10, v11, MaskForLayerVisualNoRef);
      *((float *)&v19 + 1) = *((float *)&v19 + 1) + v18[1];
      *(float *)&v19 = *(float *)&v19 + v18[0];
      *((float *)&v19 + 2) = *((float *)&v19 + 2) + v18[0];
      *((float *)&v19 + 3) = *((float *)&v19 + 3) + v18[1];
      TMilRect<float,D2D_RECT_F,D3D_RECT_F,RectUniqueness::NotNeeded>::UnionUnsafe(a3, &v19);
    }
  }
  return v6;
}
