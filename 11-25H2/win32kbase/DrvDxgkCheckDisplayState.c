/*
 * XREFs of DrvDxgkCheckDisplayState @ 0x1401CE008
 * Callers:
 *     xxxDisplayDiagBlackScreenDetected @ 0x1401AED90 (xxxDisplayDiagBlackScreenDetected.c)
 * Callees:
 *     ?GetBlackScreenTrigger@@YA?AW4_D3DKMT_BLACK_SCREEN_DETECTION_TRIGGER@@IW4_D3DKMT_BLACK_SCREEN_DETECTION_CALLER@@@Z @ 0x1401CC48C (-GetBlackScreenTrigger@@YA-AW4_D3DKMT_BLACK_SCREEN_DETECTION_TRIGGER@@IW4_D3DKMT_BLACK_SCREEN_DE.c)
 *     __security_check_cookie @ 0x140242EA0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall DrvDxgkCheckDisplayState(int a1, int a2, __int64 a3, __int64 a4, __int128 *a5, int a6)
{
  int BlackScreenTrigger; // eax
  __int64 v10; // rcx
  __int64 DxgkWin32kInterface; // rax
  _DWORD v13[2]; // [rsp+20h] [rbp-58h] BYREF
  __int64 v14; // [rsp+28h] [rbp-50h]
  __int64 v15; // [rsp+30h] [rbp-48h]
  __int128 v16; // [rsp+38h] [rbp-40h]

  v16 = 0LL;
  BlackScreenTrigger = GetBlackScreenTrigger(a1, a6);
  v16 = *a5;
  v13[0] = BlackScreenTrigger;
  v13[1] = a2;
  v14 = a3;
  v15 = a4;
  DxgkWin32kInterface = DxDdGetDxgkWin32kInterface(v10);
  return (*(__int64 (__fastcall **)(_DWORD *))(DxgkWin32kInterface + 744))(v13);
}
