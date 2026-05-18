/*
 * XREFs of ?CleanupOldDwmProcess@@YAJXZ @ 0x180007EC8
 * Callers:
 *     ?DwmpCreateSessionProcessWorker@@YAKPEAX@Z @ 0x1800082A0 (-DwmpCreateSessionProcessWorker@@YAKPEAX@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByRef@$0BA@@@U?$_tlgWrapperByVal@$03@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByRef@$0BA@@@AEBU?$_tlgWrapperByVal@$03@@4@Z @ 0x1800010A8 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByRef@$0BA@@@U-$_tlgWrapperByVal@$03@@U2@@-$_tlg.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByRef@$0BA@@@U?$_tlgWrapperByVal@$03@@U3@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByRef@$0BA@@@AEBU?$_tlgWrapperByVal@$03@@54@Z @ 0x18000114C (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByRef@$0BA@@@U-$_tlgWrapperByVal@$03@@U3@U2@@-$_.c)
 *     __security_check_cookie @ 0x1800021F0 (__security_check_cookie.c)
 *     memset_0 @ 0x1800032B4 (memset_0.c)
 *     IsEnumDisplayDevicesWPresent @ 0x180003558 (IsEnumDisplayDevicesWPresent.c)
 *     ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x180006774 (-StringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     _unnamed_type_gDwmInitTelemetryAggregator_::ReportAggregatedValues @ 0x18000B7D0 (_unnamed_type_gDwmInitTelemetryAggregator_--ReportAggregatedValues.c)
 *     ?ShouldRestartSession@@YA_NU_FILETIME@@@Z @ 0x18000BEAC (-ShouldRestartSession@@YA_NU_FILETIME@@@Z.c)
 *     ?TraceLoggingWriteEtw@@YAXW4DwmInitEtwType@@JI@Z @ 0x18000C490 (-TraceLoggingWriteEtw@@YAXW4DwmInitEtwType@@JI@Z.c)
 *     ?WaitForDwmExit@@YAJPEAKPEAU_FILETIME@@@Z @ 0x18000C780 (-WaitForDwmExit@@YAJPEAKPEAU_FILETIME@@@Z.c)
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000ED7C (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     DwmpSignalSessionShutdown @ 0x18000F2E4 (DwmpSignalSessionShutdown.c)
 */

