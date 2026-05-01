/*
 * XREFs of ?LaunchAppWithProgIdAndUriWithOpenWithSuppressed@ProtocolLauncher@Utils@@CAXPEBG0AEBVCorrelationVector@@@Z @ 0x1805F966C
 * Callers:
 *     ?LaunchUriWithCv@ProtocolLauncher@Utils@@QEAAXPEBG_JAEBVCorrelationVector@@@Z @ 0x1805F9810 (-LaunchUriWithCv@ProtocolLauncher@Utils@@QEAAXPEBG_JAEBVCorrelationVector@@@Z.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x180026574 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ?unconditional_release_ref@?$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ @ 0x18002694C (-unconditional_release_ref@-$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ.c)
 *     ??0?$atomic@_K@std@@QEAA@_K@Z @ 0x180032450 (--0-$atomic@_K@std@@QEAA@_K@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048294 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ToString@CorrelationVector@@QEBAPEADAEAY0IB@D@Z @ 0x1801688C8 (-ToString@CorrelationVector@@QEBAPEADAEAY0IB@D@Z.c)
 *     ??1?$unique_ptr@VTraceLoggingCorrelationVector@@U?$default_delete@VTraceLoggingCorrelationVector@@@std@@@std@@QEAA@XZ @ 0x1802C5B98 (--1-$unique_ptr@VTraceLoggingCorrelationVector@@U-$default_delete@VTraceLoggingCorrelationVector.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ??2@YAPEAX_K@Z @ 0x1802C9924 (--2@YAPEAX_K@Z.c)
 *     memset_0 @ 0x1802C9ECC (memset_0.c)
 *     ?_Throw_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180319310 (-_Throw_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     winrt::impl::as_IServiceProvider__anonymous_namespace_::ShellExecuteSite_0_ @ 0x1805F8B14 (winrt--impl--as_IServiceProvider__anonymous_namespace_--ShellExecuteSite_0_.c)
 *     winrt::impl::producers_base__anonymous_namespace_::ShellExecuteSite_std::tuple_IServiceProvider_ICreatingProcess___::producers_base__anonymous_namespace_::ShellExecuteSite_std::tuple_IServiceProvider_ICreatingProcess___ @ 0x1805F9070 (winrt--impl--producers_base__anonymous_namespace_--ShellExecuteSite_std--tuple_IServiceProvider_.c)
 *     ?AppLaunched@MeetAndChatTelemetry@@SAXPEBD@Z @ 0x1805F9240 (-AppLaunched@MeetAndChatTelemetry@@SAXPEBD@Z.c)
 *     ?Extend@CorrelationVector@@QEBA?AV1@XZ @ 0x1805F9344 (-Extend@CorrelationVector@@QEBA-AV1@XZ.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall Utils::ProtocolLauncher::LaunchAppWithProgIdAndUriWithOpenWithSuppressed(
        const unsigned __int16 *a1,
        const unsigned __int16 *a2,
        TraceLoggingCorrelationVector **a3)
{
  _DWORD *v6; // rbx
  const char *v7; // r9
  char *v8; // rax
  HINSTANCE v9; // [rsp+30h] [rbp-D0h] BYREF
  _DWORD *v10; // [rsp+38h] [rbp-C8h] BYREF
  SHELLEXECUTEINFOW pExecInfo; // [rsp+40h] [rbp-C0h] BYREF
  char v12[129]; // [rsp+B0h] [rbp-50h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+178h] [rbp+78h]

  if ( CompareStringOrdinal(a1, -1, L"Undecided", -1, 1) == 2 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0xE5,
      (int)"pcshell\\twinui\\meetandchatmanager\\lib\\utils.cpp",
      (const char *)0x80070483LL);
  v6 = operator new(0x28uLL);
  winrt::impl::producers_base__anonymous_namespace_::ShellExecuteSite_std::tuple_IServiceProvider_ICreatingProcess___::producers_base__anonymous_namespace_::ShellExecuteSite_std::tuple_IServiceProvider_ICreatingProcess___(v6);
  _InterlockedIncrement(&`winrt::get_module_lock'::`2'::s_lock);
  std::atomic<unsigned __int64>::atomic<unsigned __int64>((__int64)(v6 + 6), 1LL);
  v6[8] = 128;
  *(_QWORD *)v6 = off_18075AB40;
  *((_QWORD *)v6 + 1) = off_18075AB20;
  *((_QWORD *)v6 + 2) = off_18075AB60;
  v10 = v6;
  pExecInfo.cbSize = 112;
  memset_0(&pExecInfo.fMask, 0, 0x6CuLL);
  pExecInfo.nShow = 0;
  pExecInfo.fMask = 201327617;
  pExecInfo.lpClass = a1;
  pExecInfo.lpFile = a2;
  winrt::impl::as_IServiceProvider__anonymous_namespace_::ShellExecuteSite_0_(
    &v9,
    (__int64 (__fastcall ***)(_QWORD, __int64 *, __int64 *))v6);
  pExecInfo.hInstApp = v9;
  if ( v9 )
    winrt::com_ptr<ISnapComponent>::unconditional_release_ref((__int64 *)&v9);
  if ( !ShellExecuteExW(&pExecInfo) )
    wil::details::in1diag3::_Throw_GetLastError(
      retaddr,
      (void *)0xF1,
      (__int64)"pcshell\\twinui\\meetandchatmanager\\lib\\utils.cpp",
      v7);
  CorrelationVector::Extend(a3, (void **)&v9);
  v8 = CorrelationVector::ToString(a3, (char (*)[129])v12);
  MeetAndChatTelemetry::AppLaunched(v8);
  std::unique_ptr<TraceLoggingCorrelationVector>::~unique_ptr<TraceLoggingCorrelationVector>((void **)&v9);
  winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref((__int64 *)&v10);
}
