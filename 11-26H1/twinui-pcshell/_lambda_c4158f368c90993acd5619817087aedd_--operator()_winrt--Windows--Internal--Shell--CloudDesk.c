/*
 * XREFs of _lambda_c4158f368c90993acd5619817087aedd_::operator()_winrt::Windows::Internal::Shell::CloudDesktop::TransitionScreen::TransitionScreen_winrt::Windows::Foundation::IInspectable_ @ 0x180656168
 * Callers:
 *     winrt::impl::delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::Internal::Shell::CloudDesktop::TransitionScreen::TransitionScreen_winrt::Windows::Foundation::IInspectable___lambda_c4158f368c90993acd5619817087aedd___::Invoke @ 0x18065AD30 (winrt--impl--delegate_winrt--Windows--Foundation--TypedEventHandler_winrt--Windows-_ea_18065AD30.c)
 * Callees:
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x18002E610 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ??0hstring@winrt@@QEAA@PEBG@Z @ 0x18003046C (--0hstring@winrt@@QEAA@PEBG@Z.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x1800373AC (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?unconditional_release_ref@?$com_ptr@U?$map_impl@_KUhstring@winrt@@V?$map@_KUhstring@winrt@@U?$less@_K@std@@V?$allocator@U?$pair@$$CB_KUhstring@winrt@@@std@@@4@@std@@Usingle_threaded_collection_base@impl@2@@impl@winrt@@@winrt@@AEAAXXZ @ 0x1802879A8 (-unconditional_release_ref@-$com_ptr@U-$map_impl@_KUhstring@winrt@@V-$map@_KUhstring@winrt@@U-$l.c)
 *     ?lock@?$weak_ptr@UNexusPolicyManager@@@std@@QEBA?AV?$shared_ptr@UNexusPolicyManager@@@2@XZ @ 0x180359980 (-lock@-$weak_ptr@UNexusPolicyManager@@@std@@QEBA-AV-$shared_ptr@UNexusPolicyManager@@@2@XZ.c)
 *     ?get@?$weak_ref@URemoteSessionWindowManager@implementation@Shell@Internal@Windows@winrt@@@winrt@@QEBA@XZ @ 0x18065D784 (-get@-$weak_ref@URemoteSessionWindowManager@implementation@Shell@Internal@Windows@winrt@@@winrt@.c)
 *     ?TransitionScreenType@RemoteSessionInformation@implementation@Shell@Internal@Windows@winrt@@QEAAXW4ScreenType@TransitionScreen@CloudDesktop@3456@@Z @ 0x18066FD3C (-TransitionScreenType@RemoteSessionInformation@implementation@Shell@Internal@Window_ea_18066FD3C.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall lambda_c4158f368c90993acd5619817087aedd_::operator()_winrt::Windows::Internal::Shell::CloudDesktop::TransitionScreen::TransitionScreen_winrt::Windows::Foundation::IInspectable_(
        __int64 a1,
        _QWORD *a2,
        volatile signed __int32 *a3)
{
  __int64 v3; // r10
  _QWORD *v4; // rbx
  __int64 v5; // rsi
  void (__fastcall *v6)(__int64, __int64 *, volatile signed __int32 **); // rdi
  __int64 v7; // [rsp+20h] [rbp-18h] BYREF
  std::_Ref_count_base *v8; // [rsp+28h] [rbp-10h]
  _QWORD *v9; // [rsp+48h] [rbp+10h] BYREF
  volatile signed __int32 *v10; // [rsp+50h] [rbp+18h] BYREF

  v10 = a3;
  v9 = a2;
  std::weak_ptr<NexusPolicyManager>::lock(a1 + 8, &v7);
  winrt::weak_ref<winrt::Windows::Internal::Shell::implementation::RemoteSessionWindowManager>::get(v3, &v9);
  v4 = v9;
  if ( v7 && v9 )
  {
    winrt::Windows::Internal::Shell::implementation::RemoteSessionInformation::TransitionScreenType(v7, 1LL);
    v5 = v4[5];
    v6 = *(void (__fastcall **)(__int64, __int64 *, volatile signed __int32 **))(*(_QWORD *)v5 + 32LL);
    winrt::hstring::hstring((winrt::hstring *)&v10, &pvData);
    v6(v5, &v7, &v10);
    winrt::handle_type<winrt::impl::hstring_traits>::close(&v10);
  }
  if ( v4 )
    winrt::com_ptr<winrt::impl::map_impl<unsigned __int64,winrt::hstring,std::map<unsigned __int64,winrt::hstring>,winrt::impl::single_threaded_collection_base>>::unconditional_release_ref(&v9);
  if ( v8 )
    std::_Ref_count_base::_Decref(v8);
}
