/*
 * XREFs of ?TryRegisterSuperWetForDrawHost@CSuperWetInkManager@@AEAAJPEAVCSuperWetSource@@PEAVCDrawingContext@@_NPEA_N@Z @ 0x1802161F8
 * Callers:
 *     ?TryRegisterSuperWetForDraw@CSuperWetInkManager@@QEAAJPEAVCSuperWetSource@@PEAVCDrawingContext@@_NPEA_N@Z @ 0x180125FD8 (-TryRegisterSuperWetForDraw@CSuperWetInkManager@@QEAAJPEAVCSuperWetSource@@PEAVCDrawingContext@@.c)
 * Callees:
 *     ?GetCurrentVisual@CDrawingContext@@QEBAPEAVCVisual@@XZ @ 0x1800105B0 (-GetCurrentVisual@CDrawingContext@@QEBAPEAVCVisual@@XZ.c)
 *     TryFillRenderState @ 0x1800139C4 (TryFillRenderState.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?FindTreeData@CVisual@@QEBAPEAVCTreeData@@PEBVCVisualTree@@@Z @ 0x1800D49F0 (-FindTreeData@CVisual@@QEBAPEAVCTreeData@@PEBVCVisualTree@@@Z.c)
 *     ?GetSuperWetInkClip@CTreeData@@QEBA?AV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@XZ @ 0x1801DB0EC (-GetSuperWetInkClip@CTreeData@@QEBA-AV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F.c)
 *     ?TryLookupVailDataForSource@CSuperWetInkManager@@AEAAPEAUVailSuperWetStroke@1@PEAVCSuperWetSource@@@Z @ 0x18020AED8 (-TryLookupVailDataForSource@CSuperWetInkManager@@AEAAPEAUVailSuperWetStroke@1@PEAVCSuperWetSourc.c)
 *     ?DeactivateCurrentSource@CSuperWetInkManager@@AEAAXXZ @ 0x18021DEF0 (-DeactivateCurrentSource@CSuperWetInkManager@@AEAAXXZ.c)
 *     ?RegisterStrokeOnHost@CSuperWetInkManager@@AEAAJPEAUVailSuperWetStroke@1@PEA_N@Z @ 0x180230E6C (-RegisterStrokeOnHost@CSuperWetInkManager@@AEAAJPEAUVailSuperWetStroke@1@PEA_N@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CSuperWetInkManager::TryRegisterSuperWetForDrawHost(
        CSuperWetInkManager *this,
        struct CSuperWetSource *a2,
        struct CDrawingContext *a3,
        unsigned __int8 a4,
        bool *a5)
{
  struct CSuperWetInkManager::VailSuperWetStroke *v9; // rax
  __int64 v10; // rcx
  __int64 v11; // r9
  struct CSuperWetInkManager::VailSuperWetStroke *v12; // rsi
  int v13; // eax
  CVisual *CurrentVisual; // rax
  __int64 **TreeData; // rax
  __m128i v17; // xmm1
  int v18; // eax
  unsigned int v19; // ebx
  __int128 v20[4]; // [rsp+30h] [rbp-48h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  *a5 = 0;
  if ( a2 != *(struct CSuperWetSource **)this || !*((_QWORD *)this + 10) )
    return 0LL;
  v9 = CSuperWetInkManager::TryLookupVailDataForSource(this, a2);
  v12 = v9;
  if ( !*((_QWORD *)v9 + 1) )
  {
    *((_QWORD *)v9 + 1) = v11;
    *((_QWORD *)v9 + 3) = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v10 + 80) + 24LL))(*(_QWORD *)(v10 + 80));
  }
  if ( *((_QWORD *)v12 + 1) != *((_QWORD *)this + 10) )
    return 0LL;
  *((_QWORD *)v12 + 2) = *((_QWORD *)a3 + 4);
  v13 = (*(__int64 (__fastcall **)(struct CSuperWetSource *))(*(_QWORD *)a2 + 368LL))(a2);
  if ( !TryFillRenderState(a3, a4, v13, 1, (__int64)v12 + 32) )
  {
    CSuperWetInkManager::DeactivateCurrentSource(this);
    return 0LL;
  }
  CurrentVisual = CDrawingContext::GetCurrentVisual(a3);
  TreeData = CVisual::FindTreeData(CurrentVisual, *((const struct CVisualTree **)a3 + 993));
  if ( TreeData )
    v17 = _mm_loadu_si128((const __m128i *)CTreeData::GetSuperWetInkClip((__int64)TreeData, v20));
  else
    v17 = (__m128i)TMilRect<float,D2D_RECT_F,D3D_RECT_F,RectUniqueness::NotNeeded>::sc_rcInfinite;
  *(__m128i *)((char *)v12 + 88) = v17;
  v18 = CSuperWetInkManager::RegisterStrokeOnHost(this, v12, a5);
  v19 = v18;
  if ( v18 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x378,
    (int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\global\\globalsuperwetinkmanager.cpp",
    (const char *)(unsigned int)v18);
  return v19;
}
