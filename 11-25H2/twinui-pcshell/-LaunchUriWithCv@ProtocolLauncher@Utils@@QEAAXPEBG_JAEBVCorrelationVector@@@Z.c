/*
 * XREFs of ?LaunchUriWithCv@ProtocolLauncher@Utils@@QEAAXPEBG_JAEBVCorrelationVector@@@Z @ 0x1805D4D5C
 * Callers:
 *     ?EnsureWindow@ApplicationFlyoutView@@AEAAPEAUHWND__@@_JAEBVCorrelationVector@@@Z @ 0x1805D6FC8 (-EnsureWindow@ApplicationFlyoutView@@AEAAPEAUHWND__@@_JAEBVCorrelationVector@@@Z.c)
 * Callees:
 *     ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x18001FEDC (-StringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18005D244 (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800934E8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Query@?$consume_Windows_Foundation_IUriRuntimeClass@UIUriRuntimeClass@Foundation@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x1800AB7B0 (-Query@-$consume_Windows_Foundation_IUriRuntimeClass@UIUriRuntimeClass@Foundation@Windows@winrt@.c)
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x1800AC1A4 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ?ToString@CorrelationVector@@QEBAPEADAEAY0IB@D@Z @ 0x18017932C (-ToString@CorrelationVector@@QEBAPEADAEAY0IB@D@Z.c)
 *     ?Increment@CorrelationVector@@QEAAAEBV1@XZ @ 0x18017935C (-Increment@CorrelationVector@@QEAAAEBV1@XZ.c)
 *     ?Stop@?$ActivityBase@VMeetAndChatTelemetryLogging@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x18017BED8 (-Stop@-$ActivityBase@VMeetAndChatTelemetryLogging@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflector.c)
 *     ??0hstring@param@winrt@@QEAA@QEBG@Z @ 0x1801B5CB8 (--0hstring@param@winrt@@QEAA@QEBG@Z.c)
 *     ??0Uri@Foundation@Windows@winrt@@QEAA@AEBUhstring@param@3@@Z @ 0x1802C0138 (--0Uri@Foundation@Windows@winrt@@QEAA@AEBUhstring@param@3@@Z.c)
 *     ??1?$unique_ptr@VTraceLoggingCorrelationVector@@U?$default_delete@VTraceLoggingCorrelationVector@@@std@@@std@@QEAA@XZ @ 0x1802CF36C (--1-$unique_ptr@VTraceLoggingCorrelationVector@@U-$default_delete@VTraceLoggingCorrelationVector.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     ??0?$ActivityBase@VMeetAndChatTelemetryLogging@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x1805D4424 (--0-$ActivityBase@VMeetAndChatTelemetryLogging@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag.c)
 *     ??1UriLaunch@MeetAndChatTelemetry@@QEAA@XZ @ 0x1805D46F8 (--1UriLaunch@MeetAndChatTelemetry@@QEAA@XZ.c)
 *     ?Extend@CorrelationVector@@QEBA?AV1@XZ @ 0x1805D48A4 (-Extend@CorrelationVector@@QEBA-AV1@XZ.c)
 *     ?LaunchAppWithProgIdAndUriWithOpenWithSuppressed@ProtocolLauncher@Utils@@CAXPEBG0AEBVCorrelationVector@@@Z @ 0x1805D4BBC (-LaunchAppWithProgIdAndUriWithOpenWithSuppressed@ProtocolLauncher@Utils@@CAXPEBG0AEBVCorrelation.c)
 *     ?StartActivity@UriLaunch@MeetAndChatTelemetry@@QEAAXPEBG0AEBVCorrelationVector@@@Z @ 0x1805D5488 (-StartActivity@UriLaunch@MeetAndChatTelemetry@@QEAAXPEBG0AEBVCorrelationVector@@@Z.c)
 *     ?TryEnsurePackageRegistered@ProtocolLauncher@Utils@@AEAAXXZ @ 0x1805D5848 (-TryEnsurePackageRegistered@ProtocolLauncher@Utils@@AEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=5
void __fastcall Utils::ProtocolLauncher::LaunchUriWithCv(
        const unsigned __int16 **this,
        const unsigned __int16 *a2,
        __int64 a3,
        TraceLoggingCorrelationVector **a4)
{
  const unsigned __int16 *v7; // rbx
  TraceLoggingCorrelationVector **v8; // rax
  __int64 v9; // rcx
  const char *v10; // rax
  int v11; // eax
  TraceLoggingCorrelationVector **v12; // rax
  DWORD v13; // edx
  int v14; // [rsp+20h] [rbp-E0h]
  void *v15; // [rsp+40h] [rbp-C0h] BYREF
  __int64 *v16; // [rsp+48h] [rbp-B8h] BYREF
  volatile signed __int32 *v17; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE v18[40]; // [rsp+58h] [rbp-A8h] BYREF
  _QWORD v19[42]; // [rsp+80h] [rbp-80h] BYREF
  char v20[129]; // [rsp+1D0h] [rbp+D0h] BYREF
  unsigned __int16 v21[1024]; // [rsp+260h] [rbp+160h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A98h] [rbp+998h]

  CorrelationVector::Extend(a4, &v15);
  v7 = *this;
  wil::ActivityBase<MeetAndChatTelemetryLogging,1,35184372088832,5,16777216,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<MeetAndChatTelemetryLogging,1,35184372088832,5,16777216,_TlgReflectorTag_Param0IsProviderType>((struct wil::details::IFailureCallback *)v19);
  v19[0] = &MeetAndChatTelemetry::UriLaunch::`vftable';
  MeetAndChatTelemetry::UriLaunch::StartActivity(
    (MeetAndChatTelemetry::UriLaunch *)v19,
    v7,
    a2,
    (const struct CorrelationVector *)&v15);
  v8 = CorrelationVector::Increment((TraceLoggingCorrelationVector **)&v15);
  CorrelationVector::ToString(v8, (char (*)[129])v20);
  Utils::ProtocolLauncher::TryEnsurePackageRegistered((Utils::ProtocolLauncher *)this);
  winrt::param::hstring::hstring((winrt::param::hstring *)v18, a2);
  winrt::Windows::Foundation::Uri::Uri(
    (winrt::Windows::Foundation::Uri *)&v16,
    (const struct winrt::param::hstring *)v18);
  v9 = *winrt::impl::consume_Windows_Foundation_IUriRuntimeClass<winrt::Windows::Foundation::IUriRuntimeClass>::Query(
          &v16,
          &v17);
  if ( v9 )
    LODWORD(v9) = *(_DWORD *)(v9 + 4);
  v10 = (const char *)L"&";
  if ( (unsigned int)v9 <= 1 )
    v10 = L"?";
  v11 = StringCchPrintfW(v21, 1024LL, L"%s%sstartTime=%I64d&cv=%hs", a2, v10, a3, v20);
  if ( v11 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x164,
      (int)"pcshell\\twinui\\meetandchatmanager\\lib\\utils.cpp",
      (const char *)(unsigned int)v11,
      v14);
  winrt::handle_type<winrt::impl::hstring_traits>::close(&v17);
  v12 = CorrelationVector::Increment((TraceLoggingCorrelationVector **)&v15);
  Utils::ProtocolLauncher::LaunchAppWithProgIdAndUriWithOpenWithSuppressed(*this, v21, v12);
  wil::ActivityBase<MeetAndChatTelemetryLogging,1,35184372088832,5,16777216,_TlgReflectorTag_Param0IsProviderType>::Stop(
    v19,
    v13);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v16);
  MeetAndChatTelemetry::UriLaunch::~UriLaunch((MeetAndChatTelemetry::UriLaunch *)v19);
  std::unique_ptr<TraceLoggingCorrelationVector>::~unique_ptr<TraceLoggingCorrelationVector>(&v15);
}
