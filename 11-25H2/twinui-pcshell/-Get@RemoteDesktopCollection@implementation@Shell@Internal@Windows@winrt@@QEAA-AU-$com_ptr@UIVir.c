/*
 * XREFs of ?Get@RemoteDesktopCollection@implementation@Shell@Internal@Windows@winrt@@QEAA?AU?$com_ptr@UIVirtualDesktop@@@6@AEBUhstring@6@@Z @ 0x180644E18
 * Callers:
 *     ?DeactivateDisabledRemoteDesktop@RemoteSessionWindowManager@implementation@Shell@Internal@Windows@winrt@@QEAAXAEBUhstring@6@@Z @ 0x1806346CC (-DeactivateDisabledRemoteDesktop@RemoteSessionWindowManager@implementation@Shell@Internal@Window.c)
 *     _lambda_d12d1524a0e5f53c0c1207645a73e7d0_::operator() @ 0x1806454E8 (_lambda_d12d1524a0e5f53c0c1207645a73e7d0_--operator().c)
 *     ?OnRemoteSessionDisconnected@SwitchProviderActivator@implementation@Shell@Internal@Windows@winrt@@UEAAXAEBUhstring@6@@Z @ 0x1806460B0 (-OnRemoteSessionDisconnected@SwitchProviderActivator@implementation@Shell@Internal@Windows@winrt.c)
 *     ?AssociateAppWindowWithRemoteVirtualDesktop@SwitchConnectionHandler@implementation@Shell@Internal@Windows@winrt@@UEAAXAEBUhstring@6@_K@Z @ 0x180646FD0 (-AssociateAppWindowWithRemoteVirtualDesktop@SwitchConnectionHandler@implementation@Shell@Interna.c)
 *     winrt::Windows::Internal::Shell::implementation::SwitchConnectionHandler::CloseCloudPCConnection$_ResumeCoro$1 @ 0x180647150 (winrt--Windows--Internal--Shell--implementation--SwitchConnectionHandler--CloseClou_ea_180647150.c)
 *     ?Execute@SwitchConnectedState@implementation@Shell@Internal@Windows@winrt@@UEAAXAEBV?$shared_ptr@URemoteSessionInformation@implementation@Shell@Internal@Windows@winrt@@@std@@W4CloudPCState@3456@@Z @ 0x180647C30 (-Execute@SwitchConnectedState@implementation@Shell@Internal@Windows@winrt@@UEAAXAEBV-$shared_ptr.c)
 *     ?HandleConnectionStateChange@SwitchConnectionHandler@implementation@Shell@Internal@Windows@winrt@@UEAAXAEBV?$shared_ptr@URemoteSessionInformation@implementation@Shell@Internal@Windows@winrt@@@std@@W4CloudPCState@3456@@Z @ 0x1806484E0 (-HandleConnectionStateChange@SwitchConnectionHandler@implementation@Shell@Internal@Windows@winrt.c)
 *     ?SetForegroundToLastRegistedProviderWindow@SwitchConnectStateBase@implementation@Shell@Internal@Windows@winrt@@IEAAXAEBUhstring@6@@Z @ 0x180648AD4 (-SetForegroundToLastRegistedProviderWindow@SwitchConnectStateBase@implementation@Shell@Internal@.c)
 *     ?SwitchToDesktopForSystem@SwitchConnectStateBase@implementation@Shell@Internal@Windows@winrt@@IEAAXAEBUhstring@6@@Z @ 0x1806490E4 (-SwitchToDesktopForSystem@SwitchConnectStateBase@implementation@Shell@Internal@Windows@winrt@@IE.c)
 *     ?SwitchToRemoteDesktop@SwitchConnectionHandler@implementation@Shell@Internal@Windows@winrt@@UEAAXAEBUguid@6@W4SwitchSource@3456@@Z @ 0x1806493B0 (-SwitchToRemoteDesktop@SwitchConnectionHandler@implementation@Shell@Internal@Windows@winrt@@UEAA.c)
 *     ?UpdateRemoteDesktopName@SwitchConnectionHandler@implementation@Shell@Internal@Windows@winrt@@UEAAXAEBUhstring@6@0@Z @ 0x180649810 (-UpdateRemoteDesktopName@SwitchConnectionHandler@implementation@Shell@Internal@Windows@winrt@@UE.c)
 * Callees:
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockShared@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x180101060 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseS.c)
 *     ?LockShared@SRWLock@Wrappers@WRL@Microsoft@@SA?AVSyncLockShared@Details@234@PEAU_RTL_SRWLOCK@@@Z @ 0x18012BBCC (-LockShared@SRWLock@Wrappers@WRL@Microsoft@@SA-AVSyncLockShared@Details@234@PEAU_RTL_SRWLOCK@@@Z.c)
 *     ?InternalAddRef@?$ComPtr@UITaskDataArbiter@DataEngine@TaskFlow@Shell@Internal@Windows@@@WRL@Microsoft@@IEBAXXZ @ 0x1802CB234 (-InternalAddRef@-$ComPtr@UITaskDataArbiter@DataEngine@TaskFlow@Shell@Internal@Windows@@@WRL@Micr.c)
 *     ??$find@X@?$_Hash@V?$_Umap_traits@Uhstring@winrt@@V?$shared_ptr@URemoteSessionInformation@implementation@Shell@Internal@Windows@winrt@@@std@@V?$_Uhash_compare@Uhstring@winrt@@U?$hash@Uhstring@winrt@@@std@@U?$equal_to@Uhstring@winrt@@@4@@4@V?$allocator@U?$pair@$$CBUhstring@winrt@@V?$shared_ptr@URemoteSessionInformation@implementation@Shell@Internal@Windows@winrt@@@std@@@std@@@4@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUhstring@winrt@@V?$shared_ptr@URemoteSessionInformation@implementation@Shell@Internal@Windows@winrt@@@std@@@std@@@std@@@std@@@1@AEBUhstring@winrt@@@Z @ 0x1806312D8 (--$find@X@-$_Hash@V-$_Umap_traits@Uhstring@winrt@@V-$shared_ptr@URemoteSessionInformation@implem.c)
 */

__int64 *__fastcall winrt::Windows::Internal::Shell::implementation::RemoteDesktopCollection::Get(
        RTL_SRWLOCK *a1,
        __int64 *a2,
        __int64 *a3)
{
  RTL_SRWLOCK *v7; // [rsp+30h] [rbp+8h] BYREF
  __int64 *v8; // [rsp+48h] [rbp+20h] BYREF

  Microsoft::WRL::Wrappers::SRWLock::LockShared(&v7, a1);
  std::_Hash<std::_Umap_traits<winrt::hstring,std::shared_ptr<winrt::Windows::Internal::Shell::implementation::RemoteSessionInformation>,std::_Uhash_compare<winrt::hstring,std::hash<winrt::hstring>,std::equal_to<winrt::hstring>>,std::allocator<std::pair<winrt::hstring const,std::shared_ptr<winrt::Windows::Internal::Shell::implementation::RemoteSessionInformation>>>,0>>::find<void>(
    &a1[1].Ptr,
    &v8,
    a3);
  if ( v8 == a1[2].Ptr )
  {
    *a2 = 0LL;
  }
  else
  {
    *a2 = v8[3];
    Microsoft::WRL::ComPtr<Windows::Internal::Shell::TaskFlow::DataEngine::ITaskDataArbiter>::InternalAddRef(a2);
  }
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>(&v7);
  return a2;
}
