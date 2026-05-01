/*
 * XREFs of ?GetParentIfCoreWindow@GamingOverlayExperienceManager@@AEAAPEAUHWND__@@PEAU2@@Z @ 0x1802B8708
 * Callers:
 *     ?GetTargetWindowRect@GamingOverlayExperienceManager@@UEAAJ_KPEAH111@Z @ 0x180229620 (-GetTargetWindowRect@GamingOverlayExperienceManager@@UEAAJ_KPEAH111@Z.c)
 *     ?RestoreTargetAfterTakingFocus@GamingOverlayExperienceManager@@UEAAJXZ @ 0x18034E6E0 (-RestoreTargetAfterTakingFocus@GamingOverlayExperienceManager@@UEAAJXZ.c)
 *     ?StartListeningForTargetWindowMoved@GamingOverlayExperienceManager@@UEAAJ_K@Z @ 0x18034FC20 (-StartListeningForTargetWindowMoved@GamingOverlayExperienceManager@@UEAAJ_K@Z.c)
 *     ?StopListeningForTargetWindowMoved@GamingOverlayExperienceManager@@UEAAJ_K@Z @ 0x180350590 (-StopListeningForTargetWindowMoved@GamingOverlayExperienceManager@@UEAAJ_K@Z.c)
 * Callees:
 *     ?_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180093874 (-_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     memset_0 @ 0x1802D2FFC (memset_0.c)
 */

HWND __fastcall GamingOverlayExperienceManager::GetParentIfCoreWindow(GamingOverlayExperienceManager *this, HWND a2)
{
  const char *v3; // r9
  HWND Parent; // rax
  const char *v5; // r9
  WCHAR ClassName[128]; // [rsp+20h] [rbp-118h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+138h] [rbp+0h]

  memset_0(ClassName, 0, sizeof(ClassName));
  if ( !GetClassNameW(a2, ClassName, 128) )
    wil::details::in1diag3::_Log_GetLastError(
      retaddr,
      (void *)0x37E,
      (int)"pcshell\\twinui\\GamingOverlayExperienceManager\\lib\\GamingOverlayExperienceManager.cpp",
      v3);
  if ( !(unsigned int)_o__wcsicmp(L"Windows.UI.Core.CoreWindow", ClassName) )
  {
    Parent = GetParent(a2);
    if ( Parent )
      return Parent;
    else
      wil::details::in1diag3::_Log_GetLastError(
        retaddr,
        (void *)0x383,
        (int)"pcshell\\twinui\\GamingOverlayExperienceManager\\lib\\GamingOverlayExperienceManager.cpp",
        v5);
  }
  return a2;
}
