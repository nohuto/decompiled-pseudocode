/*
 * XREFs of ?Update@CDesktopThumbnailCVIVisual@@QEAAXAEBUtagRECT@@N@Z @ 0x1800948D8
 * Callers:
 *     ?EnsureThumbnailVisual@CDCompThumbnailData@@UEAAJXZ @ 0x1800602E0 (-EnsureThumbnailVisual@CDCompThumbnailData@@UEAAJXZ.c)
 *     ?EnsureThumbnailVisual@CDCompVirtualDesktopThumbnailData@@UEAAJXZ @ 0x18006EC80 (-EnsureThumbnailVisual@CDCompVirtualDesktopThumbnailData@@UEAAJXZ.c)
 *     ?DesktopThumbnailChange@CWindowList@@UEAAJPEAUIDwmWindow@@UtagRECT@@1EK@Z @ 0x1800E3C90 (-DesktopThumbnailChange@CWindowList@@UEAAJPEAUIDwmWindow@@UtagRECT@@1EK@Z.c)
 * Callees:
 *     ?SetOffset@CVisual@@QEAAXPEBUtagPOINT@@@Z @ 0x18000A81C (-SetOffset@CVisual@@QEAAXPEBUtagPOINT@@@Z.c)
 *     ?SetOpacity@CVisual@@UEAAXN@Z @ 0x180019DD0 (-SetOpacity@CVisual@@UEAAXN@Z.c)
 *     ?SetSize@CVisual@@QEAAXHH@Z @ 0x180094954 (-SetSize@CVisual@@QEAAXHH@Z.c)
 */

void __fastcall CDesktopThumbnailCVIVisual::Update(
        CDesktopThumbnailCVIVisual *this,
        const struct tagRECT *a2,
        double a3)
{
  int v5; // edx
  int v6; // r8d
  struct tagPOINT v7; // [rsp+30h] [rbp+8h] BYREF

  CVisual::SetOpacity(this, a3);
  v7.x = a2->left;
  v7.y = a2->top;
  CVisual::SetOffset((struct tagPOINT *)this, &v7);
  v5 = 0;
  v6 = 0;
  if ( a2->bottom - a2->top >= 0 )
    v6 = a2->bottom - a2->top;
  if ( a2->right - a2->left >= 0 )
    v5 = a2->right - a2->left;
  CVisual::SetSize(this, v5, v6);
  *((_BYTE *)this + 296) = 1;
  CDesktopThumbnailCVIVisual::SetDirtyFlags(this, 4096);
}
