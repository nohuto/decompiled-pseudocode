/*
 * XREFs of DrvLogDiagDisplayChange @ 0x14014A0D0
 * Callers:
 *     NtUserChangeDisplaySettings @ 0x14016EAB0 (NtUserChangeDisplaySettings.c)
 *     ?Win32kPnpNotify@@YAJPEAU_VIDEO_WIN32K_CALLBACKS_PARAMS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1401B099C (-Win32kPnpNotify@@YAJPEAU_VIDEO_WIN32K_CALLBACKS_PARAMS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x140242EA0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 *     memset @ 0x140243000 (memset.c)
 */

__int64 __fastcall DrvLogDiagDisplayChange(__int64 a1, int a2)
{
  __int64 DxgkWin32kInterface; // rax
  _OWORD v6[5]; // [rsp+20h] [rbp-60h] BYREF

  memset(v6, 0, 0x48uLL);
  v6[0] = 0x4800000003uLL;
  memset(&v6[1], 0, 28);
  if ( a1 )
  {
    DWORD2(v6[3]) = *(_DWORD *)a1;
    *(_QWORD *)&v6[4] = *(_QWORD *)(a1 + 16);
    HIDWORD(v6[3]) = *(_DWORD *)(a1 + 24);
    BYTE4(v6[3]) = 0;
  }
  else
  {
    BYTE4(v6[3]) = 1;
  }
  LODWORD(v6[3]) = a2;
  DxgkWin32kInterface = DxDdGetDxgkWin32kInterface(0LL);
  return (*(__int64 (__fastcall **)(_OWORD *))(DxgkWin32kInterface + 304))(v6);
}
