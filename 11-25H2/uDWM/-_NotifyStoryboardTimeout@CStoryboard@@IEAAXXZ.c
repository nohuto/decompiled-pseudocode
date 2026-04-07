/*
 * XREFs of ?_NotifyStoryboardTimeout@CStoryboard@@IEAAXXZ @ 0x1800CA1E4
 * Callers:
 *     ?OnStoryboardTimeout@CStoryboard@@QEAAJXZ @ 0x1800C8558 (-OnStoryboardTimeout@CStoryboard@@QEAAJXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall CStoryboard::_NotifyStoryboardTimeout(CStoryboard *this)
{
  CStoryboard::_EnumerateWindows(this, 2u);
}
