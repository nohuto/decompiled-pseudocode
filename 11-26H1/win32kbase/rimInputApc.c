/*
 * XREFs of rimInputApc @ 0x14009DFA0
 * Callers:
 *     <none>
 * Callees:
 *     RIMLockExclusive @ 0x14005A6D0 (RIMLockExclusive.c)
 *     WPP_RECORDER_AND_TRACE_SF_qqd @ 0x14006E614 (WPP_RECORDER_AND_TRACE_SF_qqd.c)
 *     WPP_RECORDER_AND_TRACE_SF_qq @ 0x14006F7DC (WPP_RECORDER_AND_TRACE_SF_qq.c)
 *     RIMStartDeviceSpecificRead @ 0x1400996FC (RIMStartDeviceSpecificRead.c)
 *     ??0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z @ 0x14009DD20 (--0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z.c)
 *     ?Cleanup@ThreadLockedPerfRegion@InputTraceLogging@@AEAAXXZ @ 0x14009DF14 (-Cleanup@ThreadLockedPerfRegion@InputTraceLogging@@AEAAXXZ.c)
 *     ?InputApc@RIM@InputTraceLogging@@SAXPEBURIMDEV@@PEBU_IO_STATUS_BLOCK@@@Z @ 0x14009E580 (-InputApc@RIM@InputTraceLogging@@SAXPEBURIMDEV@@PEBU_IO_STATUS_BLOCK@@@Z.c)
 *     rimProcessDeviceBufferAndStartRead @ 0x14009E9D0 (rimProcessDeviceBufferAndStartRead.c)
 *     _tlgKeywordOn @ 0x1400E4F60 (_tlgKeywordOn.c)
 *     McTemplateK0dq_EtwWriteTransfer @ 0x14012B4B0 (McTemplateK0dq_EtwWriteTransfer.c)
 *     RIMApplyPTPConfigRemedyWorker @ 0x14013846C (RIMApplyPTPConfigRemedyWorker.c)
 *     RimDeviceTypeToRimInputTypeString @ 0x14015EB68 (RimDeviceTypeToRimInputTypeString.c)
 *     ??$Write@U?$_tlgWrapSz@G@@U1@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@3AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x14016536C (--$Write@U-$_tlgWrapSz@G@@U1@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvide.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

void __fastcall rimInputApc(char *ApcContext, const struct _IO_STATUS_BLOCK *IoStatusBlock, ULONG Reserved)
{
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // rdi
  NTSTATUS Status; // r15d
  int v9; // edx
  int v10; // r8d
  __int64 v11; // r14
  int v12; // edx
  __int64 v13; // r8
  unsigned int v14; // eax
  __int64 v15; // rdx
  __int64 v16; // rcx
  void **v17; // rbx
  __int64 *CurrentThreadWin32Thread; // rax
  int v19; // edx
  int v20; // r8d
  char v21; // bl
  bool v22; // r15
  __int64 v23; // rax
  int v24; // r8d
  int v25; // edx
  char v26; // cl
  char v27; // bl
  char v28; // r13
  __int64 v29; // rax
  __int64 v30; // rdx
  int v31; // ecx
  int v32; // r8d
  int v33; // r9d
  char v34; // bl
  char v35; // r13
  __int64 UserSessionState; // rax
  __int64 v37; // rdx
  int v38; // ecx
  int v39; // r8d
  int v40; // r9d
  __int64 v41; // [rsp+60h] [rbp-10h] BYREF
  __int64 v42; // [rsp+68h] [rbp-8h] BYREF
  int v43; // [rsp+B0h] [rbp+40h] BYREF
  int v44; // [rsp+B8h] [rbp+48h]
  void **v45; // [rsp+C8h] [rbp+58h] BYREF

  InputTraceLogging::ThreadLockedPerfRegion::ThreadLockedPerfRegion(&v45, "InputApc", 0LL);
  v7 = 0LL;
  if ( ApcContext + 240 != (char *)IoStatusBlock )
  {
    v43 = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1464LL);
  }
  *(struct _IO_STATUS_BLOCK *)(ApcContext + 136) = *IoStatusBlock;
  Status = IoStatusBlock->Status;
  if ( (Microsoft_Windows_Win32kEnableBits & 0x4000) != 0 )
    McTemplateK0dq_EtwWriteTransfer(
      v5,
      &CompleteInputDeviceRead,
      v6,
      (unsigned __int8)ApcContext[48],
      IoStatusBlock->Status);
  InputTraceLogging::RIM::InputApc((const struct RIMDEV *)ApcContext, IoStatusBlock);
  v11 = *((_QWORD *)ApcContext + 40);
  if ( !*(_BYTE *)(v11 + 81) && !*(_BYTE *)(v11 + 80) )
  {
    if ( ApcContext + 240 != (char *)IoStatusBlock )
    {
      v43 = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1479LL);
    }
    if ( Status < 0 || *((_DWORD *)ApcContext + 12) == 2 && (*((_DWORD *)ApcContext + 46) & 0x80u) != 0 )
    {
      v44 = 1;
      if ( *(_QWORD *)(v11 + 832) && !*(_BYTE *)(v11 + 776) )
      {
        v43 = 0x20000;
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1496LL);
      }
      RIMLockExclusive(v11 + 104);
    }
    else
    {
      v44 = 0;
    }
    if ( *((_QWORD *)ApcContext + 26) )
    {
      KeEnterCriticalRegion();
      ExAcquirePushLockExclusiveEx(v11 + 760, 0LL);
      *(_QWORD *)(v11 + 768) = KeGetCurrentThread();
      v14 = *((_DWORD *)ApcContext + 42) & 0xFFFFFF7F;
      *((_DWORD *)ApcContext + 42) = v14;
      if ( !*(_BYTE *)(v11 + 81) && !*(_BYTE *)(v11 + 80) )
      {
        if ( Status < 0 )
        {
          if ( (v14 & 8) == 0 && Status != -1073741536 )
          {
            v26 = ApcContext[189];
            ApcContext[189] = v26 + 1;
            if ( (unsigned __int8)v26 >= 5u )
            {
              if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
                || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
                || (v34 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u) )
              {
                v34 = 0;
              }
              v35 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
              if ( v34 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              {
                UserSessionState = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v12, v13);
                WPP_RECORDER_AND_TRACE_SF_qqd(
                  *((_QWORD *)WPP_GLOBAL_Control + 3),
                  v34,
                  v35,
                  *(_QWORD *)(UserSessionState + 19368),
                  2u,
                  1u,
                  0x19u,
                  (__int64)&WPP_8b3d8589f9583a031a0fbbc3118bab56_Traceguids,
                  v11,
                  ApcContext,
                  Status);
              }
              if ( (unsigned int)dword_1402A9E78 > 5
                && (unsigned __int8)tlgKeywordOn(&dword_1402A9E78, 0x400000000000LL) )
              {
                v37 = *((unsigned int *)ApcContext + 12);
                v42 = *((_QWORD *)ApcContext + 25);
                v43 = Status;
                v41 = RimDeviceTypeToRimInputTypeString(ApcContext, v37);
                _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>>(
                  v38,
                  (unsigned int)&unk_1402868F1,
                  v39,
                  v40,
                  (__int64)&v41,
                  (__int64)&v42,
                  (__int64)&v43);
              }
            }
            else
            {
              if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
                || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
                || (v27 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u) )
              {
                v27 = 0;
              }
              v28 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
              if ( v27 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              {
                v29 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v12, v13);
                WPP_RECORDER_AND_TRACE_SF_qqd(
                  *((_QWORD *)WPP_GLOBAL_Control + 3),
                  v27,
                  v28,
                  *(_QWORD *)(v29 + 19368),
                  2u,
                  1u,
                  0x18u,
                  (__int64)&WPP_8b3d8589f9583a031a0fbbc3118bab56_Traceguids,
                  v11,
                  ApcContext,
                  Status);
              }
              if ( (unsigned int)dword_1402A9E78 > 5
                && (unsigned __int8)tlgKeywordOn(&dword_1402A9E78, 0x400000000000LL) )
              {
                v30 = *((unsigned int *)ApcContext + 12);
                v41 = *((_QWORD *)ApcContext + 25);
                v43 = Status;
                v42 = RimDeviceTypeToRimInputTypeString(ApcContext, v30);
                _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>>(
                  v31,
                  (unsigned int)&unk_14028689E,
                  v32,
                  v33,
                  (__int64)&v42,
                  (__int64)&v41,
                  (__int64)&v43);
              }
              RIMStartDeviceSpecificRead(v11, (__int64)ApcContext, v13);
            }
          }
        }
        else
        {
          ApcContext[189] = 0;
          *((LARGE_INTEGER *)ApcContext + 282) = KeQueryPerformanceCounter(0LL);
          *((_QWORD *)ApcContext + 285) = MEMORY[0xFFFFF78000000014];
          rimProcessDeviceBufferAndStartRead((struct RawInputManagerObject *)v11, (struct RIMDEV *)ApcContext);
        }
      }
      *(_QWORD *)(v11 + 768) = 0LL;
      ExReleasePushLockExclusiveEx(v11 + 760);
      KeLeaveCriticalRegion();
    }
    else if ( Status >= 0 )
    {
      if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
        || (v21 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u) )
      {
        v21 = 0;
      }
      v22 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v21 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v23 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v9, v10);
        LOBYTE(v24) = v22;
        LOBYTE(v25) = v21;
        WPP_RECORDER_AND_TRACE_SF_qq(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v25,
          v24,
          *(_QWORD *)(v23 + 19368),
          2,
          1,
          26,
          (__int64)&WPP_8b3d8589f9583a031a0fbbc3118bab56_Traceguids,
          v11,
          ApcContext);
      }
    }
    if ( v44 )
    {
      *(_QWORD *)(v11 + 112) = 0LL;
      ExReleasePushLockExclusiveEx(v11 + 104);
      KeLeaveCriticalRegion();
    }
    if ( IoStatusBlock->Status != -1073741536
      && !*((_DWORD *)ApcContext + 12)
      && (*((_DWORD *)ApcContext + 42) & 0x8000000) != 0 )
    {
      RIMApplyPTPConfigRemedyWorker(v11, ApcContext);
    }
  }
  ObfDereferenceObject(*((PVOID *)ApcContext + 4));
  v17 = v45;
  if ( v45 )
  {
    CurrentThreadWin32Thread = (__int64 *)PsGetCurrentThreadWin32Thread(v16, v15);
    if ( CurrentThreadWin32Thread )
      v7 = *CurrentThreadWin32Thread;
    *(_QWORD *)(v7 + 376) = v17[6];
    InputTraceLogging::ThreadLockedPerfRegion::Cleanup(&v45, v19, v20);
  }
}
