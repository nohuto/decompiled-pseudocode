/*
 * XREFs of ?XamlExplorerHost_WASDK_get_activation_factory@@YAPEAXAEBV?$basic_string_view@GU?$char_traits@G@std@@@std@@@Z @ 0x1804544AC
 * Callers:
 *     ?winrt_get_activation_factory@@YAPEAXAEBV?$basic_string_view@GU?$char_traits@G@std@@@std@@@Z @ 0x18016947C (-winrt_get_activation_factory@@YAPEAXAEBV-$basic_string_view@GU-$char_traits@G@std@@@std@@@Z.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18002633C (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?length@?$_WChar_traits@_W@std@@SA_KPEB_W@Z @ 0x18003062C (-length@-$_WChar_traits@_W@std@@SA_KPEB_W@Z.c)
 *     ??$equal@V?$reverse_iterator@V?$_String_view_iterator@U?$char_traits@G@std@@@std@@@std@@V12@U?$equal_to@X@2@@std@@YA_NV?$reverse_iterator@V?$_String_view_iterator@U?$char_traits@G@std@@@std@@@0@000U?$equal_to@X@0@@Z @ 0x180032384 (--$equal@V-$reverse_iterator@V-$_String_view_iterator@U-$char_traits@G@std@@@std@@@std@@V12@U-$e.c)
 *     ??$make@UXamlApplication_WASDK@factory_implementation@WASDK@XamlExplorerHost@Shell@Internal@Windows@winrt@@$$V@winrt@@YA?A_PXZ @ 0x18045270C (--$make@UXamlApplication_WASDK@factory_implementation@WASDK@XamlExplorerHost@Shell@Internal@Wind.c)
 */

__int64 XamlExplorerHost_WASDK_get_activation_factory()
{
  __int64 v0; // rax
  __int64 v1; // r10
  __int64 v2; // r9
  __int64 *v3; // rax
  __int64 v4; // rbx
  char v6; // [rsp+40h] [rbp+8h] BYREF

  v0 = std::_WChar_traits<wchar_t>::length((__int64)L"Windows.Internal.Shell.XamlExplorerHost.WASDK.XamlApplication_WASDK");
  if ( !std::equal<std::reverse_iterator<std::_String_view_iterator<std::char_traits<unsigned short>>>,std::reverse_iterator<std::_String_view_iterator<std::char_traits<unsigned short>>>,std::equal_to<void>>(
          *(_QWORD *)v1 + 2LL * *(_QWORD *)(v1 + 8),
          *(_WORD **)v1,
          v2 + 2 * v0,
          v2) )
    return 0LL;
  v3 = (__int64 *)winrt::make<winrt::Windows::Internal::Shell::XamlExplorerHost::WASDK::factory_implementation::XamlApplication_WASDK,>((__int64)&v6);
  v4 = *v3;
  *v3 = 0LL;
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v6);
  return v4;
}
