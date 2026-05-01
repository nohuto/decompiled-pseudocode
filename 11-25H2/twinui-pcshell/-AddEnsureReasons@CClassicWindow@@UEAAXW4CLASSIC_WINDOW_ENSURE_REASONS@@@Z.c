/*
 * XREFs of ?AddEnsureReasons@CClassicWindow@@UEAAXW4CLASSIC_WINDOW_ENSURE_REASONS@@@Z @ 0x180295DE0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CClassicWindow::AddEnsureReasons(__int64 a1, int a2)
{
  *(_DWORD *)(a1 + 76) |= a2;
}
