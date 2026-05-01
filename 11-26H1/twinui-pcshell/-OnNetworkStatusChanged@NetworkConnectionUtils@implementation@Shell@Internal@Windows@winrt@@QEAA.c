/*
 * XREFs of ?OnNetworkStatusChanged@NetworkConnectionUtils@implementation@Shell@Internal@Windows@winrt@@QEAAXAEBUIInspectable@Foundation@56@@Z @ 0x180670840
 * Callers:
 *     <none>
 * Callees:
 *     ??$?R$$T$$T@?$event@U?$EventHandler@UIInspectable@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@@winrt@@QEAAXAEB$$T0@Z @ 0x180333888 (--$-R$$T$$T@-$event@U-$EventHandler@UIInspectable@Foundation@Windows@winrt@@@Foundation@Windows@.c)
 */

void __fastcall winrt::Windows::Internal::Shell::implementation::NetworkConnectionUtils::OnNetworkStatusChanged(
        RTL_SRWLOCK *this,
        struct IInspectable *a2)
{
  winrt::event<winrt::Windows::Foundation::EventHandler<winrt::Windows::Foundation::IInspectable>>::operator()<std::nullptr_t,std::nullptr_t>(
    this + 3,
    a2);
}