__int64 CleanupOldDwmProcess(void)
{
  int v0; // eax
  unsigned int v1; // ebx
  bool restarted; // r14
  __int64 v3; // rcx
  HANDLE v4; // rsi
  __int64 v5; // r8
  __int64 v6; // r9
  int v7; // eax
  unsigned __int16 *v8; // rcx
  int v9; // eax
  unsigned __int16 *v10; // rcx
  DWORD v11; // edi
  DWORD i; // edx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  DWORD ExitCode; // [rsp+58h] [rbp-B0h] BYREF
  DWORD v19; // [rsp+5Ch] [rbp-ACh] BYREF
  __int64 v20; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v21; // [rsp+68h] [rbp-A0h] BYREF
  GUID *v22; // [rsp+70h] [rbp-98h] BYREF
  __int64 v23; // [rsp+78h] [rbp-90h] BYREF
  struct _FILETIME ExitTime; // [rsp+80h] [rbp-88h] BYREF
  _DISPLAY_DEVICEW DisplayDevice; // [rsp+88h] [rbp-80h] BYREF
  LPCWSTR Strings[2]; // [rsp+3D8h] [rbp+2D0h] BYREF
  WCHAR *DeviceString; // [rsp+3E8h] [rbp+2E0h]
  unsigned __int16 v28[12]; // [rsp+3F0h] [rbp+2E8h] BYREF
  unsigned __int16 v29[12]; // [rsp+408h] [rbp+300h] BYREF

  ExitCode = 0;
  ExitTime = 0LL;
  v0 = WaitForDwmExit(&ExitCode, &ExitTime);
  v1 = v0;
  if ( v0 < 0 )
  {
    DoStackCaptureDirect(v0, 0x459u);
LABEL_27:
    DwmpSignalSessionShutdown();
    v1 = -2147467259;
    ++HIDWORD(qword_18001ADF4);
    ++HIDWORD(qword_18001ADFC);
    if ( SHIDWORD(qword_18001ADFC) > 10 )
    {
      unnamed_type_gDwmInitTelemetryAggregator_::ReportAggregatedValues();
      HIDWORD(qword_18001ADFC) = 0;
    }
    if ( (unsigned int)dword_18001A000 > 5
      && (qword_18001A010 & 0x400000000000LL) != 0
      && (qword_18001A018 & 0x400000000000LL) == qword_18001A018 )
    {
      v19 = gDwmNumRetriesSoFar;
      v23 = (__int64)&gDwmInitTargetAppSessionGuid;
      v22 = &gDwmInitTelemetryActivityId;
      v21 = 0x1000000LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByRef<16>,_tlgWrapperByVal<4>,_tlgWrapperByRef<16>>(
        v14,
        (__int64)&unk_1800155E5,
        v15,
        v16,
        (__int64)&v21,
        (__int64 *)&v22,
        (__int64)&v19,
        &v23);
    }
    unnamed_type_gDwmInitTelemetryAggregator_::ReportAggregatedValues();
    TraceLoggingWriteEtw(3LL, 2147500037LL, (unsigned int)gDwmNumRetriesSoFar);
    return v1;
  }
  restarted = ShouldRestartSession(ExitTime);
  v4 = RegisterEventSourceW(0LL, L"Dwminit");
  if ( v4 )
  {
    memset_0(&DisplayDevice, 0, sizeof(DisplayDevice));
    v7 = StringCchPrintfW(v28, 11LL, L"0x%08x", ExitCode);
    v8 = v28;
    if ( v7 < 0 )
      v8 = 0LL;
    Strings[0] = v8;
    v9 = StringCchPrintfW(v29, 12LL, L"%i", (unsigned int)gDwmNumRetriesSoFar);
    v10 = v29;
    if ( v9 < 0 )
      v10 = 0LL;
    Strings[1] = v10;
    if ( IsEnumDisplayDevicesWPresent() )
    {
      DisplayDevice.cb = 840;
      v11 = 0;
      for ( i = 0; EnumDisplayDevicesW(0LL, i, &DisplayDevice, 2u); i = v11 )
      {
        if ( (DisplayDevice.StateFlags & 1) != 0 && (DisplayDevice.StateFlags & 4) != 0 )
        {
          DeviceString = DisplayDevice.DeviceString;
          goto LABEL_14;
        }
        ++v11;
      }
    }
    DeviceString = 0LL;
LABEL_14:
    ReportEventW(v4, 2u, 0, 0x80020000, 0LL, 3u, 0, Strings, 0LL);
    DeregisterEventSource(v4);
  }
  ++dword_18001ADF0;
  ++HIDWORD(qword_18001ADFC);
  if ( SHIDWORD(qword_18001ADFC) > 10 )
  {
    unnamed_type_gDwmInitTelemetryAggregator_::ReportAggregatedValues();
    HIDWORD(qword_18001ADFC) = 0;
  }
  if ( (unsigned int)dword_18001A000 > 5
    && (qword_18001A010 & 0x400000000000LL) != 0
    && (qword_18001A018 & 0x400000000000LL) == qword_18001A018 )
  {
    LODWORD(v20) = gDwmNumRetriesSoFar;
    v19 = ExitCode;
    v22 = &gDwmInitTelemetryActivityId;
    v21 = (__int64)&gDwmInitTargetAppSessionGuid;
    v23 = 0x1000000LL;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByRef<16>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByRef<16>>(
      v3,
      (__int64)&unk_180015579,
      v5,
      v6,
      (__int64)&v23,
      (__int64 *)&v22,
      (__int64)&v19,
      (__int64)&v20,
      &v21);
  }
  v13 = ExitCode;
  if ( (int)ExitCode > 0 )
    v13 = (unsigned __int16)ExitCode | 0x80070000;
  TraceLoggingWriteEtw(0LL, v13, (unsigned int)gDwmNumRetriesSoFar);
  if ( restarted )
    goto LABEL_27;
  return v1;
}
