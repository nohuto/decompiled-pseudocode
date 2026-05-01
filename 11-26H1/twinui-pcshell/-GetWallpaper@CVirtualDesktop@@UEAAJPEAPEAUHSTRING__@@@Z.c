/*
 * XREFs of ?GetWallpaper@CVirtualDesktop@@UEAAJPEAPEAUHSTRING__@@@Z @ 0x180264620
 * Callers:
 *     <none>
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18002633C (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?View@?$consume_WindowsUdk_UI_Shell_IViewVisibilityChangedEventArgs@UIViewVisibilityChangedEventArgs@Shell@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA@XZ @ 0x18002824C (-View@-$consume_WindowsUdk_UI_Shell_IViewVisibilityChangedEventArgs@UIViewVisibilityChangedEvent.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetWallpaperInternal@CVirtualDesktop@@UEAAJPEAPEAUHSTRING__@@@Z @ 0x180222730 (-GetWallpaperInternal@CVirtualDesktop@@UEAAJPEAPEAUHSTRING__@@@Z.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     memset_0 @ 0x1802C9ECC (memset_0.c)
 *     ??$wnf_query_nothrow@H@wil@@YAJAEBU_WNF_STATE_NAME@@PEA_NPEAHPEAUWNF_CHANGE_STAMP_STRUCT@0@@Z @ 0x18031F0A0 (--$wnf_query_nothrow@H@wil@@YAJAEBU_WNF_STATE_NAME@@PEA_NPEAHPEAUWNF_CHANGE_STAMP_STRUCT@0@@Z.c)
 *     ??0UserProfilePersonalizationSettings@UserProfile@System@WindowsUdk@winrt@@QEAA@XZ @ 0x1805518B4 (--0UserProfilePersonalizationSettings@UserProfile@System@WindowsUdk@winrt@@QEAA@XZ.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_DesktopSpotlightUdk@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1805549F4 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_DesktopSpotlightUdk@@@details@wil@@QEAAX_.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CVirtualDesktop::GetWallpaper(CVirtualDesktop *this, HSTRING *a2)
{
  HSTRING *v2; // r14
  CVirtualDesktop *v3; // rsi
  CVirtualDesktop *v4; // r15
  int v5; // eax
  __int64 v6; // rdx
  unsigned int v7; // edi
  int v9; // eax
  int WallpaperInternal; // eax
  _BYTE v11[4]; // [rsp+20h] [rbp-278h] BYREF
  int v12; // [rsp+24h] [rbp-274h] BYREF
  int v13; // [rsp+28h] [rbp-270h] BYREF
  __int64 v14; // [rsp+30h] [rbp-268h] BYREF
  PSRWLOCK SRWLock; // [rsp+38h] [rbp-260h] BYREF
  CVirtualDesktop *v16; // [rsp+40h] [rbp-258h]
  HSTRING *v17; // [rsp+48h] [rbp-250h]
  _WORD pvParam[264]; // [rsp+60h] [rbp-238h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+298h] [rbp+0h]

  v2 = a2;
  v3 = this;
  v16 = this;
  v4 = this;
  v17 = a2;
  *a2 = 0LL;
  v12 = 0;
  v5 = wil::wnf_query_nothrow<int>(&WNF_SHEL_DESKTOP_BACKGROUND_SET_TO_SLIDESHOW, v11, &v12);
  v7 = v5;
  if ( v5 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x78,
      (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktop.cpp",
      (const char *)(unsigned int)v5);
    return v7;
  }
  if ( !v12 )
  {
    LOBYTE(v6) = 1;
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_DesktopSpotlightUdk>::ReportUsage(
      &`wil::Feature<__WilFeatureTraits_Feature_DesktopSpotlightUdk>::GetImpl'::`2'::impl,
      v6);
    try
    {
      winrt::WindowsUdk::System::UserProfile::UserProfilePersonalizationSettings::UserProfilePersonalizationSettings((winrt::WindowsUdk::System::UserProfile::UserProfilePersonalizationSettings *)&v14);
      v9 = winrt::impl::consume_WindowsUdk_UI_Shell_IViewVisibilityChangedEventArgs<winrt::WindowsUdk::UI::Shell::IViewVisibilityChangedEventArgs>::View(&v14);
    }
    catch ( ... )
    {
      v3 = v16;
      v2 = v17;
      v4 = v16;
      goto LABEL_9;
    }
    if ( v9 == 1 )
    {
      winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v14);
      return 0LL;
    }
    winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v14);
LABEL_9:
    memset_0(pvParam, 0, 0x208uLL);
    SystemParametersInfoW(0x73u, 0x104u, pvParam, 0);
    if ( pvParam[0] )
    {
      v13 = 0;
      SystemParametersInfoW(0x1040u, 0, &v13, 0);
      if ( !v13 )
      {
        (*(void (__fastcall **)(_QWORD, PSRWLOCK *))(**((_QWORD **)v4 + 10) + 24LL))(*((_QWORD *)v4 + 10), &SRWLock);
        WallpaperInternal = CVirtualDesktop::GetWallpaperInternal((HSTRING *)v3 + 2, v2);
        v7 = WallpaperInternal;
        if ( WallpaperInternal < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0xA1,
            (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktop.cpp",
            (const char *)(unsigned int)WallpaperInternal);
          if ( SRWLock )
            ReleaseSRWLockShared(SRWLock);
          return v7;
        }
        if ( SRWLock )
          ReleaseSRWLockShared(SRWLock);
      }
    }
  }
  return 0LL;
}
