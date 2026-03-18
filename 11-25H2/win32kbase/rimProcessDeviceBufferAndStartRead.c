/*
 * XREFs of rimProcessDeviceBufferAndStartRead @ 0x140125744
 * Callers:
 *     rimCompleteReads @ 0x1400357E4 (rimCompleteReads.c)
 *     rimFindPausedDeviceAndCompleteRead @ 0x140036768 (rimFindPausedDeviceAndCompleteRead.c)
 *     RIMIDEInjectDeviceInput @ 0x140124E3C (RIMIDEInjectDeviceInput.c)
 *     RIMIDE_InjectGenericHidInput @ 0x1401252D8 (RIMIDE_InjectGenericHidInput.c)
 *     RIMInjectInput @ 0x14015AA60 (RIMInjectInput.c)
 *     rimInputApc @ 0x140182D20 (rimInputApc.c)
 *     RIMQueueKeyboardInput @ 0x1401EA96C (RIMQueueKeyboardInput.c)
 *     RIMQueueMouseInput @ 0x1401EAB30 (RIMQueueMouseInput.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$00@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$00@@@Z @ 0x140002598 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$00@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgPr.c)
 *     RIMStartDeviceSpecificRead @ 0x140033FDC (RIMStartDeviceSpecificRead.c)
 *     rimObsDeliverToExclusiveObservers @ 0x140034480 (rimObsDeliverToExclusiveObservers.c)
 *     rimSignalReadComplete @ 0x140035980 (rimSignalReadComplete.c)
 *     RIMIsInputSuppressed @ 0x140035E74 (RIMIsInputSuppressed.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x1400366AC (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     WPP_RECORDER_AND_TRACE_SF_qq @ 0x14006101C (WPP_RECORDER_AND_TRACE_SF_qq.c)
 *     _tlgKeywordOn @ 0x14009E9B0 (_tlgKeywordOn.c)
 *     rimObsDeliverToNonExclusiveObservers @ 0x1400BE5B8 (rimObsDeliverToNonExclusiveObservers.c)
 *     WPP_RECORDER_AND_TRACE_SF_D @ 0x1400C16E0 (WPP_RECORDER_AND_TRACE_SF_D.c)
 *     ?ProcessDeviceBuffer@RIM@InputTraceLogging@@SAXPEBURIMDEV@@@Z @ 0x1400CFD88 (-ProcessDeviceBuffer@RIM@InputTraceLogging@@SAXPEBURIMDEV@@@Z.c)
 *     RIMProcessAnyPointerDeviceInput @ 0x1400D6900 (RIMProcessAnyPointerDeviceInput.c)
 *     ?DropInput@RIM@InputTraceLogging@@SAXPEBURIMDEV@@W4DropReason@12@@Z @ 0x1400D74EC (-DropInput@RIM@InputTraceLogging@@SAXPEBURIMDEV@@W4DropReason@12@@Z.c)
 *     rimProcessKeyboardInput @ 0x1400E68C0 (rimProcessKeyboardInput.c)
 *     rimProcessMouseInput @ 0x1400E694C (rimProcessMouseInput.c)
 *     EtwTracePointerDeviceReadStop @ 0x1401045D0 (EtwTracePointerDeviceReadStop.c)
 *     EtwTracePointerDeviceReadStart @ 0x140104DE0 (EtwTracePointerDeviceReadStart.c)
 *     RimDeviceTypeToRimInputTypeString @ 0x140114428 (RimDeviceTypeToRimInputTypeString.c)
 *     ?ResumeDevice@RIM@InputTraceLogging@@SAXPEBURIMDEV@@@Z @ 0x14012A008 (-ResumeDevice@RIM@InputTraceLogging@@SAXPEBURIMDEV@@@Z.c)
 *     ?PauseDevice@RIM@InputTraceLogging@@SAXPEBURIMDEV@@@Z @ 0x14012B43C (-PauseDevice@RIM@InputTraceLogging@@SAXPEBURIMDEV@@@Z.c)
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapSz@G@@U2@U?$_tlgWrapperByVal@$07@@U3@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapSz@G@@4AEBU?$_tlgWrapperByVal@$07@@5AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x1401330D0 (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapSz@G@@U2@U-$_tlgWrapperByVal@$07@@U3@U-$_tlgWrapperByVal@$0.c)
 *     rimIsPointerInputAllowed @ 0x14017E6E4 (rimIsPointerInputAllowed.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019E99C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     RIMTransferInjectionDeviceDataFifoToDataBuffer @ 0x1401EAD20 (RIMTransferInjectionDeviceDataFifoToDataBuffer.c)
 *     rimProcessHidInput @ 0x1401F11FC (rimProcessHidInput.c)
 *     rimProcessInjectedDeviceBuffers @ 0x1401F1380 (rimProcessInjectedDeviceBuffers.c)
 *     RIMHandleTTMDeviceInput @ 0x1401F6924 (RIMHandleTTMDeviceInput.c)
 */

