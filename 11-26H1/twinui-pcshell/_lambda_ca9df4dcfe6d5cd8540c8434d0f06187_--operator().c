/*
 * XREFs of _lambda_ca9df4dcfe6d5cd8540c8434d0f06187_::operator() @ 0x180343604
 * Callers:
 *     GamingOverlayExperienceManager::WaitForResultsOperationCompletedAsync$_ResumeCoro$1 @ 0x1803567B0 (GamingOverlayExperienceManager--WaitForResultsOperationCompletedAsync$_ResumeCoro$1.c)
 *     GamingOverlayExperienceManager::WaitForResultsOperationCompletedAsync_old$_ResumeCoro$1 @ 0x180356B50 (GamingOverlayExperienceManager--WaitForResultsOperationCompletedAsync_old$_ResumeCoro$1.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18002633C (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?InternalAddRef@?$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ @ 0x1800276DC (-InternalAddRef@-$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??2@YAPEAX_K@Z @ 0x1802C9924 (--2@YAPEAX_K@Z.c)
 *     memset_0 @ 0x1802C9ECC (memset_0.c)
 *     winrt::impl::promise_base_std::experimental::coroutine_traits_winrt::Windows::Foundation::IAsyncAction__lambda_ca9df4dcfe6d5cd8540c8434d0f06187__const___::promise_type_winrt::Windows::Foundation::IAsyncAction_void_::promise_base_std::experimental::coroutine_traits_winrt::Windows::Foundation::IAsyncAction__lambda_ca9df4dcfe6d5cd8540c8434d0f06187__const___::promise_type_winrt::Windows::Foundation::IAsyncAction_void_ @ 0x180341768 (winrt--impl--promise_base_std--experimental--coroutine_traits_winrt--Windows--Found_ea_180341768.c)
 *     _lambda_ca9df4dcfe6d5cd8540c8434d0f06187_$_ResumeCoro$1::operator() @ 0x180343470 (_lambda_ca9df4dcfe6d5cd8540c8434d0f06187_$_ResumeCoro$1--operator().c)
 */

__int64 *__fastcall lambda_ca9df4dcfe6d5cd8540c8434d0f06187_::operator()(__int64 a1, __int64 *a2)
{
  _QWORD *v4; // rax
  __int64 v5; // rdi
  _QWORD *v6; // rbx
  __int64 v8; // [rsp+60h] [rbp+18h] BYREF

  v4 = operator new(0xF0uLL);
  v5 = (__int64)(v4 + 14);
  v4[29] = a1;
  v4[14] = lambda_ca9df4dcfe6d5cd8540c8434d0f06187___ResumeCoro_1::operator();
  *((_DWORD *)v4 + 30) = 65538;
  v6 = v4;
  memset_0(v4, 0, 0x68uLL);
  winrt::impl::promise_base_std::experimental::coroutine_traits_winrt::Windows::Foundation::IAsyncAction__lambda_ca9df4dcfe6d5cd8540c8434d0f06187__const___::promise_type_winrt::Windows::Foundation::IAsyncAction_void_::promise_base_std::experimental::coroutine_traits_winrt::Windows::Foundation::IAsyncAction__lambda_ca9df4dcfe6d5cd8540c8434d0f06187__const___::promise_type_winrt::Windows::Foundation::IAsyncAction_void_(v5 - 112);
  *v6 = &off_1807330C8;
  *a2 = (__int64)(v6 + 2);
  Microsoft::WRL::ComPtr<IAppLayoutOperationItem>::InternalAddRef(a2);
  v8 = 0LL;
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v8);
  *(_BYTE *)(v5 + 112) = 0;
  lambda_ca9df4dcfe6d5cd8540c8434d0f06187___ResumeCoro_1::operator()(v5);
  return a2;
}
