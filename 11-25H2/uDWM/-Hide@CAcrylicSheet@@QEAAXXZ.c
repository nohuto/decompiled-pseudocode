/*
 * XREFs of ?Hide@CAcrylicSheet@@QEAAXXZ @ 0x1800A12CC
 * Callers:
 *     ?StopAnimations@CAcrylicSheet@@QEAAJXZ @ 0x180037B2C (-StopAnimations@CAcrylicSheet@@QEAAJXZ.c)
 *     ?OnWindowDestroyed@CWindowArrangementTransition@@QEAAJXZ @ 0x1800E1764 (-OnWindowDestroyed@CWindowArrangementTransition@@QEAAJXZ.c)
 * Callees:
 *     ?SetOpacity@CVisual@@UEAAXN@Z @ 0x180019DD0 (-SetOpacity@CVisual@@UEAAXN@Z.c)
 */

void __fastcall CAcrylicSheet::Hide(CAcrylicSheet *this)
{
  CVisual::SetOpacity(this, 0.0);
  CVisual::SetSize(this, 0, 0);
}
