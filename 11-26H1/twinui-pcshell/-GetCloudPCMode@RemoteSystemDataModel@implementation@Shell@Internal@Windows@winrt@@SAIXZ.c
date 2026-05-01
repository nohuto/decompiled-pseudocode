/*
 * XREFs of ?GetCloudPCMode@RemoteSystemDataModel@implementation@Shell@Internal@Windows@winrt@@SAIXZ @ 0x18064C3D0
 * Callers:
 *     ??0CloudPCComponent@implementation@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18027BC38 (--0CloudPCComponent@implementation@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ??0RemoteSessionWindowManager@implementation@Shell@Internal@Windows@winrt@@QEAA@AEBV?$shared_ptr@UProviderActivator@implementation@Shell@Internal@Windows@winrt@@@std@@AEBV?$shared_ptr@UConnectionHandler@implementation@Shell@Internal@Windows@winrt@@@7@@Z @ 0x1802A47E8 (--0RemoteSessionWindowManager@implementation@Shell@Internal@Windows@winrt@@QEAA@AEBV-$shared_ptr.c)
 *     _lambda_77e78c927b00fdc94620a558442d73ef_::operator()_winrt::Windows::Internal::Shell::RemoteSystemWindowAddedEventArgs_ @ 0x180655F14 (_lambda_77e78c927b00fdc94620a558442d73ef_--operator()_winrt--Windows--Internal--Shell--RemoteSys.c)
 *     _lambda_3e3d6084102ea12775201c324e2ccf34_::operator() @ 0x180659308 (_lambda_3e3d6084102ea12775201c324e2ccf34_--operator().c)
 *     _lambda_d6825c428197dee9c36f361ea1d02b0a_::operator() @ 0x180659884 (_lambda_d6825c428197dee9c36f361ea1d02b0a_--operator().c)
 *     ?ActivateRemoteDesktopProvider@RemoteSessionWindowManager@implementation@Shell@Internal@Windows@winrt@@QEAAXAEBURemoteDesktopProviderInfo@3456@@Z @ 0x18065A194 (-ActivateRemoteDesktopProvider@RemoteSessionWindowManager@implementation@Shell@Internal@Windows@.c)
 *     ?DeactivateRemoteDesktop@RemoteSessionWindowManager@implementation@Shell@Internal@Windows@winrt@@QEAAXAEBUguid@6@@Z @ 0x18065A51C (-DeactivateRemoteDesktop@RemoteSessionWindowManager@implementation@Shell@Internal@Windows@winrt@.c)
 *     ?OnWindowDestroyed@RemoteSessionWindowManager@implementation@Shell@Internal@Windows@winrt@@QEAAXAEBUWindowId@UI@56@@Z @ 0x18065B5B0 (-OnWindowDestroyed@RemoteSessionWindowManager@implementation@Shell@Internal@Windows@winrt@@QEAAX.c)
 *     ?RaiseCPCProviderAppClosedTelemetryEvent@SwitchConnectionHandler@implementation@Shell@Internal@Windows@winrt@@AEAAXW4DisconnectSource@23456@AEBUhstring@6@1_N@Z @ 0x18066E58C (-RaiseCPCProviderAppClosedTelemetryEvent@SwitchConnectionHandler@implementation@Shell@Internal@W.c)
 *     _lambda_5dd99ac34d6bd03dd8b88786cad3764c_::operator() @ 0x180670CA4 (_lambda_5dd99ac34d6bd03dd8b88786cad3764c_--operator().c)
 *     ?HandleConnectionStateChange@ConnectionHandler@implementation@Shell@Internal@Windows@winrt@@UEAAXAEBV?$shared_ptr@URemoteSessionInformation@implementation@Shell@Internal@Windows@winrt@@@std@@W4CloudPCState@3456@@Z @ 0x180671ED0 (-HandleConnectionStateChange@ConnectionHandler@implementation@Shell@Internal@Windows@winrt@@UEAA.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@U?$map_impl@_KUhstring@winrt@@V?$map@_KUhstring@winrt@@U?$less@_K@std@@V?$allocator@U?$pair@$$CB_KUhstring@winrt@@@std@@@4@@std@@Usingle_threaded_collection_base@impl@2@@impl@winrt@@@winrt@@AEAAXXZ @ 0x1802879A8 (-unconditional_release_ref@-$com_ptr@U-$map_impl@_KUhstring@winrt@@V-$map@_KUhstring@winrt@@U-$l.c)
 *     ?GetFactoryImplObj@implementation@Shell@Internal@Windows@winrt@@YA@XZ @ 0x1802BC584 (-GetFactoryImplObj@implementation@Shell@Internal@Windows@winrt@@YA@XZ.c)
 */

__int64 winrt::Windows::Internal::Shell::implementation::RemoteSystemDataModel::GetCloudPCMode(void)
{
  unsigned int v0; // ebx
  _QWORD *v2; // [rsp+30h] [rbp+8h] BYREF

  v0 = *(_DWORD *)(*(_QWORD *)winrt::Windows::Internal::Shell::implementation::GetFactoryImplObj((winrt::Windows::Internal::Shell::implementation *)&v2)
                 + 44LL);
  if ( v2 )
    winrt::com_ptr<winrt::impl::map_impl<unsigned __int64,winrt::hstring,std::map<unsigned __int64,winrt::hstring>,winrt::impl::single_threaded_collection_base>>::unconditional_release_ref(&v2);
  return v0;
}
