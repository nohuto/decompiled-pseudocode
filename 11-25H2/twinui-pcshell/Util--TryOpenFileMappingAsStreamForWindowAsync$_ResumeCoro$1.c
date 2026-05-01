/*
 * XREFs of Util::TryOpenFileMappingAsStreamForWindowAsync$_ResumeCoro$1 @ 0x18062BE80
 * Callers:
 *     Util::TryOpenFileMappingAsStreamForWindowAsync$_InitCoro$2 @ 0x18062BD40 (Util--TryOpenFileMappingAsStreamForWindowAsync$_InitCoro$2.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ @ 0x1800286D0 (-unconditional_release_ref@-$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ.c)
 *     ?ResultFromKnownLastError@@YAJXZ @ 0x18003F62C (-ResultFromKnownLastError@@YAJXZ.c)
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18005D244 (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?Cancel@?$consume_Windows_System_Threading_IThreadPoolTimer@UIThreadPoolTimer@Threading@System@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x18005D894 (-Cancel@-$consume_Windows_System_Threading_IThreadPoolTimer@UIThreadPoolTimer@Threading@System@W.c)
 *     ??4ShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@QEAAAEAU01234@$$QEAU01234@@Z @ 0x1800AA2B4 (--4ShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@QEAAAEAU01234@$$QEAU01234@@Z.c)
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x1800AC1A4 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ??1?$unique_storage@U?$handle_invalid_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAA@XZ @ 0x1800B718C (--1-$unique_storage@U-$handle_invalid_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@w.c)
 *     ?await_suspend@awaitable@?1??resume_background@winrt@@YA@XZ@QEBAXU?$coroutine_handle@X@experimental@std@@@Z @ 0x180219E7C (-await_suspend@awaitable@-1--resume_background@winrt@@YA@XZ@QEBAXU-$coroutine_handle@X@experimen.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D2628 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _CxxThrowException_0 @ 0x1802D3008 (_CxxThrowException_0.c)
 *     ?current@slim_source_location@impl@winrt@@SA?AU123@IQEBD0@Z @ 0x1802DEC34 (-current@slim_source_location@impl@winrt@@SA-AU123@IQEBD0@Z.c)
 *     ?check_hresult@winrt@@YA?AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z @ 0x1802E04C8 (-check_hresult@winrt@@YA-AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z.c)
 *     ?throw_last_error@winrt@@YAXAEBUslim_source_location@impl@1@@Z @ 0x1802E097C (-throw_last_error@winrt@@YAXAEBUslim_source_location@impl@1@@Z.c)
 *     ??0hresult_canceled@winrt@@QEAA@AEBUslim_source_location@impl@1@@Z @ 0x18031B410 (--0hresult_canceled@winrt@@QEAA@AEBUslim_source_location@impl@1@@Z.c)
 *     ??$await_suspend@Upromise_type@?$coroutine_traits@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@PEAUPinManager@implementation@Shell@Internal@34@Uhstring@4@U94@USecondaryTile@StartScreen@UI@34@PEFBU_ITEMIDLIST@@_N_NW4PINNEDLISTMODIFYCALLER@@VPinManagerRequestPinItem@PinManagerTelemetry@@V?$tip_test@V?$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@tip2@@@tip2@@V?$test_watcher@V?$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@tip2@@@tip2@@@experimental@std@@@?$await_adapter@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@$00@impl@winrt@@QEAA_NU?$coroutine_handle@Upromise_type@?$coroutine_traits@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@PEAUPinManager@implementation@Shell@Internal@34@Uhstring@4@U94@USecondaryTile@StartScreen@UI@34@PEFBU_ITEMIDLIST@@_N_NW4PINNEDLISTMODIFYCALLER@@VPinManagerRequestPinItem@PinManagerTelemetry@@V?$tip_test@V?$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@tip2@@@tip2@@V?$test_watcher@V?$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@tip2@@@tip2@@@experimental@std@@@experimental@std@@@Z @ 0x1803297A4 (--$await_suspend@Upromise_type@-$coroutine_traits@U-$IAsyncOperation@_N@Foundation@Windows@winrt.c)
 *     ??1?$cancellable_awaiter@U?$await_adapter@U?$IAsyncOperation@I@Foundation@Windows@winrt@@$00@impl@winrt@@@winrt@@QEAA@XZ @ 0x18032BAD8 (--1-$cancellable_awaiter@U-$await_adapter@U-$IAsyncOperation@I@Foundation@Windows@winrt@@$00@imp.c)
 *     ?await_resume@?$await_adapter@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@$00@impl@winrt@@QEBA@XZ @ 0x180331830 (-await_resume@-$await_adapter@U-$IAsyncOperation@_N@Foundation@Windows@winrt@@$00@impl@winrt@@QE.c)
 *     ?await_suspend@final_suspend_awaiter@?$promise_base@Upromise_type@?$coroutine_traits@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@PEAUGamingPostureController@implementation@Posture@GamingExperiences@Internal@34@UUri@234@@experimental@std@@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@X@impl@winrt@@QEBA_NU?$coroutine_handle@X@experimental@std@@@Z @ 0x180331904 (-await_suspend@final_suspend_awaiter@-$promise_base@Upromise_type@-$coroutine_trait_ea_180331904.c)
 *     ??1promise_type@?$coroutine_traits@U?$IAsyncOperation@UValueSet@Collections@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@PEAVGamingOverlayExperienceManager@@Uhstring@4@U?$IMap@Uhstring@winrt@@U12@@Collections@234@@experimental@std@@UEAA@XZ @ 0x180341BD0 (--1promise_type@-$coroutine_traits@U-$IAsyncOperation@UValueSet@Collections@Foundation@Windows@w.c)
 *     ??$await_suspend@Upromise_type@?$coroutine_traits@U?$IAsyncOperation@UIRandomAccessStream@Streams@Storage@Windows@winrt@@@Foundation@Windows@winrt@@_JUhstring@4@@experimental@std@@@?$await_adapter@U?$IAsyncOperationWithProgress@II@Foundation@Windows@winrt@@$00@impl@winrt@@QEAA_NU?$coroutine_handle@Upromise_type@?$coroutine_traits@U?$IAsyncOperation@UIRandomAccessStream@Streams@Storage@Windows@winrt@@@Foundation@Windows@winrt@@_JUhstring@4@@experimental@std@@@experimental@std@@@Z @ 0x18061FD58 (--$await_suspend@Upromise_type@-$coroutine_traits@U-$IAsyncOperation@UIRandomAccessStream@Stream.c)
 *     ??0Buffer@Streams@Storage@Windows@winrt@@QEAA@I@Z @ 0x18062398C (--0Buffer@Streams@Storage@Windows@winrt@@QEAA@I@Z.c)
 *     ??0InMemoryRandomAccessStream@Streams@Storage@Windows@winrt@@QEAA@XZ @ 0x180623A08 (--0InMemoryRandomAccessStream@Streams@Storage@Windows@winrt@@QEAA@XZ.c)
 *     ??1?$unique_ptr@XP6AHPEBX@Z@std@@QEAA@XZ @ 0x18062445C (--1-$unique_ptr@XP6AHPEBX@Z@std@@QEAA@XZ.c)
 *     ?FlushAsync@?$consume_Windows_Storage_Streams_IOutputStream@UIRandomAccessStream@Streams@Storage@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x1806261AC (-FlushAsync@-$consume_Windows_Storage_Streams_IOutputStream@UIRandomAccessStream@Streams@Storage.c)
 *     ?TryOpenFileMappingHandleForWindow@Util@@YA?AV?$unique_any_t@V?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@@wil@@_JAEBUhstring@winrt@@@Z @ 0x18062C548 (-TryOpenFileMappingHandleForWindow@Util@@YA-AV-$unique_any_t@V-$unique_storage@U-$handle_null_re.c)
 *     ?WriteAsync@?$consume_Windows_Storage_Streams_IOutputStream@UIRandomAccessStream@Streams@Storage@Windows@winrt@@@impl@winrt@@QEBA@AEBUIBuffer@Streams@Storage@Windows@3@@Z @ 0x18062D058 (-WriteAsync@-$consume_Windows_Storage_Streams_IOutputStream@UIRandomAccessStream@Streams@Storage.c)
 *     ?await_resume@?$await_adapter@U?$IAsyncOperationWithProgress@II@Foundation@Windows@winrt@@$00@impl@winrt@@QEBA@XZ @ 0x18062D9D4 (-await_resume@-$await_adapter@U-$IAsyncOperationWithProgress@II@Foundation@Windows@winrt@@$00@im.c)
 *     ?reset@?$unique_ptr@XP6AHPEBX@Z@std@@QEAAXPEAX@Z @ 0x18062EFA4 (-reset@-$unique_ptr@XP6AHPEBX@Z@std@@QEAAXPEAX@Z.c)
 *     memcpy_0 @ 0x1806A4B0C (memcpy_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=9 #try_helpers=1
void __fastcall Util::TryOpenFileMappingAsStreamForWindowAsync__ResumeCoro_1(__int64 a1, __int64 a2, void *a3)
{
  _WORD *v4; // r15
  const struct winrt::impl::slim_source_location *v5; // rax
  void **v6; // r12
  void *v7; // rcx
  LPVOID v8; // rax
  const void *v9; // rbx
  signed int Error; // eax
  winrt *v11; // rax
  const struct winrt::impl::slim_source_location *v12; // rdx
  size_t v13; // r14
  __int64 (__fastcall ***v14)(_QWORD, void *, __int64); // rcx
  __int64 v15; // rbx
  __int64 v16; // rcx
  int v17; // eax
  int v18; // eax
  __int64 v19; // rax
  const struct winrt::impl::slim_source_location *v20; // rax
  __int64 v21; // r14
  __int64 v22; // rdx
  _QWORD *v23; // rax
  const struct winrt::impl::slim_source_location *v24; // rax
  int v25; // eax
  _BYTE pExceptionObject[24]; // [rsp+68h] [rbp-100h] BYREF
  _BYTE v27[24]; // [rsp+80h] [rbp-E8h] BYREF
  _BYTE v28[48]; // [rsp+98h] [rbp-D0h] BYREF
  int v29; // [rsp+C8h] [rbp-A0h]

  v4 = (_WORD *)(a1 + 8);
  switch ( *(_WORD *)(a1 + 8) )
  {
    case 0xFFFF:
    case 1:
    case 3:
    case 5:
      goto LABEL_30;
    case 2:
      *(_QWORD *)(a1 + 448) = a1 - 112;
      if ( *(_DWORD *)(a1 - 112 + 96) == 2 )
      {
        v5 = (const struct winrt::impl::slim_source_location *)winrt::impl::slim_source_location::current(a1 + 304);
        winrt::hresult_canceled::hresult_canceled((winrt::hresult_canceled *)pExceptionObject, v5);
        throw (winrt::hresult_canceled *)pExceptionObject;
      }
      *v4 = 4;
      `winrt::resume_background'::`2'::awaitable::await_suspend(a1, (void (*)(void *, void *))a1, a3);
      return;
    case 4:
      v6 = (void **)(a1 + 16);
      Util::TryOpenFileMappingHandleForWindow(a1 + 16, *(_QWORD *)(a1 + 465), a1 + 473);
      v7 = *v6;
      if ( !*v6 || v7 == (void *)-1LL )
      {
        *(_QWORD *)(a1 + 24) = 0LL;
        v21 = *(_QWORD *)(a1 + 448);
        winrt::WindowsUdk::UI::Shell::ShellViewCoordinator::operator=((__int64 *)(v21 + 104), (__int64 *)(a1 + 24));
        winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)(a1 + 24));
        wil::details::unique_storage<wil::details::handle_invalid_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::~unique_storage<wil::details::handle_invalid_resource_policy<int (*)(void *),&int CloseHandle(void *)>>((void **)(a1 + 16));
      }
      else
      {
        *(_QWORD *)(a1 + 32) = UnmapViewOfFile;
        *(_QWORD *)(a1 + 40) = 0LL;
        v8 = MapViewOfFile(v7, 4u, 0, 0, 0LL);
        std::unique_ptr<void,int (*)(void const *)>::reset(a1 + 32, v8);
        *(_DWORD *)(a1 + 48) = 0;
        *(_QWORD *)(a1 + 56) = 0LL;
        *(_QWORD *)(a1 + 64) = 0LL;
        v9 = *(const void **)(a1 + 40);
        if ( v9 )
          Error = 0;
        else
          Error = ResultFromKnownLastError();
        winrt::check_hresult((int *)(a1 + 72), Error, a1 + 48);
        *(_OWORD *)(a1 + 80) = 0LL;
        *(_OWORD *)(a1 + 96) = 0LL;
        *(_OWORD *)(a1 + 112) = 0LL;
        if ( !VirtualQuery(v9, (PMEMORY_BASIC_INFORMATION)(a1 + 80), 0x30uLL) )
        {
          v11 = (winrt *)winrt::impl::slim_source_location::current(a1 + 128);
          winrt::throw_last_error(v11, v12);
        }
        v13 = *(unsigned int *)(a1 + 104);
        v29 = v13;
        winrt::Windows::Storage::Streams::Buffer::Buffer((winrt::Windows::Storage::Streams::Buffer *)(a1 + 152), v13);
        winrt::impl::consume_Windows_System_Threading_IThreadPoolTimer<winrt::Windows::System::Threading::IThreadPoolTimer>::Cancel((__int64 *)(a1 + 152));
        *(_QWORD *)(a1 + 160) = 0LL;
        *(_DWORD *)(a1 + 168) = 0;
        *(_QWORD *)(a1 + 176) = 0LL;
        *(_QWORD *)(a1 + 184) = 0LL;
        v14 = *(__int64 (__fastcall ****)(_QWORD, void *, __int64))(a1 + 152);
        if ( v14 )
        {
          *(_QWORD *)(a1 + 352) = 0LL;
          *(_DWORD *)(a1 + 328) = 0;
          *(_QWORD *)(a1 + 336) = 0LL;
          *(_QWORD *)(a1 + 344) = 0LL;
          v17 = (**v14)(v14, &winrt::impl::guid_v<winrt::impl::IBufferByteAccess>, a1 + 352);
          winrt::check_hresult((int *)(a1 + 360), v17, a1 + 328);
          v15 = *(_QWORD *)(a1 + 352);
          v16 = v15;
        }
        else
        {
          v15 = 0LL;
          v16 = 0LL;
        }
        *(_QWORD *)(a1 + 192) = v16;
        v18 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v15 + 24LL))(v15, a1 + 160);
        winrt::check_hresult((int *)(a1 + 200), v18, a1 + 168);
        if ( v15 )
          winrt::com_ptr<ISnapComponent>::unconditional_release_ref((__int64 *)(a1 + 192));
        memcpy_0(*(void **)(a1 + 160), *(const void **)(a1 + 40), v13);
        winrt::Windows::Storage::Streams::InMemoryRandomAccessStream::InMemoryRandomAccessStream((struct IUnknown *)(a1 + 208));
        v19 = winrt::impl::consume_Windows_Storage_Streams_IOutputStream<winrt::Windows::Storage::Streams::IRandomAccessStream>::WriteAsync(
                a1 + 208,
                a1 + 216,
                a1 + 152);
        if ( *(_DWORD *)(a1 - 16) == 2 )
        {
          v20 = (const struct winrt::impl::slim_source_location *)winrt::impl::slim_source_location::current(a1 + 368);
          winrt::hresult_canceled::hresult_canceled((winrt::hresult_canceled *)v27, v20);
          throw (winrt::hresult_canceled *)v27;
        }
        *(_QWORD *)(a1 + 224) = 0LL;
        *(_QWORD *)(a1 + 232) = v19;
        *(_QWORD *)(a1 + 240) = 0LL;
        *(_BYTE *)(a1 + 248) = 1;
        *v4 = 6;
        if ( winrt::impl::await_adapter<winrt::Windows::Foundation::IAsyncOperationWithProgress<unsigned int,unsigned int>,1>::await_suspend<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Storage::Streams::IRandomAccessStream>,__int64,winrt::hstring>::promise_type>(
               a1 + 224,
               a1) )
        {
          return;
        }
LABEL_23:
        winrt::impl::await_adapter<winrt::Windows::Foundation::IAsyncOperationWithProgress<unsigned int,unsigned int>,1>::await_resume(a1 + 224);
        winrt::cancellable_awaiter<winrt::impl::await_adapter<winrt::Windows::Foundation::IAsyncOperation<unsigned int>,1>>::~cancellable_awaiter<winrt::impl::await_adapter<winrt::Windows::Foundation::IAsyncOperation<unsigned int>,1>>((winrt::cancellable_promise **)(a1 + 224));
        winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)(a1 + 216));
        v23 = winrt::impl::consume_Windows_Storage_Streams_IOutputStream<winrt::Windows::Storage::Streams::IRandomAccessStream>::FlushAsync(
                (__int64 (__fastcall ****)(_QWORD, void *, __int64 *))(a1 + 208),
                (_QWORD *)(a1 + 256));
        if ( *(_DWORD *)(a1 - 16) == 2 )
        {
          v24 = (const struct winrt::impl::slim_source_location *)winrt::impl::slim_source_location::current(a1 + 392);
          winrt::hresult_canceled::hresult_canceled((winrt::hresult_canceled *)v28, v24);
          throw (winrt::hresult_canceled *)v28;
        }
        *(_QWORD *)(a1 + 264) = 0LL;
        *(_QWORD *)(a1 + 272) = v23;
        *(_QWORD *)(a1 + 280) = 0LL;
        *(_BYTE *)(a1 + 288) = 1;
        *v4 = 8;
        if ( (unsigned __int8)winrt::impl::await_adapter<winrt::Windows::Foundation::IAsyncOperation<bool>,1>::await_suspend<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncOperation<bool>,winrt::Windows::Internal::Shell::implementation::PinManager *,winrt::hstring,winrt::hstring,winrt::Windows::UI::StartScreen::SecondaryTile,_ITEMIDLIST const __unaligned *,bool,bool,enum PINNEDLISTMODIFYCALLER,PinManagerTelemetry::PinManagerRequestPinItem,tip2::tip_test<tip2::details::merged_data<PinManagerTipTests::_tip_PinManagerPinTest,PinManagerTipTests::_tip_PinManagerPinTest>>,tip2::test_watcher<tip2::details::merged_data<PinManagerTipTests::_tip_PinManagerPinTest,PinManagerTipTests::_tip_PinManagerPinTest>>>::promise_type>(
                                (__int64 *)(a1 + 264),
                                a1) )
          return;
LABEL_28:
        winrt::impl::await_adapter<winrt::Windows::Foundation::IAsyncOperation<bool>,1>::await_resume(a1 + 264);
        winrt::cancellable_awaiter<winrt::impl::await_adapter<winrt::Windows::Foundation::IAsyncOperation<unsigned int>,1>>::~cancellable_awaiter<winrt::impl::await_adapter<winrt::Windows::Foundation::IAsyncOperation<unsigned int>,1>>((winrt::cancellable_promise **)(a1 + 264));
        winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)(a1 + 256));
        *(_DWORD *)(a1 + 416) = 0;
        *(_QWORD *)(a1 + 424) = 0LL;
        *(_QWORD *)(a1 + 432) = 0LL;
        v25 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 208) + 88LL))(*(_QWORD *)(a1 + 208), 0LL);
        winrt::check_hresult((int *)(a1 + 440), v25, a1 + 416);
        v21 = *(_QWORD *)(a1 + 448);
        winrt::WindowsUdk::UI::Shell::ShellViewCoordinator::operator=((__int64 *)(v21 + 104), (__int64 *)(a1 + 208));
        winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)(a1 + 208));
        winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)(a1 + 152));
        std::unique_ptr<void,int (*)(void const *)>::~unique_ptr<void,int (*)(void const *)>(a1 + 32);
        wil::details::unique_storage<wil::details::handle_invalid_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::~unique_storage<wil::details::handle_invalid_resource_policy<int (*)(void *),&int CloseHandle(void *)>>((void **)(a1 + 16));
      }
      *(_QWORD *)(a1 + 296) = v21;
      *v4 = 0;
      if ( !winrt::impl::promise_base<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncOperation<bool>,winrt::Windows::Internal::GamingExperiences::Posture::implementation::GamingPostureController *,winrt::Windows::Foundation::Uri>::promise_type,winrt::Windows::Foundation::IAsyncOperation<bool>,void>::final_suspend_awaiter::await_suspend(
              (__int64 *)(a1 + 296),
              v22) )
      {
LABEL_30:
        *(_QWORD *)(a1 + 448) = a1 - 112;
        std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::Collections::ValueSet>,GamingOverlayExperienceManager *,winrt::hstring,winrt::Windows::Foundation::Collections::IMap<winrt::hstring,winrt::hstring>>::promise_type::~promise_type((__int64 *)(a1 - 112));
        winrt::handle_type<winrt::impl::hstring_traits>::close((volatile signed __int32 **)(a1 + 473));
        if ( *(_WORD *)(a1 + 10) )
          operator delete((void *)(a1 - 112), (const struct std::nothrow_t *)0x260);
      }
      return;
    case 6:
      goto LABEL_23;
    case 7:
      winrt::cancellable_awaiter<winrt::impl::await_adapter<winrt::Windows::Foundation::IAsyncOperation<unsigned int>,1>>::~cancellable_awaiter<winrt::impl::await_adapter<winrt::Windows::Foundation::IAsyncOperation<unsigned int>,1>>((winrt::cancellable_promise **)(a1 + 224));
      winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)(a1 + 216));
      winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)(a1 + 208));
      winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)(a1 + 152));
      std::unique_ptr<void,int (*)(void const *)>::~unique_ptr<void,int (*)(void const *)>(a1 + 32);
      wil::details::unique_storage<wil::details::handle_invalid_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::~unique_storage<wil::details::handle_invalid_resource_policy<int (*)(void *),&int CloseHandle(void *)>>((void **)(a1 + 16));
      goto LABEL_30;
    case 8:
      goto LABEL_28;
    case 9:
      winrt::cancellable_awaiter<winrt::impl::await_adapter<winrt::Windows::Foundation::IAsyncOperation<unsigned int>,1>>::~cancellable_awaiter<winrt::impl::await_adapter<winrt::Windows::Foundation::IAsyncOperation<unsigned int>,1>>((winrt::cancellable_promise **)(a1 + 264));
      winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)(a1 + 256));
      winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)(a1 + 208));
      winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)(a1 + 152));
      std::unique_ptr<void,int (*)(void const *)>::~unique_ptr<void,int (*)(void const *)>(a1 + 32);
      wil::details::unique_storage<wil::details::handle_invalid_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::~unique_storage<wil::details::handle_invalid_resource_policy<int (*)(void *),&int CloseHandle(void *)>>((void **)(a1 + 16));
      goto LABEL_30;
    default:
      __debugbreak();
      return;
  }
}
