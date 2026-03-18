/*
 * XREFs of ?SetPenHotKeys@@YAXXZ @ 0x1402237BC
 * Callers:
 *     RawInputThread @ 0x140238B50 (RawInputThread.c)
 * Callees:
 *     ?_RegisterHotKey@@YA_NPEAUtagWND@@P6A?AW4tagHotKeyCallBackResult@@_K_J@ZHIIPEAUHWND__@@@Z @ 0x14028ACB4 (-_RegisterHotKey@@YA_NPEAUtagWND@@P6A-AW4tagHotKeyCallBackResult@@_K_J@ZHIIPEAUHWND__@@@Z.c)
 */

void SetPenHotKeys(void)
{
  _RegisterHotKey(
    0LL,
    (enum tagHotKeyCallBackResult (__high *)(unsigned __int64, __int64))&PenHotkeyCallback,
    25,
    0x4208u,
    0x83u,
    0LL);
  _RegisterHotKey(
    0LL,
    (enum tagHotKeyCallBackResult (__high *)(unsigned __int64, __int64))&PenHotkeyCallback,
    26,
    0x4208u,
    0x82u,
    0LL);
  _RegisterHotKey(
    0LL,
    (enum tagHotKeyCallBackResult (__high *)(unsigned __int64, __int64))&PenHotkeyCallback,
    27,
    0x4208u,
    0x81u,
    0LL);
  _RegisterHotKey(
    0LL,
    (enum tagHotKeyCallBackResult (__high *)(unsigned __int64, __int64))&PenHotkeyCallback,
    28,
    0x420Au,
    0x83u,
    0LL);
  _RegisterHotKey(
    0LL,
    (enum tagHotKeyCallBackResult (__high *)(unsigned __int64, __int64))&PenHotkeyCallback,
    29,
    0x420Au,
    0x82u,
    0LL);
}
