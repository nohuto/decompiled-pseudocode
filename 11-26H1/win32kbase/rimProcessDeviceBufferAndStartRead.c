/*
 * XREFs of rimProcessDeviceBufferAndStartRead @ 0x14009E9D0
 * Callers:
 *     RIMIDE_InjectGenericHidInput @ 0x14005FCEC (RIMIDE_InjectGenericHidInput.c)
 *     rimFindPausedDeviceAndCompleteRead @ 0x1400977A8 (rimFindPausedDeviceAndCompleteRead.c)
 *     rimCompleteReads @ 0x1400987C0 (rimCompleteReads.c)
 *     rimInputApc @ 0x14009DFA0 (rimInputApc.c)
 *     RIMIDEInjectDeviceInput @ 0x140154A10 (RIMIDEInjectDeviceInput.c)
 *     RIMQueueMouseInput @ 0x140155B0C (RIMQueueMouseInput.c)
 *     RIMInjectInput @ 0x14019AE50 (RIMInjectInput.c)
 *     RIMQueueKeyboardInput @ 0x1402098CC (RIMQueueKeyboardInput.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$00@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$00@@@Z @ 0x140002EA8 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$00@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgPr.c)
 *     RIMProcessAnyPointerDeviceInput @ 0x1400477E4 (RIMProcessAnyPointerDeviceInput.c)
 *     EtwTracePointerDeviceReadStart @ 0x140064390 (EtwTracePointerDeviceReadStart.c)
 *     EtwTracePointerDeviceReadStop @ 0x1400643C0 (EtwTracePointerDeviceReadStop.c)
 *     WPP_RECORDER_AND_TRACE_SF_qq @ 0x14006F7DC (WPP_RECORDER_AND_TRACE_SF_qq.c)
 *     rimSignalReadComplete @ 0x140098988 (rimSignalReadComplete.c)
 *     RIMIsInputSuppressed @ 0x140098E80 (RIMIsInputSuppressed.c)
 *     RIMStartDeviceSpecificRead @ 0x1400996FC (RIMStartDeviceSpecificRead.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x140099D08 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     rimObsDeliverToExclusiveObservers @ 0x140099E6C (rimObsDeliverToExclusiveObservers.c)
 *     ?ProcessDeviceBuffer@RIM@InputTraceLogging@@SAXPEBURIMDEV@@@Z @ 0x1400A0400 (-ProcessDeviceBuffer@RIM@InputTraceLogging@@SAXPEBURIMDEV@@@Z.c)
 *     rimProcessMouseInput @ 0x1400A0798 (rimProcessMouseInput.c)
 *     rimObsDeliverToNonExclusiveObservers @ 0x1400A11F4 (rimObsDeliverToNonExclusiveObservers.c)
 *     rimProcessHidInput @ 0x1400A19E0 (rimProcessHidInput.c)
 *     rimProcessKeyboardInput @ 0x1400A1BE8 (rimProcessKeyboardInput.c)
 *     ?DropInput@RIM@InputTraceLogging@@SAXPEBURIMDEV@@W4DropReason@12@@Z @ 0x1400A1E74 (-DropInput@RIM@InputTraceLogging@@SAXPEBURIMDEV@@W4DropReason@12@@Z.c)
 *     _tlgKeywordOn @ 0x1400E4F60 (_tlgKeywordOn.c)
 *     WPP_RECORDER_AND_TRACE_SF_D @ 0x1400F7C80 (WPP_RECORDER_AND_TRACE_SF_D.c)
 *     rimIsPointerInputAllowed @ 0x1401439BC (rimIsPointerInputAllowed.c)
 *     RimDeviceTypeToRimInputTypeString @ 0x14015EB68 (RimDeviceTypeToRimInputTypeString.c)
 *     ?PauseDevice@RIM@InputTraceLogging@@SAXPEBURIMDEV@@@Z @ 0x140167D54 (-PauseDevice@RIM@InputTraceLogging@@SAXPEBURIMDEV@@@Z.c)
 *     ?ResumeDevice@RIM@InputTraceLogging@@SAXPEBURIMDEV@@@Z @ 0x140167E38 (-ResumeDevice@RIM@InputTraceLogging@@SAXPEBURIMDEV@@@Z.c)
 *     RIMTransferInjectionDeviceDataFifoToDataBuffer @ 0x1401685BC (RIMTransferInjectionDeviceDataFifoToDataBuffer.c)
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapSz@G@@U2@U?$_tlgWrapperByVal@$07@@U3@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapSz@G@@4AEBU?$_tlgWrapperByVal@$07@@5AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x14016AFBC (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapSz@G@@U2@U-$_tlgWrapperByVal@$07@@U3@U-$_tlgWrapperByVal@$0.c)
 *     rimProcessInjectedDeviceBuffers @ 0x14017ECF0 (rimProcessInjectedDeviceBuffers.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     RIMHandleTTMDeviceInput @ 0x140211944 (RIMHandleTTMDeviceInput.c)
 */

