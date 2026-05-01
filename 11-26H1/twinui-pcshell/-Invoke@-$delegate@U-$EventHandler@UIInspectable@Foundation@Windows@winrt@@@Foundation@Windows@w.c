/*
 * XREFs of ?Invoke@?$delegate@U?$EventHandler@UIInspectable@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@V_lambda_3025a83b1a9c2c2074a6e4232497d7a9_@@@impl@winrt@@UEAAHPEAX0@Z @ 0x180336240
 * Callers:
 *     <none>
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x180026574 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ?put_abi@winrt@@YAPEAPEAXAEAUIUnknown@Foundation@Windows@1@@Z @ 0x180029578 (-put_abi@winrt@@YAPEAPEAXAEAUIUnknown@Foundation@Windows@1@@Z.c)
 *     ??R?$EventHandler@URemoteSystemStateChangedEventArgs@Shell@Internal@Windows@winrt@@@Foundation@Windows@winrt@@QEBA@AEBUIInspectable@123@AEBURemoteSystemStateChangedEventArgs@Shell@Internal@23@@Z @ 0x1802345AC (--R-$EventHandler@URemoteSystemStateChangedEventArgs@Shell@Internal@Windows@winrt@@@Foundation@W.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall winrt::impl::delegate<winrt::Windows::Foundation::EventHandler<winrt::Windows::Foundation::IInspectable>,_lambda_3025a83b1a9c2c2074a6e4232497d7a9_>::Invoke(
        __int64 a1,
        struct IUnknown *a2,
        __int64 a3)
{
  __int64 v4; // rdi
  void (__fastcall *v5)(__int64, __int64, void **); // rbx
  void **v6; // rax
  __int64 *v8; // [rsp+40h] [rbp+8h] BYREF
  struct IUnknown *v9; // [rsp+48h] [rbp+10h] BYREF
  __int64 v10; // [rsp+50h] [rbp+18h] BYREF

  v10 = a3;
  v9 = a2;
  v8 = 0LL;
  v4 = *(_QWORD *)(a1 + 16);
  v5 = *(void (__fastcall **)(__int64, __int64, void **))(*(_QWORD *)v4 + 24LL);
  v6 = winrt::put_abi((winrt *)&v8, a2);
  v5(v4, a1 + 24, v6);
  winrt::Windows::Foundation::EventHandler<winrt::Windows::Internal::Shell::RemoteSystemStateChangedEventArgs>::operator()(
    &v8,
    (__int64 *)&v9,
    &v10);
  if ( v8 )
    winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref((__int64 *)&v8);
  return 0LL;
}
