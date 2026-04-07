/*
 * XREFs of ?SetInsetFromParent@CVisual@@QEAAXAEBU_MARGINS@@@Z @ 0x180022CA0
 * Callers:
 *     ?SetGlyphImage@CButtonVisual@@QEAAXPEAVCBitmapSource@@@Z @ 0x180008F84 (-SetGlyphImage@CButtonVisual@@QEAAXPEAVCBitmapSource@@@Z.c)
 *     ?UpdateNCAreaPositionsAndSizes@CTopLevelWindow@@AEAAJXZ @ 0x180011D38 (-UpdateNCAreaPositionsAndSizes@CTopLevelWindow@@AEAAJXZ.c)
 *     ?EnsureClientAreaNode@CTopLevelWindow@@QEAAJXZ @ 0x180022B00 (-EnsureClientAreaNode@CTopLevelWindow@@QEAAJXZ.c)
 *     ?Initialize@CTopLevelWindow@@EEAAJXZ @ 0x180022DC0 (-Initialize@CTopLevelWindow@@EEAAJXZ.c)
 *     ?Initialize@CButtonVisual@@MEAAJXZ @ 0x180037D10 (-Initialize@CButtonVisual@@MEAAJXZ.c)
 *     ?UpdateAccentPolicy@CAccent@@QEAAJPEBUtagRECT@@PEBUACCENT_POLICY@@PEAVCBaseGeometryProxy@@@Z @ 0x180063098 (-UpdateAccentPolicy@CAccent@@QEAAJPEBUtagRECT@@PEBUACCENT_POLICY@@PEAVCBaseGeometryProxy@@@Z.c)
 *     ?UpdateClientBlur@CTopLevelWindow@@AEAAJXZ @ 0x180065E90 (-UpdateClientBlur@CTopLevelWindow@@AEAAJXZ.c)
 *     ?UpdateNCAreaBackground@CTopLevelWindow@@AEAAJXZ @ 0x18007EA04 (-UpdateNCAreaBackground@CTopLevelWindow@@AEAAJXZ.c)
 *     ?_EnsureBorderShadowAtlas@CAccent@@IEAAJXZ @ 0x180089798 (-_EnsureBorderShadowAtlas@CAccent@@IEAAJXZ.c)
 *     ?InitializeVisualTreeClone@CAccent@@IEAAJPEAV1@@Z @ 0x18009444C (-InitializeVisualTreeClone@CAccent@@IEAAJPEAV1@@Z.c)
 *     ?UpdateSystemBackdropVisual@CTopLevelWindow@@AEAAJXZ @ 0x1800CBE44 (-UpdateSystemBackdropVisual@CTopLevelWindow@@AEAAJXZ.c)
 * Callees:
 *     ??$ConvertDirtyEnumToFlag@$MW4SWRDirtyFlags@CSecondaryWindowRepresentation@@00$00@@YA?AVDirtyFlags@@XZ @ 0x180016454 (--$ConvertDirtyEnumToFlag@$MW4SWRDirtyFlags@CSecondaryWindowRepresentation@@00$00@@YA-AVDirtyFla.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CVisual::SetInsetFromParent(CVisual *this, const struct _MARGINS *a2)
{
  _DWORD *v2; // rax
  __int64 v3; // r9
  int v4; // [rsp+30h] [rbp+8h] BYREF

  if ( *((_DWORD *)this + 20) != a2->cyTopHeight
    || *((_DWORD *)this + 18) != a2->cxLeftWidth
    || *((_DWORD *)this + 19) != a2->cxRightWidth
    || *((_DWORD *)this + 21) != a2->cyBottomHeight )
  {
    *(struct _MARGINS *)((char *)this + 72) = *a2;
    v2 = ___ConvertDirtyEnumToFlag__MW4SWRDirtyFlags_CSecondaryWindowRepresentation__00_00__YA_AVDirtyFlags__XZ(&v4);
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v3 + 24LL))(v3, (unsigned int)*v2);
  }
}
