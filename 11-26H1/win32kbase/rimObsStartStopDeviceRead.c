/*
 * XREFs of rimObsStartStopDeviceRead @ 0x1402102A4
 * Callers:
 *     RawInputManagerObjectDelete @ 0x140130BFC (RawInputManagerObjectDelete.c)
 *     rimObsAddInputObserver @ 0x14020E44C (rimObsAddInputObserver.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_Dd @ 0x140070478 (WPP_RECORDER_AND_TRACE_SF_Dd.c)
 *     RIMHidTLCActive @ 0x140096204 (RIMHidTLCActive.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x140099D08 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x140099DD0 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ?HandleDirectStartStopDeviceReadRequest@CHidInput@@QEAAXXZ @ 0x1401112F0 (-HandleDirectStartStopDeviceReadRequest@CHidInput@@QEAAXXZ.c)
 *     RIMFreeHidTLCInfo @ 0x1401305B0 (RIMFreeHidTLCInfo.c)
 *     RIMAllocateAndLinkHidTLCInfo @ 0x140130784 (RIMAllocateAndLinkHidTLCInfo.c)
 *     RIMSearchHidTLCInfo @ 0x140130948 (RIMSearchHidTLCInfo.c)
 *     ??0RIMLOCKExclusiveIfNeeded@@QEAA@PEAURIMLOCK@@@Z @ 0x1401316BC (--0RIMLOCKExclusiveIfNeeded@@QEAA@PEAURIMLOCK@@@Z.c)
 *     ??1RIMLOCKExclusiveIfNeeded@@QEAA@XZ @ 0x1401690CC (--1RIMLOCKExclusiveIfNeeded@@QEAA@XZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall rimObsStartStopDeviceRead(__int64 a1, char a2, int a3)
{
  char v4; // si
  bool v5; // r14
  __int64 v6; // rax
  int v7; // r8d
  int v8; // edx
  unsigned __int16 v10; // bx
  unsigned __int16 v11; // di
  __int64 UserSessionState; // rax
  int v13; // r8d
  __int64 *v14; // rax
  char v15; // dl
  int v16; // r8d
  unsigned int v17; // ebx
  __int64 v18; // rsi
  char v19; // si
  bool v20; // r13
  __int64 v21; // rax
  int v22; // r8d
  int v23; // edx
  char v24; // si
  bool v25; // bp
  __int64 v26; // rax
  int v27; // r8d
  int v28; // edx
  int v29; // eax
  int v30; // ecx
  char v31; // r12
  bool v32; // r13
  int v33; // edx
  int v34; // r8d
  __int64 v35; // r9
  __int64 v36; // rax
  int v37; // edx
  int v38; // r8d
  char v39; // r14
  bool v40; // r15
  __int64 v41; // rax
  int v42; // r8d
  int v43; // edx
  __int16 v44; // [rsp+30h] [rbp-68h]
  char v45; // [rsp+40h] [rbp-58h]
  __int64 v46; // [rsp+48h] [rbp-50h]
  _BYTE v47[72]; // [rsp+50h] [rbp-48h] BYREF
  unsigned __int16 v48; // [rsp+B0h] [rbp+18h]
  char v49; // [rsp+B8h] [rbp+20h]
  int v50; // [rsp+B8h] [rbp+20h]

  if ( *(_DWORD *)(a1 + 108) == 2 )
  {
    v10 = *(_WORD *)(a1 + 112);
    v11 = *(_WORD *)(a1 + 116);
    v48 = v10;
    UserSessionState = W32GetUserSessionState(a1, a2, a3);
    RIMLOCKExclusiveIfNeeded::RIMLOCKExclusiveIfNeeded(
      (RIMLOCKExclusiveIfNeeded *)v47,
      (struct RIMLOCK *)(UserSessionState + 104));
    v14 = RIMSearchHidTLCInfo(v10, v11, v13);
    v17 = 0;
    v18 = (__int64)v14;
    if ( a2 )
    {
      if ( v14 )
        goto LABEL_31;
      if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
        || (v19 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
      {
        v19 = 0;
      }
      v20 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v19 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v21 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v15, v16);
        LOBYTE(v22) = v20;
        LOBYTE(v23) = v19;
        WPP_RECORDER_AND_TRACE_SF_Dd(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v23,
          v22,
          *(_QWORD *)(v21 + 69136),
          4,
          1,
          55,
          (__int64)&WPP_c696d146d7263bd817038d8ba47edda4_Traceguids,
          v48,
          v11);
      }
      v18 = RIMAllocateAndLinkHidTLCInfo(v48, v11, v16);
    }
    if ( !v18 )
    {
      if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
        || (v24 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u) )
      {
        v24 = 0;
      }
      v25 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v24 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v26 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v15, v16);
        LOBYTE(v27) = v25;
        LOBYTE(v28) = v24;
        WPP_RECORDER_AND_TRACE_SF_(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v28,
          v27,
          *(_QWORD *)(v26 + 69136),
          2,
          1,
          56,
          (__int64)&WPP_c696d146d7263bd817038d8ba47edda4_Traceguids);
      }
      if ( !a2 )
        MicrosoftTelemetryAssertTriggeredArgsKM((__int64)"IXPTelAssert", 0x20000, 1023);
      v17 = -1073741670;
LABEL_59:
      RIMLOCKExclusiveIfNeeded::~RIMLOCKExclusiveIfNeeded((RIMLOCKExclusiveIfNeeded *)v47);
      return v17;
    }
LABEL_31:
    v29 = *(_DWORD *)(v18 + 28);
    if ( a2 )
    {
      v49 = v29 + 1;
      *(_DWORD *)(v18 + 28) = v29 + 1;
      v30 = (int)WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
        || (v31 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
      {
        v31 = 0;
      }
      v32 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( !v31 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_49;
      v35 = *(_QWORD *)(W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v15, v16) + 69136);
      v45 = v49;
      v44 = 57;
    }
    else
    {
      if ( !v29 )
        MicrosoftTelemetryAssertTriggeredArgsKM((__int64)"IXPTelAssert", 0x20000, 1035);
      v50 = *(_DWORD *)(v18 + 28) - 1;
      *(_DWORD *)(v18 + 28) = v50;
      v30 = (int)WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
        || (v31 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
      {
        v31 = 0;
      }
      v32 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( !v31 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_49;
      v35 = *(_QWORD *)(W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v15, v16) + 69136);
      v45 = v50;
      v44 = 58;
    }
    LOBYTE(v34) = v32;
    LOBYTE(v33) = v31;
    WPP_RECORDER_AND_TRACE_SF_d(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v33,
      v34,
      v35,
      4,
      1,
      v44,
      (__int64)&WPP_c696d146d7263bd817038d8ba47edda4_Traceguids,
      v45);
LABEL_49:
    v36 = W32GetUserSessionState(v30, v15, v16);
    CHidInput::HandleDirectStartStopDeviceReadRequest(*(CHidInput **)(v36 + 16832));
    if ( !*(_DWORD *)(v18 + 20) && !(unsigned int)RIMHidTLCActive((_DWORD *)v18) )
    {
      if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
        || (v39 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
      {
        v39 = 0;
      }
      v40 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v39 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v41 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, (_BYTE)v37, v38);
        LOBYTE(v42) = v40;
        LOBYTE(v43) = v39;
        LODWORD(v46) = v11;
        WPP_RECORDER_AND_TRACE_SF_Dd(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v43,
          v42,
          *(_QWORD *)(v41 + 69136),
          4,
          1,
          59,
          (__int64)&WPP_c696d146d7263bd817038d8ba47edda4_Traceguids,
          v48,
          v46);
      }
      RIMFreeHidTLCInfo((PVOID **)v18, v37, v38);
    }
    goto LABEL_59;
  }
  if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
    || (v4 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
  {
    v4 = 0;
  }
  v5 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v4 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v6 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, a2, a3);
    LOBYTE(v7) = v5;
    LOBYTE(v8) = v4;
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v8,
      v7,
      *(_QWORD *)(v6 + 69136),
      4,
      1,
      54,
      (__int64)&WPP_c696d146d7263bd817038d8ba47edda4_Traceguids);
  }
  return 0LL;
}
