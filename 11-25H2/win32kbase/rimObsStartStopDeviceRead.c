/*
 * XREFs of rimObsStartStopDeviceRead @ 0x1401F4828
 * Callers:
 *     RawInputManagerObjectDelete @ 0x1401E6DF8 (RawInputManagerObjectDelete.c)
 *     rimObsAddInputObserver @ 0x1401F296C (rimObsAddInputObserver.c)
 * Callees:
 *     RIMSearchHidTLCInfo @ 0x14002A7D0 (RIMSearchHidTLCInfo.c)
 *     ??0RIMLOCKExclusiveIfNeeded@@QEAA@PEAURIMLOCK@@@Z @ 0x14002A8F4 (--0RIMLOCKExclusiveIfNeeded@@QEAA@PEAURIMLOCK@@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x140036610 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x1400366AC (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     WPP_RECORDER_AND_TRACE_SF_dD @ 0x1400B4C14 (WPP_RECORDER_AND_TRACE_SF_dD.c)
 *     RIMHidTLCActive @ 0x1401172EC (RIMHidTLCActive.c)
 *     ?HandleDirectStartStopDeviceReadRequest@CHidInput@@QEAAXXZ @ 0x14012C1F0 (-HandleDirectStartStopDeviceReadRequest@CHidInput@@QEAAXXZ.c)
 *     ??1RIMLOCKExclusiveIfNeeded@@QEAA@XZ @ 0x1401305CC (--1RIMLOCKExclusiveIfNeeded@@QEAA@XZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019E99C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     RIMAllocateAndLinkHidTLCInfo @ 0x1401E68A4 (RIMAllocateAndLinkHidTLCInfo.c)
 *     RIMFreeHidTLCInfo @ 0x1401E6AF0 (RIMFreeHidTLCInfo.c)
 */

__int64 __fastcall rimObsStartStopDeviceRead(__int64 a1, __int64 a2)
{
  char v2; // r12
  char v3; // si
  bool v4; // r14
  __int64 v5; // rax
  int v6; // r8d
  int v7; // edx
  unsigned __int16 v9; // bx
  unsigned __int16 v10; // di
  __int64 UserSessionState; // rax
  __int64 *v12; // rax
  __int64 v13; // rdx
  unsigned int v14; // ebx
  __int64 v15; // rsi
  char v16; // si
  bool v17; // r13
  __int64 v18; // rax
  int v19; // r8d
  int v20; // edx
  char v21; // si
  bool v22; // bp
  __int64 v23; // rax
  int v24; // r8d
  int v25; // edx
  int v26; // eax
  void *v27; // rcx
  char v28; // r12
  bool v29; // r13
  int v30; // edx
  int v31; // r8d
  __int64 v32; // r9
  __int64 v33; // rax
  __int64 v34; // rdx
  char v35; // r14
  bool v36; // r15
  __int64 v37; // rax
  int v38; // r8d
  int v39; // edx
  __int16 v40; // [rsp+30h] [rbp-68h]
  char v41; // [rsp+40h] [rbp-58h]
  _BYTE v42[72]; // [rsp+50h] [rbp-48h] BYREF
  unsigned __int16 v43; // [rsp+B0h] [rbp+18h]
  char v44; // [rsp+B8h] [rbp+20h]
  int v45; // [rsp+B8h] [rbp+20h]

  v2 = a2;
  if ( *(_DWORD *)(a1 + 108) == 2 )
  {
    v9 = *(_WORD *)(a1 + 112);
    v10 = *(_WORD *)(a1 + 116);
    v43 = v9;
    UserSessionState = W32GetUserSessionState(a1, a2);
    RIMLOCKExclusiveIfNeeded::RIMLOCKExclusiveIfNeeded(
      (RIMLOCKExclusiveIfNeeded *)v42,
      (struct RIMLOCK *)(UserSessionState + 104));
    v12 = RIMSearchHidTLCInfo(v9, v10);
    v14 = 0;
    v15 = (__int64)v12;
    if ( v2 && !v12 )
    {
      if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
        || (v16 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
      {
        v16 = 0;
      }
      v17 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v16 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v18 = W32GetUserSessionState(WPP_GLOBAL_Control, v13);
        LOBYTE(v19) = v17;
        LOBYTE(v20) = v16;
        WPP_RECORDER_AND_TRACE_SF_dD(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v20,
          v19,
          *(_QWORD *)(v18 + 69144),
          4,
          1,
          55,
          (__int64)&WPP_c696d146d7263bd817038d8ba47edda4_Traceguids,
          v43,
          v10);
      }
      v15 = RIMAllocateAndLinkHidTLCInfo(v43, v10);
    }
    if ( !v15 )
    {
      if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
        || (v21 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u) )
      {
        v21 = 0;
      }
      v22 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v21 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v23 = W32GetUserSessionState(WPP_GLOBAL_Control, v13);
        LOBYTE(v24) = v22;
        LOBYTE(v25) = v21;
        WPP_RECORDER_AND_TRACE_SF_(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v25,
          v24,
          *(_QWORD *)(v23 + 69144),
          2,
          1,
          56,
          (__int64)&WPP_c696d146d7263bd817038d8ba47edda4_Traceguids);
      }
      if ( !v2 )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 1023);
      v14 = -1073741670;
