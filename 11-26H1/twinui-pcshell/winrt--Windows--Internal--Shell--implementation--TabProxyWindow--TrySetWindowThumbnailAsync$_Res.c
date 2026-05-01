/*
 * XREFs of winrt::Windows::Internal::Shell::implementation::TabProxyWindow::TrySetWindowThumbnailAsync$_ResumeCoro$1 @ 0x180266CF0
 * Callers:
 *     ?TrySetWindowThumbnailAsync@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@AEAA?AU?$IAsyncOperation@_N@Foundation@56@XZ @ 0x18026724C (-TrySetWindowThumbnailAsync@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@AEAA-AU-.c)
 * Callees:
 *     ??8Foundation@Windows@winrt@@YA_NAEBUIUnknown@012@0@Z @ 0x180025E74 (--8Foundation@Windows@winrt@@YA_NAEBUIUnknown@012@0@Z.c)
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18002633C (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?unconditional_release_ref@?$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ @ 0x18002694C (-unconditional_release_ref@-$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ.c)
 *     ?CreateInstanceAsync@?$consume_Windows_Internal_Shell_TaskGroups_ITaskGroupDataSourceAdapterStatics@UITaskGroupDataSourceAdapterStatics@TaskGroups@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x18002AE28 (-CreateInstanceAsync@-$consume_Windows_Internal_Shell_TaskGroups_ITaskGroupDataSourceAdapterStat.c)
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18004C280 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18006B898 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0?$com_ptr_t@UIVirtualDesktop@@Uerr_returncode_policy@wil@@@wil@@QEAA@AEBV01@@Z @ 0x1800CD100 (--0-$com_ptr_t@UIVirtualDesktop@@Uerr_returncode_policy@wil@@@wil@@QEAA@AEBV01@@Z.c)
 *     _lambda_bb8c74dc12fedcc2a4c0331452efef3b_::operator() @ 0x1800E3494 (_lambda_bb8c74dc12fedcc2a4c0331452efef3b_--operator().c)
 *     ?now@steady_clock@chrono@std@@SA?AV?$time_point@Usteady_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0DLJKMKAA@@std@@@23@@23@XZ @ 0x1800E363C (-now@steady_clock@chrono@std@@SA-AV-$time_point@Usteady_clock@chrono@std@@V-$duration@_JU-$ratio.c)
 *     ?await_suspend@final_suspend_awaiter@?$promise_base@Upromise_type@?$coroutine_traits@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@PEAUTabProxyWindow@implementation@Shell@Internal@34@@experimental@std@@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@X@impl@winrt@@QEBA_NU?$coroutine_handle@X@experimental@std@@@Z @ 0x1800E672C (-await_suspend@final_suspend_awaiter@-$promise_base@Upromise_type@-$coroutine_trait_ea_1800E672C.c)
 *     ?ConvertWICBitmapToHBITMAP@@YAJPEAUIWICImagingFactory@@PEAUIWICBitmapSource@@PEAPEAUHBITMAP__@@@Z @ 0x1801293C8 (-ConvertWICBitmapToHBITMAP@@YAJPEAUIWICImagingFactory@@PEAUIWICBitmapSource@@PEAPEAUHBITMAP__@@@.c)
 *     ?LoadImageWithWIC@@YAJPEAUIWICImagingFactory@@PEAUIStream@@W4LOAD_IMAGE_WITH_WIC_OPTION@@PEAPEAUIWICBitmapSource@@PEAPEAUIWICBitmapFrameDecode@@PEAU_GUID@@@Z @ 0x18012988C (-LoadImageWithWIC@@YAJPEAUIWICImagingFactory@@PEAUIStream@@W4LOAD_IMAGE_WITH_WIC_OPTION@@PEAPEAU.c)
 *     ?GetThumbnailSize@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@AEBA?AUBitmapSize@Imaging@Graphics@56@_N@Z @ 0x1801A2270 (-GetThumbnailSize@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@AEBA-AUBitmapSize@.c)
 *     ?IsThumbnailValidSize@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@AEAA_NUBitmapSize@Imaging@Graphics@56@V?$com_ptr_t@UIWICBitmapSource@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x1801BF750 (-IsThumbnailValidSize@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@AEAA_NUBitmapS.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAUHFONT__@@P6AHPEAX@Z$1?DeleteObject@@YAH0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x180213F2C (--1-$unique_storage@U-$resource_policy@PEAUHFONT__@@P6AHPEAX@Z$1-DeleteObject@@YAH0@ZU-$integral.c)
 *     ??1?$out_param_t@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUHBITMAP__@@P6AHPEAX@Z$1?DeleteObject@@YAH0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@@details@wil@@QEAA@XZ @ 0x180218968 (--1-$out_param_t@V-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAUHBITMAP__@@P6AHPEAX@Z$.c)
 *     ??$capture@UIStream@@A6AJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@ZPEAU2@@winrt@@YA?AU?$com_ptr@UIStream@@@0@A6AJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z$$QEAPEAU2@@Z @ 0x1802609A4 (--$capture@UIStream@@A6AJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@ZPEAU2@@winrt@@YA-AU-$com_ptr@UIStream.c)
 *     ?GetThumbnailAsync@?$consume_Windows_Internal_UI_Shell_IWindowTabView@UIWindowTabView@Shell@UI@Internal@Windows@winrt@@@impl@winrt@@QEBA@AEBUBitmapSize@Imaging@Graphics@Windows@3@_N@Z @ 0x180265C3C (-GetThumbnailAsync@-$consume_Windows_Internal_UI_Shell_IWindowTabView@UIWindowTabView@Shell@UI@I.c)
 *     ??1?$promise_base@Upromise_type@?$coroutine_traits@UIAsyncAction@Foundation@Windows@winrt@@PEAUWindowsTracker@implementation@Shell@Internal@34@UWindowId@UI@34@@experimental@std@@UIAsyncAction@Foundation@Windows@winrt@@X@impl@winrt@@UEAA@XZ @ 0x180288A6C (--1-$promise_base@Upromise_type@-$coroutine_traits@UIAsyncAction@Foundation@Windows@winrt@@PEAUW.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802C92A8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _CxxThrowException_0 @ 0x1802C9ED8 (_CxxThrowException_0.c)
 *     ?current@slim_source_location@impl@winrt@@SA?AU123@IQEBD0@Z @ 0x1802D7924 (-current@slim_source_location@impl@winrt@@SA-AU123@IQEBD0@Z.c)
 *     ??0hresult_canceled@winrt@@QEAA@AEBUslim_source_location@impl@1@@Z @ 0x1803179A0 (--0hresult_canceled@winrt@@QEAA@AEBUslim_source_location@impl@1@@Z.c)
 *     ??1?$cancellable_awaiter@U?$await_adapter@U?$IAsyncOperation@I@Foundation@Windows@winrt@@$00@impl@winrt@@@winrt@@QEAA@XZ @ 0x180328DF0 (--1-$cancellable_awaiter@U-$await_adapter@U-$IAsyncOperation@I@Foundation@Windows@winrt@@$00@imp.c)
 *     ??$await_suspend@Upromise_type@?$coroutine_traits@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@PEAUTabProxyWindow@implementation@Shell@Internal@34@@experimental@std@@@?$await_adapter@U?$IAsyncOperation@UIRandomAccessStreamReference@Streams@Storage@Windows@winrt@@@Foundation@Windows@winrt@@$00@impl@winrt@@QEAA_NU?$coroutine_handle@Upromise_type@?$coroutine_traits@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@PEAUTabProxyWindow@implementation@Shell@Internal@34@@experimental@std@@@experimental@std@@@Z @ 0x1805810F8 (--$await_suspend@Upromise_type@-$coroutine_traits@U-$IAsyncOperation@_N@Foundation@_ea_1805810F8.c)
 *     ??$await_suspend@Upromise_type@?$coroutine_traits@UIAsyncAction@Foundation@Windows@winrt@@PEAUMeetAndChatFallbackProp@implementation@Shell@Internal@34@@experimental@std@@@?$await_adapter@U?$IAsyncOperation@UIRandomAccessStreamWithContentType@Streams@Storage@Windows@winrt@@@Foundation@Windows@winrt@@$00@impl@winrt@@QEAA_NU?$coroutine_handle@Upromise_type@?$coroutine_traits@UIAsyncAction@Foundation@Windows@winrt@@PEAUMeetAndChatFallbackProp@implementation@Shell@Internal@34@@experimental@std@@@experimental@std@@@Z @ 0x180581130 (--$await_suspend@Upromise_type@-$coroutine_traits@UIAsyncAction@Foundation@Windows@winrt@@PEAUMe.c)
 *     ?await_resume@?$await_adapter@U?$IAsyncOperation@UIRandomAccessStreamWithContentType@Streams@Storage@Windows@winrt@@@Foundation@Windows@winrt@@$00@impl@winrt@@QEBA@XZ @ 0x18058336C (-await_resume@-$await_adapter@U-$IAsyncOperation@UIRandomAccessStreamWithContentType@Streams@Sto.c)
 */

