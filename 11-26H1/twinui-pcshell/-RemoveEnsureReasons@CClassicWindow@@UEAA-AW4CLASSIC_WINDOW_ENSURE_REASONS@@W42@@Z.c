/*
 * XREFs of ?RemoveEnsureReasons@CClassicWindow@@UEAA?AW4CLASSIC_WINDOW_ENSURE_REASONS@@W42@@Z @ 0x1802ECE30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CClassicWindow::RemoveEnsureReasons(__int64 a1, int a2)
{
  *(_DWORD *)(a1 + 76) &= ~a2;
  return *(unsigned int *)(a1 + 76);
}
