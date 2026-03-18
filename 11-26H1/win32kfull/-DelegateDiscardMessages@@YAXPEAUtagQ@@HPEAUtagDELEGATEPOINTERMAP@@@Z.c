/*
 * XREFs of ?DelegateDiscardMessages@@YAXPEAUtagQ@@HPEAUtagDELEGATEPOINTERMAP@@@Z @ 0x140135360
 * Callers:
 *     _DelegateCapturePointers @ 0x140135024 (_DelegateCapturePointers.c)
 * Callees:
 *     DelQEntry @ 0x140095C20 (DelQEntry.c)
 *     IsPointerInputMessage @ 0x1400969D0 (IsPointerInputMessage.c)
 *     WPP_RECORDER_AND_TRACE_SF_qq @ 0x14018E9F0 (WPP_RECORDER_AND_TRACE_SF_qq.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1401913D0 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14028B39C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?GetPwndFromPointerMsgId@@YAPEAUtagWND@@_K@Z @ 0x1402A9668 (-GetPwndFromPointerMsgId@@YAPEAUtagWND@@_K@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_HL @ 0x1402A9708 (WPP_RECORDER_AND_TRACE_SF_HL.c)
 *     WPP_RECORDER_AND_TRACE_SF_L @ 0x1402A97E4 (WPP_RECORDER_AND_TRACE_SF_L.c)
 *     WPP_RECORDER_AND_TRACE_SF_LqLL @ 0x1402A9B1C (WPP_RECORDER_AND_TRACE_SF_LqLL.c)
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
  int v13; // eax
  __int64 v14; // rax
  int v15; // ebx
  bool v16; // bl
  int v17; // edx
  int v18; // r8d
  __int64 v19; // r9
  int v20; // edi
  __int64 v21; // rdx
  __int64 v22; // rcx
  struct tagWND *v23; // r8
  unsigned __int64 v24; // rsi
  __int64 v25; // rax
  int v26; // ebx
  struct tagWND *v27; // rbx
  __int64 v28; // rdx
  int v29; // eax
  char v30; // r15
  bool v31; // r12
  int v32; // ebx
  int v33; // edi
  __int64 v34; // rsi
  __int64 v35; // rax
  int v36; // r8d
  int v37; // edx
  __int64 v38; // rdx
  __int64 v39; // rsi
  bool v40; // di
  char v41; // bl
  __int64 v42; // rax
  int v43; // r8d
  int v44; // edx
  bool v45; // di
  __int64 v46; // rax
  char FrameIdFromPointerMsgId; // bl
  __int64 v48; // rdx
  __int64 v49; // rcx
  __int64 v50; // rax
  int v51; // r8d
  int v52; // edx
  int v53; // [rsp+20h] [rbp-98h]
  int v54; // [rsp+28h] [rbp-90h]
  int v55; // [rsp+30h] [rbp-88h]
  __int16 v56; // [rsp+30h] [rbp-88h]
  int v57; // [rsp+38h] [rbp-80h]
  int v58; // [rsp+60h] [rbp-58h]
  int v59; // [rsp+64h] [rbp-54h]
  char *v60; // [rsp+68h] [rbp-50h]
  __int64 v61; // [rsp+70h] [rbp-48h]

  v4 = a2;
  if ( *((_DWORD *)a1 + 10) )
  {
    v6 = 1;
    if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x200) == 0
      || (v7 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
    {
      v7 = 0;
    }
    v8 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v7 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      UserSessionState = W32GetUserSessionState(a1, a2);
      LOBYTE(v10) = v8;
      LOBYTE(v11) = v7;
      WPP_RECORDER_AND_TRACE_SF_HL(*((_QWORD *)WPP_GLOBAL_Control + 3), v11, v10, *(_QWORD *)(UserSessionState + 69152));
    }
    v12 = *((_QWORD *)a1 + 3);
    v60 = (char *)a1 + 24;
    if ( v4 )
      goto LABEL_25;
    if ( !v12 )
      goto LABEL_20;
    do
    {
      if ( (*(_DWORD *)(v12 + 100) & 0x40) != 0 )
      {
        v13 = *(_DWORD *)(v12 + 24);
        if ( (v13 == 582 || v13 == 585) && *(_WORD *)(v12 + 32) == *(_WORD *)a3 )
        {
          v14 = W32GetUserSessionState(a1, a2);
          v15 = *((_DWORD *)a3 + 1);
          if ( CTouchProcessor::GetFrameIdFromPointerMsgId(*(CTouchProcessor **)(v14 + 3256), *(_QWORD *)(v12 + 40)) == v15 )
            break;
        }
      }
      v12 = *(_QWORD *)v12;
    }
    while ( v12 );
    if ( v12 )
    {
LABEL_25:
      v20 = 0;
      v58 = 0;
      while ( v12 && !v20 )
      {
        v61 = *(_QWORD *)v12;
        if ( IsPointerInputMessage(*(_DWORD *)(v12 + 24))
          && (*(_DWORD *)(v12 + 100) & 0x40) != 0
          && (v24 = *(_QWORD *)(v12 + 40), *(_WORD *)(v12 + 32) == *(_WORD *)a3) )
        {
          if ( (_DWORD)v22 == 582 )
          {
            v25 = W32GetUserSessionState(v22, v21);
            v26 = *((_DWORD *)a3 + 1);
            if ( CTouchProcessor::GetFrameIdFromPointerMsgId(*(CTouchProcessor **)(v25 + 3256), v24) != v26 )
            {
              if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
                || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x200) == 0
                || *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u )
              {
                v6 = 0;
              }
              v45 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
              if ( v6 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
              {
                v46 = W32GetUserSessionState(WPP_GLOBAL_Control, v21);
                FrameIdFromPointerMsgId = CTouchProcessor::GetFrameIdFromPointerMsgId(
                                            *(CTouchProcessor **)(v46 + 3256),
                                            v24);
                v50 = W32GetUserSessionState(v49, v48);
                LOBYTE(v51) = v45;
                LOBYTE(v52) = v6;
                WPP_RECORDER_AND_TRACE_SF_L(
                  *((_QWORD *)WPP_GLOBAL_Control + 3),
                  v52,
                  v51,
                  *(_QWORD *)(v50 + 69152),
                  v53,
                  v54,
                  v55,
                  v57,
                  FrameIdFromPointerMsgId);
              }
              return;
            }
            v23 = 0LL;
          }
          if ( *(_DWORD *)(v12 + 24) == 581 && (*(_BYTE *)(v12 + 34) & 4) == 0 )
          {
            if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
              || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x200) == 0
              || *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u )
            {
              v6 = (char)v23;
            }
            v16 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
            if ( v6 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
            {
              v56 = 28;
              v19 = *(_QWORD *)(W32GetUserSessionState(WPP_GLOBAL_Control, v21) + 69152);
              goto LABEL_83;
            }
            return;
          }
          if ( *((_DWORD *)a3 + 25) == 2 )
            v27 = (struct tagWND *)*((_QWORD *)a3 + 11);
          else
            v27 = v23;
          if ( GetPwndFromPointerMsgId(v24) == v27 )
          {
            if ( !gbIgnoreStressedOutStuff )
            {
              v29 = *(_DWORD *)(v12 + 24);
              if ( v29 != 583 && v29 != 586 && (*(_BYTE *)(v12 + 34) & 4) == 0 )
                MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1209LL);
            }
            v59 = *(_DWORD *)(v12 + 24);
            if ( v59 == 583 )
              v20 = 1;
            v58 = v20;
            if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
              || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x200) == 0
              || (v30 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
            {
              v30 = 0;
            }
            v31 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
            if ( v30 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
            {
              v32 = *(_DWORD *)(v12 + 40);
              v33 = *(_DWORD *)(v12 + 32);
              v34 = *(_QWORD *)(v12 + 16);
              v35 = W32GetUserSessionState(WPP_GLOBAL_Control, v28);
              LOBYTE(v36) = v31;
              LOBYTE(v37) = v30;
              WPP_RECORDER_AND_TRACE_SF_LqLL(
                *((_QWORD *)WPP_GLOBAL_Control + 3),
                v37,
                v36,
                *(_QWORD *)(v35 + 69152),
                v53,
                v54,
                v55,
                v57,
                v59,
                v34,
                v33,
                v32);
            }
            DelQEntry((__int64)v60, v12, 1);
            v39 = *((_QWORD *)a1 + 11);
            if ( v39 == v12 )
            {
              v40 = WPP_GLOBAL_Control != (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
                 && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x20000) != 0
                 && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 5u;
              if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
                || (v41 = 1, !*((_WORD *)WPP_GLOBAL_Control + 36)) )
              {
                v41 = 0;
              }
              if ( v40 || v41 )
              {
                v42 = W32GetUserSessionState(WPP_GLOBAL_Control, v38);
                LOBYTE(v43) = v41;
                LOBYTE(v44) = v40;
                WPP_RECORDER_AND_TRACE_SF_qq(
                  *((_QWORD *)WPP_GLOBAL_Control + 3),
                  v44,
                  v43,
                  *(_QWORD *)(v42 + 69152),
                  5,
                  18,
                  30,
                  (__int64)&WPP_498cb4b0a6fe38d4bf1a8d41cfaba51a_Traceguids,
                  (char)a1,
                  v39);
              }
              *((_QWORD *)a1 + 11) = 0LL;
            }
          }
          v12 = v61;
          v20 = v58;
        }
        else
        {
          v12 = v21;
        }
      }
    }
    else
    {
LABEL_20:
      if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x200) == 0
        || *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u )
      {
        v6 = 0;
      }
      v16 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( v6 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        v19 = *(_QWORD *)(W32GetUserSessionState(WPP_GLOBAL_Control, a2) + 69152);
        v56 = 26;
LABEL_83:
        LOBYTE(v18) = v16;
        LOBYTE(v17) = v6;
        WPP_RECORDER_AND_TRACE_SF_(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v17,
          v18,
          v19,
          4,
          10,
          v56,
          (__int64)&WPP_498cb4b0a6fe38d4bf1a8d41cfaba51a_Traceguids);
      }
    }
  }
}