__int64 __fastcall rimProcessDeviceBufferAndStartRead(struct RawInputManagerObject *a1, struct RIMDEV *a2, char a3)
{
  char v5; // r13
  int v6; // edx
  int v7; // r8d
  char v8; // r15
  LARGE_INTEGER PerformanceCounter; // rax
  unsigned int v10; // r11d
  _DWORD *v11; // rbx
  LARGE_INTEGER v12; // rsi
  int v13; // r8d
  int v14; // eax
  const signed __int32 *v15; // rbx
  __int64 v16; // rcx
  int v17; // edx
  int v18; // r12d
  int v19; // eax
  __int64 v20; // r8
  _BYTE *v21; // rdx
  char *v22; // rbx
  _QWORD *v23; // rbx
  int v24; // ecx
  int v25; // edx
  int v26; // eax
  int v27; // eax
  _QWORD *v29; // rdi
  _QWORD *v30; // rax
  __int64 v31; // rcx
  __int64 v32; // rcx
  int v33; // eax
  int v34; // ecx
  char v35; // bl
  bool v36; // si
  __int64 v37; // rax
  int v38; // r8d
  int v39; // edx
  int v40; // r9d
  __int64 v41; // r11
  __int64 v42; // rax
  unsigned int v43; // ecx
  char v44; // bl
  bool v45; // si
  __int64 UserSessionState; // rax
  int v47; // r8d
  int v48; // edx
  __int64 v49; // rdx
  int v50; // ecx
  int v51; // r8d
  int v52; // r9d
  int v53; // edx
  int v54; // r8d
  bool v55; // si
  bool v56; // r13
  int v57; // ebx
  __int64 v58; // rax
  int v59; // r8d
  int v60; // edx
  __int64 v61; // r8
  __int64 v62; // r9
  __int64 v63; // [rsp+50h] [rbp-30h] BYREF
  __int64 v64; // [rsp+58h] [rbp-28h] BYREF
  __int64 v65; // [rsp+60h] [rbp-20h] BYREF
  __int64 v66; // [rsp+68h] [rbp-18h] BYREF
  _QWORD v67[2]; // [rsp+70h] [rbp-10h] BYREF
  int v68; // [rsp+C8h] [rbp+48h] BYREF
  char v69; // [rsp+D0h] [rbp+50h]
  unsigned int v70; // [rsp+D8h] [rbp+58h]

  v69 = a3;
  v5 = 0;
  if ( (unsigned int)RIMIsInputSuppressed((__int64)a2)
    || (*((_DWORD *)a2 + 46) & 0x40) != 0
    || !*(_BYTE *)W32GetUserGdiSessionState() )
  {
LABEL_4:
    v70 = 0;
    goto LABEL_6;
  }
  v70 = RIMHandleTTMDeviceInput(a2);
  v8 = v70;
  if ( (v70 & 0x80000000) != 0 )
  {
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
      || (v44 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
    {
      v44 = 0;
    }
    v45 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v44 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      UserSessionState = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v6, v7);
      LOBYTE(v47) = v45;
      LOBYTE(v48) = v44;
      WPP_RECORDER_AND_TRACE_SF_D(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v48,
        v47,
        *(_QWORD *)(UserSessionState + 19368),
        4,
        1,
        21,
        (__int64)&WPP_8b3d8589f9583a031a0fbbc3118bab56_Traceguids,
        v8);
    }
    goto LABEL_4;
  }
