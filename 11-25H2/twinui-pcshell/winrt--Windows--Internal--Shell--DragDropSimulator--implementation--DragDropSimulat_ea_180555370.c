/*
 * XREFs of winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent::DropDataOnUwpEndPointAsync$_ResumeCoro$1 @ 0x180555370
 * Callers:
 *     winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent::DropDataOnUwpEndPointAsync$_InitCoro$2 @ 0x18055520C (winrt--Windows--Internal--Shell--DragDropSimulator--implementation--DragDropSimulatorComponent--.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180028330 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800934E8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0?$com_ptr_t@UIVirtualDesktop@@Uerr_returncode_policy@wil@@@wil@@QEAA@AEBV01@@Z @ 0x1800E8F1C (--0-$com_ptr_t@UIVirtualDesktop@@Uerr_returncode_policy@wil@@@wil@@QEAA@AEBV01@@Z.c)
 *     ??0?$com_ptr_t@UIDropTarget@@Uerr_exception_policy@wil@@@wil@@QEAA@AEBV01@@Z @ 0x1801E81FC (--0-$com_ptr_t@UIDropTarget@@Uerr_exception_policy@wil@@@wil@@QEAA@AEBV01@@Z.c)
 *     ??1?$promise_base@Upromise_type@?$coroutine_traits@U?$IAsyncOperation@UValueSet@Collections@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@PEAVGamingOverlayExperienceManager@@Uhstring@4@U?$IMap@Uhstring@winrt@@U12@@Collections@234@@experimental@std@@U?$IAsyncOperation@UValueSet@Collections@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@X@impl@winrt@@UEAA@XZ @ 0x1802291B8 (--1-$promise_base@Upromise_type@-$coroutine_traits@U-$IAsyncOperation@UValueSet@Collections@Foun.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D2628 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??$await_transform@Usignal_awaiter@impl@winrt@@@?$promise_base@Upromise_type@?$coroutine_traits@U?$IAsyncOperation@UValueSet@Collections@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@PEAVGamingOverlayExperienceManager@@Uhstring@4@U?$IMap@Uhstring@winrt@@U12@@Collections@234@@experimental@std@@U?$IAsyncOperation@UValueSet@Collections@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@X@impl@winrt@@QEAA$$QEAUsignal_awaiter@12@$$QEAU312@@Z @ 0x1803297DC (--$await_transform@Usignal_awaiter@impl@winrt@@@-$promise_base@Upromise_type@-$coroutine_traits@.c)
 *     ?await_suspend@final_suspend_awaiter@?$promise_base@Upromise_type@?$coroutine_traits@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@PEAUGamingPostureController@implementation@Posture@GamingExperiences@Internal@34@UUri@234@@experimental@std@@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@X@impl@winrt@@QEBA_NU?$coroutine_handle@X@experimental@std@@@Z @ 0x180331904 (-await_suspend@final_suspend_awaiter@-$promise_base@Upromise_type@-$coroutine_trait_ea_180331904.c)
 *     ??$await_suspend@Upromise_type@?$coroutine_traits@UIAsyncAction@Foundation@Windows@winrt@@PEBGV?$duration@_JU?$ratio@$00$0DOI@@std@@@chrono@std@@@experimental@std@@@timespan_awaiter@impl@winrt@@QEAAXU?$coroutine_handle@Upromise_type@?$coroutine_traits@UIAsyncAction@Foundation@Windows@winrt@@PEBGV?$duration@_JU?$ratio@$00$0DOI@@std@@@chrono@std@@@experimental@std@@@experimental@std@@@Z @ 0x180337F70 (--$await_suspend@Upromise_type@-$coroutine_traits@UIAsyncAction@Foundation@Windows@winrt@@PEBGV-.c)
 *     ??1timespan_awaiter@impl@winrt@@QEAA@XZ @ 0x1803386D0 (--1timespan_awaiter@impl@winrt@@QEAA@XZ.c)
 *     ?await_resume@timespan_awaiter@impl@winrt@@QEAAXXZ @ 0x18033A418 (-await_resume@timespan_awaiter@impl@winrt@@QEAAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4 #try_helpers=1
void __fastcall winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent::DropDataOnUwpEndPointAsync__ResumeCoro_1(
        __int64 a1)
{
  _WORD *v2; // r14
  _DWORD *v3; // rcx
  int v4; // eax
  __int64 *v5; // rax
  int v6; // eax
  _QWORD *v7; // r12
  __int64 v8; // rcx
  int v9; // eax
  int v10; // eax
  __int64 v11; // rdx
  int v12; // eax
  int v13; // [rsp+20h] [rbp-88h]
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+0h]

  v2 = (_WORD *)(a1 + 8);
  switch ( *(_WORD *)(a1 + 8) )
  {
    case 0xFFFF:
    case 1:
    case 3:
      goto LABEL_24;
    case 2:
      wil::com_ptr_t<IDropTarget,wil::err_exception_policy>::com_ptr_t<IDropTarget,wil::err_exception_policy>(
        (__int64 *)(a1 + 16),
        *(__int64 **)(a1 + 201));
      wil::com_ptr_t<IVirtualDesktop,wil::err_returncode_policy>::com_ptr_t<IVirtualDesktop,wil::err_returncode_policy>(
        (__int64 *)(a1 + 24),
        *(__int64 **)(a1 + 209));
      v3 = *(_DWORD **)(a1 + 217);
      *(_DWORD *)(a1 + 32) = *v3;
      *(_DWORD *)(a1 + 36) = v3[1];
      *(_DWORD *)(a1 + 40) = 1;
      v13 = a1 + 40;
      v4 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, _QWORD))(**(_QWORD **)(a1 + 16) + 24LL))(
             *(_QWORD *)(a1 + 16),
             *(_QWORD *)(a1 + 24),
             1LL,
             *(_QWORD *)(a1 + 32));
      if ( v4 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0x1E0,
          (int)"pcshell\\twinui\\dragdropsimulator\\lib\\dragdropsimulatorcomponent.cpp",
          (const char *)(unsigned int)v4,
          v13);
      *(_QWORD *)(a1 + 48) = 0LL;
      *(_QWORD *)(a1 + 56) = 0LL;
      *(_QWORD *)(a1 + 64) = 500000LL;
      *(_QWORD *)(a1 + 72) = 0LL;
      *(_DWORD *)(a1 + 80) = 0;
      v5 = (__int64 *)winrt::impl::promise_base<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::Collections::ValueSet>,GamingOverlayExperienceManager *,winrt::hstring,winrt::Windows::Foundation::Collections::IMap<winrt::hstring,winrt::hstring>>::promise_type,winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::Collections::ValueSet>,void>::await_transform<winrt::impl::signal_awaiter>(
                        a1 - 112,
                        a1 + 48);
      *(_QWORD *)(a1 + 160) = v5;
      if ( v5[2] <= 0 )
        goto LABEL_8;
      *v2 = 4;
      goto LABEL_6;
    case 4:
LABEL_8:
      winrt::impl::timespan_awaiter::await_resume(*(winrt::impl::timespan_awaiter **)(a1 + 160));
      winrt::impl::timespan_awaiter::~timespan_awaiter((winrt::cancellable_promise **)(a1 + 48));
      *(_DWORD *)(a1 + 88) = 0;
      v6 = 0;
      v7 = (_QWORD *)(a1 + 96);
      goto LABEL_11;
    case 5:
      winrt::impl::timespan_awaiter::~timespan_awaiter((winrt::cancellable_promise **)(a1 + 48));
      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)(a1 + 24));
      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)(a1 + 16));
      goto LABEL_24;
    case 6:
      break;
    case 7:
      winrt::impl::timespan_awaiter::~timespan_awaiter((winrt::cancellable_promise **)(a1 + 96));
      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)(a1 + 24));
      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)(a1 + 16));
      goto LABEL_24;
    default:
      __debugbreak();
      return;
  }
  while ( 1 )
  {
    winrt::impl::timespan_awaiter::await_resume(*(winrt::impl::timespan_awaiter **)(a1 + 176));
    v7 = (_QWORD *)(a1 + 96);
    winrt::impl::timespan_awaiter::~timespan_awaiter((winrt::cancellable_promise **)(a1 + 96));
    v6 = *(_DWORD *)(a1 + 88) + 1;
    *(_DWORD *)(a1 + 88) = v6;
LABEL_11:
    v8 = *(_QWORD *)(a1 + 16);
    if ( v6 >= 4 )
      break;
    *(_DWORD *)(a1 + 92) = 1;
    v9 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)v8 + 32LL))(v8, 1LL, *(_QWORD *)(a1 + 32));
    if ( v9 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x1E7,
        (int)"pcshell\\twinui\\dragdropsimulator\\lib\\dragdropsimulatorcomponent.cpp",
        (const char *)(unsigned int)v9,
        v13);
    *v7 = 0LL;
    *(_QWORD *)(a1 + 104) = 0LL;
    *(_QWORD *)(a1 + 112) = 500000LL;
    *(_QWORD *)(a1 + 120) = 0LL;
    *(_DWORD *)(a1 + 128) = 0;
    v5 = (__int64 *)winrt::impl::promise_base<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::Collections::ValueSet>,GamingOverlayExperienceManager *,winrt::hstring,winrt::Windows::Foundation::Collections::IMap<winrt::hstring,winrt::hstring>>::promise_type,winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::Collections::ValueSet>,void>::await_transform<winrt::impl::signal_awaiter>(
                      a1 - 112,
                      (__int64)v7);
    *(_QWORD *)(a1 + 176) = v5;
    if ( v5[2] > 0 )
    {
      *v2 = 6;
LABEL_6:
      winrt::impl::timespan_awaiter::await_suspend<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncAction,unsigned short const *,std::chrono::duration<__int64,std::ratio<1,1000>>>::promise_type>(
        v5,
        a1);
      return;
    }
  }
  if ( *(_BYTE *)(a1 + 225) )
  {
    v10 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v8 + 40LL))(v8);
    if ( v10 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x1EE,
        (int)"pcshell\\twinui\\dragdropsimulator\\lib\\dragdropsimulatorcomponent.cpp",
        (const char *)(unsigned int)v10,
        v13);
    *(_DWORD *)(a1 - 8) = *(_DWORD *)(a1 + 40);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)(a1 + 24));
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)(a1 + 16));
  }
  else
  {
    *(_DWORD *)(a1 + 136) = 1;
    v12 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD))(*(_QWORD *)v8 + 48LL))(
            v8,
            *(_QWORD *)(a1 + 24),
            0LL,
            *(_QWORD *)(a1 + 32));
    if ( v12 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x1F3,
        (int)"pcshell\\twinui\\dragdropsimulator\\lib\\dragdropsimulatorcomponent.cpp",
        (const char *)(unsigned int)v12,
        a1 + 136);
    *(_DWORD *)(a1 - 8) = *(_DWORD *)(a1 + 136);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)(a1 + 24));
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)(a1 + 16));
  }
  *(_QWORD *)(a1 + 144) = a1 - 112;
  *v2 = 0;
  if ( !winrt::impl::promise_base<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncOperation<bool>,winrt::Windows::Internal::GamingExperiences::Posture::implementation::GamingPostureController *,winrt::Windows::Foundation::Uri>::promise_type,winrt::Windows::Foundation::IAsyncOperation<bool>,void>::final_suspend_awaiter::await_suspend(
          (__int64 *)(a1 + 144),
          v11) )
  {
LABEL_24:
    winrt::impl::promise_base<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::Collections::ValueSet>,GamingOverlayExperienceManager *,winrt::hstring,winrt::Windows::Foundation::Collections::IMap<winrt::hstring,winrt::hstring>>::promise_type,winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::Collections::ValueSet>,void>::~promise_base<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::Collections::ValueSet>,GamingOverlayExperienceManager *,winrt::hstring,winrt::Windows::Foundation::Collections::IMap<winrt::hstring,winrt::hstring>>::promise_type,winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::Collections::ValueSet>,void>((__int64 *)(a1 - 112));
    if ( *(_WORD *)(a1 + 10) )
      operator delete((void *)(a1 - 112), (const struct std::nothrow_t *)0x160);
  }
}
