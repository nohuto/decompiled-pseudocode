/*
 * XREFs of ?_NotifyStoryboardTimeout@CStoryboard@@IEAAXXZ @ 0x1800C42E4
 * Callers:
 *     ?OnStoryboardTimeout@CStoryboard@@QEAAJXZ @ 0x1800C2568 (-OnStoryboardTimeout@CStoryboard@@QEAAJXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall CStoryboard::_NotifyStoryboardTimeout(CStoryboard *this)
{
  CStoryboard::_EnumerateWindows(this, 2u);
}
