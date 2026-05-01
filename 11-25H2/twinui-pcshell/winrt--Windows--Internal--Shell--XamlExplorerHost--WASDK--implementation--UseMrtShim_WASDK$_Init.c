/*
 * XREFs of winrt::Windows::Internal::Shell::XamlExplorerHost::WASDK::implementation::UseMrtShim_WASDK$_InitCoro$2 @ 0x18024EB08
 * Callers:
 *     ?UseMrtShim_WASDK@implementation@WASDK@XamlExplorerHost@Shell@Internal@Windows@winrt@@YA?AUIAsyncAction@Foundation@67@XZ @ 0x180229F2C (-UseMrtShim_WASDK@implementation@WASDK@XamlExplorerHost@Shell@Internal@Windows@winrt@@YA-AUIAsyn.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18005D244 (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?InternalAddRef@?$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ @ 0x1800A4EAC (-InternalAddRef@-$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ.c)
 *     winrt::Windows::Internal::Shell::XamlExplorerHost::WASDK::implementation::UseMrtShim_WASDK$_ResumeCoro$1 @ 0x18024EC20 (winrt--Windows--Internal--Shell--XamlExplorerHost--WASDK--implementation--UseMrtShim_WASDK$_Resu.c)
 *     memset_0 @ 0x1802D2FFC (memset_0.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall winrt::Windows::Internal::Shell::XamlExplorerHost::WASDK::implementation::UseMrtShim_WASDK__InitCoro_2(
        _DWORD *a1,
        __int64 a2,
        __int64 *a3)
{
  __int64 v5; // rdi
  __int64 v7; // [rsp+50h] [rbp+8h] BYREF
  __int64 v8; // [rsp+58h] [rbp+10h]
  __int64 *v9; // [rsp+60h] [rbp+18h]

  v9 = a3;
  v8 = a2;
  *(_QWORD *)a2 = winrt::Windows::Internal::Shell::XamlExplorerHost::WASDK::implementation::UseMrtShim_WASDK__ResumeCoro_1;
  *(_DWORD *)(a2 + 8) = *a1 != 0 ? 2 : 65538;
  v5 = a2 - 112;
  memset_0((void *)(a2 - 112), 0, 0x68uLL);
  *(_QWORD *)(v5 + 16) = &winrt::impl::produce<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncAction,>::promise_type,winrt::Windows::Foundation::IAsyncAction>::`vftable';
  *(_QWORD *)(v5 + 24) = &winrt::impl::produce<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncAction,unsigned short const *,std::chrono::duration<__int64,std::ratio<1,1000>>>::promise_type,winrt::Windows::Foundation::IAsyncInfo>::`vftable';
  _InterlockedIncrement(&`winrt::get_module_lock'::`2'::s_lock);
  *(_QWORD *)(v5 + 8) = 1LL;
  *(_QWORD *)(v5 + 32) = 0LL;
  *(_QWORD *)(v5 + 40) = 0LL;
  *(_BYTE *)(v5 + 48) = 0;
  *(_QWORD *)v5 = &winrt::impl::promise_base<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncAction,>::promise_type,winrt::Windows::Foundation::IAsyncAction,void>::`vftable';
  *(_QWORD *)(v5 + 56) = 0LL;
  *(_QWORD *)(v5 + 64) = 0LL;
  __ExceptionPtrCreate((void *)(v5 + 56));
  *(_QWORD *)(v5 + 72) = 0LL;
  *(_QWORD *)(v5 + 80) = 0LL;
  *(_QWORD *)(v5 + 88) = 0LL;
  *(_DWORD *)(v5 + 96) = 0;
  *(_BYTE *)(v5 + 100) = 0;
  *(_QWORD *)v5 = &winrt::impl::promise_base<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncAction,>::promise_type,winrt::Windows::Foundation::IAsyncAction,void>::`vftable';
  *a3 = v5 + 16;
  Microsoft::WRL::ComPtr<IAppLayoutOperationItem>::InternalAddRef(a3);
  v7 = 0LL;
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v7);
  *(_BYTE *)(a2 + 80) = 0;
  return winrt::Windows::Internal::Shell::XamlExplorerHost::WASDK::implementation::UseMrtShim_WASDK__ResumeCoro_1(a2);
}
