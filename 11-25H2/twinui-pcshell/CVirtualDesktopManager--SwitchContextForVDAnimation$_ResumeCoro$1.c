/*
 * XREFs of CVirtualDesktopManager::SwitchContextForVDAnimation$_ResumeCoro$1 @ 0x180533170
 * Callers:
 *     CVirtualDesktopManager::SwitchContextForVDAnimation$_InitCoro$2 @ 0x180533030 (CVirtualDesktopManager--SwitchContextForVDAnimation$_InitCoro$2.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180028330 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800934E8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?query@weak_query_policy@details@wil@@SAJPEAUIWeakReference@@AEBU_GUID@@PEAPEAX@Z @ 0x180186934 (-query@weak_query_policy@details@wil@@SAJPEAUIWeakReference@@AEBU_GUID@@PEAPEAX@Z.c)
 *     ??1?$promise_base@Upromise_type@?$coroutine_traits@U?$IAsyncOperation@UValueSet@Collections@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@PEAVGamingOverlayExperienceManager@@Uhstring@4@U?$IMap@Uhstring@winrt@@U12@@Collections@234@@experimental@std@@U?$IAsyncOperation@UValueSet@Collections@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@X@impl@winrt@@UEAA@XZ @ 0x1802291B8 (--1-$promise_base@Upromise_type@-$coroutine_traits@U-$IAsyncOperation@UValueSet@Collections@Foun.c)
 *     ?await_resume@apartment_awaiter@impl@winrt@@QEBAXXZ @ 0x18024634C (-await_resume@apartment_awaiter@impl@winrt@@QEBAXXZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D2628 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _CxxThrowException_0 @ 0x1802D3008 (_CxxThrowException_0.c)
 *     ?current@slim_source_location@impl@winrt@@SA?AU123@IQEBD0@Z @ 0x1802DEC34 (-current@slim_source_location@impl@winrt@@SA-AU123@IQEBD0@Z.c)
 *     ??0hresult_canceled@winrt@@QEAA@AEBUslim_source_location@impl@1@@Z @ 0x18031B410 (--0hresult_canceled@winrt@@QEAA@AEBUslim_source_location@impl@1@@Z.c)
 *     ?await_suspend@final_suspend_awaiter@?$promise_base@Upromise_type@?$coroutine_traits@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@PEAUGamingPostureController@implementation@Posture@GamingExperiences@Internal@34@UUri@234@@experimental@std@@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@X@impl@winrt@@QEBA_NU?$coroutine_handle@X@experimental@std@@@Z @ 0x180331904 (-await_suspend@final_suspend_awaiter@-$promise_base@Upromise_type@-$coroutine_trait_ea_180331904.c)
 *     ?await_suspend@apartment_awaiter@impl@winrt@@QEAA_NU?$coroutine_handle@X@experimental@std@@@Z @ 0x180352F78 (-await_suspend@apartment_awaiter@impl@winrt@@QEAA_NU-$coroutine_handle@X@experimental@std@@@Z.c)
 *     ??$com_weak_query@PEAVCVirtualDesktopManager@@@wil@@YA?AV?$com_ptr_t@UIWeakReference@@Uerr_exception_policy@wil@@@0@$$QEAPEAVCVirtualDesktopManager@@@Z @ 0x18052D2C0 (--$com_weak_query@PEAVCVirtualDesktopManager@@@wil@@YA-AV-$com_ptr_t@UIWeakReference@@Uerr_excep.c)
 *     ?SwitchDesktopWithAnimationInternal@CVirtualDesktopManager@@AEAAJPEAUIVirtualDesktop@@W4VirtualDesktopSwitchType@@@Z @ 0x180534170 (-SwitchDesktopWithAnimationInternal@CVirtualDesktopManager@@AEAAJPEAUIVirtualDesktop@@W4VirtualD.c)
 */

