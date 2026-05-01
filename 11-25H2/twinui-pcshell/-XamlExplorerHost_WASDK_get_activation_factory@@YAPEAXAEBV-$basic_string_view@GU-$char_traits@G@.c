/*
 * XREFs of ?XamlExplorerHost_WASDK_get_activation_factory@@YAPEAXAEBV?$basic_string_view@GU?$char_traits@G@std@@@std@@@Z @ 0x180447E38
 * Callers:
 *     ?winrt_get_activation_factory@@YAPEAXAEBV?$basic_string_view@GU?$char_traits@G@std@@@std@@@Z @ 0x18017A1D4 (-winrt_get_activation_factory@@YAPEAXAEBV-$basic_string_view@GU-$char_traits@G@std@@@std@@@Z.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18005D244 (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ??$equal@V?$reverse_iterator@V?$_String_view_iterator@U?$char_traits@G@std@@@std@@@std@@V12@U?$equal_to@X@2@@std@@YA_NV?$reverse_iterator@V?$_String_view_iterator@U?$char_traits@G@std@@@std@@@0@000U?$equal_to@X@0@@Z @ 0x1800B033C (--$equal@V-$reverse_iterator@V-$_String_view_iterator@U-$char_traits@G@std@@@std@@@std@@V12@U-$e.c)
 *     ??$make@UXamlApplication_WASDK@factory_implementation@WASDK@XamlExplorerHost@Shell@Internal@Windows@winrt@@$$V@winrt@@YA?A_PXZ @ 0x180445FC8 (--$make@UXamlApplication_WASDK@factory_implementation@WASDK@XamlExplorerHost@Shell@Internal@Wind.c)
 */

__int64 __fastcall XamlExplorerHost_WASDK_get_activation_factory(__int64 a1)
{
  __int64 *v1; // rax
  __int64 v2; // rbx
  char v4; // [rsp+40h] [rbp+8h] BYREF

  if ( !std::equal<std::reverse_iterator<std::_String_view_iterator<std::char_traits<unsigned short>>>,std::reverse_iterator<std::_String_view_iterator<std::char_traits<unsigned short>>>,std::equal_to<void>>(
          *(_QWORD *)a1 + 2LL * *(_QWORD *)(a1 + 8),
          *(_WORD **)a1,
          (__int64)L"",
          (__int64)L"Windows.Internal.Shell.XamlExplorerHost.WASDK.XamlApplication_WASDK") )
    return 0LL;
  v1 = (__int64 *)winrt::make<winrt::Windows::Internal::Shell::XamlExplorerHost::WASDK::factory_implementation::XamlApplication_WASDK,>((__int64)&v4);
  v2 = *v1;
  *v1 = 0LL;
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v4);
  return v2;
}
