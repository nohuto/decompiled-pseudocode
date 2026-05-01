/*
 * XREFs of winrt::Windows::Internal::Shell::implementation::PinManager::ShowPinDialog$_InitCoro$2 @ 0x1805C50A0
 * Callers:
 *     ?ShowPinDialog@PinManager@implementation@Shell@Internal@Windows@winrt@@AEAA?AU?$IAsyncOperation@_N@Foundation@56@V?$shared_ptr@VPinOperationContext@@@std@@_N@Z @ 0x1805C55C4 (-ShowPinDialog@PinManager@implementation@Shell@Internal@Windows@winrt@@AEAA-AU-$IAsyncOperation@.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18005D244 (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?InternalAddRef@?$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ @ 0x1800A4EAC (-InternalAddRef@-$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ.c)
 *     memset_0 @ 0x1802D2FFC (memset_0.c)
 *     winrt::Windows::Internal::Shell::implementation::PinManager::ShowPinDialog$_ResumeCoro$1 @ 0x1805C5200 (winrt--Windows--Internal--Shell--implementation--PinManager--ShowPinDialog$_ResumeCoro$1.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall winrt::Windows::Internal::Shell::implementation::PinManager::ShowPinDialog__InitCoro_2(
        _DWORD *a1,
        __int64 a2,
        __int64 *a3,
        _QWORD *a4,
        char *a5,
        __int64 a6)
{
  char v8; // r10
  __int64 v9; // rdi

  v8 = *a5;
  *(_QWORD *)(a2 + 321) = a6;
  *(_QWORD *)(a2 + 329) = 0LL;
  *(_QWORD *)(a2 + 337) = 0LL;
  *(_QWORD *)(a2 + 329) = *a4;
  *(_QWORD *)(a2 + 337) = a4[1];
  *a4 = 0LL;
  a4[1] = 0LL;
  *(_BYTE *)(a2 + 345) = v8;
  *(_QWORD *)a2 = winrt::Windows::Internal::Shell::implementation::PinManager::ShowPinDialog__ResumeCoro_1;
  *(_DWORD *)(a2 + 8) = *a1 != 0 ? 2 : 65538;
  v9 = a2 - 112;
  memset_0((void *)(a2 - 112), 0, 0x70uLL);
  *(_QWORD *)(v9 + 16) = &winrt::impl::produce<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncOperation<bool>,winrt::Windows::Internal::Shell::implementation::PinManager *,std::shared_ptr<PinOperationContext>,bool>::promise_type,winrt::Windows::Foundation::IAsyncOperation<bool>>::`vftable';
  *(_QWORD *)(v9 + 24) = &winrt::impl::produce<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncOperation<bool>,winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent *,winrt::Windows::Foundation::IInspectable const &,enum winrt::Windows::Internal::Shell::DragDropSimulator::DragDropSimulatorDropPoint,bool>::promise_type,winrt::Windows::Foundation::IAsyncInfo>::`vftable';
  _InterlockedIncrement(&`winrt::get_module_lock'::`2'::s_lock);
  *(_QWORD *)(v9 + 8) = 1LL;
  *(_QWORD *)(v9 + 32) = 0LL;
  *(_QWORD *)(v9 + 40) = 0LL;
  *(_BYTE *)(v9 + 48) = 0;
  *(_QWORD *)v9 = &std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncOperation<bool>,winrt::Windows::Internal::Shell::implementation::PinManager *,std::shared_ptr<PinOperationContext>,bool>::promise_type::`vftable';
  *(_QWORD *)(v9 + 56) = 0LL;
  *(_QWORD *)(v9 + 64) = 0LL;
  __ExceptionPtrCreate((void *)(v9 + 56));
  *(_QWORD *)(v9 + 72) = 0LL;
  *(_QWORD *)(v9 + 80) = 0LL;
  *(_QWORD *)(v9 + 88) = 0LL;
  *(_DWORD *)(v9 + 96) = 0;
  *(_BYTE *)(v9 + 100) = 0;
  *(_QWORD *)v9 = &std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncOperation<bool>,winrt::Windows::Internal::Shell::implementation::PinManager *,std::shared_ptr<PinOperationContext>,bool>::promise_type::`vftable';
  *(_BYTE *)(v9 + 104) = 0;
  *a3 = v9 + 16;
  Microsoft::WRL::ComPtr<IAppLayoutOperationItem>::InternalAddRef(a3);
  a5 = 0LL;
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&a5);
  *(_BYTE *)(a2 + 320) = 0;
  return winrt::Windows::Internal::Shell::implementation::PinManager::ShowPinDialog__ResumeCoro_1(a2);
}
