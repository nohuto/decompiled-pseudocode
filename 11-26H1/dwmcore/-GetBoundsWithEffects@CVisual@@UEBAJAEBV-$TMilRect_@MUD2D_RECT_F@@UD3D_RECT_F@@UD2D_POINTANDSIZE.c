/*
 * XREFs of ?GetBoundsWithEffects@CVisual@@UEBAJAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEAV2@@Z @ 0x180015E50
 * Callers:
 *     ?GetBoundsWithEffects@CLayerVisual@@UEBAJAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEAV2@@Z @ 0x180015D10 (-GetBoundsWithEffects@CLayerVisual@@UEBAJAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTAN.c)
 * Callees:
 *     ?GetBounds@CEffectBrush@@QEAAJAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@AEBUD2D_SIZE_F@@PEAV2@@Z @ 0x180016008 (-GetBounds@CEffectBrush@@QEAAJAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UN.c)
 *     ?GetBounds@CFilterEffect@@QEAAJPEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEAV2@@Z @ 0x1800161B4 (-GetBounds@CFilterEffect@@QEAAJPEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@U.c)
 *     ?IsInfinite@?$TMilRect@MUD2D_RECT_F@@UD3D_RECT_F@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x180057D50 (-IsInfinite@-$TMilRect@MUD2D_RECT_F@@UD3D_RECT_F@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CVisual::GetBoundsWithEffects(float *a1, _OWORD *a2, _OWORD *a3)
{
  unsigned int Bounds; // esi
  _DWORD *v7; // r9
  __int64 v8; // rax
  _BYTE *v9; // rdx
  __int64 v10; // rcx
  __int64 *v11; // rdx
  __int64 v12; // rdi
  __int64 v13; // rax
  __int64 result; // rax
  unsigned int v15; // ebx
  float v16; // xmm2_4
  bool v17; // zf
  __int64 v18; // rax
  __int64 v19; // rcx
  int v20; // [rsp+50h] [rbp+8h] BYREF
  float v21; // [rsp+54h] [rbp+Ch]

  Bounds = 0;
  *a3 = *a2;
  v7 = (_DWORD *)*((_QWORD *)a1 + 28);
  if ( (*v7 & 0x1000000) == 0 )
  {
    v13 = (*(__int64 (__fastcall **)(float *))(*(_QWORD *)a1 + 232LL))(a1);
    goto LABEL_6;
  }
  v8 = (unsigned int)v7[1];
  v9 = v7 + 2;
  v10 = 0LL;
  if ( (_DWORD)v8 )
  {
    while ( *v9 != 8 )
    {
      v10 = (unsigned int)(v10 + 1);
      ++v9;
      if ( (unsigned int)v10 >= (unsigned int)v8 )
        goto LABEL_11;
    }
    goto LABEL_4;
  }
LABEL_11:
  if ( (unsigned int)v10 < (unsigned int)v8 )
  {
LABEL_4:
    v11 = (__int64 *)((char *)&v7[2 * v10] + ((v8 + 15) & 0xFFFFFFFFFFFFFFF8uLL));
    goto LABEL_5;
  }
  v11 = 0LL;
LABEL_5:
  v12 = *v11;
  v13 = (*(__int64 (__fastcall **)(float *))(*(_QWORD *)a1 + 232LL))(a1);
  if ( v12 )
  {
    if ( !(*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v12 + 64LL))(v12, 51LL) )
      return Bounds;
    result = CFilterEffect::GetBounds(v12, a2, a3);
    v15 = result;
    if ( (int)result < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, result, 0x176Du, 0LL);
      return v15;
    }
    return result;
  }
LABEL_6:
  if ( !v13 )
    return Bounds;
  v16 = a1[36];
  if ( a1[35] != 0.0 && v16 != 0.0 || *((_BYTE *)a1 + 696) )
  {
    v18 = *(_QWORD *)a1;
    v20 = *((_DWORD *)a1 + 35);
    v21 = v16;
    v19 = *(_QWORD *)(*(__int64 (__fastcall **)(float *))(v18 + 232))(a1);
    if ( v19 )
      Bounds = CEffectBrush::GetBounds(v19, a2, &v20, a3);
    if ( (Bounds & 0x80000000) != 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, Bounds, 0x1781u, 0LL);
      return Bounds;
    }
  }
  v17 = (unsigned __int8)TMilRect<float,D2D_RECT_F,D3D_RECT_F,RectUniqueness::NotNeeded>::IsInfinite(a3) == 0;
  result = Bounds;
  if ( !v17 )
    *a3 = *a2;
  return result;
}
