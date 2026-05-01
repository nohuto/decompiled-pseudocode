/*
 * XREFs of ?winrt_get_activation_factory@@YAPEAXAEBV?$basic_string_view@GU?$char_traits@G@std@@@std@@@Z @ 0x18016947C
 * Callers:
 *     ?WINRT_GetActivationFactory@@YAHPEAUHSTRING__@@PEAPEAX@Z @ 0x1801693FC (-WINRT_GetActivationFactory@@YAHPEAUHSTRING__@@PEAPEAX@Z.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18002633C (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?XamlExplorerHost_get_activation_factory@@YAPEAXAEBV?$basic_string_view@GU?$char_traits@G@std@@@std@@@Z @ 0x18003226C (-XamlExplorerHost_get_activation_factory@@YAPEAXAEBV-$basic_string_view@GU-$char_traits@G@std@@@.c)
 *     ?Windows_Internal_Shell_DesktopTaskGroups_get_activation_factory@@YAPEAXAEBV?$basic_string_view@GU?$char_traits@G@std@@@std@@@Z @ 0x1800323C4 (-Windows_Internal_Shell_DesktopTaskGroups_get_activation_factory@@YAPEAXAEBV-$basic_string_view@.c)
 *     ??$make@UDesktopSnapLayoutManager@factory_implementation@SnapComponent@Shell@Internal@Windows@winrt@@$$V@winrt@@YA?A_PXZ @ 0x1801D2FF8 (--$make@UDesktopSnapLayoutManager@factory_implementation@SnapComponent@Shell@Internal@Windows@wi.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_50902630@@@details@wil@@QEAA_NXZ @ 0x1802D7784 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_50902630@@@details@wil@@QEAA_NXZ.c)
 *     ?GamingPosture_get_activation_factory@@YAPEAXAEBV?$basic_string_view@GU?$char_traits@G@std@@@std@@@Z @ 0x18033374C (-GamingPosture_get_activation_factory@@YAPEAXAEBV-$basic_string_view@GU-$char_traits@G@std@@@std.c)
 *     ?XamlExplorerHost_WASDK_get_activation_factory@@YAPEAXAEBV?$basic_string_view@GU?$char_traits@G@std@@@std@@@Z @ 0x1804544AC (-XamlExplorerHost_WASDK_get_activation_factory@@YAPEAXAEBV-$basic_string_view@GU-$char_traits@G@.c)
 */

void *__fastcall winrt_get_activation_factory(_QWORD *a1, __int64 a2, _WORD *a3)
{
  _WORD *v4; // rdx
  _WORD *v5; // rax
  const unsigned __int16 *v6; // r9
  __int64 *v7; // rax
  __int64 v8; // rdi
  void *result; // rax
  char v10; // [rsp+30h] [rbp+8h] BYREF

  v4 = (_WORD *)*a1;
  if ( 2LL * a1[1] == 122 )
  {
    v5 = v4 + 61;
    v6 = L"r";
    while ( v5 != v4 )
    {
      a3 = v5 - 1;
      v5 = a3;
      if ( *a3 != *v6 )
        goto LABEL_8;
      --v6;
    }
    v7 = (__int64 *)winrt::make<winrt::Windows::Internal::Shell::SnapComponent::factory_implementation::DesktopSnapLayoutManager,>(
                      &v10,
                      v4,
                      a3,
                      v6);
    v8 = *v7;
    *v7 = 0LL;
    winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v10);
    if ( v8 )
      return (void *)v8;
  }
LABEL_8:
  result = Windows_Internal_Shell_DesktopTaskGroups_get_activation_factory();
  if ( !result )
  {
    result = XamlExplorerHost_get_activation_factory();
    if ( !result )
    {
      result = (void *)XamlExplorerHost_WASDK_get_activation_factory(a1);
      if ( !result )
      {
        if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_50902630>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_50902630>::GetImpl'::`2'::impl) )
          return (void *)GamingPosture_get_activation_factory(a1);
        else
          return 0LL;
      }
    }
  }
  return result;
}
