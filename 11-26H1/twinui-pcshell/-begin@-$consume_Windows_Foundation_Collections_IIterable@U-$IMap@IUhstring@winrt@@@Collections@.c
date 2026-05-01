/*
 * XREFs of ?begin@?$consume_Windows_Foundation_Collections_IIterable@U?$IMap@IUhstring@winrt@@@Collections@Foundation@Windows@winrt@@U?$IKeyValuePair@IUhstring@winrt@@@2345@@impl@winrt@@QEBA@XZ @ 0x18065343C
 * Callers:
 *     ?PerformLocalAction@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@QEAAXAEBW4RemoteDesktopLocalAction@3456@@Z @ 0x18064EE38 (-PerformLocalAction@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@Q.c)
 *     ?SwitchToRemoteDesktop@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@QEAAXAEBUhstring@6@@Z @ 0x180651114 (-SwitchToRemoteDesktop@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18002633C (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?IsManagedByOrganization@?$consume_Windows_Internal_Shell_TouchKeyboard_ITapInvokeSetting@UITapInvokeSetting@TouchKeyboard@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x1801E3D30 (-IsManagedByOrganization@-$consume_Windows_Internal_Shell_TouchKeyboard_ITapInvokeSetting@UITapI.c)
 *     ?First@?$consume_Windows_Foundation_Collections_IIterable@U?$IMap@IUhstring@winrt@@@Collections@Foundation@Windows@winrt@@U?$IKeyValuePair@IUhstring@winrt@@@2345@@impl@winrt@@QEBA@XZ @ 0x18064BD44 (-First@-$consume_Windows_Foundation_Collections_IIterable@U-$IMap@IUhstring@winrt@@@Collections@.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall winrt::impl::consume_Windows_Foundation_Collections_IIterable<winrt::Windows::Foundation::Collections::IMap<unsigned int,winrt::hstring>,winrt::Windows::Foundation::Collections::IKeyValuePair<unsigned int,winrt::hstring>>::begin(
        __int64 (__fastcall ****a1)(_QWORD, __int64 *, _QWORD **),
        __int64 *a2)
{
  __int64 v3; // rbx
  __int64 v4; // rax
  __int64 *v6; // [rsp+48h] [rbp+10h] BYREF

  v6 = a2;
  v3 = 0LL;
  winrt::impl::consume_Windows_Foundation_Collections_IIterable<winrt::Windows::Foundation::Collections::IMap<unsigned int,winrt::hstring>,winrt::Windows::Foundation::Collections::IKeyValuePair<unsigned int,winrt::hstring>>::First(
    a1,
    &v6);
  if ( winrt::impl::consume_Windows_Internal_Shell_TouchKeyboard_ITapInvokeSetting<winrt::Windows::Internal::Shell::TouchKeyboard::ITapInvokeSetting>::IsManagedByOrganization((__int64 *)&v6) )
  {
    v4 = (__int64)v6;
    v6 = 0LL;
    v3 = v4;
  }
  *a2 = v3;
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v6);
  return a2;
}
