/*
 * XREFs of DrvLogDiagDisplayChange @ 0x140186D50
 * Callers:
 *     ?Win32kPnpNotify@@YAJPEAU_VIDEO_WIN32K_CALLBACKS_PARAMS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1401D5CB0 (-Win32kPnpNotify@@YAJPEAU_VIDEO_WIN32K_CALLBACKS_PARAMS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     NtUserChangeDisplaySettings @ 0x1401E21D0 (NtUserChangeDisplaySettings.c)
 * Callees:
 *     __security_check_cookie @ 0x14024BC30 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 *     memset @ 0x14024BD80 (memset.c)
 */

__int64 __fastcall DrvLogDiagDisplayChange(__int64 a1, int a2)
{
  __int64 v4; // rdx
  __int64 DxgkWin32kInterface; // rax
  _OWORD v7[5]; // [rsp+20h] [rbp-60h] BYREF

  memset(v7, 0, 0x48uLL);
  v7[0] = 0x4800000003uLL;
  memset(&v7[1], 0, 28);
  if ( a1 )
  {
    DWORD2(v7[3]) = *(_DWORD *)a1;
    *(_QWORD *)&v7[4] = *(_QWORD *)(a1 + 16);
    HIDWORD(v7[3]) = *(_DWORD *)(a1 + 24);
    BYTE4(v7[3]) = 0;
  }
  else
  {
    BYTE4(v7[3]) = 1;
  }
  LODWORD(v7[3]) = a2;
  DxgkWin32kInterface = DxDdGetDxgkWin32kInterface(0LL, v4);
  return (*(__int64 (__fastcall **)(_OWORD *))(DxgkWin32kInterface + 304))(v7);
}
