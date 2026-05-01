/*
 * XREFs of JointResize::EnsureTileCollectionAsync$_ResumeCoro$1 @ 0x180538470
 * Callers:
 *     ?EnsureTileCollectionAsync@JointResize@@AEAA?AU?$IAsyncOperation@UTileCollection@StartScreen@UI@WindowsUdk@winrt@@@Foundation@Windows@winrt@@XZ @ 0x180538750 (-EnsureTileCollectionAsync@JointResize@@AEAA-AU-$IAsyncOperation@UTileCollection@StartScreen@UI@.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18002633C (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?unconditional_release_ref@?$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ @ 0x18002694C (-unconditional_release_ref@-$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ.c)
 *     ??4ShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@QEAAAEAU01234@$$QEAU01234@@Z @ 0x180054B64 (--4ShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@QEAAAEAU01234@$$QEAU01234@@Z.c)
 *     ??4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@AEBU0123@@Z @ 0x1800DC92C (--4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@AEBU0123@@Z.c)
 *     ??0hstring@param@winrt@@QEAA@QEBG@Z @ 0x1801AEAFC (--0hstring@param@winrt@@QEAA@QEBG@Z.c)
 *     ??0TileCollectionCreateOptions@StartScreen@UI@WindowsUdk@winrt@@QEAA@XZ @ 0x1801B3DA4 (--0TileCollectionCreateOptions@StartScreen@UI@WindowsUdk@winrt@@QEAA@XZ.c)
 *     ?CreateAsync@TileCollection@StartScreen@UI@WindowsUdk@winrt@@SA@AEBUTileCollectionCreateOptions@2345@@Z @ 0x180212A8C (-CreateAsync@TileCollection@StartScreen@UI@WindowsUdk@winrt@@SA@AEBUTileCollectionCreateOptions@.c)
 *     ?TileKindsSelector@?$consume_WindowsUdk_UI_StartScreen_ITileCollectionCreateOptions@UITileCollectionCreateOptions@StartScreen@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA@AEBW4TileKinds@StartScreen@UI@WindowsUdk@3@@Z @ 0x180260A0C (-TileKindsSelector@-$consume_WindowsUdk_UI_StartScreen_ITileCollectionCreateOptions@UITileCollec.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802C92A8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _CxxThrowException_0 @ 0x1802C9ED8 (_CxxThrowException_0.c)
 *     ?current@slim_source_location@impl@winrt@@SA?AU123@IQEBD0@Z @ 0x1802D7924 (-current@slim_source_location@impl@winrt@@SA-AU123@IQEBD0@Z.c)
 *     ?check_hresult@winrt@@YA?AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z @ 0x1802D92D0 (-check_hresult@winrt@@YA-AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z.c)
 *     ??0hresult_canceled@winrt@@QEAA@AEBUslim_source_location@impl@1@@Z @ 0x1803179A0 (--0hresult_canceled@winrt@@QEAA@AEBUslim_source_location@impl@1@@Z.c)
 *     ??1?$cancellable_awaiter@U?$await_adapter@U?$IAsyncOperation@I@Foundation@Windows@winrt@@$00@impl@winrt@@@winrt@@QEAA@XZ @ 0x180328DF0 (--1-$cancellable_awaiter@U-$await_adapter@U-$IAsyncOperation@I@Foundation@Windows@winrt@@$00@imp.c)
 *     ??$await_suspend@Upromise_type@?$coroutine_traits@U?$IAsyncOperation@UTileCollection@StartScreen@UI@WindowsUdk@winrt@@@Foundation@Windows@winrt@@PEAVJointResize@@@experimental@std@@@?$await_adapter@U?$IAsyncOperation@UTileCollection@StartScreen@UI@WindowsUdk@winrt@@@Foundation@Windows@winrt@@$00@impl@winrt@@QEAA_NU?$coroutine_handle@Upromise_type@?$coroutine_traits@U?$IAsyncOperation@UTileCollection@StartScreen@UI@WindowsUdk@winrt@@@Foundation@Windows@winrt@@PEAVJointResize@@@experimental@std@@@experimental@std@@@Z @ 0x180536A94 (--$await_suspend@Upromise_type@-$coroutine_traits@U-$IAsyncOperation@UTileCollection@StartScreen.c)
 *     ??1promise_type@?$coroutine_traits@U?$IAsyncOperation@UTileCollection@StartScreen@UI@WindowsUdk@winrt@@@Foundation@Windows@winrt@@PEAVJointResize@@@experimental@std@@UEAA@XZ @ 0x180537A44 (--1promise_type@-$coroutine_traits@U-$IAsyncOperation@UTileCollection@StartScreen@UI@WindowsUdk@.c)
 *     ?await_resume@?$await_adapter@U?$IAsyncOperation@UTileCollection@StartScreen@UI@WindowsUdk@winrt@@@Foundation@Windows@winrt@@$00@impl@winrt@@QEBA@XZ @ 0x18053B130 (-await_resume@-$await_adapter@U-$IAsyncOperation@UTileCollection@StartScreen@UI@WindowsUdk@winrt.c)
 *     ?await_suspend@final_suspend_awaiter@?$promise_base@Upromise_type@?$coroutine_traits@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@PEAUDragDropSimulatorComponent@implementation@DragDropSimulator@Shell@Internal@34@AEBUIInspectable@234@W4DragDropSimulatorDropPoint@78934@_N@experimental@std@@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@X@impl@winrt@@QEBA_NU?$coroutine_handle@X@experimental@std@@@Z @ 0x18053B190 (-await_suspend@final_suspend_awaiter@-$promise_base@Upromise_type@-$coroutine_trait_ea_18053B190.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=5 #try_helpers=1
void __fastcall JointResize::EnsureTileCollectionAsync__ResumeCoro_1(__int64 a1)
{
  __int64 v2; // r15
  __int64 *v3; // rbx
  __int64 *v4; // rdi
  __int64 *v5; // rcx
  __int64 v6; // rax
  int v7; // eax
  const struct winrt::WindowsUdk::UI::StartScreen::TileCollectionCreateOptions *Async; // rax
  const struct winrt::impl::slim_source_location *v9; // rax
  __int64 v10; // r13
  __int64 *v11; // rax
  _BYTE pExceptionObject[24]; // [rsp+28h] [rbp-90h] BYREF
  __int64 v13; // [rsp+40h] [rbp-78h]

  v2 = a1 + 8;
  switch ( *(_WORD *)(a1 + 8) )
  {
    case 0xFFFF:
    case 1:
    case 3:
      goto LABEL_17;
    case 2:
      v3 = *(__int64 **)(a1 + 216);
      v4 = (__int64 *)(a1 + 16);
      *(_QWORD *)(a1 + 16) = 0LL;
      if ( v3 )
      {
        *v4 = (__int64)v3;
        (*(void (__fastcall **)(__int64 *))(*v3 + 8))(v3);
      }
      if ( v3[32] )
      {
        v10 = a1 - 112;
      }
      else
      {
        winrt::WindowsUdk::UI::StartScreen::TileCollectionCreateOptions::TileCollectionCreateOptions((winrt::WindowsUdk::UI::StartScreen::TileCollectionCreateOptions *)(a1 + 24));
        *(_DWORD *)(a1 + 32) = 0;
        winrt::impl::consume_WindowsUdk_UI_StartScreen_ITileCollectionCreateOptions<winrt::WindowsUdk::UI::StartScreen::ITileCollectionCreateOptions>::TileKindsSelector(
          (__int64 *)(a1 + 24),
          (unsigned int *)(a1 + 32));
        winrt::param::hstring::hstring((winrt::param::hstring *)(a1 + 40), L"JointResizeUTMCache.dat");
        v5 = *(__int64 **)(a1 + 24);
        *(_DWORD *)(a1 + 128) = 0;
        *(_QWORD *)(a1 + 136) = 0LL;
        *(_QWORD *)(a1 + 144) = 0LL;
        v6 = *v5;
        v13 = *(_QWORD *)(a1 + 40);
        v7 = (*(__int64 (__fastcall **)(__int64 *))(v6 + 56))(v5);
        winrt::check_hresult((int *)(a1 + 152), v7, a1 + 128);
        *(_QWORD *)(a1 + 160) = a1 - 112;
        Async = winrt::WindowsUdk::UI::StartScreen::TileCollection::CreateAsync(
                  (const struct winrt::WindowsUdk::UI::StartScreen::TileCollectionCreateOptions *)(a1 + 72),
                  a1 + 24);
        if ( *(_DWORD *)(a1 - 112 + 96) == 2 )
        {
          v9 = (const struct winrt::impl::slim_source_location *)winrt::impl::slim_source_location::current(a1 + 176);
          winrt::hresult_canceled::hresult_canceled((winrt::hresult_canceled *)pExceptionObject, v9);
          throw (winrt::hresult_canceled *)pExceptionObject;
        }
        *(_QWORD *)(a1 + 80) = 0LL;
        *(_QWORD *)(a1 + 88) = Async;
        *(_QWORD *)(a1 + 96) = 0LL;
        *(_BYTE *)(a1 + 104) = 1;
        *(_WORD *)v2 = 4;
        if ( (unsigned __int8)winrt::impl::await_adapter<winrt::Windows::Foundation::IAsyncOperation<winrt::WindowsUdk::UI::StartScreen::TileCollection>,1>::await_suspend<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncOperation<winrt::WindowsUdk::UI::StartScreen::TileCollection>,JointResize *>::promise_type>(
                                (__int64 *)(a1 + 80),
                                a1) )
          return;
LABEL_13:
        v11 = (__int64 *)winrt::impl::await_adapter<winrt::Windows::Foundation::IAsyncOperation<winrt::WindowsUdk::UI::StartScreen::TileCollection>,1>::await_resume(
                           a1 + 80,
                           a1 + 112);
        v3 = *(__int64 **)(v2 + 208);
        winrt::WindowsUdk::UI::Shell::ShellViewCoordinator::operator=(v3 + 32, v11);
        winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)(a1 + 112));
        winrt::cancellable_awaiter<winrt::impl::await_adapter<winrt::Windows::Foundation::IAsyncOperation<unsigned int>,1>>::~cancellable_awaiter<winrt::impl::await_adapter<winrt::Windows::Foundation::IAsyncOperation<unsigned int>,1>>((winrt::cancellable_promise **)(a1 + 80));
        winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)(a1 + 72));
        winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)(a1 + 24));
        v10 = *(_QWORD *)(a1 + 160);
        v4 = (__int64 *)(a1 + 16);
      }
      winrt::Windows::Foundation::IUnknown::operator=((__int64 *)(v10 + 104), v3 + 32);
      if ( *v4 )
        winrt::com_ptr<ISnapComponent>::unconditional_release_ref(v4);
      *(_QWORD *)(a1 + 120) = v10;
      *(_WORD *)v2 = 0;
      if ( !(unsigned __int8)winrt::impl::promise_base<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncOperation<bool>,winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent *,winrt::Windows::Foundation::IInspectable const &,enum winrt::Windows::Internal::Shell::DragDropSimulator::DragDropSimulatorDropPoint,bool>::promise_type,winrt::Windows::Foundation::IAsyncOperation<bool>,void>::final_suspend_awaiter::await_suspend() )
      {
LABEL_17:
        std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncOperation<winrt::WindowsUdk::UI::StartScreen::TileCollection>,JointResize *>::promise_type::~promise_type((__int64 *)(a1 - 112));
        if ( *(_WORD *)(a1 + 10) )
          operator delete((void *)(a1 - 112), (const struct std::nothrow_t *)0x150);
      }
      return;
    case 4:
      goto LABEL_13;
    case 5:
      winrt::cancellable_awaiter<winrt::impl::await_adapter<winrt::Windows::Foundation::IAsyncOperation<unsigned int>,1>>::~cancellable_awaiter<winrt::impl::await_adapter<winrt::Windows::Foundation::IAsyncOperation<unsigned int>,1>>((winrt::cancellable_promise **)(a1 + 80));
      winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)(a1 + 72));
      winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)(a1 + 24));
      if ( *(_QWORD *)(a1 + 16) )
        winrt::com_ptr<ISnapComponent>::unconditional_release_ref((__int64 *)(a1 + 16));
      goto LABEL_17;
    default:
      __debugbreak();
      return;
  }
}
