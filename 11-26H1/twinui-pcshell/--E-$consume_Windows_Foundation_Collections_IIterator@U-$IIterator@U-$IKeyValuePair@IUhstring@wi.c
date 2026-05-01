/*
 * XREFs of ??E?$consume_Windows_Foundation_Collections_IIterator@U?$IIterator@U?$IKeyValuePair@IUhstring@winrt@@@Collections@Foundation@Windows@winrt@@@Collections@Foundation@Windows@winrt@@U?$IKeyValuePair@IUhstring@winrt@@@2345@@impl@winrt@@QEAA@XZ @ 0x18064A5F8
 * Callers:
 *     ?PerformLocalAction@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@QEAAXAEBW4RemoteDesktopLocalAction@3456@@Z @ 0x18064EE38 (-PerformLocalAction@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@Q.c)
 *     ?SwitchToRemoteDesktop@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@QEAAXAEBUhstring@6@@Z @ 0x180651114 (-SwitchToRemoteDesktop@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18002633C (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ??4ShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@QEAAAEAU01234@$$QEAU01234@@Z @ 0x180054B64 (--4ShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@QEAAAEAU01234@$$QEAU01234@@Z.c)
 *     ?GetResults@?$consume_Windows_Foundation_IAsyncOperation@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@_N@impl@winrt@@QEBA@XZ @ 0x180208578 (-GetResults@-$consume_Windows_Foundation_IAsyncOperation@U-$IAsyncOperation@_N@Foundation@Window.c)
 */

__int64 *__fastcall winrt::impl::consume_Windows_Foundation_Collections_IIterator<winrt::Windows::Foundation::Collections::IIterator<winrt::Windows::Foundation::Collections::IKeyValuePair<unsigned int,winrt::hstring>>,winrt::Windows::Foundation::Collections::IKeyValuePair<unsigned int,winrt::hstring>>::operator++(
        __int64 *a1)
{
  __int64 v3; // [rsp+30h] [rbp+8h] BYREF

  if ( !winrt::impl::consume_Windows_Foundation_IAsyncOperation<winrt::Windows::Foundation::IAsyncOperation<bool>,bool>::GetResults(a1) )
  {
    v3 = 0LL;
    winrt::WindowsUdk::UI::Shell::ShellViewCoordinator::operator=(a1, &v3);
    winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v3);
  }
  return a1;
}
