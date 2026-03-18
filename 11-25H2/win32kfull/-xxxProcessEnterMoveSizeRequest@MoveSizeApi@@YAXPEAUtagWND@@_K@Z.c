/*
 * XREFs of ?xxxProcessEnterMoveSizeRequest@MoveSizeApi@@YAXPEAUtagWND@@_K@Z @ 0x1402AAC50
 * Callers:
 *     xxxProcessEventMessage @ 0x14024572C (xxxProcessEventMessage.c)
 * Callees:
 *     _IsTopLevelWindow @ 0x140037CA0 (_IsTopLevelWindow.c)
 *     INPUTDEST_FROM_PWND @ 0x140154898 (INPUTDEST_FROM_PWND.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x14018EC58 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     WPP_RECORDER_AND_TRACE_SF_qs @ 0x1401A48DC (WPP_RECORDER_AND_TRACE_SF_qs.c)
 *     ?xxxEnterMoveSizeLoopOnThread@MoveSizeApi@@YAXPEAUtagTHREADINFO@@PEAUtagWND@@UtagPOINT@@W4_MOVESIZE_OPERATION@@@Z @ 0x1402AA1EC (-xxxEnterMoveSizeLoopOnThread@MoveSizeApi@@YAXPEAUtagTHREADINFO@@PEAUtagWND@@UtagPOINT@@W4_MOVES.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 */

void __fastcall MoveSizeApi::xxxProcessEnterMoveSizeRequest(MoveSizeApi *this, struct tagWND *a2)
{
  __int64 v2; // rsi
  __int64 v5; // rax
  __int64 v6; // rdx
  char v7; // si
  bool v8; // r14
  int v9; // edx
  int v10; // r8d
  __int64 v11; // r9
  __int64 v12; // rax
  unsigned __int64 v13; // rdx
  __int64 v14; // r13
  __int64 v15; // rdx
  char v16; // r14
  bool v17; // r13
  int v18; // ebx
  __int64 v19; // rax
  int v20; // r8d
  int v21; // edx
  _OWORD *v22; // rax
  _QWORD *v23; // rax
  char v24; // si
  bool v25; // r14
  __int64 v26; // rbx
  __int64 UserSessionState; // rax
  int v28; // r8d
  int v29; // edx
  __int64 v30; // r9
  const char *v31; // rax
  __int16 v32; // [rsp+30h] [rbp-D0h]
  int v33; // [rsp+40h] [rbp-C0h]
  _QWORD *v34; // [rsp+50h] [rbp-B0h] BYREF
  _DWORD v35[30]; // [rsp+58h] [rbp-A8h] BYREF
  _OWORD v36[7]; // [rsp+D0h] [rbp-30h] BYREF

  v2 = *((_QWORD *)this + 2);
  v5 = PtiFromThreadId(*(unsigned int *)a2);
  v34 = (_QWORD *)v5;
  if ( v5 )
  {
    if ( (_InterlockedCompareExchange((volatile signed __int32 *)(v5 + 528), 0, 0) & 1) != 0 )
    {
      if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
        || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 1) == 0
        || (v7 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 3u) )
      {
        v7 = 0;
      }
      v8 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( v7 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        v33 = *(_DWORD *)a2;
        v11 = *(_QWORD *)(W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v6) + 69160);
        v32 = 129;
        goto LABEL_9;
      }
    }
    else
    {
      v12 = v34[170];
      if ( (v12 & 0x8000000000LL) != 0 )
      {
        v13 = 0xFFFFFF7FFFFFFFFFuLL;
        v34[170] = v12 & 0xFFFFFF7FFFFFFFFFuLL;
        v14 = *(_QWORD *)(v2 + 712);
        if ( v14 || !IsTopLevelWindow((__int64)this) )
        {
          if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
            || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 1) == 0
            || (v24 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 3u) )
          {
            v24 = 0;
          }
          v25 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
          if ( v24 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
          {
            v26 = *(_QWORD *)this;
            UserSessionState = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v13);
            LOBYTE(v28) = v25;
            LOBYTE(v29) = v24;
            v30 = *(_QWORD *)(UserSessionState + 69160);
            v31 = "already in MoveSize";
            if ( !v14 )
              v31 = "not top level";
            WPP_RECORDER_AND_TRACE_SF_qs(
              *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
              v29,
              v28,
              v30,
              3,
              1,
              131,
              (__int64)&WPP_924099e52c3f3dd40e1f0060f4cc5e6a_Traceguids,
              v26,
              (__int64)v31);
          }
        }
        else
        {
          if ( (unsigned __int8)IsCapturedByThread(&v34) )
          {
            if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
              || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 1) == 0
              || (v16 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u) )
            {
              v16 = 0;
            }
            v17 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
            if ( v16 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
            {
              v18 = *(_DWORD *)a2;
              v19 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v15);
              LOBYTE(v20) = v17;
              LOBYTE(v21) = v16;
              WPP_RECORDER_AND_TRACE_SF_d(
                *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
                v21,
                v20,
                *(_QWORD *)(v19 + 69160),
                4,
                1,
                132,
                (__int64)&WPP_924099e52c3f3dd40e1f0060f4cc5e6a_Traceguids,
                v18);
            }
            v22 = INPUTDEST_FROM_PWND(v35, (__int64)this);
            v36[0] = *v22;
            v36[1] = v22[1];
            v36[2] = v22[2];
            v36[3] = v22[3];
            v36[4] = v22[4];
            v36[5] = v22[5];
            v36[6] = v22[6];
            ForceCapture(2LL, v36);
            *(_BYTE *)(*(_QWORD *)(v2 + 472) + 256LL) |= 4u;
            *(_BYTE *)(v34[59] + 256LL) &= ~4u;
          }
          *(_QWORD *)(v2 + 808) = v34[101];
          v23 = v34;
          *(_QWORD *)(v2 + 796) = *(_QWORD *)((char *)v34 + 796);
          *(_DWORD *)(v2 + 804) = *((_DWORD *)v23 + 201);
          *(_QWORD *)(v2 + 816) = v34[102];
          MoveSizeApi::xxxEnterMoveSizeLoopOnThread(
            (MoveSizeApi *)v2,
            this,
            *(_QWORD *)((char *)a2 + 4),
            *((_DWORD *)a2 + 3));
        }
      }
      else
      {
        if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
          || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 1) == 0
          || (v7 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 3u) )
        {
          v7 = 0;
        }
        v8 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
        if ( v7 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        {
          v33 = *(_DWORD *)a2;
          v11 = *(_QWORD *)(W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v6) + 69160);
          v32 = 130;
          goto LABEL_9;
        }
      }
    }
  }
  else
  {
    if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
      || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 1) == 0
      || (v7 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 3u) )
    {
      v7 = 0;
    }
    v8 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v7 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      v33 = *(_DWORD *)a2;
      v11 = *(_QWORD *)(W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v6) + 69160);
      v32 = 128;
LABEL_9:
      LOBYTE(v10) = v8;
      LOBYTE(v9) = v7;
      WPP_RECORDER_AND_TRACE_SF_d(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
        v9,
        v10,
        v11,
        3,
        1,
        v32,
        (__int64)&WPP_924099e52c3f3dd40e1f0060f4cc5e6a_Traceguids,
        v33);
    }
  }
}
