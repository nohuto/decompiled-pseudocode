/*
 * XREFs of ?Hide@CAcrylicSheet@@QEAAXXZ @ 0x18009598C
 * Callers:
 *     ?StopAnimations@CAcrylicSheet@@QEAAJXZ @ 0x18005E508 (-StopAnimations@CAcrylicSheet@@QEAAJXZ.c)
 *     ?OnWindowDestroyed@CWindowArrangementTransition@@QEAAJXZ @ 0x1800DE5CC (-OnWindowDestroyed@CWindowArrangementTransition@@QEAAJXZ.c)
 * Callees:
 *     ?SetOpacity@CVisual@@QEAAXN@Z @ 0x180013F00 (-SetOpacity@CVisual@@QEAAXN@Z.c)
 */

void __fastcall CAcrylicSheet::Hide(CAcrylicSheet *this, __int64 a2, __int64 a3)
{
  CVisual::SetOpacity(this, 0.0, a3);
  CVisual::SetSize(this, 0, 0);
}
