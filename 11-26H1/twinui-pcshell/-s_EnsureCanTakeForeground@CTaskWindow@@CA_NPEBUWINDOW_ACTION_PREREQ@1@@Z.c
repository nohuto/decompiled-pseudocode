/*
 * XREFs of ?s_EnsureCanTakeForeground@CTaskWindow@@CA_NPEBUWINDOW_ACTION_PREREQ@1@@Z @ 0x180302690
 * Callers:
 *     <none>
 * Callees:
 *     ?CanChangeForeground@@YAJXZ @ 0x1800AE468 (-CanChangeForeground@@YAJXZ.c)
 */

bool __fastcall CTaskWindow::s_EnsureCanTakeForeground(const struct CTaskWindow::WINDOW_ACTION_PREREQ *a1)
{
  return (int)CanChangeForeground() >= 0;
}
