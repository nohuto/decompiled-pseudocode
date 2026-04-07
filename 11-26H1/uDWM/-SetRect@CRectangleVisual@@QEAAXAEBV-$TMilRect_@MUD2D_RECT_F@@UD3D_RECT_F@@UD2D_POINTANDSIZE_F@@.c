/*
 * XREFs of ?SetRect@CRectangleVisual@@QEAAXAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18000A8D8
 * Callers:
 *     ?SetRect@CRectangleVisual@@QEAAXAEBUtagRECT@@@Z @ 0x18000A8A4 (-SetRect@CRectangleVisual@@QEAAXAEBUtagRECT@@@Z.c)
 *     ?UpdateLayout@CBorderSprite@@UEAAJ_N@Z @ 0x18000BBB0 (-UpdateLayout@CBorderSprite@@UEAAJ_N@Z.c)
 *     ?UpdateBorderBrush@CBorderSprite@@QEAAJ$$QEAV?$shared_ptr@VCCachedBorderBrush@CWindowBorder@@@std@@@Z @ 0x18000BC70 (-UpdateBorderBrush@CBorderSprite@@QEAAJ$$QEAV-$shared_ptr@VCCachedBorderBrush@CWindowBorder@@@st.c)
 *     ?InitializeVisualTreeClone@CRectangleVisual@@IEAAJPEAV1@W4CloneOptions@@@Z @ 0x1800500A0 (-InitializeVisualTreeClone@CRectangleVisual@@IEAAJPEAV1@W4CloneOptions@@@Z.c)
 *     ?UpdateVisual@CTetherVisual@@IEAAJXZ @ 0x1800C8C84 (-UpdateVisual@CTetherVisual@@IEAAJXZ.c)
 *     ?ConnectSprite@CTouchDragVisual@@AEAAJPEAUTrailPoint@1@@Z @ 0x1800CC60C (-ConnectSprite@CTouchDragVisual@@AEAAJPEAUTrailPoint@1@@Z.c)
 *     ?UpdateOpacityAndLocation@CTouchPressHoldVisual@@IEAAJXZ @ 0x1800CD870 (-UpdateOpacityAndLocation@CTouchPressHoldVisual@@IEAAJXZ.c)
 * Callees:
 *     ??8@YA_NAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@0@Z @ 0x18000A978 (--8@YA_NAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniquenes.c)
 *     ?IsEmpty@?$TMilRect@MUD2D_RECT_F@@UD3D_RECT_F@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x18000A9B8 (-IsEmpty@-$TMilRect@MUD2D_RECT_F@@UD3D_RECT_F@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?IsInfinite@?$TMilRect@MUD2D_RECT_F@@UD3D_RECT_F@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x18000AB84 (-IsInfinite@-$TMilRect@MUD2D_RECT_F@@UD3D_RECT_F@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ??$ConvertDirtyEnumToFlag@$MW4ButtonDirtyFlags@CButton@@08$00@@YA?AVDirtyFlags@@XZ @ 0x18008824C (--$ConvertDirtyEnumToFlag@$MW4ButtonDirtyFlags@CButton@@08$00@@YA-AVDirtyFlags@@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CRectangleVisual::SetRect(__int64 a1, __int128 *a2)
{
  __int128 v2; // xmm0
  __int64 result; // rax
  __int64 v4; // r9
  __int64 v5; // r8
  __int64 v6; // r9
  _OWORD *v7; // r8
  _OWORD *v8; // r9
  unsigned int *v9; // rax
  __int64 v10; // r10
  __int128 v11; // [rsp+20h] [rbp-28h] BYREF
  __int128 v12; // [rsp+30h] [rbp-18h] BYREF
  char v13; // [rsp+50h] [rbp+8h] BYREF

  v2 = *a2;
  v12 = *(_OWORD *)(a1 + 192);
  v11 = v2;
  result = operator==(&v12, &v11, a2);
  if ( !(_BYTE)result )
  {
    if ( !(unsigned __int8)TMilRect<float,D2D_RECT_F,D3D_RECT_F,RectUniqueness::NotNeeded>::IsEmpty(v4)
      || (result = TMilRect<float,D2D_RECT_F,D3D_RECT_F,RectUniqueness::NotNeeded>::IsEmpty(v5), !(_BYTE)result) )
    {
      if ( !(unsigned __int8)TMilRect<float,D2D_RECT_F,D3D_RECT_F,RectUniqueness::NotNeeded>::IsInfinite(v6)
        || (result = TMilRect<float,D2D_RECT_F,D3D_RECT_F,RectUniqueness::NotNeeded>::IsInfinite(v7), !(_BYTE)result) )
      {
        *v8 = *v7;
        v9 = (unsigned int *)___ConvertDirtyEnumToFlag__MW4ButtonDirtyFlags_CButton__08_00__YA_AVDirtyFlags__XZ(&v13);
        return (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v10 + 24LL))(v10, *v9);
      }
    }
  }
  return result;
}
