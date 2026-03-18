/*
 * XREFs of ?RegisterSystemHotkeys@@YAXXZ @ 0x14029B3C4
 * Callers:
 *     RawInputThread @ 0x140270B00 (RawInputThread.c)
 * Callees:
 *     ?_RegisterHotKey@@YA_NPEAUtagWND@@P6A?AW4tagHotKeyCallBackResult@@_K_J@ZHIIPEAUHWND__@@@Z @ 0x1401A24FC (-_RegisterHotKey@@YA_NPEAUtagWND@@P6A-AW4tagHotKeyCallBackResult@@_K_J@ZHIIPEAUHWND__@@@Z.c)
 *     ?SetDebugHotKeys@@YAXXZ @ 0x14029B46C (-SetDebugHotKeys@@YAXXZ.c)
 *     _guard_dispatch_icall @ 0x14034FDB0 (_guard_dispatch_icall.c)
 */

void RegisterSystemHotkeys(void)
{
  char *v0; // rbx
  unsigned __int8 (*v1)(void); // rax
  int *v2; // rbx

  v0 = (char *)&unk_140359B70;
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
  v2 = (int *)&unk_140362650;
  do
  {
    _RegisterHotKey(
      0LL,
      (enum tagHotKeyCallBackResult (__high *)(unsigned __int64, __int64))lambda_f1f8f0736c0bde49f507539c36edf3c7_::_lambda_invoker_cdecl_,
      *v2,
      v2[1] | 0x4000,
      v2[2],
      0LL);
    v2 += 8;
  }
  while ( v2 != (int *)"Failed" );
}
