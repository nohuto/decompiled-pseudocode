/*
 * XREFs of ?winrt_get_activation_factory@@YAPEAXAEBV?$basic_string_view@GU?$char_traits@G@std@@@std@@@Z @ 0x18017A1D4
 * Callers:
 *     ?WINRT_GetActivationFactory@@YAHPEAUHSTRING__@@PEAPEAX@Z @ 0x18017A15C (-WINRT_GetActivationFactory@@YAHPEAUHSTRING__@@PEAPEAX@Z.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18005D244 (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?XamlExplorerHost_get_activation_factory@@YAPEAXAEBV?$basic_string_view@GU?$char_traits@G@std@@@std@@@Z @ 0x1800AF074 (-XamlExplorerHost_get_activation_factory@@YAPEAXAEBV-$basic_string_view@GU-$char_traits@G@std@@@.c)
 *     ?Windows_Internal_Shell_DesktopTaskGroups_get_activation_factory@@YAPEAXAEBV?$basic_string_view@GU?$char_traits@G@std@@@std@@@Z @ 0x1800B02C0 (-Windows_Internal_Shell_DesktopTaskGroups_get_activation_factory@@YAPEAXAEBV-$basic_string_view@.c)
 *     ??$make@UDesktopSnapLayoutManager@factory_implementation@SnapComponent@Shell@Internal@Windows@winrt@@$$V@winrt@@YA?A_PXZ @ 0x1800B037C (--$make@UDesktopSnapLayoutManager@factory_implementation@SnapComponent@Shell@Internal@Windows@wi.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_50902630@@@details@wil@@QEAA_NXZ @ 0x1802DEA94 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_50902630@@@details@wil@@QEAA_NXZ.c)
 *     ?GamingPosture_get_activation_factory@@YAPEAXAEBV?$basic_string_view@GU?$char_traits@G@std@@@std@@@Z @ 0x180333EDC (-GamingPosture_get_activation_factory@@YAPEAXAEBV-$basic_string_view@GU-$char_traits@G@std@@@std.c)
 *     ?XamlExplorerHost_WASDK_get_activation_factory@@YAPEAXAEBV?$basic_string_view@GU?$char_traits@G@std@@@std@@@Z @ 0x180447E38 (-XamlExplorerHost_WASDK_get_activation_factory@@YAPEAXAEBV-$basic_string_view@GU-$char_traits@G@.c)
 */

__int64 __fastcall winrt_get_activation_factory(_QWORD *a1)
{
  __int64 v2; // r8
  __int64 v3; // rax
  _WORD *i; // r8
  __int64 *v5; // rax
  __int64 v6; // rdi
  __int64 result; // rax
  __int64 v8; // [rsp+30h] [rbp+8h] BYREF

  v2 = 2LL * a1[1];
  v3 = v2 + *a1;
  if ( v2 == 122 )
  {
    for ( i = (_WORD *)(v3 - 2); i + 1 != (_WORD *)*a1; --i )
    {
      if ( *i != *(_WORD *)((char *)i + (_QWORD)L"" - v3) )
        goto LABEL_8;
    }
    v5 = winrt::make<winrt::Windows::Internal::Shell::SnapComponent::factory_implementation::DesktopSnapLayoutManager,>(&v8);
    v6 = *v5;
    *v5 = 0LL;
    winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v8);
    if ( v6 )
      return v6;
  }
LABEL_8:
  result = Windows_Internal_Shell_DesktopTaskGroups_get_activation_factory(a1);
  if ( !result )
  {
    result = (__int64)XamlExplorerHost_get_activation_factory(a1);
    if ( !result )
    {
      result = XamlExplorerHost_WASDK_get_activation_factory(a1);
      if ( !result )
      {
        if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_50902630>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_50902630>::GetImpl'::`2'::impl) )
          return GamingPosture_get_activation_factory(a1);
        else
          return 0LL;
      }
    }
  }
  return result;
}
