/*
 * XREFs of ??1?$factory_event_revoker@UIDesktopSnapLayoutManagerStatics@SnapComponent@Shell@Internal@Windows@winrt@@$MP8type@?$abi@UIDesktopSnapLayoutManagerStatics@SnapComponent@Shell@Internal@Windows@winrt@@X@impl@6@EAAHUevent_token@6@@_E1??_97896@$BEA@AA@impl@winrt@@QEAA@XZ @ 0x1802A29AC
 * Callers:
 *     ??0WindowDragInputProvider@@QEAA@PEAUIPrivilegedArrangementOperations@@@Z @ 0x18026B468 (--0WindowDragInputProvider@@QEAA@PEAUIPrivilegedArrangementOperations@@@Z.c)
 *     ??1WindowDragInputProvider@@UEAA@XZ @ 0x1805BF8F8 (--1WindowDragInputProvider@@UEAA@XZ.c)
 *     _WindowDragInputProvider::WindowDragInputProvider_::_1_::dtor$7 @ 0x1806FA5A5 (_WindowDragInputProvider--WindowDragInputProvider_--_1_--dtor$7.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18002633C (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?InternalAddRef@?$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ @ 0x1800276DC (-InternalAddRef@-$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??_9type@?$abi@UINetworkConnectionUtils@Shell@Internal@Windows@winrt@@X@impl@winrt@@$BEA@AA @ 0x18028BF60 (--_9type@-$abi@UINetworkConnectionUtils@Shell@Internal@Windows@winrt@@X@impl@winrt@@$BEA@AA.c)
 */

void __fastcall __1__factory_event_revoker_UIDesktopSnapLayoutManagerStatics_SnapComponent_Shell_Internal_Windows_winrt___MP8type___abi_UIDesktopSnapLayoutManagerStatics_SnapComponent_Shell_Internal_Windows_winrt__X_impl_6_EAAHUevent_token_6___E1___97896__BEA_AA_impl_winrt__QEAA_XZ(
        winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *this)
{
  __int64 v1; // rdi
  __int64 v3; // [rsp+30h] [rbp+8h] BYREF

  v1 = *(_QWORD *)this;
  if ( *(_QWORD *)this )
  {
    v3 = *(_QWORD *)this;
    Microsoft::WRL::ComPtr<IAppLayoutOperationItem>::InternalAddRef(&v3);
     winrt::impl::abi<winrt::Windows::Internal::Shell::INetworkConnectionUtils,void>::type::`vcall'{64,{flat}}(v1);
    winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v3);
  }
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension(this);
}
