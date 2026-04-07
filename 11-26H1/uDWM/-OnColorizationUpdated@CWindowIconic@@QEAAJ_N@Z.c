/*
 * XREFs of ?OnColorizationUpdated@CWindowIconic@@QEAAJ_N@Z @ 0x18008AD08
 * Callers:
 *     ?Initialize@CWindowIconic@@IEAAJPEAVCWindowData@@@Z @ 0x180038650 (-Initialize@CWindowIconic@@IEAAJPEAVCWindowData@@@Z.c)
 *     ?OnColorizationUpdated@CWindowData@@QEAAXXZ @ 0x18004E89C (-OnColorizationUpdated@CWindowData@@QEAAXXZ.c)
 *     ?OnSettingsUpdated@CWindowIconic@@QEAAJK_N@Z @ 0x1800853A8 (-OnSettingsUpdated@CWindowIconic@@QEAAJK_N@Z.c)
 * Callees:
 *     ?OnColorizationUpdated@CTopLevelWindow@@QEAAXXZ @ 0x18004E8DC (-OnColorizationUpdated@CTopLevelWindow@@QEAAXXZ.c)
 *     ?RenderRecursive@CContainerVisual@@UEAAXXZ @ 0x1800853F0 (-RenderRecursive@CContainerVisual@@UEAAXXZ.c)
 */

__int64 __fastcall CWindowIconic::OnColorizationUpdated(CWindowIconic *this, char a2)
{
  *(_BYTE *)(*((_QWORD *)this + 10) + 737LL) ^= (*(_BYTE *)(*((_QWORD *)this + 9) + 737LL) ^ *(_BYTE *)(*((_QWORD *)this + 10) + 737LL)) & 0x40;
  CTopLevelWindow::OnColorizationUpdated(*((CTopLevelWindow **)this + 11));
  if ( a2 )
    CContainerVisual::RenderRecursive(*((CContainerVisual **)this + 11));
  return 0LL;
}
