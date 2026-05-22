/*
 * XREFs of ?GetDesktopUniqueName@@YAXPEB_WPEA_WK@Z @ 0x180057EC8
 * Callers:
 *     ?RuntimeClassInitialize@InputServiceProxy@@QEAAJPEAUIInputServiceProxyOwner@@@Z @ 0x180057D20 (-RuntimeClassInitialize@InputServiceProxy@@QEAAJPEAUIInputServiceProxyOwner@@@Z.c)
 *     ?RuntimeClassInitialize@HotkeyRegistrationForwarder@@QEAAJXZ @ 0x180075830 (-RuntimeClassInitialize@HotkeyRegistrationForwarder@@QEAAJXZ.c)
 *     ?RuntimeClassInitialize@HotKeyProcessor@@QEAAJXZ @ 0x1801D1690 (-RuntimeClassInitialize@HotKeyProcessor@@QEAAJXZ.c)
 *     ?RuntimeClassInitialize@TextInputStateAdapter@@QEAAJPEAUITextInputStateAdapterOwner@@@Z @ 0x1801D3A50 (-RuntimeClassInitialize@TextInputStateAdapter@@QEAAJPEAUITextInputStateAdapterOwner@@@Z.c)
 * Callees:
 *     ?StringCchPrintfW@@YAJPEA_W_KPEB_WZZ @ 0x180057F6C (-StringCchPrintfW@@YAJPEA_W_KPEB_WZZ.c)
 *     ?GetThreadDesktopName@@YAHPEA_WK@Z @ 0x180057FE8 (-GetThreadDesktopName@@YAHPEA_WK@Z.c)
 *     ?StringCchCopyW@@YAJPEA_W_KPEB_W@Z @ 0x180058250 (-StringCchCopyW@@YAJPEA_W_KPEB_W@Z.c)
 *     ?GetSessionID@@YAKXZ @ 0x180096BD4 (-GetSessionID@@YAKXZ.c)
 *     __security_check_cookie @ 0x18009ACC0 (__security_check_cookie.c)
 */

void __fastcall GetDesktopUniqueName(const wchar_t *a1, wchar_t *a2)
{
  unsigned __int64 v4; // rdx
  unsigned int SessionID; // esi
  unsigned int v6; // [rsp+28h] [rbp-240h]
  wchar_t v7[264]; // [rsp+30h] [rbp-238h] BYREF

  v7[0] = 0;
  SessionID = GetSessionID();
  if ( SessionID == -1 || !(unsigned int)GetThreadDesktopName(v7, v4) )
  {
    StringCchCopyW(a2, v4, a1);
  }
  else
  {
    v6 = SessionID;
    StringCchPrintfW(a2, 0x104uLL, L"%s%s%d", a1, v7, v6);
  }
}
