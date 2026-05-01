/*
 * XREFs of ?IsPeopleExperienceHostView@@YA_NPEAUIApplicationView@@@Z @ 0x1804BCA14
 * Callers:
 *     ?GetViewLayoutBehaviorFlags@@YAJPEAUIApplicationView@@PEAW4APP_LAYOUT_ITEM_BEHAVIOR_FLAGS@@@Z @ 0x1804BC870 (-GetViewLayoutBehaviorFlags@@YAJPEAUIApplicationView@@PEAW4APP_LAYOUT_ITEM_BEHAVIOR_FLAGS@@@Z.c)
 *     ?ControlGainedForActivation@TabletModePositioner@@UEAAJPEAUIApplicationView@@W4SHELL_POSITIONER_TYPE@@PEAUIUnknown@@@Z @ 0x180516F40 (-ControlGainedForActivation@TabletModePositioner@@UEAAJPEAUIApplicationView@@W4SHELL_POSITIONER_.c)
 *     ?InitializePosition@TabletModePositioner@@UEAAJPEAUIApplicationView@@PEAUIUnknown@@PEAUIPresentationRequestedArgs@@0@Z @ 0x180519020 (-InitializePosition@TabletModePositioner@@UEAAJPEAUIApplicationView@@PEAUIUnknown@@PEAUIPresenta.c)
 * Callees:
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x1800714CC (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_PeopleBar@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180124B50 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_PeopleBar@@@details@wil@@QEAAX_NW4Reporti.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall IsPeopleExperienceHostView(struct IApplicationView *a1, __int64 a2, __int64 a3)
{
  char v4; // si
  int (__fastcall *v5)(struct IApplicationView *, LPCWCH *); // rbx
  LPCWCH lpString1; // [rsp+30h] [rbp-28h] BYREF
  __int64 v8; // [rsp+38h] [rbp-20h]
  __int64 v9; // [rsp+40h] [rbp-18h]

  v4 = 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_PeopleBar>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_PeopleBar>::GetImpl'::`2'::impl,
    1u,
    a3);
  lpString1 = 0LL;
  v8 = 0LL;
  v9 = 0LL;
  v5 = *(int (__fastcall **)(struct IApplicationView *, LPCWCH *))(*(_QWORD *)a1 + 136LL);
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&lpString1);
  v8 = -1LL;
  v9 = -1LL;
  if ( v5(a1, &lpString1) < 0
    || CompareStringOrdinal(lpString1, -1, L"Microsoft.Windows.PeopleExperienceHost_cw5n1h2txyewy!App", -1, 1) != 2
    && CompareStringOrdinal(lpString1, -1, L"PeopleExperienceHostVS_ccv6fwk6gx0xp!App", -1, 1) != 2 )
  {
    v4 = 0;
  }
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&lpString1);
  return v4;
}
