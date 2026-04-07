/*
 * XREFs of ?Update@CDesktopThumbnailCVIVisual@@QEAAXAEBUtagRECT@@N@Z @ 0x180087D98
 * Callers:
 *     ?EnsureThumbnailVisual@CDCompThumbnailData@@UEAAJXZ @ 0x180025DF0 (-EnsureThumbnailVisual@CDCompThumbnailData@@UEAAJXZ.c)
 *     ?EnsureThumbnailVisual@CDCompVirtualDesktopThumbnailData@@UEAAJXZ @ 0x180066670 (-EnsureThumbnailVisual@CDCompVirtualDesktopThumbnailData@@UEAAJXZ.c)
 *     ?DesktopThumbnailChange@CWindowList@@UEAAJPEAUIDwmWindow@@UtagRECT@@1EK@Z @ 0x1800E0750 (-DesktopThumbnailChange@CWindowList@@UEAAJPEAUIDwmWindow@@UtagRECT@@1EK@Z.c)
 * Callees:
 *     ??$ConvertDirtyEnumToFlag@$MW4DTCVIDirtyFlags@CDesktopThumbnailCVIVisual@@09$00@@YA?AVDirtyFlags@@XZ @ 0x18000A164 (--$ConvertDirtyEnumToFlag@$MW4DTCVIDirtyFlags@CDesktopThumbnailCVIVisual@@09$00@@YA-AVDirtyFlags.c)
 *     ?SetSize@CVisual@@QEAAXHH@Z @ 0x180012220 (-SetSize@CVisual@@QEAAXHH@Z.c)
 *     ?SetOpacity@CVisual@@QEAAXN@Z @ 0x180013F00 (-SetOpacity@CVisual@@QEAAXN@Z.c)
 *     ?SetOffset@CVisual@@QEAAXPEBUtagPOINT@@@Z @ 0x180014BFC (-SetOffset@CVisual@@QEAAXPEBUtagPOINT@@@Z.c)
 *     ?SetDirtyFlags@CDesktopThumbnailCVIVisual@@MEAAXVDirtyFlags@@@Z @ 0x180087E20 (-SetDirtyFlags@CDesktopThumbnailCVIVisual@@MEAAXVDirtyFlags@@@Z.c)
 */

void __fastcall CDesktopThumbnailCVIVisual::Update(
        CDesktopThumbnailCVIVisual *this,
        const struct tagRECT *a2,
        double a3)
{
  __int64 v3; // r8
  __int64 v6; // r8
  LONG v7; // edx
  LONG v8; // r8d
  _DWORD *v9; // rax
  struct tagPOINT v10; // [rsp+38h] [rbp+10h] BYREF

  CVisual::SetOpacity(this, a3, v3);
  v10.x = a2->left;
  v10.y = a2->top;
  CVisual::SetOffset((struct tagPOINT *)this, &v10, v6);
  v7 = 0;
  v8 = 0;
  if ( a2->bottom - a2->top >= 0 )
    v8 = a2->bottom - a2->top;
  if ( a2->right - a2->left >= 0 )
    v7 = a2->right - a2->left;
  CVisual::SetSize(this, v7, v8);
  v9 = ___ConvertDirtyEnumToFlag__MW4DTCVIDirtyFlags_CDesktopThumbnailCVIVisual__09_00__YA_AVDirtyFlags__XZ(&v10);
  CDesktopThumbnailCVIVisual::SetDirtyFlags(this, (unsigned int)*v9);
}
