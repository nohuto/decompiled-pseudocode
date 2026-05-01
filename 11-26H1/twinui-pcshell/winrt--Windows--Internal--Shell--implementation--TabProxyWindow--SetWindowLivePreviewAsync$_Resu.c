/*
 * XREFs of winrt::Windows::Internal::Shell::implementation::TabProxyWindow::SetWindowLivePreviewAsync$_ResumeCoro$1 @ 0x180582510
 * Callers:
 *     ?SetWindowLivePreviewAsync@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@AEAA?AUfire_and_forget@6@XZ @ 0x180582D28 (-SetWindowLivePreviewAsync@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@AEAA-AUfi.c)
 * Callees:
 *     ?IgnoreCurrentThread@?$ActivityBase@VTaskbarLogging@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x180014658 (-IgnoreCurrentThread@-$ActivityBase@VTaskbarLogging@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflect.c)
 *     ??8Foundation@Windows@winrt@@YA_NAEBUIUnknown@012@0@Z @ 0x180025E74 (--8Foundation@Windows@winrt@@YA_NAEBUIUnknown@012@0@Z.c)
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18002633C (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x180026574 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ?unconditional_release_ref@?$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ @ 0x18002694C (-unconditional_release_ref@-$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ.c)
 *     ?get_strong@?$implements@UTabProxyWindow@implementation@Shell@Internal@Windows@winrt@@UITabProxyWindowInternal@345@@winrt@@QEAA?AU?$com_ptr@UTabProxyWindow@implementation@Shell@Internal@Windows@winrt@@@2@XZ @ 0x1800276AC (-get_strong@-$implements@UTabProxyWindow@implementation@Shell@Internal@Windows@winrt@@UITabProxy.c)
 *     ?CreateInstanceAsync@?$consume_Windows_Internal_Shell_TaskGroups_ITaskGroupDataSourceAdapterStatics@UITaskGroupDataSourceAdapterStatics@TaskGroups@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x18002AE28 (-CreateInstanceAsync@-$consume_Windows_Internal_Shell_TaskGroups_ITaskGroupDataSourceAdapterStat.c)
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18004C280 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??1ActivityThreadWatcher@wil@@QEAA@XZ @ 0x1800B32E8 (--1ActivityThreadWatcher@wil@@QEAA@XZ.c)
 *     ?SetEvent@details@wil@@YAXPEAX@Z @ 0x1800CA6B4 (-SetEvent@details@wil@@YAXPEAX@Z.c)
 *     ??0?$com_ptr_t@UIVirtualDesktop@@Uerr_returncode_policy@wil@@@wil@@QEAA@AEBV01@@Z @ 0x1800CD100 (--0-$com_ptr_t@UIVirtualDesktop@@Uerr_returncode_policy@wil@@@wil@@QEAA@AEBV01@@Z.c)
 *     ?ConvertWICBitmapToHBITMAP@@YAJPEAUIWICImagingFactory@@PEAUIWICBitmapSource@@PEAPEAUHBITMAP__@@@Z @ 0x1801293C8 (-ConvertWICBitmapToHBITMAP@@YAJPEAUIWICImagingFactory@@PEAUIWICBitmapSource@@PEAPEAUHBITMAP__@@@.c)
 *     ?LoadImageWithWIC@@YAJPEAUIWICImagingFactory@@PEAUIStream@@W4LOAD_IMAGE_WITH_WIC_OPTION@@PEAPEAUIWICBitmapSource@@PEAPEAUIWICBitmapFrameDecode@@PEAU_GUID@@@Z @ 0x18012988C (-LoadImageWithWIC@@YAJPEAUIWICImagingFactory@@PEAUIStream@@W4LOAD_IMAGE_WITH_WIC_OPTION@@PEAPEAU.c)
 *     ?ContinueOnCurrentThread@?$ActivityBase@VMeetAndChatTelemetryLogging@@$00$0EAAAAAAAAAAA@$04$0CAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA?AVActivityThreadWatcher@2@XZ @ 0x180133E4C (-ContinueOnCurrentThread@-$ActivityBase@VMeetAndChatTelemetryLogging@@$00$0EAAAAAAAAAAA@$04$0CAA.c)
 *     ?GetThumbnailSize@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@AEBA?AUBitmapSize@Imaging@Graphics@56@_N@Z @ 0x1801A2270 (-GetThumbnailSize@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@AEBA-AUBitmapSize@.c)
 *     ?IsThumbnailValidSize@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@AEAA_NUBitmapSize@Imaging@Graphics@56@V?$com_ptr_t@UIWICBitmapSource@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x1801BF750 (-IsThumbnailValidSize@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@AEAA_NUBitmapS.c)
 *     ?await_suspend@awaitable@?1??resume_background@winrt@@YA@XZ@QEBAXU?$coroutine_handle@X@experimental@std@@@Z @ 0x1801E6D48 (-await_suspend@awaitable@-1--resume_background@winrt@@YA@XZ@QEBAXU-$coroutine_handle@X@experimen.c)
 *     ?SetEvent_scope_exit@?$event_t@V?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@_E$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@Uerr_exception_policy@3@@wil@@QEBA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@_E$1?SetEvent@details@wil@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x18020BE44 (-SetEvent_scope_exit@-$event_t@V-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@_E$1-CloseHandl.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAUHFONT__@@P6AHPEAX@Z$1?DeleteObject@@YAH0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x180213F2C (--1-$unique_storage@U-$resource_policy@PEAUHFONT__@@P6AHPEAX@Z$1-DeleteObject@@YAH0@ZU-$integral.c)
 *     ??1?$out_param_t@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUHBITMAP__@@P6AHPEAX@Z$1?DeleteObject@@YAH0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@@details@wil@@QEAA@XZ @ 0x180218968 (--1-$out_param_t@V-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAUHBITMAP__@@P6AHPEAX@Z$.c)
 *     ??$capture@UIStream@@A6AJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@ZPEAU2@@winrt@@YA?AU?$com_ptr@UIStream@@@0@A6AJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z$$QEAPEAU2@@Z @ 0x1802609A4 (--$capture@UIStream@@A6AJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@ZPEAU2@@winrt@@YA-AU-$com_ptr@UIStream.c)
 *     ?GetThumbnailAsync@?$consume_Windows_Internal_UI_Shell_IWindowTabView@UIWindowTabView@Shell@UI@Internal@Windows@winrt@@@impl@winrt@@QEBA@AEBUBitmapSize@Imaging@Graphics@Windows@3@_N@Z @ 0x180265C3C (-GetThumbnailAsync@-$consume_Windows_Internal_UI_Shell_IWindowTabView@UIWindowTabView@Shell@UI@I.c)
 *     ??0?$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x1802B517C (--0-$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Par.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802C92A8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1?$cancellable_awaiter@U?$await_adapter@U?$IAsyncOperation@I@Foundation@Windows@winrt@@$00@impl@winrt@@@winrt@@QEAA@XZ @ 0x180328DF0 (--1-$cancellable_awaiter@U-$await_adapter@U-$IAsyncOperation@I@Foundation@Windows@winrt@@$00@imp.c)
 *     ??1signal_awaiter@impl@winrt@@QEAA@XZ @ 0x180329200 (--1signal_awaiter@impl@winrt@@QEAA@XZ.c)
 *     ?await_ready@signal_awaiter@impl@winrt@@QEBA_NXZ @ 0x1803307EC (-await_ready@signal_awaiter@impl@winrt@@QEBA_NXZ.c)
 *     ?await_resume@signal_awaiter@impl@winrt@@QEAA_NXZ @ 0x180330924 (-await_resume@signal_awaiter@impl@winrt@@QEAA_NXZ.c)
 *     ??$await_suspend@Upromise_type@?$coroutine_traits@Ufire_and_forget@winrt@@PEAUTabProxyWindow@implementation@Shell@Internal@Windows@2@@experimental@std@@@signal_awaiter@impl@winrt@@QEAAXU?$coroutine_handle@Upromise_type@?$coroutine_traits@Ufire_and_forget@winrt@@PEAUTabProxyWindow@implementation@Shell@Internal@Windows@2@@experimental@std@@@experimental@std@@@Z @ 0x180465FC0 (--$await_suspend@Upromise_type@-$coroutine_traits@Ufire_and_forget@winrt@@PEAUTabProxyWindow@imp.c)
 *     ?Stop@?$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x18050AF9C (-Stop@-$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_.c)
 *     ??$await_suspend@Upromise_type@?$coroutine_traits@Ufire_and_forget@winrt@@PEAUTabProxyWindow@implementation@Shell@Internal@Windows@2@@experimental@std@@@?$await_adapter@U?$IAsyncOperation@UIRandomAccessStreamReference@Streams@Storage@Windows@winrt@@@Foundation@Windows@winrt@@$00@impl@winrt@@QEAA_NU?$coroutine_handle@Upromise_type@?$coroutine_traits@Ufire_and_forget@winrt@@PEAUTabProxyWindow@implementation@Shell@Internal@Windows@2@@experimental@std@@@experimental@std@@@Z @ 0x180581168 (--$await_suspend@Upromise_type@-$coroutine_traits@Ufire_and_forget@winrt@@PEAUTabPr_ea_180581168.c)
 *     ??$await_suspend@Upromise_type@?$coroutine_traits@Ufire_and_forget@winrt@@PEAUTabProxyWindow@implementation@Shell@Internal@Windows@2@@experimental@std@@@?$await_adapter@U?$IAsyncOperation@UIRandomAccessStreamWithContentType@Streams@Storage@Windows@winrt@@@Foundation@Windows@winrt@@$00@impl@winrt@@QEAA_NU?$coroutine_handle@Upromise_type@?$coroutine_traits@Ufire_and_forget@winrt@@PEAUTabProxyWindow@implementation@Shell@Internal@Windows@2@@experimental@std@@@experimental@std@@@Z @ 0x180581174 (--$await_suspend@Upromise_type@-$coroutine_traits@Ufire_and_forget@winrt@@PEAUTabPr_ea_180581174.c)
 *     ??1WindowTabHostLivePreviewThumbnailRequested@WindowTabHostTelemetry@@QEAA@XZ @ 0x18058133C (--1WindowTabHostLivePreviewThumbnailRequested@WindowTabHostTelemetry@@QEAA@XZ.c)
 *     ??4WindowTabHostLivePreviewThumbnailRequested@WindowTabHostTelemetry@@QEAAAEAV01@$$QEAV01@@Z @ 0x180581368 (--4WindowTabHostLivePreviewThumbnailRequested@WindowTabHostTelemetry@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ?StartActivity@WindowTabHostLivePreviewThumbnailRequested@WindowTabHostTelemetry@@QEAAXII@Z @ 0x180582DBC (-StartActivity@WindowTabHostLivePreviewThumbnailRequested@WindowTabHostTelemetry@@QEAAXII@Z.c)
 *     ?WindowTabHostLivePreviewTimeout@WindowTabHostTelemetry@@SAXXZ @ 0x18058332C (-WindowTabHostLivePreviewTimeout@WindowTabHostTelemetry@@SAXXZ.c)
 *     ?await_resume@?$await_adapter@U?$IAsyncOperation@UIRandomAccessStreamWithContentType@Streams@Storage@Windows@winrt@@@Foundation@Windows@winrt@@$00@impl@winrt@@QEBA@XZ @ 0x18058336C (-await_resume@-$await_adapter@U-$IAsyncOperation@UIRandomAccessStreamWithContentType@Streams@Sto.c)
 */

