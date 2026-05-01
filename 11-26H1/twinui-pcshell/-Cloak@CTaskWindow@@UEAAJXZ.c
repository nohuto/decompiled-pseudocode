/*
 * XREFs of ?Cloak@CTaskWindow@@UEAAJXZ @ 0x180301BC0
 * Callers:
 *     <none>
 * Callees:
 *     ?_Invoke@CTaskWindow@@AEAAJW4WINDOW_ACTION_TYPE@1@@Z @ 0x180302490 (-_Invoke@CTaskWindow@@AEAAJW4WINDOW_ACTION_TYPE@1@@Z.c)
 */

__int64 __fastcall CTaskWindow::Cloak(CTaskWindow *this)
{
  CTaskWindow::_Invoke((char *)this - 8, 0LL);
  return 0LL;
}
