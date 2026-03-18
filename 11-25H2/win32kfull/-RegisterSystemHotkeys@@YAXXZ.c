/*
 * XREFs of ?RegisterSystemHotkeys@@YAXXZ @ 0x140275DA4
 * Callers:
 *     RawInputThread @ 0x140238B50 (RawInputThread.c)
 * Callees:
 *     ?SetWindowArrangementHotKeys@@YAXXZ @ 0x140216DA0 (-SetWindowArrangementHotKeys@@YAXXZ.c)
 *     ?SetDebugHotKeys@@YAXXZ @ 0x140275EA0 (-SetDebugHotKeys@@YAXXZ.c)
 *     ?_RegisterHotKey@@YA_NPEAUtagWND@@P6A?AW4tagHotKeyCallBackResult@@_K_J@ZHIIPEAUHWND__@@@Z @ 0x14028ACB4 (-_RegisterHotKey@@YA_NPEAUtagWND@@P6A-AW4tagHotKeyCallBackResult@@_K_J@ZHIIPEAUHWND__@@@Z.c)
 *     _guard_dispatch_icall @ 0x140342490 (_guard_dispatch_icall.c)
 */

void RegisterSystemHotkeys(void)
{
  char *v0; // rbx
  unsigned __int8 (*v1)(void); // rax

  v0 = (char *)&unk_14034CAB0;
  do
  {
    v1 = (unsigned __int8 (*)(void))*((_QWORD *)v0 + 1);
    if ( !v1 || !v1() )
      _RegisterHotKey(
        0LL,
        *((enum tagHotKeyCallBackResult (__high **)(unsigned __int64, __int64))v0 - 2),
        *((_DWORD *)v0 - 2),
        *((_DWORD *)v0 - 1),
        *(_DWORD *)v0,
        0LL);
    v0 += 32;
  }
  while ( v0 - 16 != (char *)&gServerHandlers );
  SetDebugHotKeys();
  SetWindowArrangementHotKeys();
}
