/*
 * XREFs of ?OnWindowScaleUpdated@CTopLevelWindow@@QEAAXXZ @ 0x18006F294
 * Callers:
 *     ?UpdateWindowScale@CWindowList@@QEAAJPEAVCWindowData@@H@Z @ 0x180011000 (-UpdateWindowScale@CWindowList@@QEAAJPEAVCWindowData@@H@Z.c)
 *     ?OnSettingsUpdated@CTopLevelWindow@@QEAAXK@Z @ 0x1800183A8 (-OnSettingsUpdated@CTopLevelWindow@@QEAAXK@Z.c)
 *     ?ShowHide@CWindowList@@QEAAJPEAVCWindowData@@_N@Z @ 0x18003C3A0 (-ShowHide@CWindowList@@QEAAJPEAVCWindowData@@_N@Z.c)
 *     ?OnIsInWindowMove@CTopLevelWindow@@QEAAX_NAEBUtagRECT@@@Z @ 0x180079AA8 (-OnIsInWindowMove@CTopLevelWindow@@QEAAX_NAEBUtagRECT@@@Z.c)
 * Callees:
 *     ??$ConvertDirtyEnumToFlag@$MW4ToplevelWindowDirtyFlags@CTopLevelWindow@@0BH@$00@@YA?AVDirtyFlags@@XZ @ 0x180015E3C (--$ConvertDirtyEnumToFlag@$MW4ToplevelWindowDirtyFlags@CTopLevelWindow@@0BH@$00@@YA-AVDirtyFlags.c)
 *     ??$ConvertDirtyEnumToFlag@$MW4ThumbnailVisualDirtyFlags@CThumbnailVisual@@0P@$00@@YA?AVDirtyFlags@@XZ @ 0x180015E50 (--$ConvertDirtyEnumToFlag@$MW4ThumbnailVisualDirtyFlags@CThumbnailVisual@@0P@$00@@YA-AVDirtyFlag.c)
 *     ?SetDirtyFlags@CVisual@@MEAAXVDirtyFlags@@@Z @ 0x180015F50 (-SetDirtyFlags@CVisual@@MEAAXVDirtyFlags@@@Z.c)
 */

void __fastcall CTopLevelWindow::OnWindowScaleUpdated(CTopLevelWindow *this)
{
  int *v2; // rax
  int *v3; // rax
  int v4; // [rsp+38h] [rbp+10h] BYREF

  v2 = ___ConvertDirtyEnumToFlag__MW4ThumbnailVisualDirtyFlags_CThumbnailVisual__0P__00__YA_AVDirtyFlags__XZ(&v4);
  CVisual::SetDirtyFlags(this, *v2);
  v3 = ___ConvertDirtyEnumToFlag__MW4ToplevelWindowDirtyFlags_CTopLevelWindow__0BH__00__YA_AVDirtyFlags__XZ(&v4);
  CVisual::SetDirtyFlags(this, *v3);
}
