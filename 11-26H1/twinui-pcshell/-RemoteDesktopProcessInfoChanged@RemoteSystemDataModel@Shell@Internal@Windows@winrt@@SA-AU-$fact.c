/*
 * XREFs of ?RemoteDesktopProcessInfoChanged@RemoteSystemDataModel@Shell@Internal@Windows@winrt@@SA?AU?$factory_event_revoker@UIRemoteSystemDataModelStatics@Shell@Internal@Windows@winrt@@$MP8type@?$abi@UIRemoteSystemDataModelStatics@Shell@Internal@Windows@winrt@@X@impl@5@EAAHUevent_token@5@@_E1??_96785@$BKA@AA@impl@5@Uauto_revoke_t@5@AEBU?$EventHandler@UProcessInfoChangedEventArgs@Shell@Internal@Windows@winrt@@@Foundation@45@@Z @ 0x1802A052C
 * Callers:
 *     ??0RemoteSessionWindowManager@implementation@Shell@Internal@Windows@winrt@@QEAA@AEBV?$shared_ptr@UProviderActivator@implementation@Shell@Internal@Windows@winrt@@@std@@AEBV?$shared_ptr@UConnectionHandler@implementation@Shell@Internal@Windows@winrt@@@7@@Z @ 0x1802A47E8 (--0RemoteSessionWindowManager@implementation@Shell@Internal@Windows@winrt@@QEAA@AEBV-$shared_ptr.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x180026574 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ?InternalAddRef@?$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ @ 0x1800276DC (-InternalAddRef@-$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??$make_factory@URemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@@impl@winrt@@YA?AUIActivationFactory@Foundation@Windows@1@XZ @ 0x18027BF60 (--$make_factory@URemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@@imp.c)
 *     ?RemoteDesktopProcessInfoChanged@?$consume_Windows_Internal_Shell_IRemoteSystemDataModelStatics@UIRemoteSystemDataModelStatics@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA@AEBU?$EventHandler@UProcessInfoChangedEventArgs@Shell@Internal@Windows@winrt@@@Foundation@Windows@3@@Z @ 0x1802A05C4 (-RemoteDesktopProcessInfoChanged@-$consume_Windows_Internal_Shell_IRemoteSystemDataModelStatics@.c)
 *     ??$as@UIRemoteSystemDataModelStatics@Shell@Internal@Windows@winrt@@Utype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@5@$0A@@impl@winrt@@YA?AUIRemoteSystemDataModelStatics@Shell@Internal@Windows@1@PEAUtype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@01@@Z @ 0x1802A0624 (--$as@UIRemoteSystemDataModelStatics@Shell@Internal@Windows@winrt@@Utype@-$abi@UIUnknown@Foundat.c)
 */

// Hidden C++ exception states: #wind=3
__int64 *__fastcall winrt::Windows::Internal::Shell::RemoteSystemDataModel::RemoteDesktopProcessInfoChanged(
        __int64 *a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v5; // rbx
  __int64 v6; // rdi
  __int64 v7; // rbx
  __int64 *v9; // [rsp+40h] [rbp+8h] BYREF
  __int64 v10; // [rsp+58h] [rbp+20h] BYREF

  v9 = a1;
  winrt::impl::make_factory<winrt::Windows::Internal::Shell::factory_implementation::RemoteSystemDataModel>(&v10);
  v5 = v10;
  winrt::impl::as<winrt::Windows::Internal::Shell::IRemoteSystemDataModelStatics,winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type,0>(
    &v9,
    v10);
  if ( v5 )
    winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(&v10);
  v6 = *(_QWORD *)winrt::impl::consume_Windows_Internal_Shell_IRemoteSystemDataModelStatics<winrt::Windows::Internal::Shell::IRemoteSystemDataModelStatics>::RemoteDesktopProcessInfoChanged(
                    &v9,
                    &v10,
                    a3);
  v7 = (__int64)v9;
  *a1 = (__int64)v9;
  Microsoft::WRL::ComPtr<IAppLayoutOperationItem>::InternalAddRef(a1);
  a1[1] = v6;
  if ( v7 )
    winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref((__int64 *)&v9);
  return a1;
}
