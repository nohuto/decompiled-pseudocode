/*
 * XREFs of ?SubsribeToTimeOutInfoChangedEvent@RemoteSessionWindowManager@implementation@Shell@Internal@Windows@winrt@@AEAAXXZ @ 0x18065C430
 * Callers:
 *     ??0RemoteSessionWindowManager@implementation@Shell@Internal@Windows@winrt@@QEAA@AEBV?$shared_ptr@UProviderActivator@implementation@Shell@Internal@Windows@winrt@@@std@@AEBV?$shared_ptr@UConnectionHandler@implementation@Shell@Internal@Windows@winrt@@@7@@Z @ 0x1802A47E8 (--0RemoteSessionWindowManager@implementation@Shell@Internal@Windows@winrt@@QEAA@AEBV-$shared_ptr.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18002633C (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x180026574 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ?InternalAddRef@?$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ @ 0x1800276DC (-InternalAddRef@-$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??$get_weak@VWindowDragInputProvider@@@?$root_implements@VWindowDragInputProvider@@UIInspectable@Foundation@Windows@winrt@@@impl@winrt@@IEAA?AU?$weak_ref@VWindowDragInputProvider@@@2@XZ @ 0x180054E60 (--$get_weak@VWindowDragInputProvider@@@-$root_implements@VWindowDragInputProvider@@UIInspectable.c)
 *     _lambda_00799cc444f9312ab8cc556666836ecb_::__lambda_00799cc444f9312ab8cc556666836ecb_ @ 0x1800B7AEC (_lambda_00799cc444f9312ab8cc556666836ecb_--__lambda_00799cc444f9312ab8cc556666836ecb_.c)
 *     ??0implements_delegate_base@impl@winrt@@QEAA@XZ @ 0x18028AE60 (--0implements_delegate_base@impl@winrt@@QEAA@XZ.c)
 *     ??$as@UIRemoteSystemDataModelStatics@Shell@Internal@Windows@winrt@@@IUnknown@Foundation@Windows@winrt@@QEBA?A_PXZ @ 0x1802A0508 (--$as@UIRemoteSystemDataModelStatics@Shell@Internal@Windows@winrt@@@IUnknown@Foundation@Windows@.c)
 *     ??$make@URemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@$$V@winrt@@YA?A_PXZ @ 0x1802C5950 (--$make@URemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@$$V@winrt@@Y.c)
 *     ??2@YAPEAX_K@Z @ 0x1802C9924 (--2@YAPEAX_K@Z.c)
 *     ??1?$factory_event_revoker@UIRemoteSystemDataModelStatics@Shell@Internal@Windows@winrt@@$MP8type@?$abi@UIRemoteSystemDataModelStatics@Shell@Internal@Windows@winrt@@X@impl@5@EAAHUevent_token@5@@_E1??_96785@$BLA@AA@impl@winrt@@QEAA@XZ @ 0x180649B6C (--1-$factory_event_revoker@UIRemoteSystemDataModelStatics@Shell@Internal@Windows@wi_ea_180649B6C.c)
 *     ?TimeOutInfoChanged@?$consume_Windows_Internal_Shell_IRemoteSystemDataModelStatics@UIRemoteSystemDataModelStatics@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA@AEBU?$EventHandler@URemoteSystemTimeOutInfoChangedEventArgs@Shell@Internal@Windows@winrt@@@Foundation@Windows@3@@Z @ 0x180651404 (-TimeOutInfoChanged@-$consume_Windows_Internal_Shell_IRemoteSystemDataModelStatics@UIRemoteSyste.c)
 *     ??$swap@UIRemoteSystemDataModelStatics@Shell@Internal@Windows@winrt@@$0A@@std@@YAXAEAUIRemoteSystemDataModelStatics@Shell@Internal@Windows@winrt@@0@Z @ 0x180657F74 (--$swap@UIRemoteSystemDataModelStatics@Shell@Internal@Windows@winrt@@$0A@@std@@YAXAEAUIRemoteSys.c)
 */

