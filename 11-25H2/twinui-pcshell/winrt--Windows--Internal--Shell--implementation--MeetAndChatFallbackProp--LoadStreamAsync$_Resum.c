/*
 * XREFs of winrt::Windows::Internal::Shell::implementation::MeetAndChatFallbackProp::LoadStreamAsync$_ResumeCoro$1 @ 0x1805DA000
 * Callers:
 *     winrt::Windows::Internal::Shell::implementation::MeetAndChatFallbackProp::LoadStreamAsync$_InitCoro$2 @ 0x1805D9EE4 (winrt--Windows--Internal--Shell--implementation--MeetAndChatFallbackProp--LoadStreamAsync$_InitC.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18005D244 (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ??4ShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@QEAAAEAU01234@$$QEAU01234@@Z @ 0x1800AA2B4 (--4ShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@QEAAAEAU01234@$$QEAU01234@@Z.c)
 *     ??1?$promise_base@Upromise_type@?$coroutine_traits@U?$IAsyncOperation@UValueSet@Collections@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@PEAVGamingOverlayExperienceManager@@Uhstring@4@U?$IMap@Uhstring@winrt@@U12@@Collections@234@@experimental@std@@U?$IAsyncOperation@UValueSet@Collections@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@X@impl@winrt@@UEAA@XZ @ 0x1802291B8 (--1-$promise_base@Upromise_type@-$coroutine_traits@U-$IAsyncOperation@UValueSet@Collections@Foun.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D2628 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _CxxThrowException_0 @ 0x1802D3008 (_CxxThrowException_0.c)
 *     ?current@slim_source_location@impl@winrt@@SA?AU123@IQEBD0@Z @ 0x1802DEC34 (-current@slim_source_location@impl@winrt@@SA-AU123@IQEBD0@Z.c)
 *     ??0hresult_canceled@winrt@@QEAA@AEBUslim_source_location@impl@1@@Z @ 0x18031B410 (--0hresult_canceled@winrt@@QEAA@AEBUslim_source_location@impl@1@@Z.c)
 *     ??1?$cancellable_awaiter@U?$await_adapter@U?$IAsyncOperation@I@Foundation@Windows@winrt@@$00@impl@winrt@@@winrt@@QEAA@XZ @ 0x18032BAD8 (--1-$cancellable_awaiter@U-$await_adapter@U-$IAsyncOperation@I@Foundation@Windows@winrt@@$00@imp.c)
 *     ?await_suspend@final_suspend_awaiter@?$promise_base@Upromise_type@?$coroutine_traits@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@PEAUGamingPostureController@implementation@Posture@GamingExperiences@Internal@34@UUri@234@@experimental@std@@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@X@impl@winrt@@QEBA_NU?$coroutine_handle@X@experimental@std@@@Z @ 0x180331904 (-await_suspend@final_suspend_awaiter@-$promise_base@Upromise_type@-$coroutine_trait_ea_180331904.c)
 *     ??$await_suspend@Upromise_type@?$coroutine_traits@UIAsyncAction@Foundation@Windows@winrt@@PEAUMeetAndChatFallbackProp@implementation@Shell@Internal@34@@experimental@std@@@?$await_adapter@U?$IAsyncOperation@UIRandomAccessStreamWithContentType@Streams@Storage@Windows@winrt@@@Foundation@Windows@winrt@@$00@impl@winrt@@QEAA_NU?$coroutine_handle@Upromise_type@?$coroutine_traits@UIAsyncAction@Foundation@Windows@winrt@@PEAUMeetAndChatFallbackProp@implementation@Shell@Internal@34@@experimental@std@@@experimental@std@@@Z @ 0x18055CFB0 (--$await_suspend@Upromise_type@-$coroutine_traits@UIAsyncAction@Foundation@Windows@winrt@@PEAUMe.c)
 *     ?await_resume@?$await_adapter@U?$IAsyncOperation@UIRandomAccessStreamWithContentType@Streams@Storage@Windows@winrt@@@Foundation@Windows@winrt@@$00@impl@winrt@@QEBA@XZ @ 0x18055F1C8 (-await_resume@-$await_adapter@U-$IAsyncOperation@UIRandomAccessStreamWithContentType@Streams@Sto.c)
 *     ?OpenReadAsync@?$consume_Windows_Storage_Streams_IRandomAccessStreamReference@UIStorageFile@Storage@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x1805DA288 (-OpenReadAsync@-$consume_Windows_Storage_Streams_IRandomAccessStreamReference@UIStorageFile@Stor.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2 #try_helpers=2
void __fastcall winrt::Windows::Internal::Shell::implementation::MeetAndChatFallbackProp::LoadStreamAsync__ResumeCoro_1(
        __int64 a1)
{
  _WORD *v2; // r14
  struct HINSTANCE__ *v3; // rdx
  __int64 v4; // rax
  __int64 Async; // rax
  const struct winrt::impl::slim_source_location *v6; // rax
  void (__fastcall ***v7)(_QWORD, void *, __int64); // rcx
  __int64 v8; // rax
  _BYTE pExceptionObject[96]; // [rsp+28h] [rbp-60h] BYREF

  v2 = (_WORD *)(a1 + 8);
  v3 = &_ImageBase;
  switch ( *(_WORD *)(a1 + 8) )
  {
    case 0xFFFF:
    case 1:
    case 3:
      goto LABEL_14;
    case 2:
      v4 = *(_QWORD *)(a1 + 129);
      if ( !*(_QWORD *)(v4 + 56) || *(_QWORD *)(v4 + 48) )
        goto LABEL_13;
      Async = winrt::impl::consume_Windows_Storage_Streams_IRandomAccessStreamReference<winrt::Windows::Storage::IStorageFile>::OpenReadAsync(
                v4 + 56,
                a1 + 16);
      if ( *(_DWORD *)(a1 - 16) == 2 )
      {
        v6 = (const struct winrt::impl::slim_source_location *)winrt::impl::slim_source_location::current(a1 + 88);
        winrt::hresult_canceled::hresult_canceled((winrt::hresult_canceled *)pExceptionObject, v6);
        throw (winrt::hresult_canceled *)pExceptionObject;
      }
      *(_QWORD *)(a1 + 24) = 0LL;
      *(_QWORD *)(a1 + 32) = Async;
      *(_QWORD *)(a1 + 40) = 0LL;
      *(_BYTE *)(a1 + 48) = 1;
      *v2 = 4;
      if ( !(unsigned __int8)winrt::impl::await_adapter<winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Storage::Streams::IRandomAccessStreamWithContentType>,1>::await_suspend<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncAction,winrt::Windows::Internal::Shell::implementation::MeetAndChatFallbackProp *>::promise_type>(
                               (__int64 *)(a1 + 24),
                               a1) )
      {
LABEL_9:
        v7 = *(void (__fastcall ****)(_QWORD, void *, __int64))winrt::impl::await_adapter<winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Storage::Streams::IRandomAccessStreamWithContentType>,1>::await_resume(
                                                                 a1 + 24,
                                                                 (winrt *)(a1 + 56));
        if ( v7 )
        {
          *(_QWORD *)(a1 + 112) = 0LL;
          (**v7)(v7, &winrt::impl::guid_v<winrt::Windows::Storage::Streams::IRandomAccessStream>, a1 + 112);
          v8 = *(_QWORD *)(a1 + 112);
        }
        else
        {
          v8 = 0LL;
        }
        *(_QWORD *)(a1 + 64) = v8;
        winrt::WindowsUdk::UI::Shell::ShellViewCoordinator::operator=(
          (__int64 *)(*(_QWORD *)(a1 + 129) + 48LL),
          (__int64 *)(a1 + 64));
        winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)(a1 + 64));
        winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)(a1 + 56));
        winrt::cancellable_awaiter<winrt::impl::await_adapter<winrt::Windows::Foundation::IAsyncOperation<unsigned int>,1>>::~cancellable_awaiter<winrt::impl::await_adapter<winrt::Windows::Foundation::IAsyncOperation<unsigned int>,1>>((winrt::cancellable_promise **)(a1 + 24));
        winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)(a1 + 16));
LABEL_13:
        *(_QWORD *)(a1 + 80) = a1 - 112;
        *v2 = 0;
        if ( !winrt::impl::promise_base<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncOperation<bool>,winrt::Windows::Internal::GamingExperiences::Posture::implementation::GamingPostureController *,winrt::Windows::Foundation::Uri>::promise_type,winrt::Windows::Foundation::IAsyncOperation<bool>,void>::final_suspend_awaiter::await_suspend(
                (__int64 *)(a1 + 80),
                (__int64)v3) )
        {
LABEL_14:
          winrt::impl::promise_base<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::Collections::ValueSet>,GamingOverlayExperienceManager *,winrt::hstring,winrt::Windows::Foundation::Collections::IMap<winrt::hstring,winrt::hstring>>::promise_type,winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::Collections::ValueSet>,void>::~promise_base<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::Collections::ValueSet>,GamingOverlayExperienceManager *,winrt::hstring,winrt::Windows::Foundation::Collections::IMap<winrt::hstring,winrt::hstring>>::promise_type,winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::Collections::ValueSet>,void>((__int64 *)(a1 - 112));
          if ( *(_WORD *)(a1 + 10) )
            operator delete((void *)(a1 - 112), (const struct std::nothrow_t *)0x100);
        }
      }
      return;
    case 4:
      goto LABEL_9;
    case 5:
      winrt::cancellable_awaiter<winrt::impl::await_adapter<winrt::Windows::Foundation::IAsyncOperation<unsigned int>,1>>::~cancellable_awaiter<winrt::impl::await_adapter<winrt::Windows::Foundation::IAsyncOperation<unsigned int>,1>>((winrt::cancellable_promise **)(a1 + 24));
      winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)(a1 + 16));
      goto LABEL_14;
    default:
      __debugbreak();
      return;
  }
}
