/*
 * XREFs of ??8Foundation@Windows@winrt@@YA_NAEBUIUnknown@012@0@Z @ 0x18002A640
 * Callers:
 *     ?PreTransition@ScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt@@QEAAXW4ShellTransitionType@456@AEBUTransitionState@456@@Z @ 0x1800D6294 (-PreTransition@ScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt@@QEAAXW4Sh.c)
 *     ?IndexOf@?$vector_view_base@U?$vector_impl@UUserResizeVisual@Transitions@Udwm@winrt@@V?$vector@UUserResizeVisual@Transitions@Udwm@winrt@@V?$allocator@UUserResizeVisual@Transitions@Udwm@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@4@@impl@winrt@@UUserResizeVisual@Transitions@Udwm@3@Ucollection_version@23@@winrt@@QEBA_NAEBUUserResizeVisual@Transitions@Udwm@2@AEAI@Z @ 0x1800DE760 (-IndexOf@-$vector_view_base@U-$vector_impl@UUserResizeVisual@Transitions@Udwm@winrt@@V-$vector@U.c)
 * Callees:
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x18002A820 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ??$try_as@UIUnknown@Foundation@Windows@winrt@@Utype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@4@$0A@@impl@winrt@@YA?AUIUnknown@Foundation@Windows@1@PEAUtype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@01@@Z @ 0x18002A8D8 (--$try_as@UIUnknown@Foundation@Windows@winrt@@Utype@-$abi@UIUnknown@Foundation@Windows@winrt@@X@.c)
 */

char __fastcall winrt::Windows::Foundation::operator==(_QWORD *a1, _QWORD *a2)
{
  __int64 v3; // rbx
  bool v4; // di
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF
  __int64 v6; // [rsp+38h] [rbp+10h] BYREF

  if ( *a1 == *a2 )
    return 1;
  if ( !*a1 || !*a2 )
    return 0;
  winrt::impl::try_as<winrt::Windows::Foundation::IUnknown,winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type,0>(&v6);
  winrt::impl::try_as<winrt::Windows::Foundation::IUnknown,winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type,0>(&v5);
  v3 = v6;
  v4 = v6 == v5;
  if ( v5 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v5);
  if ( v3 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v6);
  return v4;
}
