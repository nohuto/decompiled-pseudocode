/*
 * XREFs of ??$?RAEBUIWindowManagementEvents2@WindowManagementEvents@Shell@Internal@Windows@winrt@@AEBUWindowMigrationEventArgs@12345@@_lambda_55329faaa6ff853885e50bfaaa45876f_@@QEBA?A_PAEBUIWindowManagementEvents2@WindowManagementEvents@Shell@Internal@Windows@winrt@@AEBUWindowMigrationEventArgs@23456@@Z @ 0x180592B28
 * Callers:
 *     ?Invoke@?$delegate@U?$TypedEventHandler@UIWindowManagementEvents2@WindowManagementEvents@Shell@Internal@Windows@winrt@@UWindowMigrationEventArgs@23456@@Foundation@Windows@winrt@@V_lambda_55329faaa6ff853885e50bfaaa45876f_@@@impl@winrt@@UEAAHPEAX0@Z @ 0x180592DB0 (-Invoke@-$delegate@U-$TypedEventHandler@UIWindowManagementEvents2@WindowManagementE_ea_180592DB0.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@U?$vector_impl@UUri@Foundation@Windows@winrt@@V?$vector@UUri@Foundation@Windows@winrt@@V?$allocator@UUri@Foundation@Windows@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@4@@impl@winrt@@@winrt@@AEAAXXZ @ 0x1800A8318 (-unconditional_release_ref@-$com_ptr@U-$vector_impl@UUri@Foundation@Windows@winrt@@V-$vector@UUr.c)
 *     ?put_abi@winrt@@YAPEAPEAXAEAUIUnknown@Foundation@Windows@1@@Z @ 0x1800A9A80 (-put_abi@winrt@@YAPEAPEAXAEAUIUnknown@Foundation@Windows@1@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall _lambda_55329faaa6ff853885e50bfaaa45876f_::operator()<winrt::Windows::Internal::Shell::WindowManagementEvents::IWindowManagementEvents2 const &,winrt::Windows::Internal::Shell::WindowManagementEvents::WindowMigrationEventArgs const &>(
        __int64 *a1,
        struct IUnknown *a2,
        __int64 a3)
{
  __int64 v6; // rdi
  _QWORD *v7; // r9
  __int64 result; // rax
  _QWORD *v9; // rbx
  void (__fastcall *v10)(__int64, __int64 *, void **); // rbx
  void **v11; // rax
  __int64 v12; // [rsp+40h] [rbp+8h] BYREF
  _QWORD *v13; // [rsp+58h] [rbp+20h] BYREF

  v6 = *a1;
  if ( *a1 )
  {
    v12 = 0LL;
    v10 = *(void (__fastcall **)(__int64, __int64 *, void **))(*(_QWORD *)v6 + 24LL);
    v11 = winrt::put_abi((winrt *)&v12, a2);
    v10(v6, &winrt::impl::guid_v<IInspectable>, v11);
    v7 = 0LL;
    if ( v12 )
    {
      v7 = (_QWORD *)(v12 - 16);
      v12 = 0LL;
    }
    result = (__int64)v7;
    v13 = v7;
    v9 = v7;
  }
  else
  {
    v13 = 0LL;
    v7 = 0LL;
    result = 0LL;
    v9 = 0LL;
  }
  if ( v7 )
  {
    ((void (__fastcall *)(char *, struct IUnknown *, __int64))a1[1])((char *)v7 + *((int *)a1 + 4), a2, a3);
    result = (__int64)v9;
  }
  if ( result )
    return winrt::com_ptr<winrt::impl::vector_impl<winrt::Windows::Foundation::Uri,std::vector<winrt::Windows::Foundation::Uri>,winrt::impl::single_threaded_collection_base>>::unconditional_release_ref(&v13);
  return result;
}