LABEL_6:
  ++*((_DWORD *)a2 + 575);
  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  v10 = *((_DWORD *)a2 + 575);
  v11 = (_DWORD *)((char *)a2 + 2312);
  v12 = PerformanceCounter;
  if ( v10 == 100 * (v10 / 0x64) && !*v11
    || *v11
    && PerformanceCounter.QuadPart - *((_QWORD *)a2 + 288) >= (signed __int64)(600000 * gliQpcFreq.QuadPart / 0x3E8uLL)
    && !(v10 % 0x64) )
  {
    if ( (unsigned int)dword_1402A9E78 > 5 && (unsigned __int8)tlgKeywordOn(&dword_1402A9E78, 0x400000000000LL) )
    {
      v63 = v41;
      v68 = v40 == 0;
      if ( *((char *)a2 + 184) < 0 && (v42 = *((_QWORD *)a2 + 57)) != 0 )
        v43 = *(_DWORD *)(v42 + 776);
      else
        v43 = -1;
      v49 = *((unsigned int *)a2 + 12);
      v64 = v43;
      v65 = RimDeviceTypeToRimInputTypeString(a2, v49);
      v66 = *((_QWORD *)a2 + 25);
      v67[0] = "rimProcessDeviceBufferAndStartRead";
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>>(
        v50,
        (unsigned int)&unk_140286A96,
        v51,
        v52,
        (__int64)v67,
        (__int64)&v66,
        (__int64)&v65,
        (__int64)&v64,
        (__int64)&v63,
        (__int64)&v68);
    }
    if ( !*v11 )
      *((_DWORD *)a2 + 578) = 1;
    *((LARGE_INTEGER *)a2 + 288) = v12;
  }
  InputTraceLogging::RIM::ProcessDeviceBuffer(a2);
  v14 = *((_DWORD *)a2 + 12);
  v15 = (const signed __int32 *)((char *)a2 + 168);
  v16 = *((unsigned int *)a2 + 42);
  v17 = 2;
  v18 = -__CFSHR__(*((_DWORD *)a2 + 42), 7);
  if ( !v14 )
    goto LABEL_10;
  if ( v14 == 1 )
  {
    v15 = (const signed __int32 *)((char *)a2 + 168);
LABEL_10:
    if ( (v16 & 0x2000) != 0 || __CFSHR__(*((_DWORD *)a2 + 42), 7) )
    {
      v5 = 1;
      RIMTransferInjectionDeviceDataFifoToDataBuffer(v16, a2);
    }
    goto LABEL_12;
  }
  if ( v14 != 2 )
    return v70;
  if ( (v16 & 0x10000) == 0 && (*((_DWORD *)a2 + 46) & 0x80u) != 0 )
  {
    if ( !(unsigned int)rimObsDeliverToExclusiveObservers(a2, 2, v13) )
    {
      rimObsDeliverToNonExclusiveObservers(a2);
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
    if ( (v33 & 0x2000) == 0 && !v18 )
    {
      if ( (v33 & 0x200) != 0 )
      {
        v68 = 0x20000;
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1435LL);
      }
      goto LABEL_46;
    }
    return v70;
  }
