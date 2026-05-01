/*
 * XREFs of ?RegisterFlyoutWindow@ApplicationFlyoutView@@UEAA?AUIInspectable@Foundation@Windows@winrt@@PEAUHWND__@@AEBUhstring@5@@Z @ 0x1805D7AB0
 * Callers:
 *     <none>
 * Callees:
 *     ?Parse@?$consume_Windows_Data_Json_IJsonObjectStatics@UIJsonObjectStatics@Json@Data@Windows@winrt@@@impl@winrt@@QEBA@AEBUhstring@param@3@@Z @ 0x18005D0B4 (-Parse@-$consume_Windows_Data_Json_IJsonObjectStatics@UIJsonObjectStatics@Json@Data@Windows@winr.c)
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18005D244 (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800934E8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x1800AC1A4 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ?c_str@hstring@winrt@@QEBAPEBGXZ @ 0x1800AEFE8 (-c_str@hstring@winrt@@QEBAPEBGXZ.c)
 *     ?Set@TraceLoggingCorrelationVector@@SAPEAV1@PEBD_N@Z @ 0x1801793E4 (-Set@TraceLoggingCorrelationVector@@SAPEAV1@PEBD_N@Z.c)
 *     ??0hstring@param@winrt@@QEAA@QEBG@Z @ 0x1801B5CB8 (--0hstring@param@winrt@@QEAA@QEBG@Z.c)
 *     ?reset@?$unique_ptr@VTraceLoggingCorrelationVector@@U?$default_delete@VTraceLoggingCorrelationVector@@@std@@@std@@QEAAXPEAVTraceLoggingCorrelationVector@@@Z @ 0x18022B99C (-reset@-$unique_ptr@VTraceLoggingCorrelationVector@@U-$default_delete@VTraceLoggingCorrelationVe.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18029752C (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?QueryParsed@?$consume_Windows_Foundation_IUriRuntimeClass@UIUriRuntimeClass@Foundation@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x1802A85DC (-QueryParsed@-$consume_Windows_Foundation_IUriRuntimeClass@UIUriRuntimeClass@Foundation@Windows@.c)
 *     ??0CorrelationVector@@QEAA@XZ @ 0x1802BF1B0 (--0CorrelationVector@@QEAA@XZ.c)
 *     ??0Uri@Foundation@Windows@winrt@@QEAA@AEBUhstring@param@3@@Z @ 0x1802C0138 (--0Uri@Foundation@Windows@winrt@@QEAA@AEBUhstring@param@3@@Z.c)
 *     ??1?$unique_ptr@VTraceLoggingCorrelationVector@@U?$default_delete@VTraceLoggingCorrelationVector@@@std@@@std@@QEAA@XZ @ 0x1802CF36C (--1-$unique_ptr@VTraceLoggingCorrelationVector@@U-$default_delete@VTraceLoggingCorrelationVector.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     ??2@YAPEAX_K@Z @ 0x1802D2B34 (--2@YAPEAX_K@Z.c)
 *     ??0WindowRegistration@@QEAA@PEAUHWND__@@AEBVCorrelationVector@@@Z @ 0x1805D6C60 (--0WindowRegistration@@QEAA@PEAUHWND__@@AEBVCorrelationVector@@@Z.c)
 *     ?StringCchPrintfA@@YAJPEAD_KPEBDZZ @ 0x1805D84A8 (-StringCchPrintfA@@YAJPEAD_KPEBDZZ.c)
 */

