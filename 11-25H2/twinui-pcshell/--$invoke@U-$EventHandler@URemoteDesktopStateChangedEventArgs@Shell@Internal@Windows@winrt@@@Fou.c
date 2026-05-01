/*
 * XREFs of ??$invoke@U?$EventHandler@URemoteDesktopStateChangedEventArgs@Shell@Internal@Windows@winrt@@@Foundation@Windows@winrt@@URemoteSessionWindowManager@implementation@Shell@Internal@34@URemoteDesktopStateChangedEventArgs@7834@@impl@winrt@@YA_NAEBU?$EventHandler@URemoteDesktopStateChangedEventArgs@Shell@Internal@Windows@winrt@@@Foundation@Windows@1@AEBURemoteSessionWindowManager@implementation@Shell@Internal@41@AEBURemoteDesktopStateChangedEventArgs@7841@@Z @ 0x180620DA8
 * Callers:
 *     ??$?RURemoteSessionWindowManager@implementation@Shell@Internal@Windows@winrt@@URemoteDesktopStateChangedEventArgs@2345@@?$event@U?$EventHandler@URemoteDesktopStateChangedEventArgs@Shell@Internal@Windows@winrt@@@Foundation@Windows@winrt@@@winrt@@QEAAXAEBURemoteSessionWindowManager@implementation@Shell@Internal@Windows@1@AEBURemoteDesktopStateChangedEventArgs@4561@@Z @ 0x18061E57C (--$-RURemoteSessionWindowManager@implementation@Shell@Internal@Windows@winrt@@URemoteDesktopStat.c)
 *     ??$?RURemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@URemoteSystemDisplayInfoChangedEventArgs@2345@@?$event@U?$EventHandler@URemoteSystemDisplayInfoChangedEventArgs@Shell@Internal@Windows@winrt@@@Foundation@Windows@winrt@@@winrt@@QEAAXAEBURemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@1@AEBURemoteSystemDisplayInfoChangedEventArgs@4561@@Z @ 0x18061E644 (--$-RURemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@URemoteSystemDi.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x180066570 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ??R?$EventHandler@URemoteSystemStateChangedEventArgs@Shell@Internal@Windows@winrt@@@Foundation@Windows@winrt@@QEBA@AEBUIInspectable@123@AEBURemoteSystemStateChangedEventArgs@Shell@Internal@23@@Z @ 0x1802433C4 (--R-$EventHandler@URemoteSystemStateChangedEventArgs@Shell@Internal@Windows@winrt@@@Foundation@W.c)
 *     ??B?$implements@URemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@UIActivationFactory@Foundation@56@UIRemoteSystemDataModelStatics@3456@Ustatic_lifetime@6@@winrt@@QEBA?AUIInspectable@Foundation@Windows@1@XZ @ 0x1802C8158 (--B-$implements@URemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@UIAc.c)
 */

// Hidden C++ exception states: #wind=1
bool __fastcall winrt::impl::invoke<winrt::Windows::Foundation::EventHandler<winrt::Windows::Internal::Shell::RemoteDesktopStateChangedEventArgs>,winrt::Windows::Internal::Shell::implementation::RemoteSessionWindowManager,winrt::Windows::Internal::Shell::RemoteDesktopStateChangedEventArgs>(
        __int64 **a1,
        __int64 a2,
        __int64 *a3)
{
  winrt::impl *v5; // rcx
  bool result; // al
  __int64 v7; // [rsp+48h] [rbp+20h] BYREF

  winrt::implements<winrt::Windows::Internal::Shell::factory_implementation::RemoteSystemDataModel,winrt::Windows::Foundation::IActivationFactory,winrt::Windows::Internal::Shell::IRemoteSystemDataModelStatics,winrt::static_lifetime>::operator winrt::Windows::Foundation::IInspectable(
    a2,
    (winrt *)&v7);
  try
  {
    winrt::Windows::Foundation::EventHandler<winrt::Windows::Internal::Shell::RemoteSystemStateChangedEventArgs>::operator()(
      a1,
      &v7,
      a3);
    if ( v7 )
      winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(&v7);
    result = 1;
  }
  catch ( ... )
  {
    return winrt::impl::report_failed_invoke(v5);
  }
  return result;
}
