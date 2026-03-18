/*
 * XREFs of ?Run@CBlackScreenDiagnosticReport@BlackScreenDiagnostics@@AEAAXW4CallingSource@2@W4DiagnosticFlags@2@AEBU_GUID@@@Z @ 0x14000E460
 * Callers:
 *     ?RunDiagnostics@CBlackScreenDiagnosticReport@BlackScreenDiagnostics@@SAXW4CallingSource@2@W4DiagnosticFlags@2@AEBU_GUID@@@Z @ 0x14000E8D8 (-RunDiagnostics@CBlackScreenDiagnosticReport@BlackScreenDiagnostics@@SAXW4CallingSource@2@W4Diag.c)
 * Callees:
 *     _tlgKeywordOn @ 0x140001B80 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByRef@$0BA@@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByRef@$0BA@@@@Z @ 0x140001C50 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByRef@$0BA@@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlg.c)
 *     __security_check_cookie @ 0x1400049A0 (__security_check_cookie.c)
 *     IsWerReportCreatePresent @ 0x140005D08 (IsWerReportCreatePresent.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x14000DAB8 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG@Z.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@XZ @ 0x14000DAFC (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@XZ.c)
 *     ?DoDisplayModeReset@CBlackScreenDiagnosticReport@BlackScreenDiagnostics@@AEAAXAEBU_GUID@@@Z @ 0x14000DBE4 (-DoDisplayModeReset@CBlackScreenDiagnosticReport@BlackScreenDiagnostics@@AEAAXAEBU_GUID@@@Z.c)
 *     BlackScreenDiagnostics::GetCurrentProcessVersionInfo @ 0x14000DD18 (BlackScreenDiagnostics--GetCurrentProcessVersionInfo.c)
 *     BlackScreenDiagnostics::GetDwmFrontBufferBitsColor @ 0x14000E004 (BlackScreenDiagnostics--GetDwmFrontBufferBitsColor.c)
 *     ?GetVidPnOwner@CBlackScreenDiagnosticReport@BlackScreenDiagnostics@@AEAAPEBGXZ @ 0x14000E1F0 (-GetVidPnOwner@CBlackScreenDiagnosticReport@BlackScreenDiagnostics@@AEAAPEBGXZ.c)
 *     BlackScreenDiagnostics::TriggerGraphicsCollection @ 0x14000EB18 (BlackScreenDiagnostics--TriggerGraphicsCollection.c)
 *     ?_Large_mode_engaged@?$_String_val@U?$_Simple_types@G@std@@@std@@QEBA_NXZ @ 0x14000EC1C (-_Large_mode_engaged@-$_String_val@U-$_Simple_types@G@std@@@std@@QEBA_NXZ.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x14000ED84 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ??1CWatsonErrorReporting@BlackScreenDiagnostics@@QEAA@XZ @ 0x14000EF48 (--1CWatsonErrorReporting@BlackScreenDiagnostics@@QEAA@XZ.c)
 *     ?SetReportParameter@CWatsonErrorReporting@BlackScreenDiagnostics@@QEAAXKPEBG@Z @ 0x14000EF94 (-SetReportParameter@CWatsonErrorReporting@BlackScreenDiagnostics@@QEAAXKPEBG@Z.c)
 *     ?TryInit@CWatsonErrorReporting@BlackScreenDiagnostics@@AEAA_NXZ @ 0x14000EFF0 (-TryInit@CWatsonErrorReporting@BlackScreenDiagnostics@@AEAA_NXZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgs @ 0x14000F104 (MicrosoftTelemetryAssertTriggeredArgs.c)
 */

