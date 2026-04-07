/*
 * XREFs of ?OnColorizationUpdated@CTopLevelWindow@@QEAAXXZ @ 0x180019CAC
 * Callers:
 *     ?OnColorizationUpdated@CWindowData@@QEAAXXZ @ 0x180019C6C (-OnColorizationUpdated@CWindowData@@QEAAXXZ.c)
 *     ?OnSettingsUpdated@CTopLevelWindow@@QEAAXK@Z @ 0x18001C6E8 (-OnSettingsUpdated@CTopLevelWindow@@QEAAXK@Z.c)
 *     ?OnColorizationUpdated@CWindowIconic@@QEAAJ_N@Z @ 0x180056628 (-OnColorizationUpdated@CWindowIconic@@QEAAJ_N@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CTopLevelWindow::OnColorizationUpdated(CTopLevelWindow *this)
{
  CVisual::SetDirtyFlags(this, 0x100000u);
}
