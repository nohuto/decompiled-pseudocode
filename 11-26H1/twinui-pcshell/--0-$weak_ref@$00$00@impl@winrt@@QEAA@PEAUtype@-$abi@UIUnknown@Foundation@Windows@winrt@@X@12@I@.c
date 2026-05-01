/*
 * XREFs of ??0?$weak_ref@$00$00@impl@winrt@@QEAA@PEAUtype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@12@I@Z @ 0x1801D1C3C
 * Callers:
 *     ?make_weak_ref@?$root_implements@Upromise_type@?$coroutine_traits@UIAsyncAction@Foundation@Windows@winrt@@PEAVLockScreenWidgetPackageHelperBase@@Uhstring@4@U64@UPackageVersion@ApplicationModel@34@V?$function@$$A6AXAEBUAppInstallItem@InstallControl@Preview@Store@ApplicationModel@Windows@winrt@@@Z@std@@V9std@@@experimental@std@@UIAsyncAction@Foundation@Windows@winrt@@UIAsyncInfo@678@@impl@winrt@@AEAAPEAUIWeakReferenceSource@23@XZ @ 0x18023320C (-make_weak_ref@-$root_implements@Upromise_type@-$coroutine_traits@UIAsyncAction@Foundation@Windo.c)
 *     ?make_weak_ref@?$root_implements@UXamlApplication_WASDK@implementation@WASDK@XamlExplorerHost@Shell@Internal@Windows@winrt@@U1345678@UIXamlMetadataProvider@Markup@Xaml@UI@Microsoft@8@Ucomposing@8@UIApplicationOverrides@Xaml@UI@Microsoft@8@@impl@winrt@@AEAAPEAUIWeakReferenceSource@23@XZ @ 0x180242BC8 (-make_weak_ref@-$root_implements@UXamlApplication_WASDK@implementation@WASDK@XamlExplorerHost@Sh.c)
 *     winrt::impl::root_implements__anonymous_namespace_::ShellExecuteSite_IServiceProvider_ICreatingProcess_::make_weak_ref @ 0x1803599C8 (winrt--impl--root_implements__anonymous_namespace_--ShellExecuteSite_IServiceProvid_ea_1803599C8.c)
 *     ?make_weak_ref@?$root_implements@UDesktopSnapLayoutManager@implementation@SnapComponent@Shell@Internal@Windows@winrt@@U134567@Ucomposable@7@Ucomposing@7@USnapLayoutManagerExtension@PlatformExtensions@4567@@impl@winrt@@AEAAPEAUIWeakReferenceSource@23@XZ @ 0x1805BBEAC (-make_weak_ref@-$root_implements@UDesktopSnapLayoutManager@implementation@SnapComponent@Shell@In.c)
 * Callees:
 *     ??0?$atomic@I@std@@QEAA@I@Z @ 0x1800DC258 (--0-$atomic@I@std@@QEAA@I@Z.c)
 */

__int64 __fastcall winrt::impl::weak_ref<1,1>::weak_ref<1,1>(_QWORD *a1, __int64 a2, int a3)
{
  __int64 v3; // r9
  __int64 v4; // r9

  _InterlockedIncrement(&`winrt::get_module_lock'::`2'::s_lock);
  a1[1] = &winrt::impl::weak_source<0,1>::`vftable';
  a1[2] = a2;
  *a1 = &winrt::impl::weak_ref<1,1>::`vftable';
  std::atomic<unsigned int>::atomic<unsigned int>((__int64)(a1 + 3), a3);
  std::atomic<unsigned int>::atomic<unsigned int>(v3 + 28, 1);
  return v4;
}