__int64 __fastcall rimProcessDeviceBufferAndStartRead(struct RawInputManagerObject *a1, struct RIMDEV *a2, char a3)
{
  __int64 v5; // rcx
  char v6; // r13
  __int64 v7; // rdx
  char v8; // r15
  char v9; // bl
  bool v10; // r14
  __int64 UserSessionState; // rax
  int v12; // r8d
  int v13; // edx
  LARGE_INTEGER PerformanceCounter; // rax
  unsigned int v15; // r11d
  _DWORD *v16; // rbx
  LARGE_INTEGER v17; // r14
  int v18; // r9d
  __int64 v19; // r11
  __int64 v20; // rax
  unsigned int v21; // ecx
  int v22; // edx
  int v23; // ecx
  int v24; // r8d
  int v25; // r9d
  __int64 v26; // rcx
  int v27; // eax
  __int64 v28; // rdx
  int v29; // r12d
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // rcx
  int v33; // eax
  _BYTE *v34; // rdx
  char *v35; // rbx
  _QWORD *v36; // rbx
  int v37; // ecx
  int v38; // ecx
  __int64 v39; // rdx
  char v40; // r14
  bool v41; // r13
  int v42; // ebx
  __int64 v43; // rax
  int v44; // r8d
  int v45; // edx
  __int64 v46; // rdx
  int v47; // eax
  char v48; // bl
  bool v49; // r14
  __int64 v50; // rax
  int v51; // r8d
  int v52; // edx
  _QWORD *v53; // rdi
  _QWORD *v54; // rax
  __int64 v55; // r8
  __int64 v56; // r9
  __int64 v58; // [rsp+50h] [rbp-30h] BYREF
  __int64 v59; // [rsp+58h] [rbp-28h] BYREF
  const wchar_t *v60; // [rsp+60h] [rbp-20h] BYREF
  __int64 v61; // [rsp+68h] [rbp-18h] BYREF
  _QWORD v62[2]; // [rsp+70h] [rbp-10h] BYREF
  int v63; // [rsp+C8h] [rbp+48h] BYREF
  char v64; // [rsp+D0h] [rbp+50h]
  unsigned int v65; // [rsp+D8h] [rbp+58h]

  v64 = a3;
  v6 = 0;
  if ( !(unsigned int)RIMIsInputSuppressed((__int64)a2)
    && (*((_DWORD *)a2 + 46) & 0x40) == 0
    && *(_BYTE *)W32GetUserGdiSessionState(v5) )
  {
    v65 = RIMHandleTTMDeviceInput(a2);
    v8 = v65;
    if ( (v65 & 0x80000000) == 0 )
      goto LABEL_13;
    if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
      || (v9 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
    {
      v9 = 0;
    }
    v10 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v9 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control, v7);
      LOBYTE(v12) = v10;
      LOBYTE(v13) = v9;
      WPP_RECORDER_AND_TRACE_SF_D(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v13,
        v12,
        *(_QWORD *)(UserSessionState + 19336),
        4,
        1,
        21,
        (__int64)&WPP_5ea806e723ba3833aff6fb8b08279cc2_Traceguids,
        v8);
    }
  }
  v65 = 0;
