/*
 * XREFs of ??1?$event_revoker@UIDesktopVisualExtension@Shell@UI@WindowsUdk@winrt@@$MP8type@?$abi@UIDesktopVisualExtension@Shell@UI@WindowsUdk@winrt@@X@impl@5@EAAHUevent_token@5@@_E1??_96785@$BGA@AA@impl@winrt@@QEAA@XZ @ 0x1805E0F14
 * Callers:
 *     ??1SharedDesktopBackgroundVisualHost@@UEAA@XZ @ 0x1805E10CC (--1SharedDesktopBackgroundVisualHost@@UEAA@XZ.c)
 *     ?CreateXamlHost@SharedDesktopBackgroundVisualHost@@AEAAJPEAUHWND__@@@Z @ 0x1805E57D8 (-CreateXamlHost@SharedDesktopBackgroundVisualHost@@AEAAJPEAUHWND__@@@Z.c)
 *     _SharedDesktopBackgroundVisualHost::SharedDesktopBackgroundVisualHost_::_1_::dtor$16 @ 0x1806D85D1 (_SharedDesktopBackgroundVisualHost--SharedDesktopBackgroundVisualHost_--_1_--dtor$16.c)
 *     _SharedDesktopBackgroundVisualHost::CreateXamlHost_::_1_::dtor$6 @ 0x1806D8686 (_SharedDesktopBackgroundVisualHost--CreateXamlHost_--_1_--dtor$6.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18005D244 (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x180066570 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ??_9IPropertyValue@Foundation@Windows@@$BGA@AA @ 0x1802F5B10 (--_9IPropertyValue@Foundation@Windows@@$BGA@AA.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall __1__event_revoker_UIDesktopVisualExtension_Shell_UI_WindowsUdk_winrt___MP8type___abi_UIDesktopVisualExtension_Shell_UI_WindowsUdk_winrt__X_impl_5_EAAHUevent_token_5___E1___96785__BGA_AA_impl_winrt__QEAA_XZ(
        __int64 *a1)
{
  __int64 v2; // rcx
  __int64 v3; // [rsp+30h] [rbp+8h] BYREF
  __int64 v4; // [rsp+38h] [rbp+10h] BYREF

  v2 = *a1;
  if ( v2 )
  {
    v3 = 0LL;
    (*(void (__fastcall **)(__int64, void *, __int64 *))(*(_QWORD *)v2 + 24LL))(
      v2,
      &winrt::impl::guid_v<winrt::WindowsUdk::UI::Shell::IDesktopVisualExtension>,
      &v3);
    v4 = v3;
    if ( v3 )
       Windows::Foundation::IPropertyValue::`vcall'{96,{flat}}(v3);
    winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v4);
  }
  if ( *a1 )
    winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(a1);
}
