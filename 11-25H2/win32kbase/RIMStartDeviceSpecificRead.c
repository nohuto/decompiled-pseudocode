/*
 * XREFs of RIMStartDeviceSpecificRead @ 0x140033FDC
 * Callers:
 *     rimDoRimDevChangeAsyncWorkItem @ 0x14002B53C (rimDoRimDevChangeAsyncWorkItem.c)
 *     rimStartDeviceReadIfAllowed @ 0x140033FA0 (rimStartDeviceReadIfAllowed.c)
 *     rimIssueReads @ 0x14003564C (rimIssueReads.c)
 *     RIMOnPnpNotification @ 0x140039E20 (RIMOnPnpNotification.c)
 *     rimProcessDeviceBufferAndStartRead @ 0x140125744 (rimProcessDeviceBufferAndStartRead.c)
 *     rimOnPnpArrived @ 0x140181640 (rimOnPnpArrived.c)
 *     rimInputApc @ 0x140182D20 (rimInputApc.c)
 * Callees:
 *     _tlgKeywordOn @ 0x14009E9B0 (_tlgKeywordOn.c)
 *     ?StartDeviceRead@RIM@InputTraceLogging@@SAXPEBURIMDEV@@J@Z @ 0x1400CFED0 (-StartDeviceRead@RIM@InputTraceLogging@@SAXPEBURIMDEV@@J@Z.c)
 *     RIMStartDeviceRead @ 0x1400D7F94 (RIMStartDeviceRead.c)
 *     EtwTraceStartInputDeviceRead @ 0x1400E0D90 (EtwTraceStartInputDeviceRead.c)
 *     WPP_RECORDER_AND_TRACE_SF_qqd @ 0x1400ED4D4 (WPP_RECORDER_AND_TRACE_SF_qqd.c)
 *     RimDeviceTypeToRimInputTypeString @ 0x140114428 (RimDeviceTypeToRimInputTypeString.c)
 *     ??$Write@U?$_tlgWrapSz@G@@U1@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@3AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x14012DF78 (--$Write@U-$_tlgWrapSz@G@@U1@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvide.c)
 *     rimIsHidInputDevice @ 0x14017F8BC (rimIsHidInputDevice.c)
 *     RawInputManagerDeviceObjectReference @ 0x1401806B0 (RawInputManagerDeviceObjectReference.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019E99C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall RIMStartDeviceSpecificRead(__int64 a1, __int64 a2)
{
  __int64 v3; // r15
  bool v4; // zf
  __int64 v6; // rcx
  int v7; // edi
  unsigned int v8; // eax
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // rdx
  __int64 v12; // r8
  unsigned __int8 v13; // cl
  char v14; // si
  bool v15; // r14
  __int64 UserSessionState; // rax
  int v17; // r8d
  int v18; // edx
  __int64 v19; // rdx
  int v20; // ecx
  int v21; // r8d
  int v22; // r9d
  char v23; // si
  bool v24; // r14
  __int64 v25; // rax
  int v26; // r8d
  int v27; // edx
  __int64 v28; // rdx
  int v29; // ecx
  int v30; // r8d
  int v31; // r9d
  __int64 v32; // rdx
  int v33; // ecx
  int v34; // r8d
  int v35; // r9d
  int v36; // [rsp+A8h] [rbp+48h] BYREF
  __int64 v37; // [rsp+B0h] [rbp+50h] BYREF
  __int64 v38; // [rsp+B8h] [rbp+58h] BYREF

  v3 = a1;
  if ( (*(_DWORD *)(a2 + 168) & 0x2000) != 0 )
  {
    v36 = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 65LL);
  }
  if ( (*(_DWORD *)(a2 + 168) & 0x80u) != 0 )
  {
    LOBYTE(a1) = *(_BYTE *)(a2 + 48);
    v7 = -1073740682;
    EtwTraceStartInputDeviceRead(a1, 3221226614LL);
  }
  else
  {
    v4 = *(_DWORD *)(a2 + 48) == 3;
    *(_DWORD *)(a2 + 240) = -1073741823;
    *(_QWORD *)(a2 + 248) = 0LL;
    *(_DWORD *)(a2 + 136) = 0;
    *(_QWORD *)(a2 + 144) = 0LL;
    if ( v4 )
    {
      v36 = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 76LL);
    }
    if ( !*(_QWORD *)(a2 + 208) )
      return 0LL;
    if ( *(_DWORD *)(a2 + 48) == 2 )
    {
      if ( !*(_QWORD *)(a2 + 448) )
      {
        v36 = 0x20000;
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 90LL);
      }
      if ( !(unsigned int)rimIsHidInputDevice(a2, *(_QWORD *)(a2 + 440)) )
      {
        if ( (*(_DWORD *)(a2 + 168) & 0x10000) == 0 )
        {
          v36 = 0x20000;
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 97LL);
        }
        return 0LL;
      }
    }
    v6 = *(_QWORD *)(a2 + 32);
    *(_DWORD *)(a2 + 168) |= 0x80u;
    v7 = RawInputManagerDeviceObjectReference(v6);
    if ( v7 >= 0 )
    {
      v8 = RIMStartDeviceRead((PVOID)a2);
      LOBYTE(v9) = *(_BYTE *)(a2 + 48);
      v7 = v8;
      EtwTraceStartInputDeviceRead(v9, v8);
      InputTraceLogging::RIM::StartDeviceRead((const struct RIMDEV *)a2, v7);
      if ( v7 >= 0 )
      {
        if ( (*(_DWORD *)(a2 + 168) & 0x100) != 0 )
        {
          if ( (unsigned int)dword_14029EE58 > 5
            && (unsigned __int8)tlgKeywordOn(&dword_14029EE58, 0x400000000000LL, v10) )
          {
            v32 = *(unsigned int *)(a2 + 48);
            v37 = *(_QWORD *)(a2 + 200);
            v36 = v7;
            v38 = RimDeviceTypeToRimInputTypeString(a2, v32);
            _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>>(
              v33,
              (unsigned int)&unk_14027C31B,
              v34,
              v35,
              (__int64)&v38,
              (__int64)&v37,
              (__int64)&v36);
          }
          *(_DWORD *)(a2 + 168) &= ~0x100u;
        }
      }
      else
      {
        ObfDereferenceObject(*(PVOID *)(a2 + 32));
        if ( (v7 == -1073741670 || v7 == -1073741663 || v7 == -1073741801)
          && (v13 = *(_BYTE *)(a2 + 188), *(_BYTE *)(a2 + 188) = v13 + 1, v13 < 5u) )
        {
          if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
            || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
            || (v14 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u) )
          {
            v14 = 0;
          }
          v15 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          if ( v14 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control, v11);
            LOBYTE(v17) = v15;
            LOBYTE(v18) = v14;
            WPP_RECORDER_AND_TRACE_SF_qqd(
              *((_QWORD *)WPP_GLOBAL_Control + 3),
              v18,
              v17,
              *(_QWORD *)(UserSessionState + 19336),
              2,
              1,
              10,
              (__int64)&WPP_7bf7317fea8f3c0b82ba448ae30d594a_Traceguids,
              v3,
              a2,
              v7);
          }
          if ( (unsigned int)dword_14029EE58 > 5
            && (unsigned __int8)tlgKeywordOn(&dword_14029EE58, 0x400000000000LL, v12) )
          {
            v19 = *(unsigned int *)(a2 + 48);
            v37 = *(_QWORD *)(a2 + 200);
            v36 = v7;
            v38 = RimDeviceTypeToRimInputTypeString(a2, v19);
            _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>>(
              v20,
              (unsigned int)&unk_14027C3C5,
              v21,
              v22,
              (__int64)&v38,
              (__int64)&v37,
              (__int64)&v36);
          }
          *(_DWORD *)(a2 + 168) &= ~0x80u;
          ZwSetEvent(*(HANDLE *)(v3 + 344), 0LL);
        }
        else
        {
          if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
            || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
            || (v23 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u) )
          {
            v23 = 0;
          }
          v24 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          if ( v23 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            v25 = W32GetUserSessionState(WPP_GLOBAL_Control, v11);
            LOBYTE(v26) = v24;
            LOBYTE(v27) = v23;
            WPP_RECORDER_AND_TRACE_SF_qqd(
              *((_QWORD *)WPP_GLOBAL_Control + 3),
              v27,
              v26,
              *(_QWORD *)(v25 + 19336),
              2,
              1,
              11,
              (__int64)&WPP_7bf7317fea8f3c0b82ba448ae30d594a_Traceguids,
              v3,
              a2,
              v7);
          }
          if ( (unsigned int)dword_14029EE58 > 5
            && (unsigned __int8)tlgKeywordOn(&dword_14029EE58, 0x400000000000LL, v12) )
          {
            v28 = *(unsigned int *)(a2 + 48);
            v37 = *(_QWORD *)(a2 + 200);
            v36 = v7;
            v38 = RimDeviceTypeToRimInputTypeString(a2, v28);
            _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>>(
              v29,
              (unsigned int)&unk_14027C376,
              v30,
              v31,
              (__int64)&v38,
              (__int64)&v37,
              (__int64)&v36);
          }
        }
      }
    }
  }
  return (unsigned int)v7;
}
