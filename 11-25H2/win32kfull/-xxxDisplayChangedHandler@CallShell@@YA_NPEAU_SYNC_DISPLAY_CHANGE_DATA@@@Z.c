/*
 * XREFs of ?xxxDisplayChangedHandler@CallShell@@YA_NPEAU_SYNC_DISPLAY_CHANGE_DATA@@@Z @ 0x140211BF8
 * Callers:
 *     ?xxxGetWorkAreasFromShell@@YA_NXZ @ 0x140211020 (-xxxGetWorkAreasFromShell@@YA_NXZ.c)
 * Callees:
 *     ??0?$Win32HMThreadLockBase@UtagWND@@$00$0A@@@QEAA@PEAUtagWND@@@Z @ 0x14002D198 (--0-$Win32HMThreadLockBase@UtagWND@@$00$0A@@@QEAA@PEAUtagWND@@@Z.c)
 *     ??1?$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ @ 0x14002EA74 (--1-$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ.c)
 *     xxxSendTransformableMessageTimeout @ 0x140030264 (xxxSendTransformableMessageTimeout.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1400D9978 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x1400D99FC (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     WPP_RECORDER_AND_TRACE_SF_sD @ 0x1401A4C78 (WPP_RECORDER_AND_TRACE_SF_sD.c)
 *     ?TraceLoggingDisplayChangedHandler@@YAXHHHI@Z @ 0x140211FC0 (-TraceLoggingDisplayChangedHandler@@YAXHHHI@Z.c)
 */

bool __fastcall CallShell::xxxDisplayChangedHandler(CallShell *this, struct _SYNC_DISPLAY_CHANGE_DATA *a2)
{
  int v2; // edi
  bool v3; // r15
  _QWORD *i; // rdx
  bool v5; // si
  int v6; // esi
  char v7; // bl
  __int64 v8; // rax
  int v9; // edx
  struct tagTHREADINFO **v10; // r15
  int v11; // r8d
  unsigned __int64 v12; // rbx
  struct tagWND *v13; // rdx
  char v14; // bl
  bool v15; // r15
  __int64 v16; // rax
  int v17; // r8d
  int v18; // edx
  __int64 v19; // rbx
  char v20; // bp
  bool v21; // r14
  __int64 v22; // rax
  int v23; // r8d
  int v24; // edx
  __int64 v25; // r9
  const char *v26; // rax
  bool v27; // bl
  __int64 UserSessionState; // rax
  int v29; // r8d
  int v30; // edx
  int v32; // [rsp+20h] [rbp-78h]
  ULONG_PTR BugCheckParameter3[9]; // [rsp+50h] [rbp-48h] BYREF
  unsigned int v35; // [rsp+A8h] [rbp+10h]
  bool v36; // [rsp+A8h] [rbp+10h]
  __int64 v37; // [rsp+B0h] [rbp+18h] BYREF
  struct tagWND *v38; // [rsp+B8h] [rbp+20h]

  v2 = 0;
  v3 = 0;
  v35 = 0;
  for ( i = *(_QWORD **)(*(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(this, a2) + 19144) + 40LL) + 16LL);
        ;
        i = (_QWORD *)i[4] )
  {
    if ( !i )
    {
      v5 = *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
        && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x40) != 0
        && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 3u;
      v27 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( v5 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        UserSessionState = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, 0LL);
        LOBYTE(v29) = v27;
        LOBYTE(v30) = v5;
        WPP_RECORDER_AND_TRACE_SF_(
          *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
          v30,
          v29,
          *(_QWORD *)(UserSessionState + 69160),
          3,
          7,
          43,
          (__int64)&WPP_e1166448f6f3316d3174cdc4436fb45b_Traceguids);
      }
      v6 = 0;
      goto LABEL_43;
    }
    if ( i[36] )
    {
      v38 = *(struct tagWND **)(i[1] + 184LL);
      if ( v38 )
        break;
    }
  }
  v6 = 1;
  if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
    || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x40) == 0
    || (v7 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u) )
  {
    v7 = 0;
  }
  v36 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
  if ( !v7 && *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
  {
    v10 = (struct tagTHREADINFO **)v38;
  }
  else
  {
    v8 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, i);
    LOBYTE(v9) = v7;
    v10 = (struct tagTHREADINFO **)v38;
    LOBYTE(v11) = v36;
    WPP_RECORDER_AND_TRACE_SF_q(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
      v9,
      v11,
      *(_QWORD *)(v8 + 69160),
      4,
      7,
      40,
      (__int64)&WPP_e1166448f6f3316d3174cdc4436fb45b_Traceguids,
      (char)v38);
  }
  v37 = 0LL;
  Win32HMThreadLockBase<tagWND,1,0>::Win32HMThreadLockBase<tagWND,1,0>(BugCheckParameter3, (__int64)v10);
  v12 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
  v13 = (struct tagWND *)xxxSendTransformableMessageTimeout(
                           v10,
                           836LL,
                           0LL,
                           this,
                           2u,
                           0xC8u,
                           (unsigned __int64 *)&v37,
                           1,
                           1);
  v38 = v13;
  v35 = ((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24) - v12;
  if ( v13 )
  {
    v19 = v37;
  }
  else
  {
    if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
      || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x40) == 0
      || (v14 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 3u) )
    {
      v14 = 0;
    }
    v15 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v14 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      v16 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, 0LL);
      LOBYTE(v17) = v15;
      LOBYTE(v18) = v14;
      WPP_RECORDER_AND_TRACE_SF_(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
        v18,
        v17,
        *(_QWORD *)(v16 + 69160),
        3,
        7,
        41,
        (__int64)&WPP_e1166448f6f3316d3174cdc4436fb45b_Traceguids);
    }
    v19 = 0LL;
    v37 = 0LL;
  }
  v3 = v19 == 1;
  if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
    || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x40) == 0
    || (v20 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u) )
  {
    v20 = 0;
  }
  v21 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
  if ( v20 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    v22 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v13);
    LOBYTE(v23) = v21;
    LOBYTE(v24) = v20;
    v25 = *(_QWORD *)(v22 + 69160);
    v26 = "Success";
    if ( v19 != 1 )
      v26 = "Failure";
    WPP_RECORDER_AND_TRACE_SF_sD(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
      v24,
      v23,
      v25,
      v32,
      7,
      42,
      (__int64)&WPP_e1166448f6f3316d3174cdc4436fb45b_Traceguids,
      (__int64)v26,
      v19);
  }
  Win32HMThreadLock<tagCURSOR>::~Win32HMThreadLock<tagCURSOR>((ULONG_PTR)BugCheckParameter3, (__int64)v13);
  LOBYTE(v2) = v38 != 0LL;
LABEL_43:
  TraceLoggingDisplayChangedHandler(v6, v2, v3, v35);
  return v3;
}
