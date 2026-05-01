/*
 * XREFs of ?GetCorrelationId@RemoteSystemDataModel@implementation@Shell@Internal@Windows@winrt@@SA?AUhstring@6@AEBU76@@Z @ 0x18064C4E8
 * Callers:
 *     _lambda_1b883f708510332cacc7ae6dcbc72df7_::operator() @ 0x18063F090 (_lambda_1b883f708510332cacc7ae6dcbc72df7_--operator().c)
 *     _lambda_a1bf07eabb51e841d7b59a4e813e5668_$_ResumeCoro$1::operator() @ 0x18063F280 (_lambda_a1bf07eabb51e841d7b59a4e813e5668_$_ResumeCoro$1--operator().c)
 *     ?SubscribeToLogon@CloudPCComponent@implementation@Shell@Internal@Windows@winrt@@AEAAXXZ @ 0x1806421A4 (-SubscribeToLogon@CloudPCComponent@implementation@Shell@Internal@Windows@winrt@@AEAAXXZ.c)
 *     _lambda_d6825c428197dee9c36f361ea1d02b0a_::operator() @ 0x180659884 (_lambda_d6825c428197dee9c36f361ea1d02b0a_--operator().c)
 *     ?DeactivateRemoteDesktop@RemoteSessionWindowManager@implementation@Shell@Internal@Windows@winrt@@QEAAXAEBUguid@6@@Z @ 0x18065A51C (-DeactivateRemoteDesktop@RemoteSessionWindowManager@implementation@Shell@Internal@Windows@winrt@.c)
 *     ?OnProcessDestroyed@RemoteSessionWindowManager@implementation@Shell@Internal@Windows@winrt@@QEAAXAEBUIInspectable@Foundation@56@AEBI@Z @ 0x18065B2B0 (-OnProcessDestroyed@RemoteSessionWindowManager@implementation@Shell@Internal@Windows@winrt@@QEAA.c)
 *     ?OnWindowDestroyed@RemoteSessionWindowManager@implementation@Shell@Internal@Windows@winrt@@QEAAXAEBUWindowId@UI@56@@Z @ 0x18065B5B0 (-OnWindowDestroyed@RemoteSessionWindowManager@implementation@Shell@Internal@Windows@winrt@@QEAAX.c)
 *     ?CheckAndRaiseEvent@ProcessTracker@implementation@Shell@Internal@Windows@winrt@@AEAAXI@Z @ 0x18066041C (-CheckAndRaiseEvent@ProcessTracker@implementation@Shell@Internal@Windows@winrt@@AEAAXI@Z.c)
 *     ?StartTrackingProcess@ProcessTracker@implementation@Shell@Internal@Windows@winrt@@QEAAXI@Z @ 0x1806606EC (-StartTrackingProcess@ProcessTracker@implementation@Shell@Internal@Windows@winrt@@QEAAXI@Z.c)
 *     ?Execute@SwitchDisconnectedState@implementation@Shell@Internal@Windows@winrt@@UEAAXAEBV?$shared_ptr@URemoteSessionInformation@implementation@Shell@Internal@Windows@winrt@@@std@@W4CloudPCState@3456@@Z @ 0x18066DD00 (-Execute@SwitchDisconnectedState@implementation@Shell@Internal@Windows@winrt@@UEAAXAEBV-$shared_.c)
 *     ?SwitchToRemoteDesktop@SwitchConnectionHandler@implementation@Shell@Internal@Windows@winrt@@UEAAXAEBUguid@6@W4SwitchSource@3456@@Z @ 0x18066F2D0 (-SwitchToRemoteDesktop@SwitchConnectionHandler@implementation@Shell@Internal@Windows@winrt@@UEAA.c)
 *     _lambda_5dd99ac34d6bd03dd8b88786cad3764c_::operator() @ 0x180670CA4 (_lambda_5dd99ac34d6bd03dd8b88786cad3764c_--operator().c)
 *     ?HandleConnectionStateChange@ConnectionHandler@implementation@Shell@Internal@Windows@winrt@@UEAAXAEBV?$shared_ptr@URemoteSessionInformation@implementation@Shell@Internal@Windows@winrt@@@std@@W4CloudPCState@3456@@Z @ 0x180671ED0 (-HandleConnectionStateChange@ConnectionHandler@implementation@Shell@Internal@Windows@winrt@@UEAA.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@U?$map_impl@_KUhstring@winrt@@V?$map@_KUhstring@winrt@@U?$less@_K@std@@V?$allocator@U?$pair@$$CB_KUhstring@winrt@@@std@@@4@@std@@Usingle_threaded_collection_base@impl@2@@impl@winrt@@@winrt@@AEAAXXZ @ 0x1802879A8 (-unconditional_release_ref@-$com_ptr@U-$map_impl@_KUhstring@winrt@@V-$map@_KUhstring@winrt@@U-$l.c)
 *     ?GetFactoryImplObj@implementation@Shell@Internal@Windows@winrt@@YA@XZ @ 0x1802BC584 (-GetFactoryImplObj@implementation@Shell@Internal@Windows@winrt@@YA@XZ.c)
 *     ?GetCorrelationId@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@QEAA?AUhstring@6@AEBU76@@Z @ 0x18064C408 (-GetCorrelationId@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@QEA.c)
 */

winrt::hstring *__fastcall winrt::Windows::Internal::Shell::implementation::RemoteSystemDataModel::GetCorrelationId(
        winrt::hstring *a1,
        __int64 *a2)
{
  RTL_SRWLOCK **FactoryImplObj; // rax
  _QWORD *v6; // [rsp+30h] [rbp+8h] BYREF

  FactoryImplObj = (RTL_SRWLOCK **)winrt::Windows::Internal::Shell::implementation::GetFactoryImplObj((winrt::Windows::Internal::Shell::implementation *)&v6);
  winrt::Windows::Internal::Shell::factory_implementation::RemoteSystemDataModel::GetCorrelationId(
    *FactoryImplObj,
    a1,
    a2);
  if ( v6 )
    winrt::com_ptr<winrt::impl::map_impl<unsigned __int64,winrt::hstring,std::map<unsigned __int64,winrt::hstring>,winrt::impl::single_threaded_collection_base>>::unconditional_release_ref(&v6);
  return a1;
}
