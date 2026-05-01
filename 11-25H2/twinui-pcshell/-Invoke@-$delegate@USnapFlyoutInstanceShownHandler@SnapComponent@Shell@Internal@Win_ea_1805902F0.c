/*
 * XREFs of ?Invoke@?$delegate@USnapFlyoutInstanceShownHandler@SnapComponent@Shell@Internal@Windows@winrt@@V_lambda_e86cebd7373d702890111f0794a8cedb_@@@impl@winrt@@UEAAHPEAX_N@Z @ 0x1805902F0
 * Callers:
 *     <none>
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x180066570 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ?put_abi@winrt@@YAPEAPEAXAEAUIUnknown@Foundation@Windows@1@@Z @ 0x1800A9A80 (-put_abi@winrt@@YAPEAPEAXAEAUIUnknown@Foundation@Windows@1@@Z.c)
 *     ??RSnapFlyoutInstanceHandler@SnapComponent@Shell@Internal@Windows@winrt@@QEBA@AEBUSnapFlyoutInstance@12345@@Z @ 0x1802718C0 (--RSnapFlyoutInstanceHandler@SnapComponent@Shell@Internal@Windows@winrt@@QEBA@AEBUSnapFlyoutInst.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall winrt::impl::delegate<winrt::Windows::Internal::Shell::SnapComponent::SnapFlyoutInstanceShownHandler,_lambda_e86cebd7373d702890111f0794a8cedb_>::Invoke(
        __int64 a1,
        struct IUnknown *a2)
{
  __int64 v3; // rdi
  void (__fastcall *v4)(__int64, __int64, void **); // rbx
  void **v5; // rax
  __int64 result; // rax
  __int64 v7; // [rsp+40h] [rbp+8h] BYREF
  struct IUnknown *v8; // [rsp+48h] [rbp+10h] BYREF

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
