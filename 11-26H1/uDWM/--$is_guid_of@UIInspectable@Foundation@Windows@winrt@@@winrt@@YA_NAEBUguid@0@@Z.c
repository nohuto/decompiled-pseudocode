/*
 * XREFs of ??$is_guid_of@UIInspectable@Foundation@Windows@winrt@@@winrt@@YA_NAEBUguid@0@@Z @ 0x18008BC84
 * Callers:
 *     ?query_interface_common@?$root_implements@UWindowMoveResizeCrossfadeTransition@implementation@Private@Transitions@Udwm@winrt@@U13456@@impl@winrt@@AEAAHAEBUguid@3@PEAPEAX@Z @ 0x18002E630 (-query_interface_common@-$root_implements@UWindowMoveResizeCrossfadeTransition@implementation@Pr.c)
 *     ?query_interface_common@?$root_implements@Uiterator@?$iterable_base@U?$vector_impl@UUserResizeVisual@Transitions@Udwm@winrt@@V?$vector@UUserResizeVisual@Transitions@Udwm@winrt@@V?$allocator@UUserResizeVisual@Transitions@Udwm@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@4@@impl@winrt@@UUserResizeVisual@Transitions@Udwm@3@Ucollection_version@23@@winrt@@U?$IIterator@UUserResizeVisual@Transitions@Udwm@winrt@@@Collections@Foundation@Windows@3@@impl@winrt@@AEAAHAEBUguid@3@PEAPEAX@Z @ 0x18002E6EC (-query_interface_common@-$root_implements@Uiterator@-$iterable_base@U-$vector_impl@UUserResizeVi.c)
 *     ?query_interface_common@?$root_implements@UTopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@U1345@UITransitionAnimationVisualNative@@@impl@winrt@@AEAAHAEBUguid@3@PEAPEAX@Z @ 0x18002E978 (-query_interface_common@-$root_implements@UTopLevelWindow3DWrapper@implementation@Transitions@Ud.c)
 *     ?query_interface_common@?$root_implements@UAnimatedTransitionVisualWrapper@implementation@Transitions@Udwm@winrt@@U1345@UITransitionAnimationVisualNative@@@impl@winrt@@AEAAHAEBUguid@3@PEAPEAX@Z @ 0x1800D174C (-query_interface_common@-$root_implements@UAnimatedTransitionVisualWrapper@implementation@Transi.c)
 *     ?query_interface_common@?$root_implements@UWindowJointResizeTransition@implementation@Private@Transitions@Udwm@winrt@@U13456@UIBitmapManager@@@impl@winrt@@AEAAHAEBUguid@3@PEAPEAX@Z @ 0x1800D81AC (-query_interface_common@-$root_implements@UWindowJointResizeTransition@implementation@Private@Tr.c)
 * Callees:
 *     <none>
 */

bool __fastcall winrt::is_guid_of<winrt::Windows::Foundation::IInspectable>(_QWORD *a1)
{
  __int64 v1; // rax

  v1 = *a1 - winrt::impl::guid_v<winrt::Windows::Foundation::IInspectable>;
  if ( *a1 == winrt::impl::guid_v<winrt::Windows::Foundation::IInspectable> )
    v1 = a1[1] + 0x6FE1EF9A5528A564LL;
  return v1 == 0;
}
