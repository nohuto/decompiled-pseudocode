/*
 * XREFs of ?begin@?$consume_Windows_Foundation_Collections_IIterable@U?$IMap@IUhstring@winrt@@@Collections@Foundation@Windows@winrt@@U?$IKeyValuePair@IUhstring@winrt@@@2345@@impl@winrt@@QEBA@XZ @ 0x18062DA50
 * Callers:
 *     ?PerformLocalAction@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@QEAAXAEBW4RemoteDesktopLocalAction@3456@@Z @ 0x180629388 (-PerformLocalAction@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@Q.c)
 *     ?SwitchToRemoteDesktop@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@QEAAXAEBUhstring@6@@Z @ 0x18062B6F4 (-SwitchToRemoteDesktop@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18005D244 (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?IsManagedByOrganization@?$consume_Windows_Internal_Shell_TouchKeyboard_ITapInvokeSetting@UITapInvokeSetting@TouchKeyboard@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x1801EE130 (-IsManagedByOrganization@-$consume_Windows_Internal_Shell_TouchKeyboard_ITapInvokeSetting@UITapI.c)
 *     ?First@?$consume_Windows_Foundation_Collections_IIterable@U?$IMap@IUhstring@winrt@@@Collections@Foundation@Windows@winrt@@U?$IKeyValuePair@IUhstring@winrt@@@2345@@impl@winrt@@QEBA@XZ @ 0x180625F9C (-First@-$consume_Windows_Foundation_Collections_IIterable@U-$IMap@IUhstring@winrt@@@Collections@.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall winrt::impl::consume_Windows_Foundation_Collections_IIterable<winrt::Windows::Foundation::Collections::IMap<unsigned int,winrt::hstring>,winrt::Windows::Foundation::Collections::IKeyValuePair<unsigned int,winrt::hstring>>::begin(
        __int64 (__fastcall ****a1)(_QWORD, __int64 *, __int64 *),
        __int64 *a2)
{
  __int64 v3; // rax
  __int64 *v5; // [rsp+48h] [rbp+10h] BYREF

  v5 = a2;
  winrt::impl::consume_Windows_Foundation_Collections_IIterable<winrt::Windows::Foundation::Collections::IMap<unsigned int,winrt::hstring>,winrt::Windows::Foundation::Collections::IKeyValuePair<unsigned int,winrt::hstring>>::First(
    a1,
    &v5);
  if ( winrt::impl::consume_Windows_Internal_Shell_TouchKeyboard_ITapInvokeSetting<winrt::Windows::Internal::Shell::TouchKeyboard::ITapInvokeSetting>::IsManagedByOrganization((__int64 *)&v5) )
  {
    v3 = (__int64)v5;
    v5 = 0LL;
    *a2 = v3;
  }
  else
  {
    *a2 = 0LL;
  }
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v5);
  return a2;
}
