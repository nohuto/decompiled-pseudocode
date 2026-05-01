/*
 * XREFs of winrt::Windows::Internal::Shell::implementation::TabProxyWindow::SetAndCreateIconFromGlyphAsync$_ResumeCoro$1 @ 0x18055DE70
 * Callers:
 *     winrt::Windows::Internal::Shell::implementation::TabProxyWindow::SetAndCreateIconFromGlyphAsync$_InitCoro$2 @ 0x18055DE14 (winrt--Windows--Internal--Shell--implementation--TabProxyWindow--SetAndCreateIconFromGlyphAsync$.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x180066570 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAUHICON__@@P6AHPEAU1@@Z$1?DestroyIcon@@YAH0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x1800A3B84 (--1-$unique_storage@U-$resource_policy@PEAUHICON__@@P6AHPEAU1@@Z$1-DestroyIcon@@YAH0@ZU-$integra.c)
 *     ?get_strong@?$implements@UTabProxyWindow@implementation@Shell@Internal@Windows@winrt@@UITabProxyWindowInternal@345@@winrt@@QEAA?AU?$com_ptr@UTabProxyWindow@implementation@Shell@Internal@Windows@winrt@@@2@XZ @ 0x1800A4E7C (-get_strong@-$implements@UTabProxyWindow@implementation@Shell@Internal@Windows@winrt@@UITabProxy.c)
 *     ?SetEvent@details@wil@@YAXPEAX@Z @ 0x1800A589C (-SetEvent@details@wil@@YAXPEAX@Z.c)
 *     ?GetIconFromGlyphForSize@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUHICON__@@P6AHPEAU1@@Z$1?DestroyIcon@@YAH0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@UtagSIZE@@@Z @ 0x1800AB810 (-GetIconFromGlyphForSize@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@AEAA-AV-$un.c)
 *     ?swap@?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUHICON__@@P6AHPEAU1@@Z$1?DestroyIcon@@YAH0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAAXAEAV12@@Z @ 0x1801CE180 (-swap@-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAUHICON__@@P6AHPEAU1@@Z$1-DestroyIco.c)
 *     ?SetEvent_scope_exit@?$event_t@V?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@_E$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@Uerr_exception_policy@3@@wil@@QEBA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@_E$1?SetEvent@details@wil@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x180219E44 (-SetEvent_scope_exit@-$event_t@V-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@_E$1-CloseHandl.c)
 *     ?await_suspend@awaitable@?1??resume_background@winrt@@YA@XZ@QEBAXU?$coroutine_handle@X@experimental@std@@@Z @ 0x180219E7C (-await_suspend@awaitable@-1--resume_background@winrt@@YA@XZ@QEBAXU-$coroutine_handle@X@experimen.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D2628 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1signal_awaiter@impl@winrt@@QEAA@XZ @ 0x18032BE28 (--1signal_awaiter@impl@winrt@@QEAA@XZ.c)
 *     ?await_ready@signal_awaiter@impl@winrt@@QEBA_NXZ @ 0x180331794 (-await_ready@signal_awaiter@impl@winrt@@QEBA_NXZ.c)
 *     ?await_resume@signal_awaiter@impl@winrt@@QEAA_NXZ @ 0x1803318B8 (-await_resume@signal_awaiter@impl@winrt@@QEAA_NXZ.c)
 *     ??$await_suspend@Upromise_type@?$coroutine_traits@Ufire_and_forget@winrt@@PEAUTabProxyWindow@implementation@Shell@Internal@Windows@2@@experimental@std@@@signal_awaiter@impl@winrt@@QEAAXU?$coroutine_handle@Upromise_type@?$coroutine_traits@Ufire_and_forget@winrt@@PEAUTabProxyWindow@implementation@Shell@Internal@Windows@2@@experimental@std@@@experimental@std@@@Z @ 0x180459DA4 (--$await_suspend@Upromise_type@-$coroutine_traits@Ufire_and_forget@winrt@@PEAUTabProxyWindow@imp.c)
 *     ??$WindowTabHostIconTimeout@_N@WindowTabHostTelemetry@@SAX$$QEA_N@Z @ 0x18055CEAC (--$WindowTabHostIconTimeout@_N@WindowTabHostTelemetry@@SAX$$QEA_N@Z.c)
 */