void __fastcall BlackScreenDiagnostics::CBlackScreenDiagnosticReport::Run(
        BlackScreenDiagnostics::CBlackScreenDiagnosticReport *a1,
        int a2,
        char a3,
        const struct _GUID *a4)
{
  UUID v7; // xmm0
  DWORD CurrentProcessId; // eax
  int v9; // eax
  __int64 v10; // rcx
  int v11; // eax
  __int64 v12; // rcx
  const unsigned __int16 *v13; // r14
  __int64 v14; // rdx
  BlackScreenDiagnostics::CBlackScreenDiagnosticReport *v15; // rcx
  const WCHAR *v16; // rbx
  HRESULT v17; // eax
  __int64 v18; // rcx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  const unsigned __int16 *VidPnOwner; // rax
  const unsigned __int16 *v23; // r15
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  const unsigned __int16 *v27; // rbx
  HANDLE CurrentProcess; // rax
  HRESULT v29; // eax
  __int64 v30; // rcx
  const unsigned __int16 *v31; // r8
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // r9
  HRESULT v35; // eax
  __int64 v36; // rcx
  _WER_SUBMIT_RESULT pSubmitResult[2]; // [rsp+48h] [rbp-C0h] BYREF
  RPC_WSTR StringUuid; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v39[3]; // [rsp+58h] [rbp-B0h] BYREF
  DWORD pSessionId[2]; // [rsp+70h] [rbp-98h] BYREF
  unsigned __int16 *v41[4]; // [rsp+78h] [rbp-90h] BYREF
  HREPORT hReportHandle; // [rsp+98h] [rbp-70h] BYREF
  bool v43; // [rsp+A0h] [rbp-68h]
  _BYTE v44[32]; // [rsp+A8h] [rbp-60h] BYREF
  _BYTE v45[32]; // [rsp+C8h] [rbp-40h] BYREF
  _BYTE v46[32]; // [rsp+E8h] [rbp-20h] BYREF

  if ( (a3 & 3) == 0 )
    goto LABEL_48;
  if ( a2 == 1 )
    goto LABEL_11;
  v7 = *a4;
  pSessionId[1] = 0;
  *(UUID *)&v39[1] = v7;
  pSessionId[0] = 1;
  CurrentProcessId = GetCurrentProcessId();
  ProcessIdToSessionId(CurrentProcessId, &pSessionId[1]);
  v9 = RtlPublishWnfStateData(WNF_DWM_DUMP_REQUEST, 0LL, &v39[1], 24LL, 0LL) | 0x10000000;
  if ( v9 < 0 )
    MicrosoftTelemetryAssertTriggeredArgs(v10, (unsigned int)v9, 0LL);
  v11 = RtlPublishWnfStateData(WNF_DWM_DUMP_REQUEST_FOR_SERVICE, 0LL, &v39[1], 24LL, 0LL) | 0x10000000;
  if ( v11 < 0 )
    MicrosoftTelemetryAssertTriggeredArgs(v12, (unsigned int)v11, 0LL);
  if ( !a2 )
  {
    v13 = L"Hotkey";
    goto LABEL_12;
  }
  if ( a2 == 1 )
  {
LABEL_11:
    v13 = L"LongPowerButtonHold";
    goto LABEL_12;
  }
  v13 = L"Unknown";
LABEL_12:
  hReportHandle = 0LL;
  v43 = IsWerReportCreatePresent() != 0;
  std::wstring::wstring((__int64)v44, (__int64)L"WindowsBlackScreenDiagnosticsV1");
  std::wstring::wstring((__int64)v45, (__int64)L"Black Screen - User Reported");
  std::wstring::wstring(
    (__int64)v46,
    (__int64)L"The user has invoked the Black Screen Diagnostics Tool to generate this report");
  StringUuid = 0LL;
  if ( !UuidToStringW(a4, &StringUuid) )
  {
    v16 = StringUuid;
    if ( BlackScreenDiagnostics::CWatsonErrorReporting::TryInit(&hReportHandle) )
    {
      v17 = WerRegisterCustomMetadata(L"BlackScreenInstanceGuid", v16);
      if ( v17 < 0 )
        MicrosoftTelemetryAssertTriggeredArgs(v18, (unsigned int)v17, 0LL);
    }
    RpcStringFreeW(&StringUuid);
  }
  if ( (a3 & 2) != 0 )
  {
    if ( (unsigned int)dword_1400180D8 > 5 && tlgKeywordOn((__int64)&dword_1400180D8, 0x800000000000LL) )
    {
      *(_QWORD *)pSubmitResult = a4;
      v39[0] = 0x1000000LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByRef<16>>(
        v19,
        (__int64)&unk_140013DE7,
        v20,
        v21,
        (__int64)v39,
        (__int64 *)pSubmitResult);
    }
    LOBYTE(v14) = 1;
    BlackScreenDiagnostics::TriggerGraphicsCollection(0LL, v14, a4);
  }
  VidPnOwner = BlackScreenDiagnostics::CBlackScreenDiagnosticReport::GetVidPnOwner(v15);
  pSubmitResult[0] = 0;
  v23 = VidPnOwner;
  BlackScreenDiagnostics::GetDwmFrontBufferBitsColor(v25, v24, v26, (int *)pSubmitResult);
  switch ( pSubmitResult[0] )
  {
    case WerReportQueued:
      v27 = L"BlackBits";
      break;
    case WerReportUploaded:
      v27 = L"ColorBits";
      break;
    case WerReportDebug:
      v27 = L"CaptureBitsFailure";
      break;
    case WerReportFailed:
      v27 = L"FileMappingFailure";
      break;
    case WerDisabled:
      v27 = L"CheckBlackFailure";
      break;
    default:
      v27 = L"Unknown";
      break;
  }
  if ( (a3 & 1) != 0 && BlackScreenDiagnostics::CWatsonErrorReporting::TryInit(&hReportHandle) )
  {
    CurrentProcess = GetCurrentProcess();
    v29 = WerReportAddDump(hReportHandle, CurrentProcess, 0LL, WerDumpTypeHeapDump, 0LL, 0LL, 0);
    if ( v29 < 0 )
      MicrosoftTelemetryAssertTriggeredArgs(v30, (unsigned int)v29, 0LL);
  }
  BlackScreenDiagnostics::CWatsonErrorReporting::SetReportParameter(
    (BlackScreenDiagnostics::CWatsonErrorReporting *)&hReportHandle,
    0,
    v23);
  BlackScreenDiagnostics::CWatsonErrorReporting::SetReportParameter(
    (BlackScreenDiagnostics::CWatsonErrorReporting *)&hReportHandle,
    1u,
    L"Unknown");
  BlackScreenDiagnostics::CWatsonErrorReporting::SetReportParameter(
    (BlackScreenDiagnostics::CWatsonErrorReporting *)&hReportHandle,
    2u,
    v27);
  BlackScreenDiagnostics::CWatsonErrorReporting::SetReportParameter(
    (BlackScreenDiagnostics::CWatsonErrorReporting *)&hReportHandle,
    3u,
    v13);
  std::wstring::wstring((__int64)v41);
  BlackScreenDiagnostics::GetCurrentProcessVersionInfo(v41);
  if ( (unsigned __int8)std::_String_val<std::_Simple_types<unsigned short>>::_Large_mode_engaged(v41) )
    v31 = v41[0];
  BlackScreenDiagnostics::CWatsonErrorReporting::SetReportParameter(
    (BlackScreenDiagnostics::CWatsonErrorReporting *)&hReportHandle,
    4u,
    v31);
  pSubmitResult[0] = WerCustomAction|WerReportFailed;
  if ( BlackScreenDiagnostics::CWatsonErrorReporting::TryInit(&hReportHandle) )
    WerReportSubmit(hReportHandle, WerConsentNotAsked, 4u, pSubmitResult);
  if ( (unsigned int)dword_1400180D8 > 5 && tlgKeywordOn((__int64)&dword_1400180D8, 0x800000000000LL) )
  {
    v39[0] = (__int64)a4;
    *(_QWORD *)pSubmitResult = 0x1000000LL;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByRef<16>>(
      v32,
      (__int64)&unk_140013D3B,
      v33,
      v34,
      (__int64)pSubmitResult,
      v39);
  }
  if ( BlackScreenDiagnostics::CWatsonErrorReporting::TryInit(&hReportHandle) )
  {
    v35 = WerUnregisterCustomMetadata(L"BlackScreenInstanceGuid");
    if ( v35 < 0 )
      MicrosoftTelemetryAssertTriggeredArgs(v36, (unsigned int)v35, 0LL);
  }
  std::wstring::_Tidy_deallocate(v41);
  BlackScreenDiagnostics::CWatsonErrorReporting::~CWatsonErrorReporting((BlackScreenDiagnostics::CWatsonErrorReporting *)&hReportHandle);
LABEL_48:
  if ( (a3 & 4) != 0 )
    BlackScreenDiagnostics::CBlackScreenDiagnosticReport::DoDisplayModeReset(a1, a4);
}
