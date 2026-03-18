/*
 * XREFs of RIMDeliverConfigRequest @ 0x1400F1398
 * Callers:
 *     RIMAllocateHidConfigDesc @ 0x1400EFCEC (RIMAllocateHidConfigDesc.c)
 *     RIMUnRevokeConfigurationChange @ 0x1400F0330 (RIMUnRevokeConfigurationChange.c)
 *     RIMApiSetSetUserPTPEnabledPreference @ 0x1400F074C (RIMApiSetSetUserPTPEnabledPreference.c)
 *     RIMConfigurePointerDevice @ 0x1400F0E9C (RIMConfigurePointerDevice.c)
 *     RIMRevokeConfigurationChange @ 0x1401C5840 (RIMRevokeConfigurationChange.c)
 *     EnablePTPDevices @ 0x1401D7790 (EnablePTPDevices.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapSz@G@@U1@U?$_tlgWrapperByVal@$01@@U?$_tlgWrapperByVal@$03@@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@3AEBU?$_tlgWrapperByVal@$01@@AEBU?$_tlgWrapperByVal@$03@@5@Z @ 0x140005864 (--$Write@U-$_tlgWrapSz@G@@U1@U-$_tlgWrapperByVal@$01@@U-$_tlgWrapperByVal@$03@@U3@@-$_tlgWriteTe.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x140099DD0 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     _tlgKeywordOn @ 0x1400E4F60 (_tlgKeywordOn.c)
 *     WPP_RECORDER_AND_TRACE_SF_qDDdd @ 0x1400F11AC (WPP_RECORDER_AND_TRACE_SF_qDDdd.c)
 *     ?DeliverConfigRequest@RIM@InputTraceLogging@@SAXPEBURIMDEV@@GK@Z @ 0x1400F1318 (-DeliverConfigRequest@RIM@InputTraceLogging@@SAXPEBURIMDEV@@GK@Z.c)
 *     RIMGetDeviceObjectPointer @ 0x1400F2B34 (RIMGetDeviceObjectPointer.c)
 *     RimDeviceTypeToRimInputTypeString @ 0x14015EB68 (RimDeviceTypeToRimInputTypeString.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?LogBlockingIoControlRequest@RimTelemetry@@SAXPEBDQEAURIMDEV@@_KJK@Z @ 0x1401B89DC (-LogBlockingIoControlRequest@RimTelemetry@@SAXPEBDQEAURIMDEV@@_KJK@Z.c)
 *     __security_check_cookie @ 0x14024BC30 (__security_check_cookie.c)
 *     memset @ 0x14024BD80 (memset.c)
 */

