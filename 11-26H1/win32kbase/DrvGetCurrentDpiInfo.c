/*
 * XREFs of DrvGetCurrentDpiInfo @ 0x1400877B0
 * Callers:
 *     NtGdiGetCurrentDpiInfo @ 0x140087710 (NtGdiGetCurrentDpiInfo.c)
 * Callees:
 *     UserSessionSwitchLeaveCritWithNonPaged @ 0x14003D530 (UserSessionSwitchLeaveCritWithNonPaged.c)
 *     EnterSharedCrit @ 0x14003D800 (EnterSharedCrit.c)
 *     HMValidateSharedHandle @ 0x140087920 (HMValidateSharedHandle.c)
 *     DrvGetCurrentDpiInfoFromHDev @ 0x140087A68 (DrvGetCurrentDpiInfoFromHDev.c)
 */

__int64 __fastcall DrvGetCurrentDpiInfo(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  unsigned int CurrentDpiInfoFromHDev; // ebx

  EnterSharedCrit(1LL, 1LL, a3, a4);
  v6 = HMValidateSharedHandle(a1);
  if ( v6 && (v8 = *(_QWORD *)(v6 + 80)) != 0 )
    CurrentDpiInfoFromHDev = DrvGetCurrentDpiInfoFromHDev(v8, a2);
  else
    CurrentDpiInfoFromHDev = -1073741811;
  UserSessionSwitchLeaveCritWithNonPaged(v8, v7, v9, v10);
  return CurrentDpiInfoFromHDev;
}
