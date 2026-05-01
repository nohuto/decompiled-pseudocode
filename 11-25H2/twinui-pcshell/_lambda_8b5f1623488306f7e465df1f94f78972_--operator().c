/*
 * XREFs of _lambda_8b5f1623488306f7e465df1f94f78972_::operator() @ 0x1805E53B0
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_8b5f1623488306f7e465df1f94f78972___::Run @ 0x1805E6EB0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_8b5f1623488306f7e465df1f94f78972___--Run.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18005D244 (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ??1?$com_ptr@USnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@@winrt@@QEAA@XZ @ 0x1800A6BC0 (--1-$com_ptr@USnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@@win.c)
 *     ??R?$EventHandler@URemoteSystemStateChangedEventArgs@Shell@Internal@Windows@winrt@@@Foundation@Windows@winrt@@QEBA@AEBUIInspectable@123@AEBURemoteSystemStateChangedEventArgs@Shell@Internal@23@@Z @ 0x1802433C4 (--R-$EventHandler@URemoteSystemStateChangedEventArgs@Shell@Internal@Windows@winrt@@@Foundation@W.c)
 *     ??$make@USharedDesktopBackgroundVisualFinishedArgs@implementation@Themes@UI@Internal@Windows@winrt@@AEB_NAEB_N@winrt@@YA?A_PAEB_N0@Z @ 0x1805E43F4 (--$make@USharedDesktopBackgroundVisualFinishedArgs@implementation@Themes@UI@Internal@Windows@win.c)
 *     ?get@?$weak_ref@USharedDesktopBackgroundVisualHost@@@winrt@@QEBA@XZ @ 0x1805EAA6C (-get@-$weak_ref@USharedDesktopBackgroundVisualHost@@@winrt@@QEBA@XZ.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall lambda_8b5f1623488306f7e465df1f94f78972_::operator()(__int64 a1)
{
  __int64 v2; // rbx
  const char *v3; // r9
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF
  __int64 v7; // [rsp+38h] [rbp+10h] BYREF
  __int64 v8; // [rsp+40h] [rbp+18h] BYREF

  winrt::weak_ref<SharedDesktopBackgroundVisualHost>::get(a1 + 16, &v8);
  try
  {
    v2 = v8;
    if ( v8 )
    {
      winrt::make<winrt::Windows::Internal::UI::Themes::implementation::SharedDesktopBackgroundVisualFinishedArgs,bool const &,bool const &>(
        &v7,
        (_BYTE *)(a1 + 8),
        (_BYTE *)(a1 + 9));
      v6 = v2 + 16;
      winrt::Windows::Foundation::EventHandler<winrt::Windows::Internal::Shell::RemoteSystemStateChangedEventArgs>::operator()(
        (__int64 **)a1,
        &v6,
        &v7);
      v6 = 0LL;
      winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v6);
      winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v7);
    }
    winrt::com_ptr<winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance>::~com_ptr<winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance>(&v8);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x120,
                           (int)"pcshell\\twinui\\themecoordinator\\lib\\shareddesktopbackgroundvisualhost.cpp",
                           v3);
  }
  return result;
}
