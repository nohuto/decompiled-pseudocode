/*
 * XREFs of ??1?$factory_event_revoker@UIRemoteSystemDataModelStatics@Shell@Internal@Windows@winrt@@$MP8type@?$abi@UIRemoteSystemDataModelStatics@Shell@Internal@Windows@winrt@@X@impl@5@EAAHUevent_token@5@@_E1??_96785@$BKA@AA@impl@winrt@@QEAA@XZ @ 0x180649B18
 * Callers:
 *     ??0RemoteSessionWindowManager@implementation@Shell@Internal@Windows@winrt@@QEAA@AEBV?$shared_ptr@UProviderActivator@implementation@Shell@Internal@Windows@winrt@@@std@@AEBV?$shared_ptr@UConnectionHandler@implementation@Shell@Internal@Windows@winrt@@@7@@Z @ 0x1802A47E8 (--0RemoteSessionWindowManager@implementation@Shell@Internal@Windows@winrt@@QEAA@AEBV-$shared_ptr.c)
 *     ??1RemoteSessionWindowManager@implementation@Shell@Internal@Windows@winrt@@UEAA@XZ @ 0x180655420 (--1RemoteSessionWindowManager@implementation@Shell@Internal@Windows@winrt@@UEAA@XZ.c)
 *     _winrt::Windows::Internal::Shell::implementation::RemoteSessionWindowManager::RemoteSessionWindowManager_::_1_::dtor$9 @ 0x1806DF8BA (_winrt--Windows--Internal--Shell--implementation--RemoteSessionWindowManager--Remot_ea_1806DF8BA.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18002633C (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?InternalAddRef@?$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ @ 0x1800276DC (-InternalAddRef@-$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??_9type@?$abi@UIRemoteSystemDataModelStatics@Shell@Internal@Windows@winrt@@X@impl@winrt@@$BKA@AA @ 0x1802F0A80 (--_9type@-$abi@UIRemoteSystemDataModelStatics@Shell@Internal@Windows@winrt@@X@impl@winrt@@$BKA@A.c)
 */

void __fastcall __1__factory_event_revoker_UIRemoteSystemDataModelStatics_Shell_Internal_Windows_winrt___MP8type___abi_UIRemoteSystemDataModelStatics_Shell_Internal_Windows_winrt__X_impl_5_EAAHUevent_token_5___E1___96785__BKA_AA_impl_winrt__QEAA_XZ(
        winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *this)
{
  __int64 v1; // rdi
  __int64 v3; // [rsp+30h] [rbp+8h] BYREF

  v1 = *(_QWORD *)this;
  if ( *(_QWORD *)this )
  {
    v3 = *(_QWORD *)this;
    Microsoft::WRL::ComPtr<IAppLayoutOperationItem>::InternalAddRef(&v3);
     winrt::impl::abi<winrt::Windows::Internal::Shell::IRemoteSystemDataModelStatics,void>::type::`vcall'{160,{flat}}(v1);
    winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v3);
  }
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension(this);
}
