/*
 * XREFs of ?InitializeVisualTreeClone@CRectangleVisual@@IEAAJPEAV1@W4CloneOptions@@@Z @ 0x1800500A0
 * Callers:
 *     ?InitializeVisualTreeClone@CNineGridVisual@@IEAAJPEAV1@W4CloneOptions@@@Z @ 0x18004F058 (-InitializeVisualTreeClone@CNineGridVisual@@IEAAJPEAV1@W4CloneOptions@@@Z.c)
 *     ?InitializeVisualTreeClone@CSolidRectangleVisual@@IEAAJPEAV1@W4CloneOptions@@@Z @ 0x18004FF68 (-InitializeVisualTreeClone@CSolidRectangleVisual@@IEAAJPEAV1@W4CloneOptions@@@Z.c)
 *     ?InitializeVisualTreeClone@CDesktopThumbnailCVIVisual@@IEAAJPEAV1@W4CloneOptions@@@Z @ 0x1800ADDBC (-InitializeVisualTreeClone@CDesktopThumbnailCVIVisual@@IEAAJPEAV1@W4CloneOptions@@@Z.c)
 * Callees:
 *     ?SetRect@CRectangleVisual@@QEAAXAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18000A8D8 (-SetRect@CRectangleVisual@@QEAAXAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@.c)
 *     ?InitializeVisualTreeClone@CContainerVisual@@QEAAJPEAV1@W4CloneOptions@@@Z @ 0x180016C4C (-InitializeVisualTreeClone@CContainerVisual@@QEAAJPEAV1@W4CloneOptions@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180083BD8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?UpdateClip@CRectangleVisual@@QEAAJPEAVCBaseGeometryProxy@@@Z @ 0x1800BF2B4 (-UpdateClip@CRectangleVisual@@QEAAJPEAVCBaseGeometryProxy@@@Z.c)
 */

__int64 __fastcall CRectangleVisual::InitializeVisualTreeClone(__int64 a1, CRectangleVisual *a2, unsigned int a3)
{
  struct CBaseGeometryProxy *v6; // rdx
  int updated; // ebx
  __int64 v8; // rdx
  int v10; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  CRectangleVisual::SetRect((__int64)a2, (__int128 *)(a1 + 192));
  v6 = *(struct CBaseGeometryProxy **)(a1 + 184);
  if ( v6 )
  {
    updated = CRectangleVisual::UpdateClip(a2, v6);
    if ( updated < 0 )
    {
      v8 = 79LL;
      goto LABEL_4;
    }
  }
  updated = CContainerVisual::InitializeVisualTreeClone(a1, a2, a3);
  if ( updated < 0 )
  {
    v8 = 82LL;
LABEL_4:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\rectanglevisual.cpp",
      (const char *)(unsigned int)updated,
      v10);
    return (unsigned int)updated;
  }
  return 0LL;
}