__int64 __fastcall RIMDeliverConfigRequest(struct RIMDEV *a1, __int64 a2, __int16 a3, ULONG a4)
{
  __int64 v8; // r9
  char v9; // r14
  int v10; // edx
  int v11; // r8d
  char v12; // r15
  __int64 UserSessionState; // rax
  int v14; // edx
  unsigned int SpecificValueCaps; // ebx
  int v16; // r8d
  NTSTATUS SpecificButtonCaps; // eax
  char v18; // di
  PKEVENT v19; // r14
  LARGE_INTEGER PerformanceCounter; // rax
  int v21; // edx
  int v22; // r8d
  char v23; // bl
  bool v24; // di
  __int64 v25; // rax
  int v26; // r8d
  int v27; // edx
  LARGE_INTEGER v28; // rax
  bool v30; // zf
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // r9
  bool v35; // si
  __int64 v36; // rax
  int v37; // r8d
  int v38; // edx
  bool v39; // bl
  bool v40; // di
  __int64 v41; // rax
  int v42; // r8d
  int v43; // edx
  int ValueCaps; // [rsp+20h] [rbp-E0h]
  int ValueCapsLength; // [rsp+28h] [rbp-D8h]
  struct _HIDP_PREPARSED_DATA *ValueCapsLengtha; // [rsp+28h] [rbp-D8h]
  int PreparsedData; // [rsp+30h] [rbp-D0h]
  struct _HIDP_PREPARSED_DATA *PreparsedDataa; // [rsp+30h] [rbp-D0h]
  PHIDP_PREPARSED_DATA PreparsedDatab; // [rsp+30h] [rbp-D0h]
  CHAR *PreparsedDatac; // [rsp+30h] [rbp-D0h]
  int ReportLength; // [rsp+38h] [rbp-C8h]
  ULONG ReportLengtha; // [rsp+38h] [rbp-C8h]
  ULONG ReportLengthb; // [rsp+38h] [rbp-C8h]
  void *EventHandle; // [rsp+70h] [rbp-90h] BYREF
  ULONG UsageValue; // [rsp+78h] [rbp-88h] BYREF
  USHORT ButtonCapsLength[2]; // [rsp+7Ch] [rbp-84h] BYREF
  HANDLE FileHandle; // [rsp+80h] [rbp-80h] BYREF
  union _LARGE_INTEGER Timeout; // [rsp+88h] [rbp-78h] BYREF
  const WCHAR *QuadPart; // [rsp+90h] [rbp-70h] BYREF
  PVOID Object; // [rsp+98h] [rbp-68h] BYREF
  struct _HIDP_VALUE_CAPS v61; // [rsp+A0h] [rbp-60h] BYREF
  struct _HIDP_BUTTON_CAPS ButtonCaps; // [rsp+F0h] [rbp-10h] BYREF

  UsageValue = a4;
  memset(&v61, 0, sizeof(v61));
  memset(&ButtonCaps, 0, sizeof(ButtonCaps));
  v9 = 1;
  ButtonCapsLength[0] = 1;
  if ( !*(_QWORD *)(a2 + 32) )
  {
    LODWORD(EventHandle) = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1570LL);
  }
  if ( !*(_WORD *)(a2 + 48) )
  {
    LODWORD(EventHandle) = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1571LL);
  }
  InputTraceLogging::RIM::DeliverConfigRequest(a1, a3, a4, v8);
  if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
    || *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u )
  {
    v9 = 0;
  }
  v12 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v9 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    UserSessionState = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v10, v11);
    WPP_RECORDER_AND_TRACE_SF_qDDdd(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v9,
      v12,
      *(_QWORD *)(UserSessionState + 19368),
      ValueCaps,
      ValueCapsLength,
      PreparsedData,
      ReportLength);
  }
  memset(*(void **)(a2 + 32), 0, *(unsigned __int16 *)(a2 + 48));
  PreparsedDataa = *(struct _HIDP_PREPARSED_DATA **)(a2 + 16);
  if ( a3 == 82 )
  {
    SpecificValueCaps = HidP_GetSpecificValueCaps(HidP_Feature, 0xDu, 0, 0x52u, &v61, ButtonCapsLength, PreparsedDataa);
    if ( SpecificValueCaps == 1114112 )
    {
      **(_BYTE **)(a2 + 32) = v61.ReportID;
      SpecificValueCaps = HidP_SetUsageValue(
                            HidP_Feature,
                            0xDu,
                            0,
                            0x52u,
                            UsageValue,
                            *(PHIDP_PREPARSED_DATA *)(a2 + 16),
                            *(PCHAR *)(a2 + 32),
                            *(unsigned __int16 *)(a2 + 48));
    }
    SpecificButtonCaps = SpecificValueCaps;
  }
  else
  {
    SpecificButtonCaps = HidP_GetSpecificButtonCaps(
                           HidP_Feature,
                           0xDu,
                           0,
                           a3,
                           &ButtonCaps,
                           ButtonCapsLength,
                           PreparsedDataa);
    SpecificValueCaps = SpecificButtonCaps;
    if ( SpecificButtonCaps != 1114112 )
      goto LABEL_38;
    v30 = UsageValue == 0;
    **(_BYTE **)(a2 + 32) = ButtonCaps.ReportID;
    if ( v30 )
    {
LABEL_16:
      v18 = 0;
      Object = 0LL;
      Timeout.QuadPart = 0LL;
      FileHandle = 0LL;
      EventHandle = 0LL;
      SpecificButtonCaps = RIMGetDeviceObjectPointer(
                             (int)a1 + 192,
                             v14,
                             v16,
                             (unsigned int)&FileHandle,
                             (__int64)&Object,
                             (__int64)&Timeout);
      SpecificValueCaps = SpecificButtonCaps;
      if ( SpecificButtonCaps >= 0 )
      {
        v19 = IoCreateNotificationEvent(0LL, &EventHandle);
        PerformanceCounter = KeQueryPerformanceCounter(0LL);
        ReportLengtha = *(unsigned __int16 *)(a2 + 48);
        PreparsedDatab = *(PHIDP_PREPARSED_DATA *)(a2 + 32);
        QuadPart = (const WCHAR *)PerformanceCounter.QuadPart;
        SpecificValueCaps = ZwDeviceIoControlFile(
                              FileHandle,
                              EventHandle,
                              0LL,
                              0LL,
                              (PIO_STATUS_BLOCK)a1 + 15,
                              0xB0191u,
                              PreparsedDatab,
                              ReportLengtha,
                              0LL,
                              0);
        if ( SpecificValueCaps == 259 )
        {
          if ( v19 )
          {
            Timeout.QuadPart = -10000000LL;
            if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
              || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
              || (v23 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
            {
              v23 = 0;
            }
            v24 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
            if ( v23 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              v25 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v21, v22);
              LOBYTE(v26) = v24;
              LOBYTE(v27) = v23;
              WPP_RECORDER_AND_TRACE_SF_(
                *((_QWORD *)WPP_GLOBAL_Control + 3),
                v27,
                v26,
                *(_QWORD *)(v25 + 19368),
                4,
                1,
                66,
                (__int64)&WPP_2c4ac3064f9f30623cb2b4ebc0636cf4_Traceguids);
            }
            SpecificValueCaps = KeWaitForSingleObject(v19, Executive, 0, 0, &Timeout);
            v18 = 0;
          }
          else
          {
            SpecificValueCaps = -1073741536;
          }
        }
        ObfDereferenceObject(Object);
        ZwClose(FileHandle);
        ZwClose(EventHandle);
        v28 = KeQueryPerformanceCounter(0LL);
        RimTelemetry::LogBlockingIoControlRequest(
          "DeliverConfigRequest",
          a1,
          (unsigned __int64)(1000 * (v28.QuadPart - (_QWORD)QuadPart)) / gliQpcFreq.QuadPart,
          SpecificValueCaps,
          0);
        SpecificButtonCaps = SpecificValueCaps;
      }
      goto LABEL_27;
    }
    ReportLengthb = *(unsigned __int16 *)(a2 + 48);
    PreparsedDatac = *(CHAR **)(a2 + 32);
    ValueCapsLengtha = *(struct _HIDP_PREPARSED_DATA **)(a2 + 16);
    LODWORD(FileHandle) = 2;
    LODWORD(EventHandle) = 5767255;
    SpecificButtonCaps = HidP_SetUsages(
                           HidP_Feature,
                           0xDu,
                           0,
                           (PUSAGE)&EventHandle,
                           (PULONG)&FileHandle,
                           ValueCapsLengtha,
                           PreparsedDatac,
                           ReportLengthb);
    SpecificValueCaps = SpecificButtonCaps;
  }
  if ( SpecificButtonCaps == 1114112 )
    goto LABEL_16;
