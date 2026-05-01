/*
 * XREFs of ?GetDesktopUniqueName@@YAXPEB_WPEA_WK@Z @ 0x1802AEFCC
 * Callers:
 *     ?InitializeRemoteTabTipAdapter@TabTipAdapter@KeyboardHosting@@AEAAJXZ @ 0x1800D4FB0 (-InitializeRemoteTabTipAdapter@TabTipAdapter@KeyboardHosting@@AEAAJXZ.c)
 *     ?OnRemotePolicyIsReady@TabTipAdapter@KeyboardHosting@@UEAAJXZ @ 0x180178C70 (-OnRemotePolicyIsReady@TabTipAdapter@KeyboardHosting@@UEAAJXZ.c)
 * Callees:
 *     ?StringCchCopyW@@YAJPEA_W_KPEB_W@Z @ 0x18013602C (-StringCchCopyW@@YAJPEA_W_KPEB_W@Z.c)
 *     ?StringCchPrintfW@@YAJPEA_W_KPEB_WZZ @ 0x1801D3710 (-StringCchPrintfW@@YAJPEA_W_KPEB_WZZ.c)
 *     ?GetThreadDesktopName@@YAHPEA_WK@Z @ 0x1801E11F4 (-GetThreadDesktopName@@YAHPEA_WK@Z.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
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
