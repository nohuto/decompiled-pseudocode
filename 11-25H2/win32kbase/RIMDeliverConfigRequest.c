/*
 * XREFs of RIMDeliverConfigRequest @ 0x1400B3038
 * Callers:
 *     RIMUnRevokeConfigurationChange @ 0x1400B2910 (RIMUnRevokeConfigurationChange.c)
 *     RIMApiSetSetUserPTPEnabledPreference @ 0x1400B2938 (RIMApiSetSetUserPTPEnabledPreference.c)
 *     RIMConfigurePointerDevice @ 0x1400B2DEC (RIMConfigurePointerDevice.c)
 *     RIMAllocateHidConfigDesc @ 0x14012A498 (RIMAllocateHidConfigDesc.c)
 *     RIMRevokeConfigurationChange @ 0x1401A19E0 (RIMRevokeConfigurationChange.c)
 *     EnablePTPDevices @ 0x1401B4DE0 (EnablePTPDevices.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapSz@G@@U1@U?$_tlgWrapperByVal@$01@@U?$_tlgWrapperByVal@$03@@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@3AEBU?$_tlgWrapperByVal@$01@@AEBU?$_tlgWrapperByVal@$03@@5@Z @ 0x1400046BC (--$Write@U-$_tlgWrapSz@G@@U1@U-$_tlgWrapperByVal@$01@@U-$_tlgWrapperByVal@$03@@U3@@-$_tlgWriteTe.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x140036610 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     RIMGetDeviceObjectPointer @ 0x14007A964 (RIMGetDeviceObjectPointer.c)
 *     ?LogBlockingIoControlRequest@RimTelemetry@@SAXPEBDQEAURIMDEV@@_KJK@Z @ 0x14007ABAC (-LogBlockingIoControlRequest@RimTelemetry@@SAXPEBDQEAURIMDEV@@_KJK@Z.c)
 *     _tlgKeywordOn @ 0x14009E9B0 (_tlgKeywordOn.c)
 *     RimDeviceTypeToRimInputTypeString @ 0x140114428 (RimDeviceTypeToRimInputTypeString.c)
 *     ??0RimTelemetryScopedIoctlObserver@@QEAA@PEBDQEAURIMDEV@@PEAJK@Z @ 0x140129430 (--0RimTelemetryScopedIoctlObserver@@QEAA@PEBDQEAURIMDEV@@PEAJK@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_qDDdd @ 0x14012BE50 (WPP_RECORDER_AND_TRACE_SF_qDDdd.c)
 *     ?DeliverConfigRequest@RIM@InputTraceLogging@@SAXPEBURIMDEV@@GK@Z @ 0x140137550 (-DeliverConfigRequest@RIM@InputTraceLogging@@SAXPEBURIMDEV@@GK@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019E99C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     __security_check_cookie @ 0x140242EA0 (__security_check_cookie.c)
 *     memset @ 0x140243000 (memset.c)
 */

