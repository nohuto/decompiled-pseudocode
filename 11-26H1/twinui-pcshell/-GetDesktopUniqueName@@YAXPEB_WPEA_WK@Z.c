/*
 * XREFs of ?GetDesktopUniqueName@@YAXPEB_WPEA_WK@Z @ 0x1802A5568
 * Callers:
 *     ?InitializeRemoteTabTipAdapter@TabTipAdapter@KeyboardHosting@@AEAAJXZ @ 0x1800B39D8 (-InitializeRemoteTabTipAdapter@TabTipAdapter@KeyboardHosting@@AEAAJXZ.c)
 *     ?OnRemotePolicyIsReady@TabTipAdapter@KeyboardHosting@@UEAAJXZ @ 0x1801690D0 (-OnRemotePolicyIsReady@TabTipAdapter@KeyboardHosting@@UEAAJXZ.c)
 * Callees:
 *     ?StringCchPrintfW@@YAJPEA_W_KPEB_WZZ @ 0x18009B37C (-StringCchPrintfW@@YAJPEA_W_KPEB_WZZ.c)
 *     ?StringCchCopyW@@YAJPEA_W_KPEB_W@Z @ 0x180130A88 (-StringCchCopyW@@YAJPEA_W_KPEB_W@Z.c)
 *     ?GetThreadDesktopName@@YAHPEA_WK@Z @ 0x1801D5540 (-GetThreadDesktopName@@YAHPEA_WK@Z.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 */

void __fastcall GetDesktopUniqueName(const wchar_t *a1, wchar_t *a2)
{
  int v4; // ebx
  ULONG ReturnLength; // [rsp+30h] [rbp-278h] BYREF
  _OWORD ProcessInformation[3]; // [rsp+38h] [rbp-270h] BYREF
  wchar_t v7[264]; // [rsp+70h] [rbp-238h] BYREF

  v7[0] = 0;
  ReturnLength = 0;
  memset(ProcessInformation, 0, sizeof(ProcessInformation));
  if ( NtQueryInformationProcess(
         (HANDLE)0xFFFFFFFFFFFFFFFFLL,
         ProcessBasicInformation,
         ProcessInformation,
         0x30u,
         &ReturnLength)
    || (v4 = *(_DWORD *)(*((_QWORD *)&ProcessInformation[0] + 1) + 704LL), v4 == -1)
    || !(unsigned int)GetThreadDesktopName(v7) )
  {
    StringCchCopyW(a2, 255LL, a1);
  }
  else
  {
    StringCchPrintfW(a2, 0xFFuLL, (wchar_t *)L"%s%s%d", a1, v7, v4);
  }
}
