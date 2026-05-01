/*
 * XREFs of ??1?$factory_event_revoker@UIRemoteSystemDataModelStatics@Shell@Internal@Windows@winrt@@$MP8type@?$abi@UIRemoteSystemDataModelStatics@Shell@Internal@Windows@winrt@@X@impl@5@EAAHUevent_token@5@@_E1??_96785@$BLA@AA@impl@winrt@@QEAA@XZ @ 0x180623E90
 * Callers:
 *     ??1RemoteSessionWindowManager@implementation@Shell@Internal@Windows@winrt@@UEAA@XZ @ 0x18062F8C0 (--1RemoteSessionWindowManager@implementation@Shell@Internal@Windows@winrt@@UEAA@XZ.c)
 *     ?SubsribeToTimeOutInfoChangedEvent@RemoteSessionWindowManager@implementation@Shell@Internal@Windows@winrt@@AEAAXXZ @ 0x180636808 (-SubsribeToTimeOutInfoChangedEvent@RemoteSessionWindowManager@implementation@Shell@Internal@Wind.c)
 *     _winrt::Windows::Internal::Shell::implementation::RemoteSessionWindowManager::RemoteSessionWindowManager_::_1_::dtor$10 @ 0x1806B851E (_winrt--Windows--Internal--Shell--implementation--RemoteSessionWindowManager--Remot_ea_1806B851E.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18005D244 (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?InternalAddRef@?$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ @ 0x1800A4EAC (-InternalAddRef@-$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??_9type@?$abi@UISnapFlyoutInstance@SnapComponent@Shell@Internal@Windows@winrt@@X@impl@winrt@@$BLA@AA @ 0x18058E6CC (--_9type@-$abi@UISnapFlyoutInstance@SnapComponent@Shell@Internal@Windows@winrt@@X@i_ea_18058E6CC.c)
 */

void __fastcall __1__factory_event_revoker_UIRemoteSystemDataModelStatics_Shell_Internal_Windows_winrt___MP8type___abi_UIRemoteSystemDataModelStatics_Shell_Internal_Windows_winrt__X_impl_5_EAAHUevent_token_5___E1___96785__BLA_AA_impl_winrt__QEAA_XZ(
        winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *this)
{
  __int64 v1; // rbx
  __int64 v3; // [rsp+30h] [rbp+8h] BYREF

  v1 = *(_QWORD *)this;
  if ( *(_QWORD *)this )
  {
    v3 = *(_QWORD *)this;
    Microsoft::WRL::ComPtr<IAppLayoutOperationItem>::InternalAddRef(&v3);
     winrt::impl::abi<winrt::Windows::Internal::Shell::SnapComponent::ISnapFlyoutInstance,void>::type::`vcall'{176,{flat}}(v1);
    winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v3);
  }
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension(this);
}
