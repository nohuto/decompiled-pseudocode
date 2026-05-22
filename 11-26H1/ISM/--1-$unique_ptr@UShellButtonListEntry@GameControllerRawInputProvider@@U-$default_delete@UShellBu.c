/*
 * XREFs of ??1?$unique_ptr@UShellButtonListEntry@GameControllerRawInputProvider@@U?$default_delete@UShellButtonListEntry@GameControllerRawInputProvider@@@std@@@std@@QEAA@XZ @ 0x1800996EC
 * Callers:
 *     ?OnSystemCommand@GameControllerRawInputProvider@@UEAAXI_K0E_N@Z @ 0x180083020 (-OnSystemCommand@GameControllerRawInputProvider@@UEAAXI_K0E_N@Z.c)
 * Callees:
 *     ??_GShellButtonListEntry@GameControllerRawInputProvider@@QEAAPEAXI@Z @ 0x18007C824 (--_GShellButtonListEntry@GameControllerRawInputProvider@@QEAAPEAXI@Z.c)
 */

GameControllerRawInputProvider::ShellButtonListEntry *__fastcall std::unique_ptr<GameControllerRawInputProvider::ShellButtonListEntry>::~unique_ptr<GameControllerRawInputProvider::ShellButtonListEntry>(
        GameControllerRawInputProvider::ShellButtonListEntry **a1)
{
  GameControllerRawInputProvider::ShellButtonListEntry *v1; // rcx
  GameControllerRawInputProvider::ShellButtonListEntry *result; // rax

  v1 = *a1;
  if ( v1 )
    return GameControllerRawInputProvider::ShellButtonListEntry::`scalar deleting destructor'(v1);
  return result;
}
