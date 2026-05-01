/*
 * XREFs of ?unconditional_release_ref@?$com_ptr@U?$weak_ref@$00$00@impl@winrt@@@winrt@@AEAAXXZ @ 0x1802D9778
 * Callers:
 *     ?make_weak_ref@?$root_implements@Upromise_type@?$coroutine_traits@UIAsyncAction@Foundation@Windows@winrt@@PEAVLockScreenWidgetPackageHelperBase@@Uhstring@4@U64@UPackageVersion@ApplicationModel@34@V?$function@$$A6AXAEBUAppInstallItem@InstallControl@Preview@Store@ApplicationModel@Windows@winrt@@@Z@std@@V9std@@@experimental@std@@UIAsyncAction@Foundation@Windows@winrt@@UIAsyncInfo@678@@impl@winrt@@AEAAPEAUIWeakReferenceSource@23@XZ @ 0x18023320C (-make_weak_ref@-$root_implements@Upromise_type@-$coroutine_traits@UIAsyncAction@Foundation@Windo.c)
 *     ?make_weak_ref@?$root_implements@UXamlApplication_WASDK@implementation@WASDK@XamlExplorerHost@Shell@Internal@Windows@winrt@@U1345678@UIXamlMetadataProvider@Markup@Xaml@UI@Microsoft@8@Ucomposing@8@UIApplicationOverrides@Xaml@UI@Microsoft@8@@impl@winrt@@AEAAPEAUIWeakReferenceSource@23@XZ @ 0x180242BC8 (-make_weak_ref@-$root_implements@UXamlApplication_WASDK@implementation@WASDK@XamlExplorerHost@Sh.c)
 *     winrt::impl::root_implements__anonymous_namespace_::ShellExecuteSite_IServiceProvider_ICreatingProcess_::make_weak_ref @ 0x1803599C8 (winrt--impl--root_implements__anonymous_namespace_--ShellExecuteSite_IServiceProvid_ea_1803599C8.c)
 *     ?make_weak_ref@?$root_implements@UDesktopSnapLayoutManager@implementation@SnapComponent@Shell@Internal@Windows@winrt@@U134567@Ucomposable@7@Ucomposing@7@USnapLayoutManagerExtension@PlatformExtensions@4567@@impl@winrt@@AEAAPEAUIWeakReferenceSource@23@XZ @ 0x1805BBEAC (-make_weak_ref@-$root_implements@UDesktopSnapLayoutManager@implementation@SnapComponent@Shell@In.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::com_ptr<winrt::impl::weak_ref<1,1>>::unconditional_release_ref(volatile signed __int32 **a1)
{
  volatile signed __int32 *v2; // rcx

  v2 = *a1;
  *a1 = 0LL;
  return winrt::impl::weak_ref<1,1>::Release(v2);
}
