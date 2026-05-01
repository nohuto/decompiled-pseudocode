/*
 * XREFs of ?StartActivity@SnapAssistProcessing@CSnapComponentTelemetry@@QEAAXPEAUIApplicationView@@W4WINDOW_SNAPPING_MODE@@W4SNAP_ASSIST_VIEW_FLAGS@@@Z @ 0x18020B070
 * Callers:
 *     ??$Start@AEAPEAUIApplicationView@@AEAW4WINDOW_SNAPPING_MODE@@AEAW4SNAP_ASSIST_VIEW_FLAGS@@@SnapAssistProcessing@CSnapComponentTelemetry@@SA?AV01@AEAPEAUIApplicationView@@AEAW4WINDOW_SNAPPING_MODE@@AEAW4SNAP_ASSIST_VIEW_FLAGS@@@Z @ 0x1805A596C (--$Start@AEAPEAUIApplicationView@@AEAW4WINDOW_SNAPPING_MODE@@AEAW4SNAP_ASSIST_VIEW_FLAGS@@@SnapA.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@G@@U3@U2@U2@U2@U2@U2@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@G@@54444444@Z @ 0x18000F19C (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@G@@U3@U2@U2@U2@U2@U2@U2.c)
 *     ?EnsureWatchingCurrentThread@?$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0IDAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x180015874 (-EnsureWatchingCurrentThread@-$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0IDA.c)
 *     ?_tlgGuidIsZero@@YA_NAEBU_GUID@@@Z @ 0x180043BF8 (-_tlgGuidIsZero@@YA_NAEBU_GUID@@@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048294 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetTelemetryIdForView@ApplicationViewTraceLoggingHelpers@@YAJPEAUIApplicationView@@PEAPEAG@Z @ 0x1800705CC (-GetTelemetryIdForView@ApplicationViewTraceLoggingHelpers@@YAJPEAUIApplicationView@@PEAPEAG@Z.c)
 *     ?Provider@WindowManagementLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x18007B218 (-Provider@WindowManagementLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 *     ?zInternalStart@?$ActivityBase@VWindowManagementLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x18007BA98 (-zInternalStart@-$ActivityBase@VWindowManagementLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflector.c)
 *     _tlgKeywordOn @ 0x180089CE8 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
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
  int v9; // eax
  int v10; // eax
  __int64 v11; // rax
  __int64 v12; // rcx
  const struct _tlgProvider_t *v13; // rax
  __int64 v14; // rdi
  WCHAR *v15; // rbx
  const WCHAR *v16; // rcx
  const WCHAR *v17; // rax
  __int64 v18; // r8
  __int64 v19; // rcx
  _DWORD v20[8]; // [rsp+80h] [rbp-80h] BYREF
  DWORD CurrentThreadId; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v22; // [rsp+A8h] [rbp-58h] BYREF
  LPVOID pv; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v24; // [rsp+B8h] [rbp-48h]
  __int64 v25; // [rsp+C0h] [rbp-40h]
  const WCHAR *v26; // [rsp+C8h] [rbp-38h] BYREF
  const WCHAR *v27; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v28; // [rsp+D8h] [rbp-28h] BYREF
  LPVOID v29[3]; // [rsp+E0h] [rbp-20h] BYREF
  __int128 v30; // [rsp+F8h] [rbp-8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+138h] [rbp+38h]

  v5 = (int)a3;
  v29[0] = 0LL;
  v29[1] = (LPVOID)-1LL;
  v29[2] = (LPVOID)-1LL;
  TelemetryIdForView = ApplicationViewTraceLoggingHelpers::GetTelemetryIdForView(a2, (struct IApplicationView *)v29, a3);
  if ( TelemetryIdForView < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x130,
      (int)"pcshell\\twinui\\snapcomponent\\lib\\SnapComponentTelemetry.h",
      (const char *)(unsigned int)TelemetryIdForView);
  pv = 0LL;
  v24 = -1LL;
  v25 = -1LL;
  v9 = (*(__int64 (__fastcall **)(ApplicationViewTraceLoggingHelpers *, LPVOID *))(*(_QWORD *)a2 + 136LL))(a2, &pv);
  if ( v9 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x133,
      (int)"pcshell\\twinui\\snapcomponent\\lib\\SnapComponentTelemetry.h",
      (const char *)(unsigned int)v9);
  v30 = 0LL;
  v10 = (*(__int64 (__fastcall **)(ApplicationViewTraceLoggingHelpers *, __int128 *))(*(_QWORD *)a2 + 128LL))(a2, &v30);
  if ( v10 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x136,
      (int)"pcshell\\twinui\\snapcomponent\\lib\\SnapComponentTelemetry.h",
      (const char *)(unsigned int)v10);
  v20[0] = 0;
  v11 = *(_QWORD *)a2;
  v22 = 0LL;
  if ( (*(int (__fastcall **)(ApplicationViewTraceLoggingHelpers *, GUID *, __int64 *))(v11 + 104))(
         a2,
         &GUID_3fc0257d_21c2_4ad3_8fb0_fd481cd204e2,
         &v22) >= 0 )
    (*(void (__fastcall **)(__int64, _DWORD *))(*(_QWORD *)v22 + 32LL))(v22, v20);
  wil::ActivityBase<WindowManagementLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::zInternalStart(a1);
  v13 = WindowManagementLogging::Provider(v12);
  v14 = (__int64)v13;
  v15 = (WCHAR *)v29[0];
  if ( *(_DWORD *)v13 > 5u && tlgKeywordOn((__int64)v13, 0x200000000000LL) )
  {
    v20[1] = HIDWORD(v30);
    v20[2] = DWORD2(v30);
    v20[3] = DWORD1(v30);
    v20[4] = v30;
    v20[5] = v20[0];
    v20[6] = a4;
    v20[7] = v5;
    v16 = &pvData;
    v17 = &pvData;
    if ( v15 )
      v17 = v15;
    v26 = v17;
    if ( pv )
      v16 = (const WCHAR *)pv;
    v27 = v16;
    CurrentThreadId = GetCurrentThreadId();
    v28 = 0LL;
    v18 = *(_QWORD *)(a1 + 272);
    if ( !*(_BYTE *)(v18 + 4) || _tlgGuidIsZero((const struct _GUID *)(v18 + 24)) )
      v19 = 0LL;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      v14,
      (__int64)&unk_180823960,
      v18 + 8,
      v19,
      (__int64)&v28,
      (__int64)&CurrentThreadId,
      &v27,
      &v26);
  }
  wil::ActivityBase<WindowManagementLogging,1,70368744177664,5,2197815296,_TlgReflectorTag_Param0IsProviderType>::EnsureWatchingCurrentThread(a1);
  if ( v22 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
  if ( pv )
  {
    CoTaskMemFree(pv);
    pv = 0LL;
  }
  v24 = 0LL;
  v25 = 0LL;
  if ( v15 )
    CoTaskMemFree(v15);
}
