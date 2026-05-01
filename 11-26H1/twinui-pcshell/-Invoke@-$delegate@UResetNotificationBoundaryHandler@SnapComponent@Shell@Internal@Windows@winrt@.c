/*
 * XREFs of ?Invoke@?$delegate@UResetNotificationBoundaryHandler@SnapComponent@Shell@Internal@Windows@winrt@@V_lambda_77eaee1a30336fe222c0ee03e584614d_@@@impl@winrt@@UEAAHPEAX@Z @ 0x1805B4170
 * Callers:
 *     <none>
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x180026574 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ?put_abi@winrt@@YAPEAPEAXAEAUIUnknown@Foundation@Windows@1@@Z @ 0x180029578 (-put_abi@winrt@@YAPEAPEAXAEAUIUnknown@Foundation@Windows@1@@Z.c)
 *     ??RSnapFlyoutInstanceHandler@SnapComponent@Shell@Internal@Windows@winrt@@QEBA@AEBUSnapFlyoutInstance@12345@@Z @ 0x1802697EC (--RSnapFlyoutInstanceHandler@SnapComponent@Shell@Internal@Windows@winrt@@QEBA@AEBUSnapFlyoutInst.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall winrt::impl::delegate<winrt::Windows::Internal::Shell::SnapComponent::ResetNotificationBoundaryHandler,_lambda_77eaee1a30336fe222c0ee03e584614d_>::Invoke(
        __int64 a1,
        struct IUnknown *a2)
{
  __int64 v3; // rdi
  void (__fastcall *v4)(__int64, __int64, void **); // rbx
  void **v5; // rax
  __int64 result; // rax
  __int64 v7; // [rsp+30h] [rbp+8h] BYREF
  struct IUnknown *v8; // [rsp+38h] [rbp+10h] BYREF

  v8 = a2;
  v7 = 0LL;
  v3 = *(_QWORD *)(a1 + 16);
  v4 = *(void (__fastcall **)(__int64, __int64, void **))(*(_QWORD *)v3 + 24LL);
  v5 = winrt::put_abi((winrt *)&v7, a2);
  v4(v3, a1 + 24, v5);
  try
  {
    winrt::Windows::Internal::Shell::SnapComponent::SnapFlyoutInstanceHandler::operator()(&v7, (__int64 *)&v8);
    if ( v7 )
      winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(&v7);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)*winrt::to_hresult(&v7);
  }
  return result;
}
