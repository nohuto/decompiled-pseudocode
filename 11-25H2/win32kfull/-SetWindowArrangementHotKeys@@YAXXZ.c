/*
 * XREFs of ?SetWindowArrangementHotKeys@@YAXXZ @ 0x140216DA0
 * Callers:
 *     RawInputThread @ 0x140238B50 (RawInputThread.c)
 *     ?RegisterSystemHotkeys@@YAXXZ @ 0x140275DA4 (-RegisterSystemHotkeys@@YAXXZ.c)
 * Callees:
 *     ?_RegisterHotKey@@YA_NPEAUtagWND@@P6A?AW4tagHotKeyCallBackResult@@_K_J@ZHIIPEAUHWND__@@@Z @ 0x14028ACB4 (-_RegisterHotKey@@YA_NPEAUtagWND@@P6A-AW4tagHotKeyCallBackResult@@_K_J@ZHIIPEAUHWND__@@@Z.c)
 *     _lambda_f1f8f0736c0bde49f507539c36edf3c7_::operator_enum_tagHotKeyCallBackResult_(__cdecl_)(unsigned___int64___int64) @ 0x1402A6904 (_lambda_f1f8f0736c0bde49f507539c36edf3c7_--operator_enum_tagHotKeyCallBackResult_(__cdecl_)(unsi.c)
 */

void SetWindowArrangementHotKeys(void)
{
  int *v0; // rbx
  enum tagHotKeyCallBackResult (__high *v1)(unsigned __int64, __int64); // rdi

  v0 = (int *)&unk_1403590E0;
  v1 = (enum tagHotKeyCallBackResult (__high *)(unsigned __int64, __int64))lambda_f1f8f0736c0bde49f507539c36edf3c7_::operator_enum_tagHotKeyCallBackResult____cdecl___unsigned___int64___int64_();
  do
  {
    _RegisterHotKey(0LL, v1, *v0, v0[1] | 0x4000, v0[2], 0LL);
    v0 += 8;
  }
  while ( v0 != (int *)L"Hotkey" );
}
