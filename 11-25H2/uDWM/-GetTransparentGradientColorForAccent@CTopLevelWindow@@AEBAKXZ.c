/*
 * XREFs of ?GetTransparentGradientColorForAccent@CTopLevelWindow@@AEBAKXZ @ 0x1800D00CC
 * Callers:
 *     ?ValidateVisual@CTopLevelWindow@@UEAAJXZ @ 0x18000AA50 (-ValidateVisual@CTopLevelWindow@@UEAAJXZ.c)
 *     ?UpdateAccent@CTopLevelWindow@@QEAAJ_N@Z @ 0x18000FB1C (-UpdateAccent@CTopLevelWindow@@QEAAJ_N@Z.c)
 * Callees:
 *     ?ChooseWindowFrame@CTopLevelWindow@@AEBAPEAUWindowFrame@1@I_N@Z @ 0x18000E864 (-ChooseWindowFrame@CTopLevelWindow@@AEBAPEAUWindowFrame@1@I_N@Z.c)
 *     ?GetEffectiveGlassColorizationParameters@CDesktopManager@@QEAAXMU?$TMILFlagsEnum@W4FlagsEnum@ColorizationFlags@@@@_NPEAVCGlassColorizationParameters@@@Z @ 0x18000EA70 (-GetEffectiveGlassColorizationParameters@CDesktopManager@@QEAAXMU-$TMILFlagsEnum@W4FlagsEnum@Col.c)
 *     ??0CGlassColorizationParameters@@QEAA@XZ @ 0x18000F33C (--0CGlassColorizationParameters@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x18009A7F0 (__security_check_cookie.c)
 */

__int64 __fastcall CTopLevelWindow::GetTransparentGradientColorForAccent(CTopLevelWindow *this)
{
  CDesktopManager *v1; // rdi
  __int64 v3; // rdx
  __int64 v4; // r8
  unsigned __int8 v6[32]; // [rsp+30h] [rbp-38h] BYREF

  v1 = CDesktopManager::s_pDesktopManagerInstance;
  CTopLevelWindow::ChooseWindowFrame(this, *((_DWORD *)this + 146), 1);
  CGlassColorizationParameters::CGlassColorizationParameters((CGlassColorizationParameters *)v6);
  if ( (*((_BYTE *)this + 584) & 0x40) != 0 || (v4 = 2LL, (*(_BYTE *)(*((_QWORD *)this + 89) + 675LL) & 0x10) != 0) )
    v4 = 1LL;
  CDesktopManager::GetEffectiveGlassColorizationParameters((__int64)v1, v3, v4, 1, v6);
  return *(_DWORD *)v6 & 0xFF00FF00 | (v6[0] << 16) | v6[2];
}