LABEL_59:
      RIMLOCKExclusiveIfNeeded::~RIMLOCKExclusiveIfNeeded((RIMLOCKExclusiveIfNeeded *)v42);
      return v14;
    }
    v26 = *(_DWORD *)(v15 + 28);
    if ( v2 )
    {
      v44 = v26 + 1;
      *(_DWORD *)(v15 + 28) = v26 + 1;
      v27 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
        || (v28 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
      {
        v28 = 0;
      }
      v29 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( !v28 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_49;
      v32 = *(_QWORD *)(W32GetUserSessionState(WPP_GLOBAL_Control, v13) + 69144);
      v41 = v44;
      v40 = 57;
    }
    else
    {
      if ( !v26 )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 1035);
      v45 = *(_DWORD *)(v15 + 28) - 1;
      *(_DWORD *)(v15 + 28) = v45;
      v27 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
        || (v28 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
      {
        v28 = 0;
      }
      v29 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( !v28 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_49;
      v32 = *(_QWORD *)(W32GetUserSessionState(WPP_GLOBAL_Control, v13) + 69144);
      v41 = v45;
      v40 = 58;
    }
    LOBYTE(v31) = v29;
    LOBYTE(v30) = v28;
    WPP_RECORDER_AND_TRACE_SF_d(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v30,
      v31,
      v32,
      4,
      1,
      v40,
      (__int64)&WPP_c696d146d7263bd817038d8ba47edda4_Traceguids,
      v41);
LABEL_49:
    v33 = W32GetUserSessionState(v27, v13);
    CHidInput::HandleDirectStartStopDeviceReadRequest(*(CHidInput **)(v33 + 16840));
    if ( !*(_DWORD *)(v15 + 20) && !(unsigned int)RIMHidTLCActive((_DWORD *)v15) )
    {
      if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
        || (v35 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
      {
        v35 = 0;
      }
      v36 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v35 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v37 = W32GetUserSessionState(WPP_GLOBAL_Control, v34);
        LOBYTE(v38) = v36;
        LOBYTE(v39) = v35;
        WPP_RECORDER_AND_TRACE_SF_dD(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v39,
          v38,
          *(_QWORD *)(v37 + 69144),
          4,
          1,
          59,
          (__int64)&WPP_c696d146d7263bd817038d8ba47edda4_Traceguids,
          v43,
          v10);
      }
      RIMFreeHidTLCInfo((PVOID **)v15, v34);
    }
    goto LABEL_59;
  }
  if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
    || (v3 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
  {
    v3 = 0;
  }
  v4 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v3 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v5 = W32GetUserSessionState(WPP_GLOBAL_Control, a2);
    LOBYTE(v6) = v4;
    LOBYTE(v7) = v3;
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v7,
      v6,
      *(_QWORD *)(v5 + 69144),
      4,
      1,
      54,
      (__int64)&WPP_c696d146d7263bd817038d8ba47edda4_Traceguids);
  }
  return 0LL;
}
