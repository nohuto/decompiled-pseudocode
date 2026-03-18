/*
 * XREFs of ?DelegateDiscardMessages@@YAXPEAUtagQ@@HPEAUtagDELEGATEPOINTERMAP@@@Z @ 0x140138088
 * Callers:
 *     _DelegateCapturePointers @ 0x140137D48 (_DelegateCapturePointers.c)
 * Callees:
 *     DelQEntry @ 0x140066E80 (DelQEntry.c)
 *     IsPointerInputMessage @ 0x140067230 (IsPointerInputMessage.c)
 *     WPP_RECORDER_AND_TRACE_SF_qq @ 0x1400D897C (WPP_RECORDER_AND_TRACE_SF_qq.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1400D9978 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14026E830 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?GetPwndFromPointerMsgId@@YAPEAUtagWND@@_K@Z @ 0x14028DFF4 (-GetPwndFromPointerMsgId@@YAPEAUtagWND@@_K@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_HL @ 0x14028E088 (WPP_RECORDER_AND_TRACE_SF_HL.c)
 *     WPP_RECORDER_AND_TRACE_SF_L @ 0x14028E15C (WPP_RECORDER_AND_TRACE_SF_L.c)
 *     WPP_RECORDER_AND_TRACE_SF_LqLL @ 0x14028E480 (WPP_RECORDER_AND_TRACE_SF_LqLL.c)
 */

