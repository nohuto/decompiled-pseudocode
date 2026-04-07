/*
 * XREFs of ?OnWindowSizeUpdated@CWindowIconic@@QEAAJXZ @ 0x180096D4C
 * Callers:
 *     ?OnWindowSizeUpdated@CWindowData@@QEAAJXZ @ 0x180044248 (-OnWindowSizeUpdated@CWindowData@@QEAAJXZ.c)
 *     ?OnClientMarginsChange@CWindowList@@AEAAXPEAVCWindowData@@@Z @ 0x1800443C4 (-OnClientMarginsChange@CWindowList@@AEAAXPEAVCWindowData@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CWindowIconic::OnWindowSizeUpdated(CWindowIconic *this)
{
  return CWindowIconic::UpdateSizeOrMargins(this, 0);
}
