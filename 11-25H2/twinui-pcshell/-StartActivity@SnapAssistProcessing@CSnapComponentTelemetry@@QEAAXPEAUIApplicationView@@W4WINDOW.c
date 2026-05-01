/*
 * XREFs of ?StartActivity@SnapAssistProcessing@CSnapComponentTelemetry@@QEAAXPEAUIApplicationView@@W4WINDOW_SNAPPING_MODE@@W4SNAP_ASSIST_VIEW_FLAGS@@@Z @ 0x180187898
 * Callers:
 *     ??$Start@AEAPEAUIApplicationView@@AEAW4WINDOW_SNAPPING_MODE@@AEAW4SNAP_ASSIST_VIEW_FLAGS@@@SnapAssistProcessing@CSnapComponentTelemetry@@SA?AV01@AEAPEAUIApplicationView@@AEAW4WINDOW_SNAPPING_MODE@@AEAW4SNAP_ASSIST_VIEW_FLAGS@@@Z @ 0x180581CCC (--$Start@AEAPEAUIApplicationView@@AEAW4WINDOW_SNAPPING_MODE@@AEAW4SNAP_ASSIST_VIEW_FLAGS@@@SnapA.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@G@@U3@U2@U2@U2@U2@U2@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@G@@54444444@Z @ 0x18000DB88 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@G@@U3@U2@U2@U2@U2@U2@U2.c)
 *     ?zInternalRelatedId@?$ActivityBase@VCortanaProactiveLogging@@$00$0A@$03$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEBAPEBU_GUID@@XZ @ 0x180016A80 (-zInternalRelatedId@-$ActivityBase@VCortanaProactiveLogging@@$00$0A@$03$0BAAAAAA@U_TlgReflectorT.c)
 *     ?EnsureWatchingCurrentThread@?$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0IDAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x180016E10 (-EnsureWatchingCurrentThread@-$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0IDA.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180039744 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetTelemetryIdForView@ApplicationViewTraceLoggingHelpers@@YAJPEAUIApplicationView@@PEAPEAG@Z @ 0x180057FFC (-GetTelemetryIdForView@ApplicationViewTraceLoggingHelpers@@YAJPEAUIApplicationView@@PEAPEAG@Z.c)
 *     ?Provider@WindowManagementLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x180058494 (-Provider@WindowManagementLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 *     _tlgKeywordOn @ 0x18008E69C (_tlgKeywordOn.c)
 *     ?zInternalStart@?$ActivityBase@VWindowManagementLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x180187C24 (-zInternalStart@-$ActivityBase@VWindowManagementLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflector.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=5
void __fastcall CSnapComponentTelemetry::SnapAssistProcessing::StartActivity(
        __int64 a1,
        ApplicationViewTraceLoggingHelpers *a2,
        unsigned __int16 **a3,
        int a4)
{
  int v5; // r15d
  int TelemetryIdForView; // eax
  __int64 v9; // rax
  int v10; // eax
  int v11; // eax
  __int64 v12; // rax
  const struct _tlgProvider_t *v13; // rax
  __int64 v14; // rdi
  WCHAR *v15; // rbx
  const WCHAR *v16; // rcx
  const WCHAR *v17; // rax
  __int64 v18; // rax
  _DWORD v19[8]; // [rsp+80h] [rbp-80h] BYREF
  DWORD CurrentThreadId; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v21; // [rsp+A8h] [rbp-58h] BYREF
  LPVOID pv; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v23; // [rsp+B8h] [rbp-48h]
  __int64 v24; // [rsp+C0h] [rbp-40h]
  const WCHAR *v25; // [rsp+C8h] [rbp-38h] BYREF
  const WCHAR *v26; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v27; // [rsp+D8h] [rbp-28h] BYREF
  LPVOID v28[3]; // [rsp+E0h] [rbp-20h] BYREF
  __int128 v29; // [rsp+F8h] [rbp-8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+138h] [rbp+38h]

  v5 = (int)a3;
  v28[0] = 0LL;
  v28[1] = (LPVOID)-1LL;
  v28[2] = (LPVOID)-1LL;
  TelemetryIdForView = ApplicationViewTraceLoggingHelpers::GetTelemetryIdForView(a2, (struct IApplicationView *)v28, a3);
  if ( TelemetryIdForView < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x130,
      (int)"pcshell\\twinui\\snapcomponent\\lib\\SnapComponentTelemetry.h",
      (const char *)(unsigned int)TelemetryIdForView);
  pv = 0LL;
  v9 = *(_QWORD *)a2;
  v23 = -1LL;
  v24 = -1LL;
  v10 = (*(__int64 (__fastcall **)(ApplicationViewTraceLoggingHelpers *, LPVOID *))(v9 + 136))(a2, &pv);
  if ( v10 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x133,
      (int)"pcshell\\twinui\\snapcomponent\\lib\\SnapComponentTelemetry.h",
      (const char *)(unsigned int)v10);
  v29 = 0LL;
  v11 = (*(__int64 (__fastcall **)(ApplicationViewTraceLoggingHelpers *, __int128 *))(*(_QWORD *)a2 + 128LL))(a2, &v29);
  if ( v11 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x136,
      (int)"pcshell\\twinui\\snapcomponent\\lib\\SnapComponentTelemetry.h",
      (const char *)(unsigned int)v11);
  v19[0] = 0;
  v12 = *(_QWORD *)a2;
  v21 = 0LL;
  if ( (*(int (__fastcall **)(ApplicationViewTraceLoggingHelpers *, GUID *, __int64 *))(v12 + 104))(
         a2,
         &GUID_3fc0257d_21c2_4ad3_8fb0_fd481cd204e2,
         &v21) >= 0 )
    (*(void (__fastcall **)(__int64, _DWORD *))(*(_QWORD *)v21 + 32LL))(v21, v19);
  wil::ActivityBase<WindowManagementLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::zInternalStart(a1);
  v13 = WindowManagementLogging::Provider();
  v14 = (__int64)v13;
  v15 = (WCHAR *)v28[0];
  if ( *(_DWORD *)v13 > 5u && tlgKeywordOn((__int64)v13, 0x200000000000LL) )
  {
    v19[1] = HIDWORD(v29);
    v19[2] = DWORD2(v29);
    v19[3] = DWORD1(v29);
    v19[4] = v29;
    v19[5] = v19[0];
    v19[6] = a4;
    v19[7] = v5;
    v16 = &LocaleName;
    v17 = &LocaleName;
    if ( v15 )
      v17 = v15;
    v25 = v17;
    if ( pv )
      v16 = (const WCHAR *)pv;
    v26 = v16;
    CurrentThreadId = GetCurrentThreadId();
    v27 = 0LL;
    v18 = wil::ActivityBase<CortanaProactiveLogging,1,0,4,16777216,_TlgReflectorTag_Param0IsProviderType>::zInternalRelatedId(a1);
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      v14,
      (__int64)&unk_1807E7C08,
      *(_QWORD *)(a1 + 272) + 8LL,
      v18,
      (__int64)&v27,
      (__int64)&CurrentThreadId,
      &v26,
      &v25);
  }
  wil::ActivityBase<WindowManagementLogging,1,70368744177664,5,2197815296,_TlgReflectorTag_Param0IsProviderType>::EnsureWatchingCurrentThread(a1);
  if ( v21 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
  if ( pv )
  {
    CoTaskMemFree(pv);
    pv = 0LL;
  }
  v23 = 0LL;
  v24 = 0LL;
  if ( v15 )
    CoTaskMemFree(v15);
}