void __fastcall DelegateDiscardMessages(struct tagQ *a1, __int64 a2, struct tagDELEGATEPOINTERMAP *a3)
{
  int v4; // r15d
  char v6; // bp
  char v7; // si
  bool v8; // r14
  __int64 UserSessionState; // rax
  int v10; // r8d
  int v11; // edx
  __int64 v12; // r14
  int v13; // edi
  __int64 v14; // rdx
  __int64 v15; // rcx
  struct tagWND *v16; // r8
  unsigned __int64 v17; // rsi
  __int64 v18; // rax
  struct tagWND *v19; // rbx
  int v20; // eax
  __int64 v21; // rax
  bool v22; // bl
  int v23; // edx
  int v24; // r8d
  __int64 v25; // r9
  __int64 v26; // rdx
  int v27; // eax
  char v28; // r15
  bool v29; // r12
  int v30; // ebx
  int v31; // edi
  __int64 v32; // rsi
  __int64 v33; // rax
  int v34; // r8d
  int v35; // edx
  __int64 v36; // rdx
  __int64 v37; // rsi
  bool v38; // di
  char v39; // bl
  __int64 v40; // rax
  int v41; // r8d
  int v42; // edx
  bool v43; // di
  __int64 v44; // rax
  char FrameIdFromPointerMsgId; // bl
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // rax
  int v49; // r8d
  int v50; // edx
  int v51; // [rsp+20h] [rbp-98h]
  int v52; // [rsp+28h] [rbp-90h]
  int v53; // [rsp+30h] [rbp-88h]
  __int16 v54; // [rsp+30h] [rbp-88h]
  int v55; // [rsp+38h] [rbp-80h]
  int v56; // [rsp+60h] [rbp-58h]
  int v57; // [rsp+64h] [rbp-54h]
  char *v58; // [rsp+68h] [rbp-50h]
  __int64 v59; // [rsp+70h] [rbp-48h]

  v4 = a2;
  if ( *((_DWORD *)a1 + 10) )
  {
    v6 = 1;
    if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
      || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x200) == 0
      || (v7 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u) )
    {
      v7 = 0;
    }
    v8 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v7 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      UserSessionState = W32GetUserSessionState(a1, a2);
      LOBYTE(v10) = v8;
      LOBYTE(v11) = v7;
      WPP_RECORDER_AND_TRACE_SF_HL(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
        v11,
        v10,
        *(_QWORD *)(UserSessionState + 69160));
    }
    v12 = *((_QWORD *)a1 + 3);
    v58 = (char *)a1 + 24;
    if ( v4 )
    {
LABEL_10:
      v56 = 0;
      v13 = 0;
      if ( v12 )
      {
        while ( !v13 )
        {
          v59 = *(_QWORD *)v12;
          if ( (unsigned int)IsPointerInputMessage(*(_DWORD *)(v12 + 24)) )
          {
            if ( (*(_DWORD *)(v12 + 100) & 0x40) != 0 )
            {
              v17 = *(_QWORD *)(v12 + 40);
              if ( *(_WORD *)(v12 + 32) == *(_WORD *)a3 )
              {
                if ( (_DWORD)v15 == 582 )
                {
                  v18 = W32GetUserSessionState(v15, v14);
                  if ( CTouchProcessor::GetFrameIdFromPointerMsgId(*(CTouchProcessor **)(v18 + 3256), v17) != *((_DWORD *)a3 + 1) )
                  {
                    if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
                      || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x200) == 0
                      || *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u )
                    {
                      v6 = 0;
                    }
                    v43 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
                    if ( v6 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
                    {
                      v44 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v14);
                      FrameIdFromPointerMsgId = CTouchProcessor::GetFrameIdFromPointerMsgId(
                                                  *(CTouchProcessor **)(v44 + 3256),
                                                  v17);
                      v48 = W32GetUserSessionState(v47, v46);
                      LOBYTE(v49) = v43;
                      LOBYTE(v50) = v6;
                      WPP_RECORDER_AND_TRACE_SF_L(
                        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
                        v50,
                        v49,
                        *(_QWORD *)(v48 + 69160),
                        v51,
                        v52,
                        v53,
                        v55,
                        FrameIdFromPointerMsgId);
                    }
                    return;
                  }
                  v16 = 0LL;
                }
                if ( *(_DWORD *)(v12 + 24) == 581 && (*(_BYTE *)(v12 + 34) & 4) == 0 )
                {
                  if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
                    || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x200) == 0
                    || *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u )
                  {
                    v6 = (char)v16;
                  }
                  v22 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
                  if ( v6 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
                  {
                    v54 = 28;
                    v25 = *(_QWORD *)(W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v14) + 69160);
                    goto LABEL_84;
                  }
                  return;
                }
                if ( *((_DWORD *)a3 + 25) == 2 )
                  v19 = (struct tagWND *)*((_QWORD *)a3 + 11);
                else
                  v19 = v16;
                if ( GetPwndFromPointerMsgId(v17) == v19 )
                {
                  if ( !gbIgnoreStressedOutStuff )
                  {
                    v27 = *(_DWORD *)(v12 + 24);
                    if ( v27 != 583 && v27 != 586 && (*(_BYTE *)(v12 + 34) & 4) == 0 )
                      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1209LL);
                  }
                  v57 = *(_DWORD *)(v12 + 24);
                  if ( v57 == 583 )
                    v13 = 1;
                  v56 = v13;
                  if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
                    || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x200) == 0
                    || (v28 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u) )
                  {
                    v28 = 0;
                  }
                  v29 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
                  if ( v28 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
                  {
                    v30 = *(_DWORD *)(v12 + 40);
                    v31 = *(_DWORD *)(v12 + 32);
                    v32 = *(_QWORD *)(v12 + 16);
                    v33 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v26);
                    LOBYTE(v34) = v29;
                    LOBYTE(v35) = v28;
                    WPP_RECORDER_AND_TRACE_SF_LqLL(
                      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
                      v35,
                      v34,
                      *(_QWORD *)(v33 + 69160),
                      v51,
                      v52,
                      v53,
                      v55,
                      v57,
                      v32,
                      v31,
                      v30);
                  }
                  DelQEntry((__int64)v58, (__int64 *)v12, 1);
                  v37 = *((_QWORD *)a1 + 11);
                  if ( v37 == v12 )
                  {
                    v38 = *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
                       && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x20000) != 0
                       && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 5u;
                    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
                      || (v39 = 1, !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL)) )
                    {
                      v39 = 0;
                    }
                    if ( v38 || v39 )
                    {
                      v40 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v36);
                      LOBYTE(v41) = v39;
                      LOBYTE(v42) = v38;
                      WPP_RECORDER_AND_TRACE_SF_qq(
                        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
                        v42,
                        v41,
                        *(_QWORD *)(v40 + 69160),
                        5,
                        18,
                        30,
                        (__int64)&WPP_498cb4b0a6fe38d4bf1a8d41cfaba51a_Traceguids,
                        (char)a1,
                        v37);
                    }
                    *((_QWORD *)a1 + 11) = 0LL;
                  }
                }
                v14 = v59;
                v13 = v56;
              }
            }
          }
          v12 = v14;
          if ( !v14 )
            return;
        }
      }
    }
    else
    {
      while ( v12 )
      {
        if ( (*(_DWORD *)(v12 + 100) & 0x40) != 0 )
        {
          v20 = *(_DWORD *)(v12 + 24);
          if ( (v20 == 582 || v20 == 585) && *(_WORD *)(v12 + 32) == *(_WORD *)a3 )
          {
            v21 = W32GetUserSessionState(a1, a2);
            if ( CTouchProcessor::GetFrameIdFromPointerMsgId(*(CTouchProcessor **)(v21 + 3256), *(_QWORD *)(v12 + 40)) == *((_DWORD *)a3 + 1) )
              goto LABEL_10;
          }
        }
        v12 = *(_QWORD *)v12;
      }
      if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
        || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x200) == 0
        || *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u )
      {
        v6 = 0;
      }
      v22 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( v6 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        v25 = *(_QWORD *)(W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, a2) + 69160);
        v54 = 26;
LABEL_84:
        LOBYTE(v24) = v22;
        LOBYTE(v23) = v6;
        WPP_RECORDER_AND_TRACE_SF_(
          *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
          v23,
          v24,
          v25,
          4,
          10,
          v54,
          (__int64)&WPP_498cb4b0a6fe38d4bf1a8d41cfaba51a_Traceguids);
      }
    }
  }
}
