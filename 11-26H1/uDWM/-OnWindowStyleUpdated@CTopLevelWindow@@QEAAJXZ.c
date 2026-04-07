/*
 * XREFs of ?OnWindowStyleUpdated@CTopLevelWindow@@QEAAJXZ @ 0x180015188
 * Callers:
 *     ?ShowHide@CWindowList@@QEAAJPEAVCWindowData@@_N@Z @ 0x18003C3A0 (-ShowHide@CWindowList@@QEAAJPEAVCWindowData@@_N@Z.c)
 *     ?OnWindowStyleUpdated@CWindowData@@QEAAJXZ @ 0x180067C80 (-OnWindowStyleUpdated@CWindowData@@QEAAJXZ.c)
 *     ?OnWindowStyleUpdated@CWindowIconic@@QEAAJ_N@Z @ 0x18007D198 (-OnWindowStyleUpdated@CWindowIconic@@QEAAJ_N@Z.c)
 * Callees:
 *     ??$ConvertDirtyEnumToFlag@$MW4ToplevelWindowDirtyFlags@CTopLevelWindow@@0M@$00@@YA?AVDirtyFlags@@XZ @ 0x180015E00 (--$ConvertDirtyEnumToFlag@$MW4ToplevelWindowDirtyFlags@CTopLevelWindow@@0M@$00@@YA-AVDirtyFlags@.c)
 *     ?SetDirtyFlags@CVisual@@MEAAXVDirtyFlags@@@Z @ 0x180015F50 (-SetDirtyFlags@CVisual@@MEAAXVDirtyFlags@@@Z.c)
 *     ?UpdateRemoteAppRenderTargetOpacity@CTopLevelWindow@@QEAAJXZ @ 0x180016700 (-UpdateRemoteAppRenderTargetOpacity@CTopLevelWindow@@QEAAJXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18001E310 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CTopLevelWindow::OnWindowStyleUpdated(CTopLevelWindow *this)
{
  unsigned int *v2; // rax
  int updated; // eax
  unsigned int v4; // ebx
  char v6; // [rsp+48h] [rbp+10h] BYREF

  v2 = (unsigned int *)___ConvertDirtyEnumToFlag__MW4ToplevelWindowDirtyFlags_CTopLevelWindow__0M__00__YA_AVDirtyFlags__XZ(&v6);
  CVisual::SetDirtyFlags(this, *v2);
  updated = CTopLevelWindow::UpdateRemoteAppRenderTargetOpacity(this);
  v4 = updated;
  if ( updated < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, updated, 0x60Au, 0LL);
  return v4;
}