// Hidden C++ exception states: #wind=2 #try_helpers=1
void __fastcall CVirtualDesktopManager::SwitchContextForVDAnimation__ResumeCoro_1(__int64 a1)
{
  _WORD *v2; // rsi
  __int64 v3; // r14
  __int64 v4; // r14
  const struct winrt::impl::slim_source_location *v5; // rax
  int v6; // eax
  __int64 v7; // rdx
  int v8; // [rsp+20h] [rbp-58h]
  _BYTE pExceptionObject[80]; // [rsp+28h] [rbp-50h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  v2 = (_WORD *)(a1 + 8);
  LOWORD(v8) = *(_WORD *)(a1 + 8);
  switch ( (__int16)v8 )
  {
    case -1:
    case 1:
    case 3:
      goto LABEL_12;
    case 2:
      v3 = *(_QWORD *)(a1 + 113);
      *(_QWORD *)(a1 + 16) = v3;
      wil::com_weak_query<CVirtualDesktopManager *>((__int64 *)(a1 + 24), (__int64 *)(a1 + 16));
      *(_QWORD *)(a1 + 96) = a1 - 112;
      v4 = v3 + 256;
      if ( *(_DWORD *)(a1 - 112 + 96) == 2 )
      {
        v5 = (const struct winrt::impl::slim_source_location *)winrt::impl::slim_source_location::current(a1 + 64);
        winrt::hresult_canceled::hresult_canceled((winrt::hresult_canceled *)pExceptionObject, v5);
        throw (winrt::hresult_canceled *)pExceptionObject;
      }
      *(_QWORD *)(a1 + 32) = v4;
      *(_QWORD *)(a1 + 40) = 0LL;
      *v2 = 4;
      if ( winrt::impl::apartment_awaiter::await_suspend((__int64 **)(a1 + 32), (void (*)(void *, void *))a1) )
        return;
      goto LABEL_7;
    case 4:
LABEL_7:
      winrt::impl::apartment_awaiter::await_resume((winrt::impl::apartment_awaiter *)(a1 + 32));
      *(_QWORD *)(a1 + 48) = 0LL;
      v6 = wil::details::weak_query_policy::query(
             *(struct IWeakReference **)(a1 + 24),
             &GUID_53f5ca0b_158f_4124_900c_057158060b27,
             (void **)(a1 + 48));
      if ( v6 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0x1C60,
          (int)"onecore\\internal\\sdk\\inc\\wil\\opensource/wil/result_macros.h",
          (const char *)(unsigned int)v6,
          v8);
      if ( *(_QWORD *)(a1 + 48) )
        CVirtualDesktopManager::SwitchDesktopWithAnimationInternal(
          *(_QWORD *)(a1 + 113),
          *(_QWORD *)(a1 + 121),
          *(unsigned int *)(a1 + 129));
      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)(a1 + 48));
      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)(a1 + 24));
      *(_QWORD *)(a1 + 56) = *(_QWORD *)(a1 + 96);
      *v2 = 0;
      if ( !winrt::impl::promise_base<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncOperation<bool>,winrt::Windows::Internal::GamingExperiences::Posture::implementation::GamingPostureController *,winrt::Windows::Foundation::Uri>::promise_type,winrt::Windows::Foundation::IAsyncOperation<bool>,void>::final_suspend_awaiter::await_suspend(
              (__int64 *)(a1 + 56),
              v7) )
        goto LABEL_12;
      return;
    case 5:
      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)(a1 + 24));
LABEL_12:
      *(_QWORD *)(a1 + 96) = a1 - 112;
      winrt::impl::promise_base<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::Collections::ValueSet>,GamingOverlayExperienceManager *,winrt::hstring,winrt::Windows::Foundation::Collections::IMap<winrt::hstring,winrt::hstring>>::promise_type,winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::Collections::ValueSet>,void>::~promise_base<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::Collections::ValueSet>,GamingOverlayExperienceManager *,winrt::hstring,winrt::Windows::Foundation::Collections::IMap<winrt::hstring,winrt::hstring>>::promise_type,winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::Collections::ValueSet>,void>((__int64 *)(a1 - 112));
      if ( *(_WORD *)(a1 + 10) )
        operator delete((void *)(a1 - 112), (const struct std::nothrow_t *)0x100);
      break;
    default:
      __debugbreak();
      break;
  }
}
