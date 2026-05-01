/*
 * XREFs of ?_CancelPlacement@CDragVisual@@AEAAXXZ @ 0x180542CC4
 * Callers:
 *     ?_OnKeyDown@CDragVisual@@AEAAX_K@Z @ 0x1805436F0 (-_OnKeyDown@CDragVisual@@AEAAX_K@Z.c)
 *     ?_OnPressDown@CDragVisual@@AEAAJUtagPOINT@@@Z @ 0x180543F50 (-_OnPressDown@CDragVisual@@AEAAJUtagPOINT@@@Z.c)
 * Callees:
 *     ?_ClearVisualFeedback@CDragVisual@@AEAAXXZ @ 0x180542D78 (-_ClearVisualFeedback@CDragVisual@@AEAAXXZ.c)
 */

void __fastcall CDragVisual::_CancelPlacement(CDragVisual *this)
{
  CDragVisual::_ClearVisualFeedback(this);
  (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 17) + 48LL))(*((_QWORD *)this + 17));
}
