/*
 * XREFs of ?Release@?$weak_ref@$00$00@impl@winrt@@UEAAIXZ @ 0x1800E6270
 * Callers:
 *     winrt::impl::root_implements_std::experimental::coroutine_traits_winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::Storage::Streams::IRandomAccessStreamReference___lambda_97aaaf7ef36fcdfc72e8e00c3e4f3247__const___::promise_type_winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::Storage::Streams::IRandomAccessStreamReference__winrt::Windows::Foundation::IAsyncInfo_::subtract_final_reference @ 0x1800E6AB4 (winrt--impl--root_implements_std--experimental--coroutine_traits_winrt--Windows--Fo_ea_1800E6AB4.c)
 *     ?subtract_final_reference@?$root_implements@UXamlApplication@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@U134567@UIXamlMetadataProvider@Markup@Xaml@UI@67@Ucomposing@7@UIApplicationOverrides@Xaml@UI@67@UIApplicationOverrides2@Xaml@UI@67@@impl@winrt@@IEAAIXZ @ 0x1800E6B58 (-subtract_final_reference@-$root_implements@UXamlApplication@implementation@XamlExplorerHost@She.c)
 *     ?subtract_final_reference@?$root_implements@UTabProxyWindow@implementation@Shell@Internal@Windows@winrt@@UITabProxyWindowInternal@345@@impl@winrt@@IEAAIXZ @ 0x1800E6BA8 (-subtract_final_reference@-$root_implements@UTabProxyWindow@implementation@Shell@Internal@Window.c)
 *     ?Release@?$produce_base@UXamlApplication@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@UIXamlApplication@34567@X@impl@winrt@@UEAAIXZ @ 0x1800E6C50 (-Release@-$produce_base@UXamlApplication@implementation@XamlExplorerHost@Shell@Internal@Windows@.c)
 *     ?Release@?$implements@UTaskGroupsComponent@implementation@TaskGroups@Shell@Internal@Windows@winrt@@Uimmersive_shell_component@7@UITaskGroupHost@34567@UITaskGroupDataModelSingleton@34567@UITaskGroupsComponent@DesktopTaskGroups@4567@UIApplicationViewChangeListener@@V?$VirtualDesktopNotificationBase@UIVirtualDesktopNotification@@@@@winrt@@UEAAKXZ @ 0x1800E6EA0 (-Release@-$implements@UTaskGroupsComponent@implementation@TaskGroups@Shell@Internal@Windows@winr.c)
 *     ?Release@?$implements@UTabProxyWindow@implementation@Shell@Internal@Windows@winrt@@UITabProxyWindowInternal@345@@winrt@@UEAAKXZ @ 0x1800E6F30 (-Release@-$implements@UTabProxyWindow@implementation@Shell@Internal@Windows@winrt@@UITabProxyWin.c)
 *     ?Release@?$root_implements@Uimmersive_shell_component@winrt@@UIObjectWithSite@@UIServiceProvider@@UIImmersiveShellComponent@@UIInspectable@Foundation@Windows@2@@impl@winrt@@QEAAIXZ @ 0x1800E7014 (-Release@-$root_implements@Uimmersive_shell_component@winrt@@UIObjectWithSite@@UIServiceProvider.c)
 *     ?Release@?$implements@UWindowTabHost@implementation@Shell@Internal@Windows@winrt@@U13456@UIWindowTabHost@3456@Uimmersive_shell_component@6@UIApplicationViewChangeListener@@UIImmersiveSettingsCacheNotification@@V?$VirtualDesktopNotificationBase@UIVirtualDesktopNotification@@@@U?$cloaked@UIWindowTabHostInternal@Shell@Internal@Windows@@@6@@winrt@@UEAAKXZ @ 0x1800E70A0 (-Release@-$implements@UWindowTabHost@implementation@Shell@Internal@Windows@winrt@@U13456@UIWindo.c)
 *     ?decrement_strong@?$weak_ref@$00$00@impl@winrt@@QEAAIXZ @ 0x1800E714C (-decrement_strong@-$weak_ref@$00$00@impl@winrt@@QEAAIXZ.c)
 *     ?unconditional_release_ref@?$com_ptr@U?$weak_ref@$00$00@impl@winrt@@@winrt@@AEAAXXZ @ 0x1802D9778 (-unconditional_release_ref@-$com_ptr@U-$weak_ref@$00$00@impl@winrt@@@winrt@@AEAAXXZ.c)
 * Callees:
 *     ??1?$module_lock_updater@$00@impl@winrt@@QEAA@XZ @ 0x1800E68E8 (--1-$module_lock_updater@$00@impl@winrt@@QEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802C92A8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

__int64 __fastcall winrt::impl::weak_ref<1,1>::Release(volatile signed __int32 *a1)
{
  unsigned __int32 v2; // edi

  v2 = _InterlockedDecrement(a1 + 7);
  if ( !v2 && a1 )
  {
    winrt::impl::module_lock_updater<1>::~module_lock_updater<1>(a1 + 4);
    operator delete((void *)a1, (const struct std::nothrow_t *)0x20);
  }
  return v2;
}