__int64 __fastcall RIMDeliverConfigRequest(struct RIMDEV *a1, __int64 a2, unsigned __int16 a3, unsigned int a4)
{
  char v8; // r14
  __int64 v9; // rdx
  bool v10; // r15
  __int64 UserSessionState; // rax
  int v12; // r8d
  int v13; // edx
  ULONG v14; // r15d
  __int64 v15; // rdx
  __int64 v16; // r8
  unsigned int v17; // eax
  bool v18; // bl
  PKEVENT NotificationEvent; // r14
  __int64 v20; // rdx
  bool v21; // di
  __int64 v22; // rax
  int v23; // r8d
  int v24; // edx
  LARGE_INTEGER PerformanceCounter; // rax
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  bool v30; // bl
  bool v31; // bl
  bool v32; // di
  __int64 v33; // rax
  int v34; // r8d
  int v35; // edx
  bool v36; // di
  __int64 v37; // rax
  int v38; // r8d
  int v39; // edx
  struct _HIDP_PREPARSED_DATA *ValueCapsLength; // [rsp+28h] [rbp-D8h]
  struct _HIDP_PREPARSED_DATA *PreparsedData; // [rsp+30h] [rbp-D0h]
  CHAR *PreparsedDataa; // [rsp+30h] [rbp-D0h]
  ULONG ReportLength; // [rsp+38h] [rbp-C8h]
  int SpecificValueCaps; // [rsp+70h] [rbp-90h] BYREF
  ULONG UsageValue[2]; // [rsp+78h] [rbp-88h] BYREF
  USHORT ButtonCapsLength; // [rsp+80h] [rbp-80h] BYREF
  USHORT UsageList[4]; // [rsp+88h] [rbp-78h] BYREF
  HANDLE FileHandle; // [rsp+90h] [rbp-70h] BYREF
  union _LARGE_INTEGER Timeout; // [rsp+98h] [rbp-68h] BYREF
  const WCHAR *v51; // [rsp+A0h] [rbp-60h] BYREF
  _QWORD v52[3]; // [rsp+A8h] [rbp-58h] BYREF
  unsigned int v53; // [rsp+C0h] [rbp-40h]
  int *v54; // [rsp+C8h] [rbp-38h]
  struct _HIDP_VALUE_CAPS ValueCaps; // [rsp+D0h] [rbp-30h] BYREF
  struct _HIDP_BUTTON_CAPS ButtonCaps; // [rsp+120h] [rbp+20h] BYREF

  UsageValue[0] = a4;
  memset(&ValueCaps, 0, sizeof(ValueCaps));
  memset(&ButtonCaps, 0, sizeof(ButtonCaps));
  v8 = 1;
  ButtonCapsLength = 1;
  if ( !*(_QWORD *)(a2 + 32) )
  {
    SpecificValueCaps = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1573LL);
  }
  if ( !*(_WORD *)(a2 + 48) )
  {
    *(_DWORD *)UsageList = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1574LL);
  }
  InputTraceLogging::RIM::DeliverConfigRequest(a1, a3, a4);
  if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
    || *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u )
  {
    v8 = 0;
  }
  v10 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v8 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control, v9);
    LOBYTE(v12) = v10;
    LOBYTE(v13) = v8;
    WPP_RECORDER_AND_TRACE_SF_qDDdd(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v13,
      v12,
      *(_QWORD *)(UserSessionState + 19336));
  }
  memset(*(void **)(a2 + 32), 0, *(unsigned __int16 *)(a2 + 48));
  PreparsedData = *(struct _HIDP_PREPARSED_DATA **)(a2 + 16);
  if ( a3 == 82 )
  {
    v14 = UsageValue[0];
    SpecificValueCaps = HidP_GetSpecificValueCaps(
                          HidP_Feature,
                          0xDu,
                          0,
                          0x52u,
                          &ValueCaps,
                          &ButtonCapsLength,
                          PreparsedData);
    v16 = (unsigned int)SpecificValueCaps;
    if ( SpecificValueCaps != 1114112 )
      goto LABEL_20;
    **(_BYTE **)(a2 + 32) = ValueCaps.ReportID;
    v17 = HidP_SetUsageValue(
            HidP_Feature,
            0xDu,
            0,
            0x52u,
            v14,
            *(PHIDP_PREPARSED_DATA *)(a2 + 16),
            *(PCHAR *)(a2 + 32),
            *(unsigned __int16 *)(a2 + 48));
    goto LABEL_15;
  }
  v14 = UsageValue[0];
  SpecificValueCaps = HidP_GetSpecificButtonCaps(
                        HidP_Feature,
                        0xDu,
                        0,
                        a3,
                        &ButtonCaps,
                        &ButtonCapsLength,
                        PreparsedData);
  v16 = (unsigned int)SpecificValueCaps;
  if ( SpecificValueCaps == 1114112 )
  {
    **(_BYTE **)(a2 + 32) = ButtonCaps.ReportID;
    if ( v14 )
    {
      ReportLength = *(unsigned __int16 *)(a2 + 48);
      PreparsedDataa = *(CHAR **)(a2 + 32);
      ValueCapsLength = *(struct _HIDP_PREPARSED_DATA **)(a2 + 16);
      UsageValue[0] = 2;
      *(_DWORD *)UsageList = 5767255;
      v17 = HidP_SetUsages(HidP_Feature, 0xDu, 0, UsageList, UsageValue, ValueCapsLength, PreparsedDataa, ReportLength);
LABEL_15:
      v16 = v17;
      SpecificValueCaps = v17;
      goto LABEL_20;
    }
    v16 = (unsigned int)SpecificValueCaps;
  }
