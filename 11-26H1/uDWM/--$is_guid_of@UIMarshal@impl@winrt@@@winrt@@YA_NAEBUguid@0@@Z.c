/*
 * XREFs of ??$is_guid_of@UIMarshal@impl@winrt@@@winrt@@YA_NAEBUguid@0@@Z @ 0x18008BA4C
 * Callers:
 *     ?query_interface_common@?$root_implements@UWindowMoveResizeCrossfadeTransition@implementation@Private@Transitions@Udwm@winrt@@U13456@@impl@winrt@@AEAAHAEBUguid@3@PEAPEAX@Z @ 0x18002E630 (-query_interface_common@-$root_implements@UWindowMoveResizeCrossfadeTransition@implementation@Pr.c)
 *     ?query_interface_common@?$root_implements@Uiterator@?$iterable_base@U?$vector_impl@UUserResizeVisual@Transitions@Udwm@winrt@@V?$vector@UUserResizeVisual@Transitions@Udwm@winrt@@V?$allocator@UUserResizeVisual@Transitions@Udwm@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@4@@impl@winrt@@UUserResizeVisual@Transitions@Udwm@3@Ucollection_version@23@@winrt@@U?$IIterator@UUserResizeVisual@Transitions@Udwm@winrt@@@Collections@Foundation@Windows@3@@impl@winrt@@AEAAHAEBUguid@3@PEAPEAX@Z @ 0x18002E6EC (-query_interface_common@-$root_implements@Uiterator@-$iterable_base@U-$vector_impl@UUserResizeVi.c)
 *     ?query_interface_common@?$root_implements@UTopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@U1345@UITransitionAnimationVisualNative@@@impl@winrt@@AEAAHAEBUguid@3@PEAPEAX@Z @ 0x18002E978 (-query_interface_common@-$root_implements@UTopLevelWindow3DWrapper@implementation@Transitions@Ud.c)
 *     ?QueryInterface@?$weak_ref@$00$00@impl@winrt@@UEAAHAEBUguid@3@PEAPEAX@Z @ 0x1800D11F0 (-QueryInterface@-$weak_ref@$00$00@impl@winrt@@UEAAHAEBUguid@3@PEAPEAX@Z.c)
 *     ?QueryInterface@marshaler@?1??make_marshaler@impl@winrt@@YAHPEAUtype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@34@PEAPEAX@Z@UEAAHAEBUguid@4@1@Z @ 0x1800D12C0 (-QueryInterface@marshaler@-1--make_marshaler@impl@winrt@@YAHPEAUtype@-$abi@UIUnknown@Foundation@.c)
 *     ?query_interface_common@?$root_implements@UAnimatedTransitionVisualWrapper@implementation@Transitions@Udwm@winrt@@U1345@UITransitionAnimationVisualNative@@@impl@winrt@@AEAAHAEBUguid@3@PEAPEAX@Z @ 0x1800D174C (-query_interface_common@-$root_implements@UAnimatedTransitionVisualWrapper@implementation@Transi.c)
 *     ?query_interface@implements_delegate_base@impl@winrt@@QEAAIAEBUguid@3@PEAPEAXPEAUtype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@23@0@Z @ 0x1800D6240 (-query_interface@implements_delegate_base@impl@winrt@@QEAAIAEBUguid@3@PEAPEAXPEAUtype@-$abi@UIUn.c)
 *     ?query_interface_common@?$root_implements@UWindowJointResizeTransition@implementation@Private@Transitions@Udwm@winrt@@U13456@UIBitmapManager@@@impl@winrt@@AEAAHAEBUguid@3@PEAPEAX@Z @ 0x1800D81AC (-query_interface_common@-$root_implements@UWindowJointResizeTransition@implementation@Private@Tr.c)
 * Callees:
 *     <none>
 */

bool __fastcall winrt::is_guid_of<winrt::impl::IMarshal>(_QWORD *a1)
{
  __int64 v1; // rax

  v1 = *a1 - winrt::impl::guid_v<winrt::impl::IMarshal>;
  if ( *a1 == winrt::impl::guid_v<winrt::impl::IMarshal> )
    v1 = a1[1] - 0x46000000000000C0LL;
  return v1 == 0;
}
