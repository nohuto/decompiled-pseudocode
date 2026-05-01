/*
 * XREFs of ?GetParentIfCoreWindow@GamingOverlayExperienceManager@@AEAAPEAUHWND__@@PEAU2@@Z @ 0x180349CC4
 * Callers:
 *     ?GetTargetWindowRect@GamingOverlayExperienceManager@@UEAAJ_KPEAH111@Z @ 0x18021AB60 (-GetTargetWindowRect@GamingOverlayExperienceManager@@UEAAJ_KPEAH111@Z.c)
 *     ?RestoreTargetAfterTakingFocus@GamingOverlayExperienceManager@@UEAAJXZ @ 0x180352D80 (-RestoreTargetAfterTakingFocus@GamingOverlayExperienceManager@@UEAAJXZ.c)
 *     ?StartListeningForTargetWindowMoved@GamingOverlayExperienceManager@@UEAAJ_K@Z @ 0x180354430 (-StartListeningForTargetWindowMoved@GamingOverlayExperienceManager@@UEAAJ_K@Z.c)
 *     ?StopListeningForTargetWindowMoved@GamingOverlayExperienceManager@@UEAAJ_K@Z @ 0x180355360 (-StopListeningForTargetWindowMoved@GamingOverlayExperienceManager@@UEAAJ_K@Z.c)
 * Callees:
 *     ?_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18004FBA0 (-_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     memset_0 @ 0x1802C9ECC (memset_0.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_52580392@@@details@wil@@QEAA_NXZ @ 0x1802E7978 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_52580392@@@details@wil@@QEAA_NXZ.c)
 *     ?_Log_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z @ 0x180358560 (-_Log_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z.c)
 */

HWND __fastcall GamingOverlayExperienceManager::GetParentIfCoreWindow(GamingOverlayExperienceManager *this, HWND a2)
{
  const char *v3; // r9
  HWND Parent; // rbx
  const char *v5; // r9
  DWORD LastError; // eax
  unsigned int ClassName[64]; // [rsp+20h] [rbp-118h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+138h] [rbp+0h]

  memset_0(ClassName, 0, sizeof(ClassName));
  if ( !GetClassNameW(a2, (LPWSTR)ClassName, 128) )
    wil::details::in1diag3::_Log_GetLastError(
      retaddr,
      (void *)0x382,
      (int)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\GamingOverlayExperienceManager.cpp",
      v3);
  if ( !(unsigned int)_o__wcsicmp(L"Windows.UI.Core.CoreWindow", ClassName) )
  {
    Parent = GetParent(a2);
    if ( wil::details::FeatureImpl<__WilFeatureTraits_Feature_52580392>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_52580392>::GetImpl'::`2'::impl) )
    {
      if ( !Parent )
      {
        LastError = GetLastError();
        if ( LastError )
          wil::details::in1diag3::_Log_Win32(
            retaddr,
            (void *)0x395,
            (unsigned int)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\GamingOverlayExperienceManager.cpp",
            (const char *)LastError,
            ClassName[0]);
        return a2;
      }
    }
    else if ( !Parent )
    {
      wil::details::in1diag3::_Log_GetLastError(
        retaddr,
        (void *)0x39A,
        (int)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\GamingOverlayExperienceManager.cpp",
        v5);
      return a2;
    }
    return Parent;
  }
  return a2;
}