LABEL_13:
  ++*((_DWORD *)a2 + 577);
  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  v15 = *((_DWORD *)a2 + 577);
  v16 = (_DWORD *)((char *)a2 + 2320);
  v17 = PerformanceCounter;
  if ( v15 == 100 * (v15 / 0x64) && !*v16
    || *v16
    && PerformanceCounter.QuadPart - *((_QWORD *)a2 + 289) >= (signed __int64)(600000 * gliQpcFreq.QuadPart / 0x3E8uLL)
    && !(v15 % 0x64) )
  {
    if ( (unsigned int)dword_14029EE58 > 5 && tlgKeywordOn((__int64)&dword_14029EE58, 0x400000000000LL) )
    {
      v58 = v19;
      v63 = v18 == 0;
      if ( *((char *)a2 + 184) < 0 && (v20 = *((_QWORD *)a2 + 57)) != 0 )
        v21 = *(_DWORD *)(v20 + 776);
      else
        v21 = -1;
      v22 = *((_DWORD *)a2 + 12);
      v59 = v21;
      v60 = RimDeviceTypeToRimInputTypeString((__int64)a2, v22);
      v61 = *((_QWORD *)a2 + 25);
      v62[0] = "rimProcessDeviceBufferAndStartRead";
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>>(
        v23,
        (unsigned int)&unk_14027C684,
        v24,
        v25,
        (__int64)v62,
        (__int64)&v61,
        (__int64)&v60,
        (__int64)&v59,
        (__int64)&v58,
        (__int64)&v63);
    }
    if ( !*v16 )
      *((_DWORD *)a2 + 580) = 1;
    *((LARGE_INTEGER *)a2 + 289) = v17;
  }
  InputTraceLogging::RIM::ProcessDeviceBuffer(a2);
  v27 = *((_DWORD *)a2 + 42);
  v28 = 2LL;
  v29 = -__CFSHR__(v27, 7);
  if ( *((_DWORD *)a2 + 12) < 2u )
  {
    if ( (v27 & 0x2000) != 0 || __CFSHR__(*((_DWORD *)a2 + 42), 7) )
    {
      v6 = 1;
      RIMTransferInjectionDeviceDataFifoToDataBuffer(v26, a2);
    }
  }
  else
  {
    if ( *((_DWORD *)a2 + 12) != 2 )
      return v65;
    if ( (v27 & 0x10000) == 0 && (*((_DWORD *)a2 + 46) & 0x80u) != 0 )
    {
      if ( !(unsigned int)rimObsDeliverToExclusiveObservers(a2, 2LL) )
      {
        rimObsDeliverToNonExclusiveObservers(a2, v30);
        if ( (*((_DWORD *)a2 + 46) & 0x80u) != 0 )
        {
          if ( (unsigned int)rimIsPointerInputAllowed(a2) )
          {
            EtwTracePointerDeviceReadStart(v31);
            RIMProcessAnyPointerDeviceInput(a1, (__int64)a2);
            EtwTracePointerDeviceReadStop(v32);
          }
        }
      }
      v33 = *((_DWORD *)a2 + 42);
      if ( (v33 & 0x2000) == 0 && !v29 )
      {
        if ( (v33 & 0x200) != 0 )
        {
          v63 = 0x20000;
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1489LL);
        }
        goto LABEL_95;
      }
      return v65;
    }
  }
  if ( !(unsigned int)rimObsDeliverToExclusiveObservers(a2, v28) )
  {
    v34 = (char *)a1 + 776;
    if ( *((_BYTE *)a1 + 776) )
    {
      v35 = (char *)a1 + 776;
      if ( (*((_DWORD *)a2 + 42) & 0x200) != 0 )
        goto LABEL_48;
      v36 = (_QWORD *)((char *)a1 + 784);
      if ( (_QWORD *)*v36 == v36 )
      {
        v35 = (char *)a1 + 776;
LABEL_48:
        *v34 = 0;
        if ( (*((_DWORD *)a2 + 42) & 0x200) != 0 )
        {
          InputTraceLogging::RIM::ResumeDevice(a2);
          v34 = v35;
        }
        *((_DWORD *)a2 + 42) &= ~0x200u;
        v37 = *((_DWORD *)a2 + 12);
        if ( v37 )
        {
          v38 = v37 - 1;
          if ( v38 )
          {
            if ( v38 == 1 )
            {
              rimProcessHidInput(a1);
            }
            else
            {
              *v34 = 1;
              InputTraceLogging::RIM::DropInput((__int64)a2, 9u);
              if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
                || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
                || (v40 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u) )
              {
                v40 = 0;
              }
              v41 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
              if ( v40 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              {
                v42 = *((_DWORD *)a2 + 12);
                v43 = W32GetUserSessionState(WPP_GLOBAL_Control, v39);
                LOBYTE(v44) = v41;
                LOBYTE(v45) = v40;
                WPP_RECORDER_AND_TRACE_SF_d(
                  *((_QWORD *)WPP_GLOBAL_Control + 3),
                  v45,
                  v44,
                  *(_QWORD *)(v43 + 19336),
                  3,
                  1,
                  22,
                  (__int64)&WPP_5ea806e723ba3833aff6fb8b08279cc2_Traceguids,
                  v42);
              }
            }
          }
          else
          {
            rimProcessKeyboardInput((__int64)a1, (__int64)a2);
          }
        }
        else
        {
          rimProcessMouseInput((__int64)a1, (__int64)a2);
        }
        rimSignalReadComplete(a1, (LARGE_INTEGER *)a2, (struct _IO_STATUS_BLOCK *)a2 + 15);
        if ( *((_DWORD *)a2 + 12) <= 1u )
        {
          v47 = *((_DWORD *)a2 + 42);
          if ( (v47 & 0x2000) != 0 || (v47 & 0x40) != 0 )
            rimProcessInjectedDeviceBuffers(a1, a2);
        }
        if ( *((_BYTE *)a1 + 776) && !_bittest((const signed __int32 *)a2 + 42, 0xDu) && !v29 )
        {
          if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
            || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
            || (v48 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u) )
          {
            v48 = 0;
          }
          v49 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          if ( v48 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            v50 = W32GetUserSessionState(WPP_GLOBAL_Control, v46);
            LOBYTE(v51) = v49;
            LOBYTE(v52) = v48;
            WPP_RECORDER_AND_TRACE_SF_qq(
              *((_QWORD *)WPP_GLOBAL_Control + 3),
              v52,
              v51,
              *(_QWORD *)(v50 + 19336),
              2,
              1,
              23,
              (__int64)&WPP_5ea806e723ba3833aff6fb8b08279cc2_Traceguids,
              (char)a1,
              a2);
          }
          goto LABEL_95;
        }
        return v65;
      }
    }
    else
    {
      v36 = (_QWORD *)((char *)a1 + 784);
    }
    if ( (*((_DWORD *)a2 + 42) & 0x200) != 0 )
    {
      if ( v64 )
      {
        if ( !v6 )
        {
          InputTraceLogging::RIM::DropInput((__int64)a2, 6u);
          if ( !_bittest((const signed __int32 *)a2 + 42, 0xDu)
            && *((_DWORD *)a2 + 12) <= 1u
            && (unsigned int)dword_14029EF38 > 5
            && tlgKeywordOn((__int64)&dword_14029EF38, 0x400000000000LL) )
          {
            LOBYTE(v63) = *((_BYTE *)a2 + 48);
            v62[0] = 0x1000000LL;
            _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<1>>(
              (__int64)&dword_14029EF38,
              (__int64)&unk_14027C702,
              v55,
              v56,
              (__int64)v62,
              (__int64)&v63);
          }
        }
      }
      if ( *((struct RIMDEV **)a2 + 11) == (struct RIMDEV *)((char *)a2 + 88) )
      {
        v63 = 0x20000;
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1449LL);
      }
    }
    else
    {
      InputTraceLogging::RIM::PauseDevice(a2);
      *((_DWORD *)a2 + 42) |= 0x200u;
      v53 = (_QWORD *)((char *)a2 + 88);
      if ( (_QWORD *)*v53 != v53 )
      {
        v63 = 0x20000;
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1426LL);
      }
      v54 = (_QWORD *)v36[1];
      if ( (_QWORD *)*v54 != v36 )
        __fastfail(3u);
      *v53 = v36;
      v53[1] = v54;
      *v54 = v53;
      v36[1] = v53;
    }
    return v65;
  }
  if ( !_bittest((const signed __int32 *)a2 + 42, 0xDu) && !v29 )
LABEL_95:
    RIMStartDeviceSpecificRead((__int64)a1, (__int64)a2);
  return v65;
}