LABEL_20:
  if ( (_DWORD)v16 == 1114112 )
  {
    v18 = 0;
    *(_QWORD *)UsageValue = 0LL;
    Timeout.QuadPart = 0LL;
    FileHandle = 0LL;
    *(_QWORD *)UsageList = 0LL;
    SpecificValueCaps = RIMGetDeviceObjectPointer(
                          (struct _UNICODE_STRING *)a1 + 12,
                          v15,
                          v16,
                          &FileHandle,
                          (PVOID *)UsageValue,
                          (PDEVICE_OBJECT *)&Timeout);
    LODWORD(v16) = SpecificValueCaps;
    if ( SpecificValueCaps >= 0 )
    {
      NotificationEvent = IoCreateNotificationEvent(0LL, (PHANDLE)UsageList);
      RimTelemetryScopedIoctlObserver::RimTelemetryScopedIoctlObserver(
        (RimTelemetryScopedIoctlObserver *)v52,
        "DeliverConfigRequest",
        a1,
        &SpecificValueCaps,
        0);
      SpecificValueCaps = ZwDeviceIoControlFile(
                            FileHandle,
                            *(HANDLE *)UsageList,
                            0LL,
                            0LL,
                            (PIO_STATUS_BLOCK)a1 + 15,
                            0xB0191u,
                            *(PVOID *)(a2 + 32),
                            *(unsigned __int16 *)(a2 + 48),
                            0LL,
                            0);
      if ( SpecificValueCaps == 259 )
      {
        if ( NotificationEvent )
        {
          Timeout.QuadPart = -10000000LL;
          if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0 )
            v18 = *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
          v21 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          if ( v18 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            v22 = W32GetUserSessionState(WPP_GLOBAL_Control, v20);
            LOBYTE(v23) = v21;
            LOBYTE(v24) = v18;
            WPP_RECORDER_AND_TRACE_SF_(
              *((_QWORD *)WPP_GLOBAL_Control + 3),
              v24,
              v23,
              *(_QWORD *)(v22 + 19336),
              4,
              1,
              66,
              (__int64)&WPP_4b537dbb8ab73c4205f41be231a53f59_Traceguids);
          }
          SpecificValueCaps = KeWaitForSingleObject(NotificationEvent, Executive, 0, 0, &Timeout);
        }
        else
        {
          SpecificValueCaps = -1073741536;
        }
      }
      ObfDereferenceObject(*(PVOID *)UsageValue);
      ZwClose(FileHandle);
      ZwClose(*(HANDLE *)UsageList);
      PerformanceCounter = KeQueryPerformanceCounter(0LL);
      RimTelemetry::LogBlockingIoControlRequest(
        (const char *)v52[2],
        (struct RIMDEV *const)v52[1],
        (unsigned __int64)(1000 * (PerformanceCounter.QuadPart - v52[0])) / gliQpcFreq.QuadPart,
        *v54,
        v53);
      LODWORD(v16) = SpecificValueCaps;
    }
  }
  else if ( (unsigned __int16)(a3 - 87) <= 1u )
  {
    v31 = WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
       && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
       && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
    v32 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v31 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v33 = W32GetUserSessionState(WPP_GLOBAL_Control, v15);
      LOBYTE(v34) = v32;
      LOBYTE(v35) = v31;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v35,
        v34,
        *(_QWORD *)(v33 + 19336),
        4,
        1,
        67,
        (__int64)&WPP_4b537dbb8ab73c4205f41be231a53f59_Traceguids);
    }
    LODWORD(v16) = 0;
    SpecificValueCaps = 0;
  }
  if ( (int)v16 < 0 )
  {
    if ( (unsigned int)dword_14029EE58 > 5 && tlgKeywordOn((__int64)&dword_14029EE58, 0x400000000000LL) )
    {
      v26 = *((unsigned int *)a1 + 12);
      Timeout = *(union _LARGE_INTEGER *)((char *)a1 + 200);
      *(_DWORD *)UsageList = v16;
      LODWORD(FileHandle) = v14;
      LOWORD(UsageValue[0]) = a3;
      v51 = (const WCHAR *)RimDeviceTypeToRimInputTypeString(a1, v26);
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        v27,
        (__int64)&unk_14027AFF2,
        v28,
        v29,
        &v51,
        (const WCHAR **)&Timeout,
        (__int64)UsageValue,
        (__int64)&FileHandle,
        (__int64)UsageList);
      LODWORD(v16) = SpecificValueCaps;
    }
    v30 = WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
       && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
       && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 2u;
    v36 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v30 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v37 = W32GetUserSessionState(WPP_GLOBAL_Control, v15);
      LOBYTE(v38) = v36;
      LOBYTE(v39) = v30;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v39,
        v38,
        *(_QWORD *)(v37 + 19336),
        2,
        1,
        68,
        (__int64)&WPP_4b537dbb8ab73c4205f41be231a53f59_Traceguids);
      LODWORD(v16) = SpecificValueCaps;
    }
  }
  return (unsigned int)v16;
}
