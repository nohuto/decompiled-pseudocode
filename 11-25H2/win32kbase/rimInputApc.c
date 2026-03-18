/*
 * XREFs of rimInputApc @ 0x140182D20
 * Callers:
 *     <none>
 * Callees:
 *     RIMLockExclusive @ 0x140033CB0 (RIMLockExclusive.c)
 *     RIMUnlockExclusive @ 0x140033F70 (RIMUnlockExclusive.c)
 *     RIMStartDeviceSpecificRead @ 0x140033FDC (RIMStartDeviceSpecificRead.c)
 *     ??0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z @ 0x140039464 (--0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z.c)
 *     ??1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ @ 0x14003B014 (--1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ.c)
 *     WPP_RECORDER_AND_TRACE_SF_qq @ 0x14006101C (WPP_RECORDER_AND_TRACE_SF_qq.c)
 *     ?InputApc@RIM@InputTraceLogging@@SAXPEBURIMDEV@@PEBU_IO_STATUS_BLOCK@@@Z @ 0x140078A88 (-InputApc@RIM@InputTraceLogging@@SAXPEBURIMDEV@@PEBU_IO_STATUS_BLOCK@@@Z.c)
 *     _tlgKeywordOn @ 0x14009E9B0 (_tlgKeywordOn.c)
 *     EtwTraceCompleteInputDeviceRead @ 0x1400E0DC0 (EtwTraceCompleteInputDeviceRead.c)
 *     WPP_RECORDER_AND_TRACE_SF_qqd @ 0x1400ED4D4 (WPP_RECORDER_AND_TRACE_SF_qqd.c)
 *     RIMApplyPTPConfigRemedyWorker @ 0x1400F1818 (RIMApplyPTPConfigRemedyWorker.c)
 *     RimDeviceTypeToRimInputTypeString @ 0x140114428 (RimDeviceTypeToRimInputTypeString.c)
 *     rimProcessDeviceBufferAndStartRead @ 0x140125744 (rimProcessDeviceBufferAndStartRead.c)
 *     ??$Write@U?$_tlgWrapSz@G@@U1@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@3AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x14012DF78 (--$Write@U-$_tlgWrapSz@G@@U1@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvide.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019E99C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

void __fastcall rimInputApc(char *ApcContext, const struct _IO_STATUS_BLOCK *IoStatusBlock, ULONG Reserved)
{
  __int64 v5; // rcx
  __int64 v6; // r8
  NTSTATUS Status; // esi
  __int64 v8; // rdx
  __int64 v9; // rdi
  char v10; // r14
  __int64 v11; // rdx
  unsigned int v12; // eax
  char v13; // cl
  bool v14; // r15
  __int64 v15; // rax
  int v16; // r8d
  int v17; // edx
  int v18; // edx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  bool v22; // r15
  __int64 UserSessionState; // rax
  int v24; // r8d
  int v25; // edx
  int v26; // edx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  char v30; // si
  bool v31; // r14
  __int64 v32; // rax
  int v33; // r8d
  int v34; // edx
  const WCHAR *v35; // [rsp+60h] [rbp-10h] BYREF
  __int64 *v36; // [rsp+68h] [rbp-8h] BYREF
  int v37; // [rsp+B0h] [rbp+40h] BYREF
  int v38; // [rsp+B8h] [rbp+48h]
  const WCHAR *v39; // [rsp+C8h] [rbp+58h] BYREF

  InputTraceLogging::ThreadLockedPerfRegion::ThreadLockedPerfRegion(&v36, "InputApc", 0LL);
  if ( ApcContext + 240 != (char *)IoStatusBlock )
  {
    v37 = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1518LL);
  }
  LOBYTE(v5) = ApcContext[48];
  *(struct _IO_STATUS_BLOCK *)(ApcContext + 136) = *IoStatusBlock;
  Status = IoStatusBlock->Status;
  EtwTraceCompleteInputDeviceRead(v5, IoStatusBlock->Status, v6);
  InputTraceLogging::RIM::InputApc((const struct RIMDEV *)ApcContext, IoStatusBlock);
  v9 = *((_QWORD *)ApcContext + 40);
  if ( !*(_BYTE *)(v9 + 81) && !*(_BYTE *)(v9 + 80) )
  {
    if ( ApcContext + 240 != (char *)IoStatusBlock )
    {
      v37 = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1533LL);
    }
    v10 = 1;
    if ( Status < 0 || *((_DWORD *)ApcContext + 12) == 2 && (*((_DWORD *)ApcContext + 46) & 0x80u) != 0 )
    {
      v38 = 1;
      if ( *(_QWORD *)(v9 + 832) && !*(_BYTE *)(v9 + 776) )
      {
        v37 = 0x20000;
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1550LL);
      }
      RIMLockExclusive(v9 + 104);
    }
    else
    {
      v38 = 0;
    }
    if ( *((_QWORD *)ApcContext + 26) )
    {
      RIMLockExclusive(v9 + 760);
      v12 = *((_DWORD *)ApcContext + 42) & 0xFFFFFF7F;
      *((_DWORD *)ApcContext + 42) = v12;
      if ( !*(_BYTE *)(v9 + 81) && !*(_BYTE *)(v9 + 80) )
      {
        if ( Status < 0 )
        {
          if ( (v12 & 8) == 0 && Status != -1073741536 )
          {
            v13 = ApcContext[189];
            ApcContext[189] = v13 + 1;
            if ( (unsigned __int8)v13 >= 5u )
            {
              if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
                || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
                || *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u )
              {
                v10 = 0;
              }
              v22 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
              if ( v10 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              {
                UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control, v11);
                LOBYTE(v24) = v22;
                LOBYTE(v25) = v10;
                WPP_RECORDER_AND_TRACE_SF_qqd(
                  *((_QWORD *)WPP_GLOBAL_Control + 3),
                  v25,
                  v24,
                  *(_QWORD *)(UserSessionState + 19336),
                  2,
                  1,
                  25,
                  (__int64)&WPP_5ea806e723ba3833aff6fb8b08279cc2_Traceguids,
                  v9,
                  (char)ApcContext,
                  Status);
              }
              if ( (unsigned int)dword_14029EE58 > 5 && tlgKeywordOn((__int64)&dword_14029EE58, 0x400000000000LL) )
              {
                v26 = *((_DWORD *)ApcContext + 12);
                v39 = (const WCHAR *)*((_QWORD *)ApcContext + 25);
                v37 = Status;
                v35 = RimDeviceTypeToRimInputTypeString((__int64)ApcContext, v26);
                _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>>(
                  v27,
                  byte_14027C456,
                  v28,
                  v29,
                  &v35,
                  &v39,
                  (__int64)&v37);
              }
            }
            else
            {
              if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
                || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
                || *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u )
              {
                v10 = 0;
              }
              v14 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
              if ( v10 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              {
                v15 = W32GetUserSessionState(WPP_GLOBAL_Control, v11);
                LOBYTE(v16) = v14;
                LOBYTE(v17) = v10;
                WPP_RECORDER_AND_TRACE_SF_qqd(
                  *((_QWORD *)WPP_GLOBAL_Control + 3),
                  v17,
                  v16,
                  *(_QWORD *)(v15 + 19336),
                  2,
                  1,
                  24,
                  (__int64)&WPP_5ea806e723ba3833aff6fb8b08279cc2_Traceguids,
                  v9,
                  (char)ApcContext,
                  Status);
              }
              if ( (unsigned int)dword_14029EE58 > 5 && tlgKeywordOn((__int64)&dword_14029EE58, 0x400000000000LL) )
              {
                v18 = *((_DWORD *)ApcContext + 12);
                v39 = (const WCHAR *)*((_QWORD *)ApcContext + 25);
                v37 = Status;
                v35 = RimDeviceTypeToRimInputTypeString((__int64)ApcContext, v18);
                _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>>(
                  v19,
                  byte_14027C4AF,
                  v20,
                  v21,
                  &v35,
                  &v39,
                  (__int64)&v37);
              }
              RIMStartDeviceSpecificRead(v9, (__int64)ApcContext);
            }
          }
        }
        else
        {
          ApcContext[189] = 0;
          *((LARGE_INTEGER *)ApcContext + 283) = KeQueryPerformanceCounter(0LL);
          *((_QWORD *)ApcContext + 286) = MEMORY[0xFFFFF78000000014];
          rimProcessDeviceBufferAndStartRead((struct RawInputManagerObject *)v9, (struct RIMDEV *)ApcContext, 1);
        }
      }
      RIMUnlockExclusive(v9 + 760);
    }
    else if ( Status >= 0 )
    {
      if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
        || (v30 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u) )
      {
        v30 = 0;
      }
      v31 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v30 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v32 = W32GetUserSessionState(WPP_GLOBAL_Control, v8);
        LOBYTE(v33) = v31;
        LOBYTE(v34) = v30;
        WPP_RECORDER_AND_TRACE_SF_qq(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v34,
          v33,
          *(_QWORD *)(v32 + 19336),
          2,
          1,
          26,
          (__int64)&WPP_5ea806e723ba3833aff6fb8b08279cc2_Traceguids,
          v9,
          ApcContext);
      }
    }
    if ( v38 )
      RIMUnlockExclusive(v9 + 104);
    if ( IoStatusBlock->Status != -1073741536
      && !*((_DWORD *)ApcContext + 12)
      && (*((_DWORD *)ApcContext + 42) & 0x8000000) != 0 )
    {
      RIMApplyPTPConfigRemedyWorker(v9, (__int64)ApcContext);
    }
  }
  ObfDereferenceObject(*((PVOID *)ApcContext + 4));
  InputTraceLogging::ThreadLockedPerfRegion::~ThreadLockedPerfRegion((InputTraceLogging::ThreadLockedPerfRegion *)&v36);
}
