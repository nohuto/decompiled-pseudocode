/*
 * XREFs of ?LaunchForResultsAsyncInternal@GamingOverlayExperienceManager@@AEAA?AU?$IAsyncOperation@UValueSet@Collections@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@Uhstring@5@U?$IMap@Uhstring@winrt@@U12@@Collections@345@@Z @ 0x18034D01C
 * Callers:
 *     ?LaunchForResultsAsync@GamingOverlayExperienceManager@@UEAAJPEAUHSTRING__@@PEAU?$IMap@PEAUHSTRING__@@PEAU1@@Collections@Foundation@Windows@@PEAPEAU?$IAsyncOperation@PEAVValueSet@Collections@Foundation@Windows@@@56@@Z @ 0x18034C310 (-LaunchForResultsAsync@GamingOverlayExperienceManager@@UEAAJPEAUHSTRING__@@PEAU-$IMap@PEAUHSTRIN.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18002633C (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?InternalAddRef@?$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ @ 0x1800276DC (-InternalAddRef@-$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x18002E610 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ??2@YAPEAX_K@Z @ 0x1802C9924 (--2@YAPEAX_K@Z.c)
 *     memset_0 @ 0x1802C9ECC (memset_0.c)
 *     ??0?$promise_base@Upromise_type@?$coroutine_traits@U?$IAsyncOperation@UValueSet@Collections@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@PEAVGamingOverlayExperienceManager@@Uhstring@4@U?$IMap@Uhstring@winrt@@U12@@Collections@234@@experimental@std@@U?$IAsyncOperation@UValueSet@Collections@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@X@impl@winrt@@QEAA@XZ @ 0x180341630 (--0-$promise_base@Upromise_type@-$coroutine_traits@U-$IAsyncOperation@UValueSet@Collections@Foun.c)
 *     GamingOverlayExperienceManager::LaunchForResultsAsyncInternal$_ResumeCoro$1 @ 0x18034C420 (GamingOverlayExperienceManager--LaunchForResultsAsyncInternal$_ResumeCoro$1.c)
 */

// Hidden C++ exception states: #wind=6
__int64 *__fastcall GamingOverlayExperienceManager::LaunchForResultsAsyncInternal(
        __int64 a1,
        __int64 *a2,
        volatile signed __int32 **a3,
        winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *a4)
{
  _QWORD *v8; // rax
  volatile signed __int32 *v9; // rax
  __int64 v10; // rax
  _QWORD *v11; // rbx
  __int64 v13; // [rsp+20h] [rbp-58h]
  _QWORD v14[3]; // [rsp+28h] [rbp-50h] BYREF

  v8 = operator new(0x3F0uLL);
  v13 = (__int64)(v8 + 14);
  v8[123] = a1;
  v9 = *a3;
  *a3 = 0LL;
  *(_QWORD *)(v13 + 880) = v9;
  v10 = *(_QWORD *)a4;
  *(_QWORD *)a4 = 0LL;
  *(_QWORD *)(v13 + 888) = v10;
  *(_QWORD *)v13 = GamingOverlayExperienceManager::LaunchForResultsAsyncInternal__ResumeCoro_1;
  *(_DWORD *)(v13 + 8) = 65538;
  v11 = (_QWORD *)(v13 - 112);
  memset_0((void *)(v13 - 112), 0, 0x70uLL);
  winrt::impl::promise_base<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::Collections::ValueSet>,GamingOverlayExperienceManager *,winrt::hstring,winrt::Windows::Foundation::Collections::IMap<winrt::hstring,winrt::hstring>>::promise_type,winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::Collections::ValueSet>,void>::promise_base<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::Collections::ValueSet>,GamingOverlayExperienceManager *,winrt::hstring,winrt::Windows::Foundation::Collections::IMap<winrt::hstring,winrt::hstring>>::promise_type,winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::Collections::ValueSet>,void>(v13 - 112);
  *v11 = &std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::Collections::ValueSet>,GamingOverlayExperienceManager *,winrt::hstring,winrt::Windows::Foundation::Collections::IMap<winrt::hstring,winrt::hstring>>::promise_type::`vftable';
  v11[13] = 0LL;
  *a2 = v13 - 112 + 16;
  Microsoft::WRL::ComPtr<IAppLayoutOperationItem>::InternalAddRef(a2);
  v14[0] = 0LL;
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)v14);
  *(_BYTE *)(v13 + 864) = 0;
  GamingOverlayExperienceManager::LaunchForResultsAsyncInternal__ResumeCoro_1(v13);
  winrt::handle_type<winrt::impl::hstring_traits>::close(a3);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension(a4);
  return a2;
}
