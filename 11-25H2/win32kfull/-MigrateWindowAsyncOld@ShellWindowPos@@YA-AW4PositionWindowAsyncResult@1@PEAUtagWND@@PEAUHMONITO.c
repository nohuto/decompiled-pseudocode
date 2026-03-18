/*
 * XREFs of ?MigrateWindowAsyncOld@ShellWindowPos@@YA?AW4PositionWindowAsyncResult@1@PEAUtagWND@@PEAUHMONITOR__@@K@Z @ 0x1402C1B14
 * Callers:
 *     NtUserShellMigrateWindow @ 0x1402A14B0 (NtUserShellMigrateWindow.c)
 * Callees:
 *     ?PostEventMessageWindow@@YA_NPEAUtagWND@@K_K_J@Z @ 0x14021E418 (-PostEventMessageWindow@@YA_NPEAUtagWND@@K_K_J@Z.c)
 *     ??3SHELLPOSREQUEST@ShellWindowPos@@SAXPEAX@Z @ 0x14026F300 (--3SHELLPOSREQUEST@ShellWindowPos@@SAXPEAX@Z.c)
 */

__int64 __fastcall ShellWindowPos::MigrateWindowAsyncOld(struct tagTHREADINFO **a1, __int64 a2, int a3)
{
  __int64 v6; // rax
  void *v7; // rbx

  v6 = Win32AllocPoolZInit(16LL, 1836543317LL);
  v7 = (void *)v6;
  if ( !v6 )
    return 2LL;
  *(_QWORD *)v6 = a2;
  *(_DWORD *)(v6 + 8) = a3;
  if ( !PostEventMessageWindow(a1, 0x1Bu, (LARGE_INTEGER)1LL, v6) )
  {
    ShellWindowPos::SHELLPOSREQUEST::operator delete(v7);
    return 2LL;
  }
  return 0LL;
}
