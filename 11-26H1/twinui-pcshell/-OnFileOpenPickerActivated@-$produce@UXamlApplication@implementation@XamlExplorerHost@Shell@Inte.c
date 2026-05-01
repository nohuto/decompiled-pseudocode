/*
 * XREFs of ?OnFileOpenPickerActivated@?$produce@UXamlApplication@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@UIApplicationOverrides@Xaml@UI@67@@impl@winrt@@UEAAHPEAX@Z @ 0x18044BB20
 * Callers:
 *     <none>
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18002633C (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ?OnFileOpenPickerActivated@?$consume_Windows_UI_Xaml_IApplicationOverrides@UIApplicationOverrides@Xaml@UI@Windows@winrt@@@impl@winrt@@QEBA@AEBUFileOpenPickerActivatedEventArgs@Activation@ApplicationModel@Windows@3@@Z @ 0x18044BAD8 (-OnFileOpenPickerActivated@-$consume_Windows_UI_Xaml_IApplicationOverrides@UIApplicationOverride.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall winrt::impl::produce<winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlApplication,winrt::Windows::UI::Xaml::IApplicationOverrides>::OnFileOpenPickerActivated(
        __int64 a1,
        __int64 a2)
{
  __int64 v2; // rax
  void (__fastcall ***v3)(_QWORD, __int64 *, __int64 *); // rcx
  __int64 v5; // [rsp+20h] [rbp-28h] BYREF
  __int64 v6; // [rsp+28h] [rbp-20h] BYREF

  v6 = a2;
  v2 = a1 - 32;
  if ( !a1 )
    v2 = 8LL;
  v3 = *(void (__fastcall ****)(_QWORD, __int64 *, __int64 *))v2;
  v5 = 0LL;
  if ( v3 )
    (**v3)(v3, &winrt::impl::guid_v<winrt::Windows::UI::Xaml::IApplicationOverrides>, &v5);
  winrt::impl::consume_Windows_UI_Xaml_IApplicationOverrides<winrt::Windows::UI::Xaml::IApplicationOverrides>::OnFileOpenPickerActivated(
    &v5,
    &v6);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v5);
  return 0LL;
}
