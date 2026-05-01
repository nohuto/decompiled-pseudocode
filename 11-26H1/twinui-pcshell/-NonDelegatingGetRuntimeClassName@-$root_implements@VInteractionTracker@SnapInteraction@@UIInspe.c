/*
 * XREFs of ?NonDelegatingGetRuntimeClassName@?$root_implements@VInteractionTracker@SnapInteraction@@UIInspectable@Foundation@Windows@winrt@@UIApplicationViewChangeListener@@UIWindowSnappingEvents@@@impl@winrt@@IEAAHPEAPEAX@Z @ 0x18059FF0C
 * Callers:
 *     ?GetRuntimeClassName@?$produce_base@VInteractionTracker@SnapInteraction@@UIInspectable@Foundation@Windows@winrt@@X@impl@winrt@@UEAAHPEAPEAX@Z @ 0x18059F700 (-GetRuntimeClassName@-$produce_base@VInteractionTracker@SnapInteraction@@UIInspectable@Foundatio.c)
 * Callees:
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x18002E610 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 */

__int64 __fastcall winrt::impl::root_implements<SnapInteraction::InteractionTracker,winrt::Windows::Foundation::IInspectable,IApplicationViewChangeListener,IWindowSnappingEvents>::NonDelegatingGetRuntimeClassName(
        __int64 a1,
        _QWORD *a2)
{
  volatile signed __int32 *v3; // [rsp+30h] [rbp+8h] BYREF

  v3 = 0LL;
  *a2 = 0LL;
  winrt::handle_type<winrt::impl::hstring_traits>::close(&v3);
  return 0LL;
}
