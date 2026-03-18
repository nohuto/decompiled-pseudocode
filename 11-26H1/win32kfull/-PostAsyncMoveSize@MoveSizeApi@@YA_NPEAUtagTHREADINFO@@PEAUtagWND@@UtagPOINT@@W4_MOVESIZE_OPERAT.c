/*
 * XREFs of ?PostAsyncMoveSize@MoveSizeApi@@YA_NPEAUtagTHREADINFO@@PEAUtagWND@@UtagPOINT@@W4_MOVESIZE_OPERATION@@@Z @ 0x1402C497C
 * Callers:
 *     NtUserEnterMoveSizeLoop @ 0x1402B1BD0 (NtUserEnterMoveSizeLoop.c)
 * Callees:
 *     ?PostEventMessageEx@@YAHPEAUtagTHREADINFO@@PEAUtagQ@@KPEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x1400932CC (-PostEventMessageEx@@YAHPEAUtagTHREADINFO@@PEAUtagQ@@KPEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOUR.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x14019025C (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1401913D0 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_qddd @ 0x140199D38 (WPP_RECORDER_AND_TRACE_SF_qddd.c)
 *     ?xxxSetForegroundWindowWithOptions@@YA_NPEAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegroundBehaviors@@W4SetForegroundEffects@@@Z @ 0x14019F168 (-xxxSetForegroundWindowWithOptions@@YA_NPEAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegrou.c)
 *     ?xxxCheckForMoveSizeTouchCapture@MoveSizeApi@@YA_NPEAUtagTHREADINFO@@@Z @ 0x1402C60C4 (-xxxCheckForMoveSizeTouchCapture@MoveSizeApi@@YA_NPEAUtagTHREADINFO@@@Z.c)
 */

char __fastcall MoveSizeApi::PostAsyncMoveSize(MoveSizeApi *a1, struct tagWND *a2, __int64 a3, int a4)
{
  struct tagQ **v4; // r13
  bool v8; // si
  bool v9; // bp
  __int64 v10; // rdi
  __int64 UserSessionState; // rax
  int v12; // r8d
  int v13; // edx
  __int64 v14; // rdx
  char *v15; // rdi
  bool v16; // bl
  bool v17; // di
  __int64 v18; // rax
  int v19; // r8d
  int v20; // edx
  char result; // al
  unsigned int ThreadId; // eax
  struct tagTHREADINFO *v23; // rdx
  __int64 v24; // rdx
  bool v25; // si
  bool v26; // bp
  __int64 v27; // rbx
  __int64 v28; // rax
  int v29; // r8d
  int v30; // edx
  __int64 v31; // rdx
  bool v32; // si
  bool v33; // bp
  __int64 v34; // rbx
  __int64 v35; // rax
  int v36; // r8d
  int v37; // edx
  MoveSizeApi *v38; // [rsp+90h] [rbp+8h] BYREF
  __int64 v39; // [rsp+A0h] [rbp+18h]

  v39 = a3;
  v38 = a1;
  v4 = (struct tagQ **)*((_QWORD *)a2 + 2);
  v8 = WPP_GLOBAL_Control != (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
  v9 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
  if ( v8 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    v10 = *(_QWORD *)a2;
    UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control, a2);
    LOBYTE(v12) = v9;
    LOBYTE(v13) = v8;
    WPP_RECORDER_AND_TRACE_SF_qddd(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v13,
      v12,
      *(_QWORD *)(UserSessionState + 69152),
      4,
      1,
      124,
      (__int64)&WPP_5ceb73a2e55e3301d45450cfa64f8ae9_Traceguids,
      v10,
      a3,
      SBYTE4(v39),
      a4);
  }
  v15 = (char *)Win32AllocPoolZInit(16LL, 1936549205LL);
  if ( !v15 )
  {
    v16 = WPP_GLOBAL_Control != (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
       && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
       && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 2u;
    v17 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v16 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      v18 = W32GetUserSessionState(WPP_GLOBAL_Control, v14);
      LOBYTE(v19) = v17;
      LOBYTE(v20) = v16;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v20,
        v19,
        *(_QWORD *)(v18 + 69152),
        2,
        1,
        125,
        (__int64)&WPP_5ceb73a2e55e3301d45450cfa64f8ae9_Traceguids);
    }
    return 0;
  }
  ThreadId = (unsigned int)PsGetThreadId(*(PETHREAD *)v38);
  *(_QWORD *)(v15 + 4) = a3;
  *(_DWORD *)v15 = ThreadId;
  *((_DWORD *)v15 + 3) = a4;
  if ( !(unsigned __int8)IsCapturedByThread(&v38) )
    MoveSizeApi::xxxCheckForMoveSizeTouchCapture(v38, v23);
  if ( !xxxSetForegroundWindowWithOptions((__int64)a2, 2LL, 0, 0) )
  {
    v25 = WPP_GLOBAL_Control != (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
       && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
       && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 3u;
    v26 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v25 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      v27 = *(_QWORD *)a2;
      v28 = W32GetUserSessionState(WPP_GLOBAL_Control, v24);
      LOBYTE(v29) = v26;
      LOBYTE(v30) = v25;
      WPP_RECORDER_AND_TRACE_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v30,
        v29,
        *(_QWORD *)(v28 + 69152),
        3,
        1,
        126,
        (__int64)&WPP_5ceb73a2e55e3301d45450cfa64f8ae9_Traceguids,
        v27);
    }
  }
  if ( !(unsigned int)PostEventMessageEx(
                        (struct tagTHREADINFO *)v4,
                        v4[58],
                        0x20u,
                        a2,
                        0,
                        (unsigned __int64)v15,
                        0LL,
                        0LL) )
  {
    v32 = WPP_GLOBAL_Control != (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
       && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
       && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 2u;
    v33 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v32 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      v34 = *(_QWORD *)a2;
      v35 = W32GetUserSessionState(WPP_GLOBAL_Control, v31);
      LOBYTE(v36) = v33;
      LOBYTE(v37) = v32;
      WPP_RECORDER_AND_TRACE_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v37,
        v36,
        *(_QWORD *)(v35 + 69152),
        2,
        1,
        127,
        (__int64)&WPP_5ceb73a2e55e3301d45450cfa64f8ae9_Traceguids,
        v34);
    }
    Win32FreePool(v15);
    return 0;
  }
  result = 1;
  *((_QWORD *)v38 + 170) |= 0x8000000000uLL;
  return result;
}
