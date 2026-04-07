/*
 * XREFs of ?OnWindowSizeUpdated@CWindowIconic@@QEAAJXZ @ 0x180089A38
 * Callers:
 *     ?OnClientMarginsChange@CWindowList@@AEAAXPEAVCWindowData@@@Z @ 0x180010474 (-OnClientMarginsChange@CWindowList@@AEAAXPEAVCWindowData@@@Z.c)
 *     ?OnWindowSizeUpdated@CWindowData@@QEAAJXZ @ 0x1800115C8 (-OnWindowSizeUpdated@CWindowData@@QEAAJXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CWindowIconic::OnWindowSizeUpdated(CWindowIconic *this)
{
  return CWindowIconic::UpdateSizeOrMargins(this, 0);
}
