/*
 * XREFs of ?Create@CSubVisualTree@@KAJPEAVCVisual@@PEAPEAVCVisualTree@@@Z @ 0x1800D1010
 * Callers:
 *     ?DrawBspPolygonList@CDrawingContext@@QEAAJPEAVCVisual@@0@Z @ 0x1800CF1A8 (-DrawBspPolygonList@CDrawingContext@@QEAAJPEAVCVisual@@0@Z.c)
 * Callees:
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x18007BC20 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$CMILCOMBaseWeakRefSource@VCResourceDeleter@@@@IEAAKXZ @ 0x180093B60 (-InternalRelease@-$CMILCOMBaseWeakRefSource@VCResourceDeleter@@@@IEAAKXZ.c)
 *     ?CalcRootBounds@CVisual@@QEBAJPEAV?$TMil3DRect@MV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@UD3D_RECT_F@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800B62F0 (-CalcRootBounds@CVisual@@QEBAJPEAV-$TMil3DRect@MV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POI.c)
 *     ??0CVisualTree@@IEAA@PEAVCComposition@@PEAVCVisual@@@Z @ 0x1800D10EC (--0CVisualTree@@IEAA@PEAVCComposition@@PEAVCVisual@@@Z.c)
 *     ??2CVisualTree@@KAPEAX_K@Z @ 0x180112508 (--2CVisualTree@@KAPEAX_K@Z.c)
 *     ?GetVisualTree@CVisual@@QEAAJPEAPEAVCVisualTree@@_N@Z @ 0x180218218 (-GetVisualTree@CVisual@@QEAAJPEAPEAVCVisualTree@@_N@Z.c)
 */

__int64 __fastcall CSubVisualTree::Create(struct CVisual *a1, struct CVisualTree **a2)
{
  unsigned __int64 v4; // rcx
  CVisualTree *v6; // rax
  CVisualTree *v7; // rbx
  int v8; // eax
  unsigned int v9; // edi
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( CVisual::GetVisualTree(a1, a2, 0) >= 0 )
    return 0LL;
  v6 = (CVisualTree *)CVisualTree::operator new(v4);
  v7 = v6;
  if ( v6 )
  {
    CVisualTree::CVisualTree(v6, g_pComposition, a1);
    ++CSubVisualTree::s_cSubTrees;
    *(_QWORD *)v7 = &CSubVisualTree::`vftable';
    *((_QWORD *)v7 + 314) = 0LL;
    *((_QWORD *)v7 + 313) = 0LL;
    *((_BYTE *)v7 + 2628) = 0;
    CMILRefCountImpl::AddReference((CVisualTree *)((char *)v7 + 8));
  }
  else
  {
    v7 = 0LL;
  }
  v8 = CVisual::CalcRootBounds(*((CLayerVisual **)v7 + 9), (__int64)v7 + 80);
  v9 = v8;
  if ( v8 >= 0 )
  {
    *a2 = v7;
    return 0LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x17,
    (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\subvisualtree.cpp",
    (const char *)(unsigned int)v8);
  CMILCOMBaseWeakRefSource<CResourceDeleter>::InternalRelease(v7);
  return v9;
}
