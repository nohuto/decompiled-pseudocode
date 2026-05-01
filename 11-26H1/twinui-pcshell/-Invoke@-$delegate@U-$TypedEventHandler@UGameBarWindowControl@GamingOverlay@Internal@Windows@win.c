/*
 * XREFs of ?Invoke@?$delegate@U?$TypedEventHandler@UGameBarWindowControl@GamingOverlay@Internal@Windows@winrt@@W4GameBarWindowState@2345@@Foundation@Windows@winrt@@V_lambda_3388fa7f0a5c6f3f4a8233dcf615ab87_@@@impl@winrt@@UEAAHPEAXH@Z @ 0x18035B890
 * Callers:
 *     <none>
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x180026574 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ?put_abi@winrt@@YAPEAPEAXAEAUIUnknown@Foundation@Windows@1@@Z @ 0x180029578 (-put_abi@winrt@@YAPEAPEAXAEAUIUnknown@Foundation@Windows@1@@Z.c)
 *     ??RAsyncActionCompletedHandler@Foundation@Windows@winrt@@QEBA@AEBUIAsyncAction@123@AEBW4AsyncStatus@123@@Z @ 0x1802343FC (--RAsyncActionCompletedHandler@Foundation@Windows@winrt@@QEBA@AEBUIAsyncAction@123@AEBW4AsyncSta.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1 #try_helpers=1
__int64 __fastcall winrt::impl::delegate<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Internal::GamingOverlay::GameBarWindowControl,enum winrt::Windows::Internal::GamingOverlay::GameBarWindowState>,_lambda_3388fa7f0a5c6f3f4a8233dcf615ab87_>::Invoke(
        __int64 a1,
        struct IUnknown *a2,
        unsigned int a3)
{
  __int64 v4; // rdi
  void (__fastcall *v5)(__int64, __int64, void **); // rbx
  void **v6; // rax
  struct IUnknown *v8; // [rsp+20h] [rbp-38h] BYREF
  unsigned int v9; // [rsp+28h] [rbp-30h] BYREF
  __int64 *v10; // [rsp+30h] [rbp-28h] BYREF

  v8 = a2;
  v9 = a3;
  v10 = 0LL;
  v4 = *(_QWORD *)(a1 + 16);
  v5 = *(void (__fastcall **)(__int64, __int64, void **))(*(_QWORD *)v4 + 24LL);
  v6 = winrt::put_abi((winrt *)&v10, a2);
  v5(v4, a1 + 24, v6);
  winrt::Windows::Foundation::AsyncActionCompletedHandler::operator()(&v10, (__int64 *)&v8, &v9);
  if ( v10 )
    winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref((__int64 *)&v10);
  return 0LL;
}
