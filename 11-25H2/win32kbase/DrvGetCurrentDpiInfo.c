/*
 * XREFs of DrvGetCurrentDpiInfo @ 0x14008A19C
 * Callers:
 *     NtGdiGetCurrentDpiInfo @ 0x14008A100 (NtGdiGetCurrentDpiInfo.c)
 * Callees:
 *     HMValidateSharedHandle @ 0x14003F620 (HMValidateSharedHandle.c)
 *     UserSessionSwitchLeaveCritWithNonPaged @ 0x140047540 (UserSessionSwitchLeaveCritWithNonPaged.c)
 *     EnterSharedCrit @ 0x14008A250 (EnterSharedCrit.c)
 *     DrvGetCurrentDpiInfoFromHDev @ 0x14008A304 (DrvGetCurrentDpiInfoFromHDev.c)
 */

__int64 __fastcall DrvGetCurrentDpiInfo(__int64 a1, __int64 a2)
{
  __int64 v4; // rdx
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  unsigned int CurrentDpiInfoFromHDev; // ebx

  EnterSharedCrit(1LL, 1LL);
  v5 = HMValidateSharedHandle(a1, v4);
  if ( v5 && (v7 = *(_QWORD *)(v5 + 80)) != 0 )
    CurrentDpiInfoFromHDev = DrvGetCurrentDpiInfoFromHDev(v7, a2);
  else
    CurrentDpiInfoFromHDev = -1073741811;
  UserSessionSwitchLeaveCritWithNonPaged(0LL, v6);
  return CurrentDpiInfoFromHDev;
}