// Hidden C++ exception states: #wind=22 #try_helpers=1
void __fastcall winrt::Windows::Internal::Shell::implementation::TabProxyWindow::SetWindowLivePreviewAsync__ResumeCoro_1(
        char *a1)
{
  __int64 v2; // rcx
  void *v3; // r8
  __int64 *v4; // rcx
  __int64 *v5; // rax
  __int64 v6; // rcx
  bool v7; // di
  __int64 v8; // r8
  const char *v9; // r9
  __int64 v10; // rcx
  _QWORD *ThumbnailAsync; // rax
  void *v12; // rdx
  void *v13; // rdx
  _QWORD *InstanceAsync; // rax
  void *v15; // rdx
  _QWORD *v16; // rbx
  HBITMAP *v17; // r13
  __int64 *v18; // rax
  __int64 v19; // rcx
  void *v20; // rdx
  int v21; // edi
  void *v22; // rdx
  struct IWICBitmapDecoder *v23; // [rsp+20h] [rbp-128h]
  struct IWICBitmapSource *v24; // [rsp+28h] [rbp-120h]

  try
  {
    switch ( *((_WORD *)a1 + 4) )
    {
      case 0xFFFF:
      case 3:
        goto LABEL_54;
      case 2:
        winrt::implements<winrt::Windows::Internal::Shell::implementation::TabProxyWindow,Windows::Internal::Shell::ITabProxyWindowInternal>::get_strong(
          *((_QWORD *)a1 + 147),
          (_QWORD *)a1 + 2);
        a1[24] = 0;
        *((_WORD *)a1 + 4) = 4;
        `winrt::resume_background'::`2'::awaitable::await_suspend(v2, (void (*)(void *, void *))a1, v3);
        return;
      case 4:
        v5 = (__int64 *)(*((_QWORD *)a1 + 2) + 176LL);
        *((_QWORD *)a1 + 106) = v5;
        v6 = *v5;
        *((_QWORD *)a1 + 4) = 0LL;
        *((_QWORD *)a1 + 5) = 0LL;
        *((_QWORD *)a1 + 6) = 50000000LL;
        *((_QWORD *)a1 + 7) = v6;
        *((_DWORD *)a1 + 16) = 0;
        *((_QWORD *)a1 + 9) = 0LL;
        *((_DWORD *)a1 + 20) = 0;
        if ( winrt::impl::signal_awaiter::await_ready((HANDLE *)a1 + 4) )
          goto LABEL_12;
        *((_WORD *)a1 + 4) = 6;
        winrt::impl::signal_awaiter::await_suspend<std::experimental::coroutine_traits<winrt::fire_and_forget,winrt::Windows::Internal::Shell::implementation::TabProxyWindow *>::promise_type>(
          (winrt::impl::signal_awaiter *)(a1 + 32),
          (__int64)a1);
        return;
      case 5:
        v4 = (__int64 *)(a1 + 16);
        if ( *((_QWORD *)a1 + 2) )
          winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(v4);
        goto LABEL_54;
      case 6:
LABEL_12:
        v7 = winrt::impl::signal_awaiter::await_resume((winrt::impl::signal_awaiter *)(a1 + 32));
        winrt::impl::signal_awaiter::~signal_awaiter((winrt::cancellable_promise **)a1 + 4);
        if ( !v7 )
        {
          WindowTabHostTelemetry::WindowTabHostLivePreviewTimeout();
          if ( *((_QWORD *)a1 + 2) )
            winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref((__int64 *)a1 + 2);
LABEL_54:
          if ( *((_WORD *)a1 + 5) )
            operator delete(a1, (const struct std::nothrow_t *)0x4A0);
          return;
        }
        _SetEvent_scope_exit___event_t_V__unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__Uerr_exception_policy_3__wil__QEBA_AV__unique_any_t_V__unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_SetEvent_details_wil__YAX0_ZU__integral_constant__K_00_wistd__PEAXPEAX_0A___T_details_wil___details_wil___2_XZ(
          *((_QWORD **)a1 + 106),
          (_QWORD *)a1 + 11,
          v8,
          v9);
        wil::ActivityBase<WindowManagementLogging,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<WindowManagementLogging,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>(
          (struct wil::details::IFailureCallback *)(a1 + 96),
          (__int64)"WindowTabHostLivePreviewThumbnailRequested");
        *((_QWORD *)a1 + 12) = &WindowTabHostTelemetry::WindowTabHostLivePreviewThumbnailRequested::`vftable';
        wil::ActivityBase<WindowManagementLogging,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<WindowManagementLogging,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>(
          (struct wil::details::IFailureCallback *)(a1 + 432),
          (__int64)"WindowTabHostLivePreviewThumbnailRequested");
        *((_QWORD *)a1 + 54) = &WindowTabHostTelemetry::WindowTabHostLivePreviewThumbnailRequested::`vftable';
        WindowTabHostTelemetry::WindowTabHostLivePreviewThumbnailRequested::StartActivity(
          (WindowTabHostTelemetry::WindowTabHostLivePreviewThumbnailRequested *)(a1 + 432),
          0,
          0);
        WindowTabHostTelemetry::WindowTabHostLivePreviewThumbnailRequested::operator=(
          (_QWORD *)a1 + 12,
          (__int64)(a1 + 432));
        WindowTabHostTelemetry::WindowTabHostLivePreviewThumbnailRequested::~WindowTabHostLivePreviewThumbnailRequested((WindowTabHostTelemetry::WindowTabHostLivePreviewThumbnailRequested *)(a1 + 432));
        wil::ActivityBase<TaskbarLogging,1,35184372088832,5,16777216,_TlgReflectorTag_Param0IsProviderType>::IgnoreCurrentThread((__int64)(a1 + 96));
        *((_DWORD *)a1 + 192) = 0;
        v10 = *((_QWORD *)a1 + 147);
        *((_QWORD *)a1 + 97) = v10;
        *((_QWORD *)a1 + 98) = a1 + 768;
        a1[792] = 1;
        winrt::Windows::Internal::Shell::implementation::TabProxyWindow::GetThumbnailSize(v10, (__int64)(a1 + 800), 1);
        ThumbnailAsync = winrt::impl::consume_Windows_Internal_UI_Shell_IWindowTabView<winrt::Windows::Internal::UI::Shell::IWindowTabView>::GetThumbnailAsync(
                           (__int64 **)(*((_QWORD *)a1 + 2) + 48LL),
                           (_QWORD *)a1 + 101,
                           (__int64 *)a1 + 100,
                           1);
        *((_QWORD *)a1 + 102) = 0LL;
        *((_QWORD *)a1 + 103) = ThumbnailAsync;
        *((_QWORD *)a1 + 104) = 0LL;
        a1[840] = 1;
        *((_WORD *)a1 + 4) = 8;
        if ( (unsigned __int8)winrt::impl::await_adapter<winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Storage::Streams::IRandomAccessStreamReference>,1>::await_suspend<std::experimental::coroutine_traits<winrt::fire_and_forget,winrt::Windows::Internal::Shell::implementation::TabProxyWindow *>::promise_type>(
                                (__int64)(a1 + 816),
                                (__int64)a1) )
          return;
LABEL_23:
        winrt::impl::await_adapter<winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Storage::Streams::IRandomAccessStreamWithContentType>,1>::await_resume(
          a1 + 816,
          a1 + 864);
        winrt::cancellable_awaiter<winrt::impl::await_adapter<winrt::Windows::Foundation::IAsyncOperation<unsigned int>,1>>::~cancellable_awaiter<winrt::impl::await_adapter<winrt::Windows::Foundation::IAsyncOperation<unsigned int>,1>>((winrt::cancellable_promise **)a1 + 102);
        winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)(a1 + 808));
        wil::ActivityBase<MeetAndChatTelemetryLogging,1,70368744177664,5,33554432,_TlgReflectorTag_Param0IsProviderType>::ContinueOnCurrentThread(
          (__int64)(a1 + 96),
          (__int64)(a1 + 880));
        *((_QWORD *)a1 + 120) = 0LL;
        if ( winrt::Windows::Foundation::operator==(
               (void (__fastcall ****)(_QWORD, __int64 *, __int64 *))a1 + 108,
               (_QWORD *)a1 + 120) )
        {
          wil::ActivityBase<WindowManagementLogging,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::Stop(
            (__int64 *)a1 + 12,
            -2147023728);
          wil::ActivityThreadWatcher::~ActivityThreadWatcher((wil::ActivityThreadWatcher *)(a1 + 880));
          winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)(a1 + 864));
          DwmInvalidateIconicBitmaps(*(HWND *)(*((_QWORD *)a1 + 97) + 32LL));
          *((_DWORD *)a1 + 192) = -2147467259;
          WindowTabHostTelemetry::WindowTabHostLivePreviewThumbnailRequested::~WindowTabHostLivePreviewThumbnailRequested((WindowTabHostTelemetry::WindowTabHostLivePreviewThumbnailRequested *)(a1 + 96));
          if ( *((_QWORD *)a1 + 11) )
            wil::details::SetEvent(*((wil::details **)a1 + 11), v13);
          if ( *((_QWORD *)a1 + 2) )
            winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref((__int64 *)a1 + 2);
          goto LABEL_54;
        }
        wil::ActivityThreadWatcher::~ActivityThreadWatcher((wil::ActivityThreadWatcher *)(a1 + 880));
        InstanceAsync = winrt::impl::consume_Windows_Internal_Shell_TaskGroups_ITaskGroupDataSourceAdapterStatics<winrt::Windows::Internal::Shell::TaskGroups::ITaskGroupDataSourceAdapterStatics>::CreateInstanceAsync(
                          (__int64 **)a1 + 108,
                          (_QWORD *)a1 + 121);
        *((_QWORD *)a1 + 122) = 0LL;
        *((_QWORD *)a1 + 123) = InstanceAsync;
        *((_QWORD *)a1 + 124) = 0LL;
        a1[1000] = 1;
        *((_WORD *)a1 + 4) = 10;
        if ( (unsigned __int8)winrt::impl::await_adapter<winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Storage::Streams::IRandomAccessStreamWithContentType>,1>::await_suspend<std::experimental::coroutine_traits<winrt::fire_and_forget,winrt::Windows::Internal::Shell::implementation::TabProxyWindow *>::promise_type>(
                                (__int64)(a1 + 976),
                                (__int64)a1) )
          return;