// Hidden C++ exception states: #wind=6
void __fastcall winrt::Windows::Internal::Shell::implementation::RemoteSessionWindowManager::SubsribeToTimeOutInfoChangedEvent(
        winrt::Windows::Internal::Shell::implementation::RemoteSessionWindowManager *this)
{
  __int64 v2; // rax
  char *v3; // rax
  __int64 v4; // rcx
  _QWORD *v5; // rdx
  __int64 *v6; // rax
  __int64 v7; // rsi
  __int64 *v8; // rbx
  __int64 v9; // rax
  const char *v10; // r9
  _QWORD *v11; // [rsp+20h] [rbp-48h] BYREF
  __int64 v12[2]; // [rsp+28h] [rbp-40h] BYREF
  __int64 *v13; // [rsp+38h] [rbp-30h] BYREF
  __int64 v14; // [rsp+40h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  __int64 v16; // [rsp+78h] [rbp+10h] BYREF
  __int64 v17; // [rsp+80h] [rbp+18h] BYREF
  __int64 *v18; // [rsp+88h] [rbp+20h] BYREF

  try
  {
    winrt::impl::root_implements<WindowDragInputProvider,winrt::Windows::Foundation::IInspectable>::get_weak<WindowDragInputProvider>(
      (__int64)this,
      &v17);
    v2 = v17;
    v17 = 0LL;
    v16 = v2;
    v18 = &v16;
    v3 = (char *)operator new(0x18uLL);
    winrt::impl::implements_delegate_base::implements_delegate_base((winrt::impl::implements_delegate_base *)(v3 + 8));
    v4 = v16;
    v16 = 0LL;
    v5[2] = v4;
    _InterlockedIncrement(&`winrt::get_module_lock'::`2'::s_lock);
    *v5 = off_18075DB50;
    v11 = v5;
    lambda_00799cc444f9312ab8cc556666836ecb_::__lambda_00799cc444f9312ab8cc556666836ecb_(&v16);
    v6 = winrt::make<winrt::Windows::Internal::Shell::factory_implementation::RemoteSystemDataModel,>(v12);
    winrt::Windows::Foundation::IUnknown::as<winrt::Windows::Internal::Shell::IRemoteSystemDataModelStatics>(
      v6,
      (__int64)&v18);
    winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)v12);
    v7 = *winrt::impl::consume_Windows_Internal_Shell_IRemoteSystemDataModelStatics<winrt::Windows::Internal::Shell::IRemoteSystemDataModelStatics>::TimeOutInfoChanged(
            &v18,
            &v13,
            (__int64 *)&v11);
    v8 = v18;
    v12[0] = (__int64)v18;
    Microsoft::WRL::ComPtr<IAppLayoutOperationItem>::InternalAddRef(v12);
    v12[1] = v7;
    winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v18);
    v12[0] = 0LL;
    v13 = v8;
    v14 = v7;
    std::swap<winrt::Windows::Internal::Shell::IRemoteSystemDataModelStatics,0>((__int64 *)&v13, (__int64 *)this + 29);
    v9 = v14;
    v14 = *((_QWORD *)this + 30);
    *((_QWORD *)this + 30) = v9;
    __1__factory_event_revoker_UIRemoteSystemDataModelStatics_Shell_Internal_Windows_winrt___MP8type___abi_UIRemoteSystemDataModelStatics_Shell_Internal_Windows_winrt__X_impl_5_EAAHUevent_token_5___E1___96785__BLA_AA_impl_winrt__QEAA_XZ((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v13);
    __1__factory_event_revoker_UIRemoteSystemDataModelStatics_Shell_Internal_Windows_winrt___MP8type___abi_UIRemoteSystemDataModelStatics_Shell_Internal_Windows_winrt__X_impl_5_EAAHUevent_token_5___E1___96785__BLA_AA_impl_winrt__QEAA_XZ((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)v12);
    winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref((__int64 *)&v11);
    if ( v17 )
      winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(&v17);
  }
  catch ( ... )
  {
    wil::details::in1diag3::Log_CaughtException(
      retaddr,
      (void *)0x3E5,
      (int)"pcshell\\twinui\\cloudpc\\lib\\remotesessionwindowmanager.cpp",
      v10);
  }
}