// Hidden C++ exception states: #wind=8
struct IInspectable __fastcall ApplicationFlyoutView::RegisterFlyoutWindow(
        ApplicationFlyoutView *this,
        HWND a2,
        const struct winrt::hstring *a3,
        _QWORD *a4)
{
  HWND v5; // rdi
  HWND v6; // r14
  const struct CorrelationVector *v7; // rbx
  WindowRegistration *v8; // rdi
  void **v9; // rcx
  __int64 **v10; // rbx
  const unsigned __int16 *v11; // rax
  int v12; // eax
  __int64 v13; // rdx
  struct TraceLoggingCorrelationVector *v14; // rax
  const char *v15; // r9
  const char *v16; // r9
  WindowRegistration *v17; // rbx
  int v19[2]; // [rsp+20h] [rbp-128h] BYREF
  volatile signed __int32 *v20; // [rsp+28h] [rbp-120h] BYREF
  __int64 *v21; // [rsp+30h] [rbp-118h] BYREF
  void *v22; // [rsp+38h] [rbp-110h] BYREF
  void *v23[2]; // [rsp+40h] [rbp-108h] BYREF
  void *v24; // [rsp+50h] [rbp-F8h] BYREF
  _QWORD v25[4]; // [rsp+58h] [rbp-F0h] BYREF
  __int64 v26[5]; // [rsp+78h] [rbp-D0h] BYREF
  char Str[144]; // [rsp+A0h] [rbp-A8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+148h] [rbp+0h]

  v5 = (HWND)a3;
  v6 = a2;
  *(_QWORD *)v19 = a2;
  if ( *a4 )
  {
    CorrelationVector::CorrelationVector((CorrelationVector *)&v22);
    try
    {
      v25[0] = *a4;
      winrt::Windows::Foundation::Uri::Uri(
        (winrt::Windows::Foundation::Uri *)&v21,
        (const struct winrt::param::hstring *)v25);
      v10 = (__int64 **)winrt::impl::consume_Windows_Foundation_IUriRuntimeClass<winrt::Windows::Foundation::IUriRuntimeClass>::QueryParsed(
                          &v21,
                          v23);
      winrt::param::hstring::hstring((winrt::param::hstring *)v26, L"cv");
      winrt::impl::consume_Windows_Data_Json_IJsonObjectStatics<winrt::Windows::Data::Json::IJsonObjectStatics>::Parse(
        v10,
        &v20,
        v26);
      winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)v23);
      v11 = winrt::hstring::c_str((winrt::hstring *)&v20);
      v12 = StringCchPrintfA(Str, 0x81uLL, "%ws", v11);
      if ( v12 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0xB2,
          (int)"pcshell\\twinui\\meetandchatmanager\\lib\\applicationflyoutview.cpp",
          (const char *)(unsigned int)v12,
          v19[0]);
      v14 = TraceLoggingCorrelationVector::Set(Str, v13);
      v24 = 0LL;
      if ( !v14 )
        wil::details::in1diag3::_FailFast_Unexpected(
          retaddr,
          (void *)0x10,
          (int)"pcshell\\twinui\\meetandchatmanager\\lib\\CorrelationVector.h",
          v15);
      v23[0] = 0LL;
      std::unique_ptr<TraceLoggingCorrelationVector>::reset(&v22, v14);
      std::unique_ptr<TraceLoggingCorrelationVector>::~unique_ptr<TraceLoggingCorrelationVector>(v23);
      std::unique_ptr<TraceLoggingCorrelationVector>::~unique_ptr<TraceLoggingCorrelationVector>(&v24);
      winrt::handle_type<winrt::impl::hstring_traits>::close(&v20);
      winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v21);
    }
    catch ( ... )
    {
      wil::details::in1diag3::Log_CaughtException(
        retaddr,
        (void *)0xB6,
        (int)"pcshell\\twinui\\meetandchatmanager\\lib\\applicationflyoutview.cpp",
        v16);
      v5 = (HWND)a3;
      v6 = *(HWND *)v19;
    }
    v17 = (WindowRegistration *)operator new(0x38uLL);
    *(_QWORD *)v19 = v17;
    WindowRegistration::WindowRegistration(v17, v5, (const struct CorrelationVector *)&v22);
    *(_QWORD *)v17 = &WindowRegistration::`vftable';
    *(_QWORD *)v19 = 0LL;
    *(_QWORD *)v6 = (char *)v17 + 16;
    winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)v19);
    v9 = &v22;
  }
  else
  {
    v7 = CorrelationVector::CorrelationVector((CorrelationVector *)&v20);
    v8 = (WindowRegistration *)operator new(0x38uLL);
    *(_QWORD *)v19 = v8;
    WindowRegistration::WindowRegistration(v8, 0LL, v7);
    *(_QWORD *)v8 = &WindowRegistration::`vftable';
    v21 = 0LL;
    *(_QWORD *)v6 = (char *)v8 + 16;
    winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v21);
    v9 = (void **)&v20;
  }
  std::unique_ptr<TraceLoggingCorrelationVector>::~unique_ptr<TraceLoggingCorrelationVector>(v9);
  return (struct IInspectable)v6;
}