LABEL_12:
  v19 = rimObsDeliverToExclusiveObservers(a2, v17, v13);
  v20 = 0LL;
  if ( !v19 )
  {
    v21 = (char *)a1 + 776;
    if ( *((_BYTE *)a1 + 776) )
    {
      v22 = (char *)a1 + 776;
      if ( (*((_DWORD *)a2 + 42) & 0x200) != 0 )
        goto LABEL_17;
      v23 = (_QWORD *)((char *)a1 + 784);
      if ( (_QWORD *)*v23 == v23 )
      {
        v22 = (char *)a1 + 776;
LABEL_17:
        *v21 = 0;
        if ( (*((_DWORD *)a2 + 42) & 0x200) != 0 )
        {
          InputTraceLogging::RIM::ResumeDevice(a2);
          v21 = v22;
        }
        *((_DWORD *)a2 + 42) &= ~0x200u;
        v24 = *((_DWORD *)a2 + 12);
        if ( v24 )
        {
          v34 = v24 - 1;
          if ( v34 )
          {
            if ( v34 == 1 )
            {
              rimProcessHidInput(a1, a2, v20);
            }
            else
            {
              *v21 = 1;
              InputTraceLogging::RIM::DropInput(a2, 9LL);
              v55 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
                 && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
                 && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 3u;
              v56 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
              if ( v55 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              {
                v57 = *((_DWORD *)a2 + 12);
                v58 = W32GetUserSessionState((unsigned int)&WPP_RECORDER_INITIALIZED, v53, v54);
                LOBYTE(v59) = v56;
                LOBYTE(v60) = v55;
                WPP_RECORDER_AND_TRACE_SF_d(
                  *((_QWORD *)WPP_GLOBAL_Control + 3),
                  v60,
                  v59,
                  *(_QWORD *)(v58 + 19368),
                  3,
                  1,
                  22,
                  (__int64)&WPP_8b3d8589f9583a031a0fbbc3118bab56_Traceguids,
                  v57);
              }
            }
          }
          else
          {
            rimProcessKeyboardInput(a1, a2, v20);
          }
        }
        else
        {
          rimProcessMouseInput(a1, a2, v20);
        }
        rimSignalReadComplete(a1, (LARGE_INTEGER *)a2, (struct _IO_STATUS_BLOCK *)a2 + 15);
        v26 = *((_DWORD *)a2 + 12);
        if ( !v26 || v26 == 1 )
        {
          v27 = *((_DWORD *)a2 + 42);
          if ( (v27 & 0x2000) != 0 || (v27 & 0x40) != 0 )
            rimProcessInjectedDeviceBuffers(a1, a2);
        }
        if ( *((_BYTE *)a1 + 776) && !_bittest((const signed __int32 *)a2 + 42, 0xDu) && !v18 )
        {
          if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
            || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
            || (v35 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u) )
          {
            v35 = 0;
          }
          v36 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          if ( v35 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            v37 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v25, v20);
            LOBYTE(v38) = v36;
            LOBYTE(v39) = v35;
            WPP_RECORDER_AND_TRACE_SF_qq(
              *((_QWORD *)WPP_GLOBAL_Control + 3),
              v39,
              v38,
              *(_QWORD *)(v37 + 19368),
              2,
              1,
              23,
              (__int64)&WPP_8b3d8589f9583a031a0fbbc3118bab56_Traceguids,
              (char)a1,
              a2);
          }
          goto LABEL_46;
        }
        return v70;
      }
    }
    else
    {
      v23 = (_QWORD *)((char *)a1 + 784);
    }
    if ( (*((_DWORD *)a2 + 42) & 0x200) != 0 )
    {
      if ( v69 )
      {
        if ( !v5 )
        {
          InputTraceLogging::RIM::DropInput(a2, 6LL);
          if ( !_bittest((const signed __int32 *)a2 + 42, 0xDu)
            && *((_DWORD *)a2 + 12) <= 1u
            && (unsigned int)dword_1402A9F58 > 5
            && (unsigned __int8)tlgKeywordOn(&dword_1402A9F58, 0x400000000000LL) )
          {
            LOBYTE(v68) = *((_BYTE *)a2 + 48);
            v67[0] = 0x1000000LL;
            _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<1>>(
              (__int64)&dword_1402A9F58,
              (__int64)&unk_140286B3C,
              v61,
              v62,
              (__int64)v67,
              (__int64)&v68);
          }
        }
      }
      if ( *((struct RIMDEV **)a2 + 11) == (struct RIMDEV *)((char *)a2 + 88) )
      {
        v68 = 0x20000;
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1395LL);
      }
    }
    else
    {
      InputTraceLogging::RIM::PauseDevice(a2);
      *((_DWORD *)a2 + 42) |= 0x200u;
      v29 = (_QWORD *)((char *)a2 + 88);
      if ( (_QWORD *)*v29 != v29 )
      {
        v68 = 0x20000;
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1372LL);
      }
      v30 = (_QWORD *)v23[1];
      if ( (_QWORD *)*v30 != v23 )
        __fastfail(3u);
      *v29 = v23;
      v29[1] = v30;
      *v30 = v29;
      v23[1] = v29;
    }
    return v70;
  }
  if ( !_bittest(v15, 0xDu) && !v18 )
LABEL_46:
    RIMStartDeviceSpecificRead((__int64)a1, (__int64)a2, v20);
  return v70;
}
