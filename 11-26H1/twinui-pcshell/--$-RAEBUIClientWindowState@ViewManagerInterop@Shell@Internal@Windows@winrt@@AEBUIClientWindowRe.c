/*
 * XREFs of ??$?RAEBUIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@winrt@@AEBUIClientWindowReadyForPresentationChangedEventArgs@12345@@_lambda_b98f950e7777631331b22888bc58ec5e_@@QEBA?A_PAEBUIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@winrt@@AEBUIClientWindowReadyForPresentationChangedEventArgs@23456@@Z @ 0x18035A494
 * Callers:
 *     ?Invoke@?$delegate@U?$TypedEventHandler@UIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@winrt@@UIClientWindowReadyForPresentationChangedEventArgs@23456@@Foundation@Windows@winrt@@V_lambda_b98f950e7777631331b22888bc58ec5e_@@@impl@winrt@@UEAAHPEAX0@Z @ 0x18035B930 (-Invoke@-$delegate@U-$TypedEventHandler@UIClientWindowState@ViewManagerInterop@Shell@Internal@Wi.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ @ 0x1800276DC (-InternalAddRef@-$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?unconditional_release_ref@?$com_ptr@U?$map_impl@_KUhstring@winrt@@V?$map@_KUhstring@winrt@@U?$less@_K@std@@V?$allocator@U?$pair@$$CB_KUhstring@winrt@@@std@@@4@@std@@Usingle_threaded_collection_base@impl@2@@impl@winrt@@@winrt@@AEAAXXZ @ 0x1802879A8 (-unconditional_release_ref@-$com_ptr@U-$map_impl@_KUhstring@winrt@@V-$map@_KUhstring@winrt@@U-$l.c)
 *     ?get@?$weak_ref@UGameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@@winrt@@QEBA@XZ @ 0x18035CE20 (-get@-$weak_ref@UGameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall _lambda_b98f950e7777631331b22888bc58ec5e_::operator()<winrt::Windows::Internal::Shell::ViewManagerInterop::IClientWindowState const &,winrt::Windows::Internal::Shell::ViewManagerInterop::IClientWindowReadyForPresentationChangedEventArgs const &>(
        __int64 a1,
        __int64 *a2,
        __int64 *a3)
{
  _QWORD *v6; // rbx
  char *v7; // rdi
  void (__fastcall *v8)(char *, __int64 *, __int64 *); // rsi
  _QWORD *v9[5]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v10; // [rsp+50h] [rbp+8h] BYREF
  __int64 v11; // [rsp+68h] [rbp+20h] BYREF

  winrt::weak_ref<winrt::Windows::Internal::GamingOverlay::implementation::GameBarWindowControlImpl>::get(a1, v9);
  v6 = v9[0];
  if ( v9[0] )
  {
    v7 = (char *)v9[0] + *(int *)(a1 + 16);
    v8 = *(void (__fastcall **)(char *, __int64 *, __int64 *))(a1 + 8);
    v10 = *a3;
    Microsoft::WRL::ComPtr<IAppLayoutOperationItem>::InternalAddRef(&v10);
    v11 = *a2;
    Microsoft::WRL::ComPtr<IAppLayoutOperationItem>::InternalAddRef(&v11);
    v8(v7, &v11, &v10);
  }
  if ( v6 )
    winrt::com_ptr<winrt::impl::map_impl<unsigned __int64,winrt::hstring,std::map<unsigned __int64,winrt::hstring>,winrt::impl::single_threaded_collection_base>>::unconditional_release_ref(v9);
}
