/*
 * XREFs of ??$?RAEBUIWindowManagementEvents2@WindowManagementEvents@Shell@Internal@Windows@winrt@@AEBUWindowMigrationEventArgs@12345@@_lambda_266bc0ea2c01434ec63887549cfbe97f_@@QEBA?A_PAEBUIWindowManagementEvents2@WindowManagementEvents@Shell@Internal@Windows@winrt@@AEBUWindowMigrationEventArgs@23456@@Z @ 0x1805B6B70
 * Callers:
 *     ?Invoke@?$delegate@U?$TypedEventHandler@UIWindowManagementEvents2@WindowManagementEvents@Shell@Internal@Windows@winrt@@UWindowMigrationEventArgs@23456@@Foundation@Windows@winrt@@V_lambda_266bc0ea2c01434ec63887549cfbe97f_@@@impl@winrt@@UEAAHPEAX0@Z @ 0x1805B6D80 (-Invoke@-$delegate@U-$TypedEventHandler@UIWindowManagementEvents2@WindowManagementE_ea_1805B6D80.c)
 * Callees:
 *     ?put_abi@winrt@@YAPEAPEAXAEAUIUnknown@Foundation@Windows@1@@Z @ 0x180029578 (-put_abi@winrt@@YAPEAPEAXAEAUIUnknown@Foundation@Windows@1@@Z.c)
 *     ?unconditional_release_ref@?$com_ptr@U?$map_impl@_KUhstring@winrt@@V?$map@_KUhstring@winrt@@U?$less@_K@std@@V?$allocator@U?$pair@$$CB_KUhstring@winrt@@@std@@@4@@std@@Usingle_threaded_collection_base@impl@2@@impl@winrt@@@winrt@@AEAAXXZ @ 0x1802879A8 (-unconditional_release_ref@-$com_ptr@U-$map_impl@_KUhstring@winrt@@V-$map@_KUhstring@winrt@@U-$l.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall _lambda_266bc0ea2c01434ec63887549cfbe97f_::operator()<winrt::Windows::Internal::Shell::WindowManagementEvents::IWindowManagementEvents2 const &,winrt::Windows::Internal::Shell::WindowManagementEvents::WindowMigrationEventArgs const &>(
        __int64 *a1,
        struct IUnknown *a2,
        __int64 a3)
{
  __int64 v6; // rsi
  _QWORD *v7; // r9
  _QWORD *v8; // rax
  _QWORD *v9; // rbx
  void (__fastcall *v10)(__int64, __int64 *, void **); // rbx
  void **v11; // rax
  _QWORD *v12; // [rsp+40h] [rbp+8h] BYREF

  v6 = *a1;
  v12 = 0LL;
  if ( v6 )
  {
    v10 = *(void (__fastcall **)(__int64, __int64 *, void **))(*(_QWORD *)v6 + 24LL);
    v11 = winrt::put_abi((winrt *)&v12, a2);
    v10(v6, &winrt::impl::guid_v<winrt::Windows::Foundation::IInspectable>, v11);
    v7 = 0LL;
    if ( v12 )
      v7 = v12 - 2;
    v12 = v7;
    v8 = v7;
    v9 = v7;
  }
  else
  {
    v7 = 0LL;
    v8 = 0LL;
    v9 = 0LL;
  }
  if ( v7 )
  {
    ((void (__fastcall *)(char *, struct IUnknown *, __int64))a1[1])((char *)v7 + *((int *)a1 + 4), a2, a3);
    v8 = v9;
  }
  if ( v8 )
    winrt::com_ptr<winrt::impl::map_impl<unsigned __int64,winrt::hstring,std::map<unsigned __int64,winrt::hstring>,winrt::impl::single_threaded_collection_base>>::unconditional_release_ref(&v12);
}
