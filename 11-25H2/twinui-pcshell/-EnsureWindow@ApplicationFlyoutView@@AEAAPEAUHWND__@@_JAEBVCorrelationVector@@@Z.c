/*
 * XREFs of ?EnsureWindow@ApplicationFlyoutView@@AEAAPEAUHWND__@@_JAEBVCorrelationVector@@@Z @ 0x1805D6FC8
 * Callers:
 *     ApplicationFlyoutView::Show$_ResumeCoro$1 @ 0x1805D7E50 (ApplicationFlyoutView--Show$_ResumeCoro$1.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180039744 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800934E8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?StringCchCatW@@YAJPEAG_KPEBG@Z @ 0x18009BE10 (-StringCchCatW@@YAJPEAG_KPEBG@Z.c)
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x18009BEE4 (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@_E$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x1800A51D4 (--1-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@_E$1-CloseHandle@details@wil@@YAX0@ZU-$integ.c)
 *     ?handle_wait@wil@@YA_NPEAXKH@Z @ 0x1800A53F0 (-handle_wait@wil@@YA_NPEAXKH@Z.c)
 *     ?ToString@CorrelationVector@@QEBAPEADAEAY0IB@D@Z @ 0x18017932C (-ToString@CorrelationVector@@QEBAPEADAEAY0IB@D@Z.c)
 *     ?Increment@CorrelationVector@@QEAAAEBV1@XZ @ 0x18017935C (-Increment@CorrelationVector@@QEAAAEBV1@XZ.c)
 *     ?SHRegGetDWORD@@YAJPEAUHKEY__@@PEBG1PEAK@Z @ 0x180198438 (-SHRegGetDWORD@@YAJPEAUHKEY__@@PEBG1PEAK@Z.c)
 *     ?create@?$event_t@V?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@_E$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@Uerr_exception_policy@3@@wil@@QEAAXW4EventOptions@2@PEBGPEAU_SECURITY_ATTRIBUTES@@PEA_N@Z @ 0x1802C0B94 (-create@-$event_t@V-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@_E$1-CloseHandl_ea_1802C0B94.c)
 *     ??1?$unique_ptr@VTraceLoggingCorrelationVector@@U?$default_delete@VTraceLoggingCorrelationVector@@@std@@@std@@QEAA@XZ @ 0x1802CF36C (--1-$unique_ptr@VTraceLoggingCorrelationVector@@U-$default_delete@VTraceLoggingCorrelationVector.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     ?_Throw_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18031CCF0 (-_Throw_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?Extend@CorrelationVector@@QEBA?AV1@XZ @ 0x1805D48A4 (-Extend@CorrelationVector@@QEBA-AV1@XZ.c)
 *     ?FindWindowByPropertyName@Utils@@YAPEAUHWND__@@PEBG@Z @ 0x1805D4AFC (-FindWindowByPropertyName@Utils@@YAPEAUHWND__@@PEBG@Z.c)
 *     ?LaunchUriWithCv@ProtocolLauncher@Utils@@QEAAXPEBG_JAEBVCorrelationVector@@@Z @ 0x1805D4D5C (-LaunchUriWithCv@ProtocolLauncher@Utils@@QEAAXPEBG_JAEBVCorrelationVector@@@Z.c)
 *     ?FoundPreviouslyRegisteredFlyoutWindow@MeetAndChatTelemetry@@SAXPEBD@Z @ 0x1805D726C (-FoundPreviouslyRegisteredFlyoutWindow@MeetAndChatTelemetry@@SAXPEBD@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall ApplicationFlyoutView::EnsureWindow(
        ApplicationFlyoutView *this,
        __int64 a2,
        TraceLoggingCorrelationVector **a3)
{
  const unsigned __int16 *v5; // rdx
  __int64 WindowByPropertyName; // rbx
  char *v7; // rax
  int v8; // eax
  char *v9; // r8
  int v10; // eax
  int v11; // eax
  wchar_t *v12; // r8
  int v13; // eax
  const unsigned __int16 **v14; // rbx
  TraceLoggingCorrelationVector **v15; // rax
  const unsigned __int16 *v16; // rdx
  const char *v17; // r9
  __int64 v18; // rax
  int v19; // eax
  void *v20; // rdx
  int v22; // [rsp+20h] [rbp-E0h]
  unsigned int v23; // [rsp+30h] [rbp-D0h] BYREF
  void *v24; // [rsp+38h] [rbp-C8h] BYREF
  wil *v25[2]; // [rsp+40h] [rbp-C0h] BYREF
  char v26[129]; // [rsp+50h] [rbp-B0h] BYREF
  unsigned __int16 v27[512]; // [rsp+E0h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+508h] [rbp+408h]

  CorrelationVector::Extend(a3, &v24);
  WindowByPropertyName = Utils::FindWindowByPropertyName((Utils *)L"MeetAndChatFlyout", v5);
  if ( WindowByPropertyName )
  {
    v7 = CorrelationVector::ToString((TraceLoggingCorrelationVector **)&v24, (char (*)[129])v26);
    MeetAndChatTelemetry::FoundPreviouslyRegisteredFlyoutWindow(v7);
    v8 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64))(**((_QWORD **)this + 1) + 24LL))(
           *((_QWORD *)this + 1),
           WindowByPropertyName,
           1LL);
    if ( v8 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0xD0,
        (int)"pcshell\\twinui\\meetandchatmanager\\lib\\applicationflyoutview.cpp",
        (const char *)(unsigned int)v8);
  }
  else
  {
    v23 = 0;
    if ( SHRegGetDWORD(
           HKEY_CURRENT_USER,
           L"Software\\Microsoft\\Windows\\CurrentVersion\\Communications",
           L"FallbackShown",
           &v23) < 0 )
      v23 = 0;
    v9 = (char *)this + 32;
    if ( *((_QWORD *)this + 7) > 7uLL )
      v9 = *(char **)v9;
    v10 = StringCchCopyW((char *)v27, 512LL, v9);
    if ( v10 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0xE0,
        (int)"pcshell\\twinui\\meetandchatmanager\\lib\\applicationflyoutview.cpp",
        (const char *)(unsigned int)v10,
        v22);
    v11 = StringCchCatW(v27, 512LL, (char *)L":ShowFlyout?");
    if ( v11 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0xE1,
        (int)"pcshell\\twinui\\meetandchatmanager\\lib\\applicationflyoutview.cpp",
        (const char *)(unsigned int)v11,
        v22);
    v12 = L"fallbackShown=false";
    if ( v23 )
      v12 = (wchar_t *)L"fallbackShown=true";
    v13 = StringCchCatW(v27, 512LL, (char *)v12);
    if ( v13 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0xE2,
        (int)"pcshell\\twinui\\meetandchatmanager\\lib\\applicationflyoutview.cpp",
        (const char *)(unsigned int)v13,
        v22);
    v25[0] = 0LL;
    _create___event_t_V__unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__Uerr_exception_policy_3__wil__QEAAXW4EventOptions_2_PEBGPEAU_SECURITY_ATTRIBUTES__PEA_N_Z(
      v25,
      1,
      L"MeetAndChatFlyoutShown");
    v14 = (const unsigned __int16 **)*((_QWORD *)this + 3);
    v15 = CorrelationVector::Increment((TraceLoggingCorrelationVector **)&v24);
    Utils::ProtocolLauncher::LaunchUriWithCv(v14, v27, a2, v15);
    if ( !wil::handle_wait(v25[0], (void *)0x2710) )
      wil::details::in1diag3::_Throw_GetLastError(
        retaddr,
        (void *)0xE7,
        (__int64)"pcshell\\twinui\\meetandchatmanager\\lib\\applicationflyoutview.cpp",
        v17);
    v18 = Utils::FindWindowByPropertyName((Utils *)L"MeetAndChatFlyout", v16);
    WindowByPropertyName = v18;
    if ( !v18 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0xEA,
        (int)"pcshell\\twinui\\meetandchatmanager\\lib\\applicationflyoutview.cpp",
        (const char *)0x800705B4LL,
        v22);
    v19 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64))(**((_QWORD **)this + 1) + 24LL))(
            *((_QWORD *)this + 1),
            v18,
            1LL);
    if ( v19 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0xF0,
        (int)"pcshell\\twinui\\meetandchatmanager\\lib\\applicationflyoutview.cpp",
        (const char *)(unsigned int)v19);
    __1__unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__QEAA_XZ(
      v25,
      v20);
  }
  std::unique_ptr<TraceLoggingCorrelationVector>::~unique_ptr<TraceLoggingCorrelationVector>(&v24);
  return WindowByPropertyName;
}
