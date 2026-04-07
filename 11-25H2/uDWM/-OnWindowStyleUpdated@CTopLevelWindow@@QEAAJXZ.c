/*
 * XREFs of ?OnWindowStyleUpdated@CTopLevelWindow@@QEAAJXZ @ 0x18001BFB0
 * Callers:
 *     ?ShowHide@CWindowList@@QEAAJPEAVCWindowData@@_N@Z @ 0x180019E20 (-ShowHide@CWindowList@@QEAAJPEAVCWindowData@@_N@Z.c)
 *     ?OnWindowStyleUpdated@CWindowData@@QEAAJXZ @ 0x180055740 (-OnWindowStyleUpdated@CWindowData@@QEAAJXZ.c)
 *     ?OnWindowStyleUpdated@CWindowIconic@@QEAAJ_N@Z @ 0x1800566B8 (-OnWindowStyleUpdated@CWindowIconic@@QEAAJ_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180009204 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x18001C060 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     ?UpdateRemoteAppRenderTargetOpacity@CTopLevelWindow@@QEAAJXZ @ 0x18001C080 (-UpdateRemoteAppRenderTargetOpacity@CTopLevelWindow@@QEAAJXZ.c)
 */

__int64 __fastcall CTopLevelWindow::OnWindowStyleUpdated(CTopLevelWindow *this)
{
  __int64 result; // rax
  unsigned int v3; // ebx

  CVisual::SetDirtyFlags(this, 0x8000u);
  result = CTopLevelWindow::UpdateRemoteAppRenderTargetOpacity(this);
  v3 = result;
  if ( (int)result < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, result, 0x669u, 0LL);
    return v3;
  }
  return result;
}