LABEL_38:
  if ( a3 != 87 && a3 != 88 )
  {
    v18 = 0;
LABEL_27:
    if ( SpecificButtonCaps < 0 )
    {
      if ( (unsigned int)dword_1402A9E78 > 5 && tlgKeywordOn((__int64)&dword_1402A9E78, 0x400000000000LL) )
      {
        v31 = *((unsigned int *)a1 + 12);
        LODWORD(EventHandle) = UsageValue;
        QuadPart = (const WCHAR *)*((_QWORD *)a1 + 25);
        LODWORD(FileHandle) = SpecificValueCaps;
        LOWORD(UsageValue) = a3;
        Timeout.QuadPart = RimDeviceTypeToRimInputTypeString(a1, v31);
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
          v32,
          (__int64)&unk_140285299,
          v33,
          v34,
          (const WCHAR **)&Timeout,
          &QuadPart,
          (__int64)&UsageValue,
          (__int64)&EventHandle,
          (__int64)&FileHandle);
      }
      if ( WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 2u )
      {
        v18 = 1;
      }
      v35 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v18 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v36 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v14, v16);
        LOBYTE(v37) = v35;
        LOBYTE(v38) = v18;
        WPP_RECORDER_AND_TRACE_SF_(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v38,
          v37,
          *(_QWORD *)(v36 + 19368),
          2,
          1,
          68,
          (__int64)&WPP_2c4ac3064f9f30623cb2b4ebc0636cf4_Traceguids);
      }
    }
    return SpecificValueCaps;
  }
  v39 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
     && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
     && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
  v40 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v39 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v41 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v14, v16);
    LOBYTE(v42) = v40;
    LOBYTE(v43) = v39;
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v43,
      v42,
      *(_QWORD *)(v41 + 19368),
      4,
      1,
      67,
      (__int64)&WPP_2c4ac3064f9f30623cb2b4ebc0636cf4_Traceguids);
  }
  return 0;
}
