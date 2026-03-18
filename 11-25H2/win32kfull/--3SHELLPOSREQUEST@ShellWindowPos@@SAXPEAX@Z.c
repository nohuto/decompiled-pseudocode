/*
 * XREFs of ??3SHELLPOSREQUEST@ShellWindowPos@@SAXPEAX@Z @ 0x14026F300
 * Callers:
 *     ?FreePositionEvent@ShellWindowPos@@YAXPEAUtagQMSG@@@Z @ 0x1402C1A88 (-FreePositionEvent@ShellWindowPos@@YAXPEAUtagQMSG@@@Z.c)
 *     ?MigrateWindowAsyncOld@ShellWindowPos@@YA?AW4PositionWindowAsyncResult@1@PEAUtagWND@@PEAUHMONITOR__@@K@Z @ 0x1402C1B14 (-MigrateWindowAsyncOld@ShellWindowPos@@YA-AW4PositionWindowAsyncResult@1@PEAUtagWND@@PEAUHMONITO.c)
 *     ?PositionWindowAsyncOld@ShellWindowPos@@YA?AW4PositionWindowAsyncResult@1@PEAUtagWND@@PEAUHWND__@@AEBUtagRECT@@W4_SHELLSETWINDOWPOS_STATE@@W4_SHELLSETWINDOWPOS_OPTIONS@@K@Z @ 0x1402C1D24 (-PositionWindowAsyncOld@ShellWindowPos@@YA-AW4PositionWindowAsyncResult@1@PEAUtagWND@@PEAUHWND__.c)
 * Callees:
 *     <none>
 */

void __fastcall ShellWindowPos::SHELLPOSREQUEST::operator delete(void *a1)
{
  if ( a1 )
    Win32FreePool(a1);
}
