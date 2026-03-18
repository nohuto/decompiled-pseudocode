/*
 * XREFs of ??3SHELLPOSREQUEST@ShellWindowPos@@SAXPEAX@Z @ 0x140296E84
 * Callers:
 *     NtUserShellMigrateWindow @ 0x1402BED70 (NtUserShellMigrateWindow.c)
 *     ?FreePositionEvent@ShellWindowPos@@YAXPEAUtagQMSG@@@Z @ 0x1402DB348 (-FreePositionEvent@ShellWindowPos@@YAXPEAUtagQMSG@@@Z.c)
 *     ?PositionWindowAsyncOld@ShellWindowPos@@YA?AW4PositionWindowAsyncResult@1@PEAUtagWND@@PEAUHWND__@@AEBUtagRECT@@W4_SHELLSETWINDOWPOS_STATE@@W4_SHELLSETWINDOWPOS_OPTIONS@@K@Z @ 0x1402DB62C (-PositionWindowAsyncOld@ShellWindowPos@@YA-AW4PositionWindowAsyncResult@1@PEAUtagWND@@PEAUHWND__.c)
 * Callees:
 *     <none>
 */

void __fastcall ShellWindowPos::SHELLPOSREQUEST::operator delete(void *a1)
{
  if ( a1 )
    Win32FreePool(a1);
}
