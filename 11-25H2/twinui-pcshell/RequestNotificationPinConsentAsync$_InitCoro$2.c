/*
 * XREFs of RequestNotificationPinConsentAsync$_InitCoro$2 @ 0x1805CC2A8
 * Callers:
 *     ?RequestNotificationPinConsentAsync@@YA?AU?$IAsyncOperation@U?$IReference@_N@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@AEBVPinConsentPromptContent@@@Z @ 0x1805CCBF4 (-RequestNotificationPinConsentAsync@@YA-AU-$IAsyncOperation@U-$IReference@_N@Foundation@Windows@.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18005D244 (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?InternalAddRef@?$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ @ 0x1800A4EAC (-InternalAddRef@-$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ.c)
 *     memset_0 @ 0x1802D2FFC (memset_0.c)
 *     RequestNotificationPinConsentAsync$_ResumeCoro$1 @ 0x1805CC3C0 (RequestNotificationPinConsentAsync$_ResumeCoro$1.c)
 */

__int64 __fastcall RequestNotificationPinConsentAsync__InitCoro_2(_DWORD *a1, __int64 a2, __int64 *a3, __int64 a4)
{
  __int64 v6; // rdi
  __int64 v8; // [rsp+60h] [rbp+8h] BYREF
  __int64 v9; // [rsp+68h] [rbp+10h]
  __int64 *v10; // [rsp+70h] [rbp+18h]

  v10 = a3;
  v9 = a2;
  *(_QWORD *)(a2 + 625) = a4;
  *(_QWORD *)a2 = RequestNotificationPinConsentAsync__ResumeCoro_1;
  *(_DWORD *)(a2 + 8) = *a1 != 0 ? 2 : 65538;
  v6 = a2 - 112;
  memset_0((void *)(a2 - 112), 0, 0x70uLL);
  *(_QWORD *)(v6 + 16) = &winrt::impl::produce<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::IReference<bool>>,PinConsentPromptContent const &>::promise_type,winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::IReference<bool>>>::`vftable';
  *(_QWORD *)(v6 + 24) = &winrt::impl::produce<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::IReference<bool>>,PinConsentPromptContent const &>::promise_type,winrt::Windows::Foundation::IAsyncInfo>::`vftable';
  _InterlockedIncrement(&`winrt::get_module_lock'::`2'::s_lock);
  *(_QWORD *)(v6 + 8) = 1LL;
  *(_QWORD *)(v6 + 32) = 0LL;
  *(_QWORD *)(v6 + 40) = 0LL;
  *(_BYTE *)(v6 + 48) = 0;
  *(_QWORD *)v6 = &winrt::impl::promise_base<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::IReference<bool>>,PinConsentPromptContent const &>::promise_type,winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::IReference<bool>>,void>::`vftable';
  *(_QWORD *)(v6 + 56) = 0LL;
  *(_QWORD *)(v6 + 64) = 0LL;
  __ExceptionPtrCreate((void *)(v6 + 56));
  *(_QWORD *)(v6 + 72) = 0LL;
  *(_QWORD *)(v6 + 80) = 0LL;
  *(_QWORD *)(v6 + 88) = 0LL;
  *(_DWORD *)(v6 + 96) = 0;
  *(_BYTE *)(v6 + 100) = 0;
  *(_QWORD *)v6 = &std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::IReference<bool>>,PinConsentPromptContent const &>::promise_type::`vftable';
  *(_QWORD *)(v6 + 104) = 0LL;
  *a3 = v6 + 16;
  Microsoft::WRL::ComPtr<IAppLayoutOperationItem>::InternalAddRef(a3);
  v8 = 0LL;
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v8);
  *(_BYTE *)(a2 + 624) = 0;
  return RequestNotificationPinConsentAsync__ResumeCoro_1(a2);
}
