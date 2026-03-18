/*
 * XREFs of ?xxxImmersiveZBandDpiChange@CRecalcState@@QEAAXPEAUtagWND@@@Z @ 0x1402C7B44
 * Callers:
 *     ?xxxProcessPendingRecalcStateOld@CRecalcProp@@AEAAXPEAUtagWND@@PEAVCRecalcState@@_NPEAVCRecalcContext@@@Z @ 0x1402C8868 (-xxxProcessPendingRecalcStateOld@CRecalcProp@@AEAAXPEAUtagWND@@PEAVCRecalcState@@_NPEAVCRecalcCo.c)
 * Callees:
 *     IsImmersiveBand @ 0x140025E6C (IsImmersiveBand.c)
 *     GetWindowDpiLastNotify @ 0x1400341C8 (GetWindowDpiLastNotify.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036850 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     WPP_RECORDER_AND_TRACE_SF_Dd @ 0x14005F670 (WPP_RECORDER_AND_TRACE_SF_Dd.c)
 *     UpdateMonitorForWindowAndChildren @ 0x140064088 (UpdateMonitorForWindowAndChildren.c)
 *     xxxNotifyMonitorChanged @ 0x1400654C0 (xxxNotifyMonitorChanged.c)
 *     _MonitorFromRect @ 0x1400913B0 (_MonitorFromRect.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1400D9978 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14026E830 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     WPP_RECORDER_AND_TRACE_SF_qddddddd @ 0x14028462C (WPP_RECORDER_AND_TRACE_SF_qddddddd.c)
 */

void __fastcall CRecalcState::xxxImmersiveZBandDpiChange(CRecalcState *this, struct tagTHREADINFO **a2)
{
  __int64 v3; // rdx
  char v4; // r13
  char v5; // al
  struct tagTHREADINFO *v6; // rax
  struct tagTHREADINFO *v7; // r14
  int v8; // edi
  int v9; // r15d
  int v10; // ebx
  int v11; // esi
  int v12; // ebp
  __int64 UserSessionState; // rax
  int v14; // r8d
  int v15; // edx
  __int64 v16; // rax
  struct tagMONITOR *v17; // rsi
  __int16 v18; // r14
  char v19; // di
  bool v20; // bp
  char WindowDpiLastNotify; // bl
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // rax
  int v25; // r8d
  int v26; // edx
  __int64 v27; // rdx
  char v28; // bl
  __int64 v29; // rax
  int v30; // r8d
  int v31; // edx
  struct tagBWL *v32; // [rsp+C0h] [rbp+8h] BYREF
  char v33; // [rsp+C8h] [rbp+10h]

  v32 = this;
  if ( a2[2] != PtiCurrent((__int64)this, (__int64)a2) )
  {
    LODWORD(v32) = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 1212);
  }
  if ( !(unsigned int)IsImmersiveBand((__int64)a2) )
  {
    LODWORD(v32) = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 1213);
  }
  v4 = 1;
  if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
    || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x40) == 0
    || (LOBYTE(v3) = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 5u) )
  {
    LOBYTE(v3) = 0;
  }
  v33 = v3;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
    || (v5 = 1, !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL)) )
  {
    v5 = 0;
  }
  LOBYTE(v32) = v5;
  if ( (_BYTE)v3 || v5 )
  {
    v6 = a2[5];
    v7 = *a2;
    v8 = *((_DWORD *)v6 + 25);
    v9 = *((_DWORD *)v6 + 23);
    v10 = *((_DWORD *)v6 + 24);
    v11 = *((_DWORD *)v6 + 22);
    v12 = *((_DWORD *)v6 + 59);
    UserSessionState = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v3);
    LOBYTE(v14) = (_BYTE)v32;
    LOBYTE(v15) = v33;
    WPP_RECORDER_AND_TRACE_SF_qddddddd(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
      v15,
      v14,
      *(_QWORD *)(UserSessionState + 69160),
      5,
      7,
      39,
      (__int64)&WPP_5203336677413a97442e065d09735669_Traceguids,
      (char)v7,
      v12,
      v11,
      v9,
      v10,
      v8,
      v10 - v11,
      v8 - v9);
  }
  v16 = MonitorFromRect((INT *)a2[5] + 22, 0, *((_DWORD *)a2[5] + 72));
  v17 = (struct tagMONITOR *)v16;
  if ( v16 )
  {
    v18 = *(_WORD *)(*(_QWORD *)(v16 + 40) + 60LL);
    if ( v18 != (unsigned __int16)GetWindowDpiLastNotify((__int64)a2) )
    {
      if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
        || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x40) == 0
        || (v19 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u) )
      {
        v19 = 0;
      }
      v20 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( v19 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        WindowDpiLastNotify = GetWindowDpiLastNotify((__int64)a2);
        v24 = W32GetUserSessionState(v23, v22);
        LOBYTE(v25) = v20;
        LOBYTE(v26) = v19;
        WPP_RECORDER_AND_TRACE_SF_Dd(
          *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
          v26,
          v25,
          *(_QWORD *)(v24 + 69160),
          4,
          7,
          40,
          (__int64)&WPP_5203336677413a97442e065d09735669_Traceguids,
          v18,
          WindowDpiLastNotify);
      }
      v32 = 0LL;
      if ( (unsigned int)UpdateMonitorForWindowAndChildren(a2, v17, &v32, 0) )
      {
        if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
          || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x40) == 0
          || (v28 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 5u) )
        {
          v28 = 0;
        }
        if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
          || !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL) )
        {
          v4 = 0;
        }
        if ( v28 || v4 )
        {
          v29 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v27);
          LOBYTE(v30) = v4;
          LOBYTE(v31) = v28;
          WPP_RECORDER_AND_TRACE_SF_(
            *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
            v31,
            v30,
            *(_QWORD *)(v29 + 69160),
            5,
            7,
            41,
            (__int64)&WPP_5203336677413a97442e065d09735669_Traceguids);
        }
        xxxNotifyMonitorChanged((struct tagWND *)a2, (struct tagRECT *)((char *)a2[5] + 88), v32, 0);
      }
    }
  }
}