// Hidden C++ exception states: #wind=4
void __fastcall winrt::Windows::Internal::Shell::implementation::TabProxyWindow::SetAndCreateIconFromGlyphAsync__ResumeCoro_1(
        char *a1)
{
  char *v1; // rbx
  __int64 v2; // rcx
  void *v3; // r8
  __int64 *v4; // rcx
  __int64 *v5; // rax
  __int64 v6; // rcx
  bool v7; // r14
  __int64 v8; // r8
  const char *v9; // r9
  HMONITOR v10; // rax
  void *v11; // rdx
  wil::details *v12; // rcx
  int SystemMetricsForDpi; // eax
  __int64 v14; // r13
  LPARAM *v15; // r14
  __int64 *v16; // rsi
  void *v17; // rdx
  const char *v18; // r9
  wil::details *v19; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+0h]

  try
  {
    v1 = a1;
    switch ( *((_WORD *)a1 + 4) )
    {
      case 0xFFFF:
      case 3:
        goto LABEL_33;
      case 2:
        winrt::implements<winrt::Windows::Internal::Shell::implementation::TabProxyWindow,Windows::Internal::Shell::ITabProxyWindowInternal>::get_strong(
          *(_QWORD *)(a1 + 161),
          (_QWORD *)a1 + 2);
        v1[24] = 0;
        *((_WORD *)v1 + 4) = 4;
        `winrt::resume_background'::`2'::awaitable::await_suspend(v2, (void (*)(void *, void *))v1, v3);
        return;
      case 4:
        v5 = (__int64 *)(*((_QWORD *)a1 + 2) + 160LL);
        *((_QWORD *)a1 + 18) = v5;
        v6 = *v5;
        *((_QWORD *)v1 + 4) = 0LL;
        *((_QWORD *)v1 + 5) = 0LL;
        *((_QWORD *)v1 + 6) = 20000000LL;
        *((_QWORD *)v1 + 7) = v6;
        *((_DWORD *)v1 + 16) = 0;
        *((_QWORD *)v1 + 9) = 0LL;
        *((_DWORD *)v1 + 20) = 0;
        if ( winrt::impl::signal_awaiter::await_ready((HANDLE *)v1 + 4) )
          goto LABEL_12;
        *((_WORD *)v1 + 4) = 6;
        winrt::impl::signal_awaiter::await_suspend<std::experimental::coroutine_traits<winrt::fire_and_forget,winrt::Windows::Internal::Shell::implementation::TabProxyWindow *>::promise_type>(
          (winrt::impl::signal_awaiter *)(v1 + 32),
          (__int64)v1);
        return;
      case 5:
        v4 = (__int64 *)(a1 + 16);
        if ( *((_QWORD *)v1 + 2) )
          winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(v4);
        goto LABEL_33;
      case 6:
LABEL_12:
        v7 = winrt::impl::signal_awaiter::await_resume((winrt::impl::signal_awaiter *)(v1 + 32));
        winrt::impl::signal_awaiter::~signal_awaiter((winrt::cancellable_promise **)v1 + 4);
        if ( v7 )
        {
          _SetEvent_scope_exit___event_t_V__unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__Uerr_exception_policy_3__wil__QEBA_AV__unique_any_t_V__unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_SetEvent_details_wil__YAX0_ZU__integral_constant__K_00_wistd__PEAXPEAX_0A___T_details_wil___details_wil___2_XZ(
            *((_QWORD **)v1 + 18),
            (_QWORD *)v1 + 12,
            v8,
            v9);
          *((_DWORD *)v1 + 26) = 0;
          *((_DWORD *)v1 + 27) = 0;
          v10 = MonitorFromWindow(0LL, 1u);
          if ( (unsigned int)GetDpiForMonitorInternal(v10, 0LL, v1 + 104, v1 + 108) )
          {
            *((_DWORD *)v1 + 28) = GetSystemMetricsForDpi(49LL);
            *((_DWORD *)v1 + 29) = GetSystemMetricsForDpi(50LL);
            *((_DWORD *)v1 + 30) = GetSystemMetricsForDpi(11LL);
            SystemMetricsForDpi = GetSystemMetricsForDpi(12LL);
            try
            {
              *((_DWORD *)v1 + 31) = SystemMetricsForDpi;
              v14 = *(_QWORD *)(v1 + 161);
              winrt::Windows::Internal::Shell::implementation::TabProxyWindow::GetIconFromGlyphForSize(
                v14,
                (HICON *)v1 + 16,
                *((_QWORD *)v1 + 14));
              v15 = (LPARAM *)(v1 + 136);
              winrt::Windows::Internal::Shell::implementation::TabProxyWindow::GetIconFromGlyphForSize(
                v14,
                (HICON *)v1 + 17,
                *((_QWORD *)v1 + 15));
              if ( *((_QWORD *)v1 + 16) )
              {
                SendMessageW(*(HWND *)(v14 + 32), 0x80u, 0LL, *((_QWORD *)v1 + 16));
                v16 = (__int64 *)(v1 + 16);
                wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<HICON__ *,int (*)(HICON__ *),&int DestroyIcon(HICON__ *),wistd::integral_constant<unsigned __int64,0>,HICON__ *,HICON__ *,0,std::nullptr_t>>>::swap(
                  (HICON *)(*((_QWORD *)v1 + 2) + 88LL),
                  (HICON *)v1 + 16);
              }
              else
              {
                v16 = (__int64 *)(v1 + 16);
              }
              if ( *v15 )
              {
                SendMessageW(*(HWND *)(v14 + 32), 0x80u, 1uLL, *v15);
                wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<HICON__ *,int (*)(HICON__ *),&int DestroyIcon(HICON__ *),wistd::integral_constant<unsigned __int64,0>,HICON__ *,HICON__ *,0,std::nullptr_t>>>::swap(
                  (HICON *)(*v16 + 96),
                  (HICON *)v1 + 17);
                v15 = (LPARAM *)(v1 + 136);
              }
              wil::details::unique_storage<wil::details::resource_policy<HICON__ *,int (*)(HICON__ *),&int DestroyIcon(HICON__ *),wistd::integral_constant<unsigned __int64,0>,HICON__ *,HICON__ *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<HICON__ *,int (*)(HICON__ *),&int DestroyIcon(HICON__ *),wistd::integral_constant<unsigned __int64,0>,HICON__ *,HICON__ *,0,std::nullptr_t>>((HICON *)v15);
              wil::details::unique_storage<wil::details::resource_policy<HICON__ *,int (*)(HICON__ *),&int DestroyIcon(HICON__ *),wistd::integral_constant<unsigned __int64,0>,HICON__ *,HICON__ *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<HICON__ *,int (*)(HICON__ *),&int DestroyIcon(HICON__ *),wistd::integral_constant<unsigned __int64,0>,HICON__ *,HICON__ *,0,std::nullptr_t>>((HICON *)v1 + 16);
            }
            catch ( ... )
            {
              wil::details::in1diag3::Log_CaughtException(
                retaddr,
                (void *)0x1B5,
                (int)"pcshell\\twinui\\windowtabhost\\lib\\tabproxywindow.cpp",
                v18);
              v16 = (__int64 *)(a1 + 16);
              v1 = a1;
            }
            v19 = (wil::details *)*((_QWORD *)v1 + 12);
            if ( v19 )
              wil::details::SetEvent(v19, v17);
            if ( *v16 )
              winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(v16);
          }
          else
          {
            v12 = (wil::details *)*((_QWORD *)v1 + 12);
            if ( v12 )
              wil::details::SetEvent(v12, v11);
            if ( *((_QWORD *)v1 + 2) )
              winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref((__int64 *)v1 + 2);
          }
        }
        else
        {
          v1[88] = 1;
          WindowTabHostTelemetry::WindowTabHostIconTimeout<bool>(v1 + 88);
          if ( *((_QWORD *)v1 + 2) )
            winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref((__int64 *)v1 + 2);
        }
        goto LABEL_33;
      case 7:
        winrt::impl::signal_awaiter::~signal_awaiter((winrt::cancellable_promise **)a1 + 4);
        if ( *((_QWORD *)v1 + 2) )
          winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref((__int64 *)v1 + 2);
LABEL_33:
        if ( *((_WORD *)v1 + 5) )
          operator delete(v1, (const struct std::nothrow_t *)0xB0);
        break;
      default:
        __debugbreak();
        break;
    }
  }
  catch ( ... )
  {
    *((_WORD *)a1 + 4) = -1;
    std::experimental::coroutine_traits<winrt::fire_and_forget,winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance *>::promise_type::unhandled_exception((winrt *)0xFFFFFFFFLL);
  }
}
