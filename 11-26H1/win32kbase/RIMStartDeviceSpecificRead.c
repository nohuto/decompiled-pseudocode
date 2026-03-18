/*
 * XREFs of RIMStartDeviceSpecificRead @ 0x1400996FC
 * Callers:
 *     RIMOnPnpNotification @ 0x14005B7D0 (RIMOnPnpNotification.c)
 *     rimOnPnpArrived @ 0x140093AC0 (rimOnPnpArrived.c)
 *     rimDoRimDevChangeAsyncWorkItem @ 0x140096618 (rimDoRimDevChangeAsyncWorkItem.c)
 *     rimStartDeviceReadIfAllowed @ 0x14009776C (rimStartDeviceReadIfAllowed.c)
 *     rimIssueReads @ 0x140098194 (rimIssueReads.c)
 *     rimInputApc @ 0x14009DFA0 (rimInputApc.c)
 *     rimProcessDeviceBufferAndStartRead @ 0x14009E9D0 (rimProcessDeviceBufferAndStartRead.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_qqd @ 0x14006E614 (WPP_RECORDER_AND_TRACE_SF_qqd.c)
 *     RawInputManagerDeviceObjectReference @ 0x1400955E0 (RawInputManagerDeviceObjectReference.c)
 *     ?StartDeviceRead@RIM@InputTraceLogging@@SAXPEBURIMDEV@@J@Z @ 0x1400A1838 (-StartDeviceRead@RIM@InputTraceLogging@@SAXPEBURIMDEV@@J@Z.c)
 *     McTemplateK0dq_EtwWriteTransfer @ 0x14012B4B0 (McTemplateK0dq_EtwWriteTransfer.c)
 *     RimDeviceTypeToRimInputTypeString @ 0x14015EB68 (RimDeviceTypeToRimInputTypeString.c)
 *     ??$Write@U?$_tlgWrapSz@G@@U1@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@3AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x14016536C (--$Write@U-$_tlgWrapSz@G@@U1@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvide.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall RIMStartDeviceSpecificRead(__int64 a1, __int64 a2, __int64 a3)
{
  bool v5; // zf
  __int64 v6; // rcx
  __int64 v7; // rax
  ULONG Length; // r14d
  void *Buffer; // rsi
  void *v10; // rcx
  int v11; // edi
  void *v12; // rcx
  NTSTATUS v13; // eax
  __int64 v14; // rcx
  __int64 v15; // r8
  int v17; // eax
  __int64 v18; // rdi
  __int64 v19; // rax
  int v20; // edx
  int v21; // r8d
  unsigned __int8 v22; // cl
  char v23; // si
  char v24; // r14
  __int64 UserSessionState; // rax
  __int64 v26; // rdx
  int v27; // ecx
  int v28; // r8d
  int v29; // r9d
  char v30; // si
  char v31; // r14
  __int64 v32; // rdx
  int v33; // ecx
  int v34; // r8d
  int v35; // r9d
  __int64 v36; // rax
  __int64 v37; // rdx
  int v38; // ecx
  int v39; // r8d
  int v40; // r9d
  union _LARGE_INTEGER ByteOffset; // [rsp+A8h] [rbp+48h] BYREF
  __int64 v42; // [rsp+B0h] [rbp+50h] BYREF
  __int64 v43; // [rsp+B8h] [rbp+58h] BYREF

  if ( (*(_DWORD *)(a2 + 168) & 0x2000) != 0 )
  {
    ByteOffset.LowPart = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 65LL);
  }
  if ( (*(_DWORD *)(a2 + 168) & 0x80u) != 0 )
  {
    v11 = -1073740682;
    if ( (Microsoft_Windows_Win32kEnableBits & 0x4000) != 0 )
      McTemplateK0dq_EtwWriteTransfer(a1, &StartInputDeviceRead, a3, *(unsigned __int8 *)(a2 + 48), -1073740682);
    return (unsigned int)v11;
  }
  v5 = *(_DWORD *)(a2 + 48) == 3;
  *(_DWORD *)(a2 + 240) = -1073741823;
  *(_QWORD *)(a2 + 248) = 0LL;
  *(_DWORD *)(a2 + 136) = 0;
  *(_QWORD *)(a2 + 144) = 0LL;
  if ( v5 )
  {
    ByteOffset.LowPart = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 76LL);
  }
  v6 = *(unsigned int *)(a2 + 48);
  v7 = 32 * (v6 + 4);
  if ( *(_QWORD *)(a2 + 208) )
  {
    if ( (_DWORD)v6 != 2 )
    {
      Length = *(_DWORD *)(v7 + a1 + 24);
      Buffer = (void *)(a2 + *(unsigned int *)(v7 + a1 + 20));
      goto LABEL_9;
    }
    if ( !*(_QWORD *)(a2 + 448) )
    {
      ByteOffset.LowPart = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 90LL);
    }
    v17 = *(_DWORD *)(a2 + 48);
    v18 = *(_QWORD *)(a2 + 440);
    if ( v17 != 2 && v17 != 3 )
    {
      ByteOffset.LowPart = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 2702LL);
    }
    if ( *(_WORD *)(v18 + 44) )
    {
      v19 = *(_QWORD *)(a2 + 440);
      Buffer = *(void **)(v19 + 24);
      Length = 10 * *(unsigned __int16 *)(v19 + 44);
LABEL_9:
      v10 = *(void **)(a2 + 32);
      *(_DWORD *)(a2 + 168) |= 0x80u;
      v11 = RawInputManagerDeviceObjectReference(v10);
      if ( v11 >= 0 )
      {
        v12 = *(void **)(a2 + 208);
        ByteOffset.QuadPart = 0LL;
        v13 = ZwReadFile(
                v12,
                0LL,
                rimInputApc,
                (PVOID)a2,
                (PIO_STATUS_BLOCK)(a2 + 240),
                Buffer,
                Length,
                &ByteOffset,
                0LL);
        *(_DWORD *)(a2 + 256) = v13;
        if ( v13 >= 0 )
          *(_QWORD *)(a2 + 2288) = MEMORY[0xFFFFF78000000014];
        v11 = *(_DWORD *)(a2 + 256);
        if ( (Microsoft_Windows_Win32kEnableBits & 0x4000) != 0 )
          McTemplateK0dq_EtwWriteTransfer(
            v14,
            &StartInputDeviceRead,
            v15,
            *(unsigned __int8 *)(a2 + 48),
            *(_DWORD *)(a2 + 256));
        InputTraceLogging::RIM::StartDeviceRead((const struct RIMDEV *)a2, v11);
        if ( v11 < 0 )
        {
          ObfDereferenceObject(*(PVOID *)(a2 + 32));
          if ( (v11 == -1073741670 || v11 == -1073741663 || v11 == -1073741801)
            && (v22 = *(_BYTE *)(a2 + 188), *(_BYTE *)(a2 + 188) = v22 + 1, v22 < 5u) )
          {
            if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
              || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
              || (v23 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u) )
            {
              v23 = 0;
            }
            v24 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
            if ( v23 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              UserSessionState = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v20, v21);
              WPP_RECORDER_AND_TRACE_SF_qqd(
                *((_QWORD *)WPP_GLOBAL_Control + 3),
                v23,
                v24,
                *(_QWORD *)(UserSessionState + 19368),
                2u,
                1u,
                0xAu,
                (__int64)&WPP_7bf7317fea8f3c0b82ba448ae30d594a_Traceguids,
                a1,
                a2,
                v11);
            }
            if ( (unsigned int)dword_1402A9E78 > 5
              && (qword_1402A9E88 & 0x400000000000LL) != 0
              && (qword_1402A9E90 & 0x400000000000LL) == qword_1402A9E90 )
            {
              v26 = *(unsigned int *)(a2 + 48);
              v42 = *(_QWORD *)(a2 + 200);
              ByteOffset.LowPart = v11;
              v43 = RimDeviceTypeToRimInputTypeString(a2, v26);
              _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>>(
                v27,
                (unsigned int)&unk_140286763,
                v28,
                v29,
                (__int64)&v43,
                (__int64)&v42,
                (__int64)&ByteOffset);
            }
            *(_DWORD *)(a2 + 168) &= ~0x80u;
            ZwSetEvent(*(HANDLE *)(a1 + 344), 0LL);
          }
          else
          {
            if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
              || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
              || (v30 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u) )
            {
              v30 = 0;
            }
            v31 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
            if ( v30 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              v36 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v20, v21);
              WPP_RECORDER_AND_TRACE_SF_qqd(
                *((_QWORD *)WPP_GLOBAL_Control + 3),
                v30,
                v31,
                *(_QWORD *)(v36 + 19368),
                2u,
                1u,
                0xBu,
                (__int64)&WPP_7bf7317fea8f3c0b82ba448ae30d594a_Traceguids,
                a1,
                a2,
                v11);
            }
            if ( (unsigned int)dword_1402A9E78 > 5
              && (qword_1402A9E88 & 0x400000000000LL) != 0
              && (qword_1402A9E90 & 0x400000000000LL) == qword_1402A9E90 )
            {
              v32 = *(unsigned int *)(a2 + 48);
              v42 = *(_QWORD *)(a2 + 200);
              ByteOffset.LowPart = v11;
              v43 = RimDeviceTypeToRimInputTypeString(a2, v32);
              _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>>(
                v33,
                (unsigned int)&unk_140286815,
                v34,
                v35,
                (__int64)&v43,
                (__int64)&v42,
                (__int64)&ByteOffset);
            }
          }
        }
        else if ( (*(_DWORD *)(a2 + 168) & 0x100) != 0 )
        {
          if ( (unsigned int)dword_1402A9E78 > 5
            && (qword_1402A9E88 & 0x400000000000LL) != 0
            && (qword_1402A9E90 & 0x400000000000LL) == qword_1402A9E90 )
          {
            v37 = *(unsigned int *)(a2 + 48);
            v42 = *(_QWORD *)(a2 + 200);
            ByteOffset.LowPart = v11;
            v43 = RimDeviceTypeToRimInputTypeString(a2, v37);
            _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>>(
              v38,
              (unsigned int)&unk_1402867BA,
              v39,
              v40,
              (__int64)&v43,
              (__int64)&v42,
              (__int64)&ByteOffset);
          }
          *(_DWORD *)(a2 + 168) &= ~0x100u;
        }
      }
      return (unsigned int)v11;
    }
    if ( (*(_DWORD *)(a2 + 168) & 0x10000) == 0 )
    {
      ByteOffset.LowPart = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 97LL);
    }
  }
  return 0LL;
}
