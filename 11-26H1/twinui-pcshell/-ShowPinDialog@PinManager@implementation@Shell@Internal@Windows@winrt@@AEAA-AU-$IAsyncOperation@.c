/*
 * XREFs of ?ShowPinDialog@PinManager@implementation@Shell@Internal@Windows@winrt@@AEAA?AU?$IAsyncOperation@_N@Foundation@56@V?$shared_ptr@VPinOperationContext@@@std@@_N@Z @ 0x1805E930C
 * Callers:
 *     winrt::Windows::Internal::Shell::implementation::PinManager::HandleRequestPinItemAsync$_ResumeCoro$1_PinManagerTelemetry::PinManagerRequestPinItem_ @ 0x1805DE960 (winrt--Windows--Internal--Shell--implementation--PinManager--HandleRequestPinItemAsync$_ResumeCo.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18002633C (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?InternalAddRef@?$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ @ 0x1800276DC (-InternalAddRef@-$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x1800373AC (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ??2@YAPEAX_K@Z @ 0x1802C9924 (--2@YAPEAX_K@Z.c)
 *     memset_0 @ 0x1802C9ECC (memset_0.c)
 *     ??0?$promise_base@Upromise_type@?$coroutine_traits@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@PEAUPinManager@implementation@Shell@Internal@34@V?$shared_ptr@VPinOperationContext@@@std@@_N@experimental@std@@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@X@impl@winrt@@QEAA@XZ @ 0x1805E2EBC (--0-$promise_base@Upromise_type@-$coroutine_traits@U-$IAsyncOperation@_N@Foundation_ea_1805E2EBC.c)
 *     winrt::Windows::Internal::Shell::implementation::PinManager::ShowPinDialog$_ResumeCoro$1 @ 0x1805E8F60 (winrt--Windows--Internal--Shell--implementation--PinManager--ShowPinDialog$_ResumeCoro$1.c)
 */

// Hidden C++ exception states: #wind=5
__int64 *__fastcall winrt::Windows::Internal::Shell::implementation::PinManager::ShowPinDialog(
        __int64 a1,
        __int64 *a2,
        _QWORD *a3,
        char a4)
{
  _QWORD *v8; // rax
  __int64 v9; // rdi
  _QWORD *v10; // rbx
  std::_Ref_count_base *v11; // rcx
  _QWORD v13[3]; // [rsp+28h] [rbp-50h] BYREF

  v8 = operator new(0x1E0uLL);
  v9 = (__int64)(v8 + 14);
  v8[55] = a1;
  v8[56] = 0LL;
  v8[57] = 0LL;
  v8[56] = *a3;
  v8[57] = a3[1];
  *a3 = 0LL;
  a3[1] = 0LL;
  *((_BYTE *)v8 + 464) = a4;
  v8[14] = winrt::Windows::Internal::Shell::implementation::PinManager::ShowPinDialog__ResumeCoro_1;
  *((_DWORD *)v8 + 30) = 65538;
  v10 = v8;
  memset_0(v8, 0, 0x70uLL);
  winrt::impl::promise_base<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncOperation<bool>,winrt::Windows::Internal::Shell::implementation::PinManager *,std::shared_ptr<PinOperationContext>,bool>::promise_type,winrt::Windows::Foundation::IAsyncOperation<bool>,void>::promise_base<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncOperation<bool>,winrt::Windows::Internal::Shell::implementation::PinManager *,std::shared_ptr<PinOperationContext>,bool>::promise_type,winrt::Windows::Foundation::IAsyncOperation<bool>,void>(v9 - 112);
  *v10 = &std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncOperation<bool>,winrt::Windows::Internal::Shell::implementation::PinManager *,std::shared_ptr<PinOperationContext>,bool>::promise_type::`vftable';
  *((_BYTE *)v10 + 104) = 0;
  *a2 = (__int64)(v10 + 2);
  Microsoft::WRL::ComPtr<IAppLayoutOperationItem>::InternalAddRef(a2);
  v13[0] = 0LL;
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)v13);
  *(_BYTE *)(v9 + 320) = 0;
  winrt::Windows::Internal::Shell::implementation::PinManager::ShowPinDialog__ResumeCoro_1(v9);
  v11 = (std::_Ref_count_base *)a3[1];
  if ( v11 )
    std::_Ref_count_base::_Decref(v11);
  return a2;
}