LABEL_36:
        winrt::impl::await_adapter<winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Storage::Streams::IRandomAccessStreamWithContentType>,1>::await_resume(
          a1 + 976,
          a1 + 1008);
        winrt::cancellable_awaiter<winrt::impl::await_adapter<winrt::Windows::Foundation::IAsyncOperation<unsigned int>,1>>::~cancellable_awaiter<winrt::impl::await_adapter<winrt::Windows::Foundation::IAsyncOperation<unsigned int>,1>>((winrt::cancellable_promise **)a1 + 122);
        winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)(a1 + 968));
        wil::ActivityBase<MeetAndChatTelemetryLogging,1,70368744177664,5,33554432,_TlgReflectorTag_Param0IsProviderType>::ContinueOnCurrentThread(
          (__int64)(a1 + 96),
          (__int64)(a1 + 1024));
        *((_QWORD *)a1 + 138) = *((_QWORD *)a1 + 126);
        v16 = a1 + 1112;
        winrt::capture<IStream,long (&)(IUnknown *,_GUID const &,void * *),IUnknown *>(
          (_QWORD *)a1 + 139,
          (__int64 (__fastcall *)(__int64, void *, __int64 *))CreateStreamOverRandomAccessStream,
          (__int64 *)a1 + 138);
        v17 = (HBITMAP *)(a1 + 1120);
        *((_QWORD *)a1 + 140) = 0LL;
        *((_QWORD *)a1 + 141) = 0LL;
        if ( (int)LoadImageWithWIC(
                    *(struct IWICImagingFactory **)(*((_QWORD *)a1 + 2) + 104LL),
                    *((_QWORD *)a1 + 139),
                    0,
                    (struct IWICBitmapSource **)a1 + 141,
                    v23,
                    v24) < 0 )
          goto LABEL_46;
        v18 = wil::com_ptr_t<IVirtualDesktop,wil::err_returncode_policy>::com_ptr_t<IVirtualDesktop,wil::err_returncode_policy>(
                (__int64 *)a1 + 142,
                (__int64 *)a1 + 141);
        if ( winrt::Windows::Internal::Shell::implementation::TabProxyWindow::IsThumbnailValidSize(
               v19,
               *((_QWORD *)a1 + 100),
               v18) )
        {
          *((_QWORD *)a1 + 143) = v17;
          *((_QWORD *)a1 + 144) = 0LL;
          a1[1160] = 1;
          v21 = ConvertWICBitmapToHBITMAP(
                  *(struct IWICImagingFactory **)(*((_QWORD *)a1 + 2) + 104LL),
                  *((struct IWICBitmapSource **)a1 + 141),
                  (HBITMAP *)a1 + 144);
          wil::details::out_param_t<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<HBITMAP__ *,int (*)(void *),&int DeleteObject(void *),wistd::integral_constant<unsigned __int64,0>,HBITMAP__ *,HBITMAP__ *,0,std::nullptr_t>>>>::~out_param_t<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<HBITMAP__ *,int (*)(void *),&int DeleteObject(void *),wistd::integral_constant<unsigned __int64,0>,HBITMAP__ *,HBITMAP__ *,0,std::nullptr_t>>>>((__int64)(a1 + 1144));
          if ( v21 >= 0 && DwmSetIconicLivePreviewBitmap(*(HWND *)(*((_QWORD *)a1 + 2) + 32LL), *v17, 0LL, 0) >= 0 )
            a1[792] = 0;
LABEL_46:
          wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)a1 + 141);
          wil::details::unique_storage<wil::details::resource_policy<HFONT__ *,int (*)(void *),&int DeleteObject(void *),wistd::integral_constant<unsigned __int64,0>,HFONT__ *,HFONT__ *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<HFONT__ *,int (*)(void *),&int DeleteObject(void *),wistd::integral_constant<unsigned __int64,0>,HFONT__ *,HFONT__ *,0,std::nullptr_t>>((void **)a1 + 140);
          if ( *v16 )
            winrt::com_ptr<ISnapComponent>::unconditional_release_ref((__int64 *)a1 + 139);
          wil::ActivityThreadWatcher::~ActivityThreadWatcher((wil::ActivityThreadWatcher *)(a1 + 1024));
          winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)(a1 + 1008));
          winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)(a1 + 864));
          if ( a1[792] )
          {
            DwmInvalidateIconicBitmaps(*(HWND *)(*((_QWORD *)a1 + 97) + 32LL));
            *((_DWORD *)a1 + 192) = -2147467259;
          }
          wil::ActivityBase<WindowManagementLogging,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::Stop(
            (__int64 *)a1 + 12,
            *((_DWORD *)a1 + 192));
          WindowTabHostTelemetry::WindowTabHostLivePreviewThumbnailRequested::~WindowTabHostLivePreviewThumbnailRequested((WindowTabHostTelemetry::WindowTabHostLivePreviewThumbnailRequested *)(a1 + 96));
          if ( *((_QWORD *)a1 + 11) )
            wil::details::SetEvent(*((wil::details **)a1 + 11), v22);
          if ( !*((_QWORD *)a1 + 2) )
            goto LABEL_54;
        }
        else
        {
          wil::ActivityBase<WindowManagementLogging,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::Stop(
            (__int64 *)a1 + 12,
            *((_DWORD *)a1 + 192));
          wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)a1 + 141);
          wil::details::unique_storage<wil::details::resource_policy<HFONT__ *,int (*)(void *),&int DeleteObject(void *),wistd::integral_constant<unsigned __int64,0>,HFONT__ *,HFONT__ *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<HFONT__ *,int (*)(void *),&int DeleteObject(void *),wistd::integral_constant<unsigned __int64,0>,HFONT__ *,HFONT__ *,0,std::nullptr_t>>((void **)a1 + 140);
          if ( *v16 )
            winrt::com_ptr<ISnapComponent>::unconditional_release_ref((__int64 *)a1 + 139);
          wil::ActivityThreadWatcher::~ActivityThreadWatcher((wil::ActivityThreadWatcher *)(a1 + 1024));
          winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)(a1 + 1008));
          winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)(a1 + 864));
          DwmInvalidateIconicBitmaps(*(HWND *)(*((_QWORD *)a1 + 97) + 32LL));
          *((_DWORD *)a1 + 192) = -2147467259;
          WindowTabHostTelemetry::WindowTabHostLivePreviewThumbnailRequested::~WindowTabHostLivePreviewThumbnailRequested((WindowTabHostTelemetry::WindowTabHostLivePreviewThumbnailRequested *)(a1 + 96));
          if ( *((_QWORD *)a1 + 11) )
            wil::details::SetEvent(*((wil::details **)a1 + 11), v20);
        }
        winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref((__int64 *)a1 + 2);
        goto LABEL_54;
      case 7:
        winrt::impl::signal_awaiter::~signal_awaiter((winrt::cancellable_promise **)a1 + 4);
        if ( *((_QWORD *)a1 + 2) )
          winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref((__int64 *)a1 + 2);
        goto LABEL_54;
      case 8:
        goto LABEL_23;
      case 9:
        winrt::cancellable_awaiter<winrt::impl::await_adapter<winrt::Windows::Foundation::IAsyncOperation<unsigned int>,1>>::~cancellable_awaiter<winrt::impl::await_adapter<winrt::Windows::Foundation::IAsyncOperation<unsigned int>,1>>((winrt::cancellable_promise **)a1 + 102);
        winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)(a1 + 808));
        DwmInvalidateIconicBitmaps(*(HWND *)(*((_QWORD *)a1 + 97) + 32LL));
        *((_DWORD *)a1 + 192) = -2147467259;
        WindowTabHostTelemetry::WindowTabHostLivePreviewThumbnailRequested::~WindowTabHostLivePreviewThumbnailRequested((WindowTabHostTelemetry::WindowTabHostLivePreviewThumbnailRequested *)(a1 + 96));
        if ( *((_QWORD *)a1 + 11) )
          wil::details::SetEvent(*((wil::details **)a1 + 11), v12);
        if ( *((_QWORD *)a1 + 2) )
          winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref((__int64 *)a1 + 2);
        goto LABEL_54;
      case 0xA:
        goto LABEL_36;
      case 0xB:
        winrt::cancellable_awaiter<winrt::impl::await_adapter<winrt::Windows::Foundation::IAsyncOperation<unsigned int>,1>>::~cancellable_awaiter<winrt::impl::await_adapter<winrt::Windows::Foundation::IAsyncOperation<unsigned int>,1>>((winrt::cancellable_promise **)a1 + 122);
        winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)(a1 + 968));
        winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)(a1 + 864));
        DwmInvalidateIconicBitmaps(*(HWND *)(*((_QWORD *)a1 + 97) + 32LL));
        *((_DWORD *)a1 + 192) = -2147467259;
        WindowTabHostTelemetry::WindowTabHostLivePreviewThumbnailRequested::~WindowTabHostLivePreviewThumbnailRequested((WindowTabHostTelemetry::WindowTabHostLivePreviewThumbnailRequested *)(a1 + 96));
        if ( *((_QWORD *)a1 + 11) )
          wil::details::SetEvent(*((wil::details **)a1 + 11), v15);
        if ( *((_QWORD *)a1 + 2) )
          winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref((__int64 *)a1 + 2);
        goto LABEL_54;
      default:
        __debugbreak();
        return;
    }
  }
  catch ( ... )
  {
    *((_WORD *)a1 + 4) = -1;
    std::experimental::coroutine_traits<winrt::fire_and_forget,winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance *>::promise_type::unhandled_exception((winrt *)0xFFFFFFFFLL);
  }
}
