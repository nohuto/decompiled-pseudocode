/*
 * XREFs of ?OnIconUpdated@CTopLevelWindow@@QEAAXXZ @ 0x180067A30
 * Callers:
 *     ?ShowHide@CWindowList@@QEAAJPEAVCWindowData@@_N@Z @ 0x18003C3A0 (-ShowHide@CWindowList@@QEAAJPEAVCWindowData@@_N@Z.c)
 *     ?OnIconUpdated@CWindowIconic@@QEAAJ_N@Z @ 0x180067874 (-OnIconUpdated@CWindowIconic@@QEAAJ_N@Z.c)
 *     ?IconChange@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_NOTIFYICONCHANGE@@@Z @ 0x180067938 (-IconChange@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_NOTIFYICONCHANGE@@@Z.c)
 * Callees:
 *     ?SetDirtyFlags@CVisual@@MEAAXVDirtyFlags@@@Z @ 0x180015F50 (-SetDirtyFlags@CVisual@@MEAAXVDirtyFlags@@@Z.c)
 *     ??$ConvertDirtyEnumToFlag@$MW4ToplevelWindowDirtyFlags@CTopLevelWindow@@0O@$00@@YA?AVDirtyFlags@@XZ @ 0x180016024 (--$ConvertDirtyEnumToFlag@$MW4ToplevelWindowDirtyFlags@CTopLevelWindow@@0O@$00@@YA-AVDirtyFlags@.c)
 */

void __fastcall CTopLevelWindow::OnIconUpdated(CTopLevelWindow *this)
{
  int *v1; // rax
  CVisual *v2; // r8
  int v3; // [rsp+38h] [rbp+10h] BYREF

  v1 = ___ConvertDirtyEnumToFlag__MW4ToplevelWindowDirtyFlags_CTopLevelWindow__0O__00__YA_AVDirtyFlags__XZ(&v3);
  CVisual::SetDirtyFlags(v2, *v1);
}
