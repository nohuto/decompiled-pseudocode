/*
 * XREFs of ?decrement_strong@?$weak_ref@$00$00@impl@winrt@@QEAAIXZ @ 0x1800E714C
 * Callers:
 *     ?subtract_final_reference@?$root_implements@URemoteSystemWindowAddedEventArgs@implementation@Shell@Internal@Windows@winrt@@U13456@@impl@winrt@@IEAAIXZ @ 0x1800E69C8 (-subtract_final_reference@-$root_implements@URemoteSystemWindowAddedEventArgs@implementation@She.c)
 *     ?Release@?$implements@UXamlExplorerHostWindow@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@U134567@UIClosable@Foundation@67@UIXamlExplorerHostWindowLocal@@@winrt@@UEAAKXZ @ 0x1800E6DD0 (-Release@-$implements@UXamlExplorerHostWindow@implementation@XamlExplorerHost@Shell@Internal@Win.c)
 *     winrt::impl::root_implements__anonymous_namespace_::ShellExecuteSite_IServiceProvider_ICreatingProcess_::subtract_final_reference @ 0x1800E7178 (winrt--impl--root_implements__anonymous_namespace_--ShellExecuteSite_IServiceProvider_ICreatingP.c)
 *     ?subtract_final_reference@?$root_implements@VTouchEdgeGestureManager@@UIInspectable@Foundation@Windows@winrt@@UITouchEdgeGesture@@UIGameFocusEvents@@@impl@winrt@@IEAAIXZ @ 0x1801BC754 (-subtract_final_reference@-$root_implements@VTouchEdgeGestureManager@@UIInspectable@Foundation@W.c)
 *     ?subtract_final_reference@?$root_implements@UDesktopSnapLayoutManager@implementation@SnapComponent@Shell@Internal@Windows@winrt@@U134567@Ucomposable@7@Ucomposing@7@USnapLayoutManagerExtension@PlatformExtensions@4567@@impl@winrt@@IEAAIXZ @ 0x1801CA2EC (-subtract_final_reference@-$root_implements@UDesktopSnapLayoutManager@implementation@SnapCompone.c)
 *     ?subtract_final_reference@?$root_implements@UXamlApplication_WASDK@implementation@WASDK@XamlExplorerHost@Shell@Internal@Windows@winrt@@U1345678@UIXamlMetadataProvider@Markup@Xaml@UI@Microsoft@8@Ucomposing@8@UIApplicationOverrides@Xaml@UI@Microsoft@8@@impl@winrt@@IEAAIXZ @ 0x180287D8C (-subtract_final_reference@-$root_implements@UXamlApplication_WASDK@implementation@WASDK@XamlExpl.c)
 *     ?subtract_final_reference@?$root_implements@Upromise_type@?$coroutine_traits@UIAsyncAction@Foundation@Windows@winrt@@PEAVGamingOverlayExperienceManager@@V?$shared_ptr@ULaunchForResultsQueuedOperationData@GamingOverlayExperienceManager@@@std@@@experimental@std@@UIAsyncAction@Foundation@Windows@winrt@@UIAsyncInfo@678@@impl@winrt@@IEAAIXZ @ 0x1803334F0 (-subtract_final_reference@-$root_implements@Upromise_type@-$coroutine_traits@UIAsyncAction@Found.c)
 * Callees:
 *     ?Release@?$weak_ref@$00$00@impl@winrt@@UEAAIXZ @ 0x1800E6270 (-Release@-$weak_ref@$00$00@impl@winrt@@UEAAIXZ.c)
 */

__int64 __fastcall winrt::impl::weak_ref<1,1>::decrement_strong(volatile signed __int32 *a1)
{
  unsigned __int32 v1; // ebx

  v1 = _InterlockedDecrement(a1 + 6);
  if ( !v1 )
    winrt::impl::weak_ref<1,1>::Release(a1);
  return v1;
}