// Hidden C++ exception states: #wind=16 #try_helpers=2
void __fastcall winrt::Windows::Internal::Shell::implementation::TabProxyWindow::TrySetWindowThumbnailAsync__ResumeCoro_1(
        __int64 a1)
{
  __int64 v2; // r12
  __int64 v3; // rdi
  _QWORD *ThumbnailAsync; // rax
  __int64 v5; // rdx
  const struct winrt::impl::slim_source_location *v6; // rax
  __int64 v7; // rax
  _QWORD *InstanceAsync; // rax
  __int64 v9; // rdx
  const struct winrt::impl::slim_source_location *v10; // rax
  _QWORD *v11; // rbx
  HBITMAP *v12; // rdi
  int ImageWithWIC; // eax
  __int64 *v14; // rax
  __int64 v15; // rcx
  int v16; // eax
  HRESULT v17; // eax
  struct IWICBitmapDecoder *v18; // [rsp+20h] [rbp-108h]
  int v19; // [rsp+20h] [rbp-108h]
  struct IWICBitmapSource *v20; // [rsp+28h] [rbp-100h]
  _BYTE pExceptionObject[24]; // [rsp+68h] [rbp-C0h] BYREF
  _BYTE v22[168]; // [rsp+80h] [rbp-A8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+128h] [rbp+0h]

  v2 = a1 + 8;
  switch ( *(_WORD *)(a1 + 8) )
  {
    case 0xFFFF:
    case 1:
    case 3:
      goto LABEL_28;
    case 2:
      *(_BYTE *)(a1 + 12) = 0;
      std::chrono::steady_clock::now((__int64 *)(a1 + 16));
      v3 = *(_QWORD *)(v2 + 320);
      winrt::Windows::Internal::Shell::implementation::TabProxyWindow::GetThumbnailSize(v3, a1 + 24, 0);
      *(_QWORD *)(a1 + 32) = *(_QWORD *)(a1 + 24);
      *(_QWORD *)(a1 + 40) = *(_QWORD *)(a1 + 16);
      *(_BYTE *)(a1 + 48) = 1;
      *(_QWORD *)(a1 + 224) = a1 - 112;
      *(_QWORD *)(a1 + 304) = a1 - 112;
      ThumbnailAsync = winrt::impl::consume_Windows_Internal_UI_Shell_IWindowTabView<winrt::Windows::Internal::UI::Shell::IWindowTabView>::GetThumbnailAsync(
                         (__int64 **)(v3 + 48),
                         (_QWORD *)(a1 + 56),
                         (__int64 *)(a1 + 24),
                         0);
      if ( *(_DWORD *)(a1 - 112 + 96) == 2 )
      {
        v6 = (const struct winrt::impl::slim_source_location *)winrt::impl::slim_source_location::current(a1 + 248, v5);
        winrt::hresult_canceled::hresult_canceled((winrt::hresult_canceled *)pExceptionObject, v6);
        throw (winrt::hresult_canceled *)pExceptionObject;
      }
      *(_QWORD *)(a1 + 64) = 0LL;
      *(_QWORD *)(a1 + 72) = ThumbnailAsync;
      *(_QWORD *)(a1 + 80) = 0LL;
      *(_BYTE *)(a1 + 88) = 1;
      *(_WORD *)v2 = 4;
      if ( (unsigned __int8)winrt::impl::await_adapter<winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Storage::Streams::IRandomAccessStreamReference>,1>::await_suspend<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncOperation<bool>,winrt::Windows::Internal::Shell::implementation::TabProxyWindow *>::promise_type>(
                              a1 + 64,
                              a1) )
        return;
      goto LABEL_7;
    case 4:
LABEL_7:
      winrt::impl::await_adapter<winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Storage::Streams::IRandomAccessStreamWithContentType>,1>::await_resume(
        a1 + 64,
        a1 + 96);
      winrt::cancellable_awaiter<winrt::impl::await_adapter<winrt::Windows::Foundation::IAsyncOperation<unsigned int>,1>>::~cancellable_awaiter<winrt::impl::await_adapter<winrt::Windows::Foundation::IAsyncOperation<unsigned int>,1>>(a1 + 64);
      winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)(a1 + 56));
      *(_QWORD *)(a1 + 104) = 0LL;
      if ( winrt::Windows::Foundation::operator==(
             (void (__fastcall ****)(_QWORD, __int64 *, __int64 *))(a1 + 96),
             (_QWORD *)(a1 + 104)) )
      {
        *(_BYTE *)(a1 - 8) = 0;
        winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)(a1 + 96));
        *(_BYTE *)(a1 + 48) = 0;
        lambda_bb8c74dc12fedcc2a4c0331452efef3b_::operator()(a1 + 32);
        v7 = *(_QWORD *)(a1 + 224);
      }
      else
      {
        InstanceAsync = winrt::impl::consume_Windows_Internal_Shell_TaskGroups_ITaskGroupDataSourceAdapterStatics<winrt::Windows::Internal::Shell::TaskGroups::ITaskGroupDataSourceAdapterStatics>::CreateInstanceAsync(
                          (__int64 **)(a1 + 96),
                          (_QWORD *)(a1 + 112));
        if ( *(_DWORD *)(a1 - 16) == 2 )
        {
          v10 = (const struct winrt::impl::slim_source_location *)winrt::impl::slim_source_location::current(
                                                                    a1 + 272,
                                                                    v9);
          winrt::hresult_canceled::hresult_canceled((winrt::hresult_canceled *)v22, v10);
          throw (winrt::hresult_canceled *)v22;
        }
        *(_QWORD *)(a1 + 120) = 0LL;
        *(_QWORD *)(a1 + 128) = InstanceAsync;
        *(_QWORD *)(a1 + 136) = 0LL;
        *(_BYTE *)(a1 + 144) = 1;
        *(_WORD *)v2 = 6;
        if ( (unsigned __int8)winrt::impl::await_adapter<winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Storage::Streams::IRandomAccessStreamWithContentType>,1>::await_suspend<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncAction,winrt::Windows::Internal::Shell::implementation::MeetAndChatFallbackProp *>::promise_type>(
                                a1 + 120,
                                a1) )
          return;
LABEL_14:
        winrt::impl::await_adapter<winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Storage::Streams::IRandomAccessStreamWithContentType>,1>::await_resume(
          a1 + 120,
          a1 + 152);
        winrt::cancellable_awaiter<winrt::impl::await_adapter<winrt::Windows::Foundation::IAsyncOperation<unsigned int>,1>>::~cancellable_awaiter<winrt::impl::await_adapter<winrt::Windows::Foundation::IAsyncOperation<unsigned int>,1>>(a1 + 120);
        winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)(a1 + 112));
        *(_QWORD *)(a1 + 160) = *(_QWORD *)(a1 + 152);
        v11 = (_QWORD *)(a1 + 168);
        winrt::capture<IStream,long (&)(IUnknown *,_GUID const &,void * *),IUnknown *>(
          (_QWORD *)(a1 + 168),
          (__int64 (__fastcall *)(__int64, void *, __int64 *))CreateStreamOverRandomAccessStream,
          (__int64 *)(a1 + 160));
        v12 = (HBITMAP *)(a1 + 176);
        *(_QWORD *)(a1 + 176) = 0LL;
        *(_QWORD *)(a1 + 184) = 0LL;
        ImageWithWIC = LoadImageWithWIC(
                         *(struct IWICImagingFactory **)(*(_QWORD *)(v2 + 320) + 104LL),
                         *(_QWORD *)(a1 + 168),
                         0,
                         (struct IWICBitmapSource **)(a1 + 184),
                         v18,
                         v20);
        if ( ImageWithWIC < 0 )
          wil::details::in1diag3::Throw_Hr(
            retaddr,
            (void *)0x334,
            (int)"pcshell\\twinui\\windowtabhost\\lib\\tabproxywindow.cpp",
            (const char *)(unsigned int)ImageWithWIC,
            v19);
        v14 = wil::com_ptr_t<IVirtualDesktop,wil::err_returncode_policy>::com_ptr_t<IVirtualDesktop,wil::err_returncode_policy>(
                (__int64 *)(a1 + 192),
                (__int64 *)(a1 + 184));
        if ( winrt::Windows::Internal::Shell::implementation::TabProxyWindow::IsThumbnailValidSize(
               v15,
               *(_QWORD *)(a1 + 24),
               v14) )
        {
          *(_QWORD *)(a1 + 200) = v12;
          *(_QWORD *)(a1 + 208) = 0LL;
          *(_BYTE *)(a1 + 216) = 1;
          v16 = ConvertWICBitmapToHBITMAP(
                  *(struct IWICImagingFactory **)(*(_QWORD *)(v2 + 320) + 104LL),
                  *(struct IWICBitmapSource **)(a1 + 184),
                  (HBITMAP *)(a1 + 208));
          if ( v16 < 0 )
            wil::details::in1diag3::Throw_Hr(
              retaddr,
              (void *)0x33B,
              (int)"pcshell\\twinui\\windowtabhost\\lib\\tabproxywindow.cpp",
              (const char *)(unsigned int)v16,
              v19);
          wil::details::out_param_t<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<HBITMAP__ *,int (*)(void *),&int DeleteObject(void *),wistd::integral_constant<unsigned __int64,0>,HBITMAP__ *,HBITMAP__ *,0,std::nullptr_t>>>>::~out_param_t<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<HBITMAP__ *,int (*)(void *),&int DeleteObject(void *),wistd::integral_constant<unsigned __int64,0>,HBITMAP__ *,HBITMAP__ *,0,std::nullptr_t>>>>(a1 + 200);
          v17 = DwmSetIconicThumbnail(*(HWND *)(*(_QWORD *)(v2 + 320) + 32LL), *v12, 0);
          if ( v17 < 0 )
            wil::details::in1diag3::Throw_Hr(
              retaddr,
              (void *)0x33C,
              (int)"pcshell\\twinui\\windowtabhost\\lib\\tabproxywindow.cpp",
              (const char *)(unsigned int)v17,
              v19);
          *(_BYTE *)(a1 + 12) = 1;
          wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)(a1 + 184));
          wil::details::unique_storage<wil::details::resource_policy<HFONT__ *,int (*)(void *),&int DeleteObject(void *),wistd::integral_constant<unsigned __int64,0>,HFONT__ *,HFONT__ *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<HFONT__ *,int (*)(void *),&int DeleteObject(void *),wistd::integral_constant<unsigned __int64,0>,HFONT__ *,HFONT__ *,0,std::nullptr_t>>((void **)(a1 + 176));
          if ( *v11 )
            winrt::com_ptr<ISnapComponent>::unconditional_release_ref((__int64 *)(a1 + 168));
          winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)(a1 + 152));
          winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)(a1 + 96));
          *(_BYTE *)(a1 + 48) = 0;
          lambda_bb8c74dc12fedcc2a4c0331452efef3b_::operator()(a1 + 32);
          *(_BYTE *)(a1 - 8) = *(_BYTE *)(a1 + 12);
          v7 = *(_QWORD *)(a1 + 304);
        }
        else
        {
          *(_BYTE *)(a1 - 8) = 0;
          wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)(a1 + 184));
          wil::details::unique_storage<wil::details::resource_policy<HFONT__ *,int (*)(void *),&int DeleteObject(void *),wistd::integral_constant<unsigned __int64,0>,HFONT__ *,HFONT__ *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<HFONT__ *,int (*)(void *),&int DeleteObject(void *),wistd::integral_constant<unsigned __int64,0>,HFONT__ *,HFONT__ *,0,std::nullptr_t>>((void **)(a1 + 176));
          if ( *v11 )
            winrt::com_ptr<ISnapComponent>::unconditional_release_ref((__int64 *)(a1 + 168));
          winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)(a1 + 152));
          winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)(a1 + 96));
          *(_BYTE *)(a1 + 48) = 0;
          lambda_bb8c74dc12fedcc2a4c0331452efef3b_::operator()(a1 + 32);
          v7 = *(_QWORD *)(a1 + 224);
        }
      }
      *(_QWORD *)(a1 + 240) = v7;
      *(_WORD *)v2 = 0;
      if ( !winrt::impl::promise_base<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncOperation<bool>,winrt::Windows::Internal::Shell::implementation::TabProxyWindow *>::promise_type,winrt::Windows::Foundation::IAsyncOperation<bool>,void>::final_suspend_awaiter::await_suspend((__int64 *)(a1 + 240)) )
      {
LABEL_28:
        winrt::impl::promise_base<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncAction,winrt::Windows::Internal::Shell::implementation::WindowsTracker *,winrt::Windows::UI::WindowId>::promise_type,winrt::Windows::Foundation::IAsyncAction,void>::~promise_base<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncAction,winrt::Windows::Internal::Shell::implementation::WindowsTracker *,winrt::Windows::UI::WindowId>::promise_type,winrt::Windows::Foundation::IAsyncAction,void>(a1 - 112);
        if ( *(_WORD *)(a1 + 10) )
          operator delete((void *)(a1 - 112), (const struct std::nothrow_t *)0x1C0);
      }
      return;
    case 5:
      winrt::cancellable_awaiter<winrt::impl::await_adapter<winrt::Windows::Foundation::IAsyncOperation<unsigned int>,1>>::~cancellable_awaiter<winrt::impl::await_adapter<winrt::Windows::Foundation::IAsyncOperation<unsigned int>,1>>(a1 + 64);
      winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)(a1 + 56));
      *(_BYTE *)(a1 + 48) = 0;
      lambda_bb8c74dc12fedcc2a4c0331452efef3b_::operator()(a1 + 32);
      goto LABEL_28;
    case 6:
      goto LABEL_14;
    case 7:
      winrt::cancellable_awaiter<winrt::impl::await_adapter<winrt::Windows::Foundation::IAsyncOperation<unsigned int>,1>>::~cancellable_awaiter<winrt::impl::await_adapter<winrt::Windows::Foundation::IAsyncOperation<unsigned int>,1>>(a1 + 120);
      winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)(a1 + 112));
      winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)(a1 + 96));
      *(_BYTE *)(a1 + 48) = 0;
      lambda_bb8c74dc12fedcc2a4c0331452efef3b_::operator()(a1 + 32);
      goto LABEL_28;
    default:
      __debugbreak();
      return;
  }
}
