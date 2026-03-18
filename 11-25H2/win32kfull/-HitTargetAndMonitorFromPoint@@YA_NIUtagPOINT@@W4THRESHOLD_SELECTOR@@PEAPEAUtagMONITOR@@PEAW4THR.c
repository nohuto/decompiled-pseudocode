/*
 * XREFs of ?HitTargetAndMonitorFromPoint@@YA_NIUtagPOINT@@W4THRESHOLD_SELECTOR@@PEAPEAUtagMONITOR@@PEAW4THRESHOLD_MARGIN_DIRECTION@@@Z @ 0x1402A732C
 * Callers:
 *     ?ComputeSizeOutcome@@YA?AW4_MOUSE_SIZE_OUTCOME@@QEBUMOVESIZEDATA@@PEAPEAUtagMONITOR@@PEAW4THRESHOLD_MARGIN_DIRECTION@@@Z @ 0x1401F8074 (-ComputeSizeOutcome@@YA-AW4_MOUSE_SIZE_OUTCOME@@QEBUMOVESIZEDATA@@PEAPEAUtagMONITOR@@PEAW4THRESH.c)
 *     ?xxxInitializeMoveSizeData@@YAXPEAUtagWND@@PEAUMOVESIZEDATA@@IK@Z @ 0x1402507C4 (-xxxInitializeMoveSizeData@@YAXPEAUtagWND@@PEAUMOVESIZEDATA@@IK@Z.c)
 *     ?xxxSizeOrMoveRect@@YA_NPEAUMOVESIZEDATA@@UtagPOINT@@PEAUtagRECT@@PEAI@Z @ 0x1402AB8B4 (-xxxSizeOrMoveRect@@YA_NPEAUMOVESIZEDATA@@UtagPOINT@@PEAUtagRECT@@PEAI@Z.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_Dd @ 0x14005F670 (WPP_RECORDER_AND_TRACE_SF_Dd.c)
 *     _MonitorFromPoint @ 0x140091A70 (_MonitorFromPoint.c)
 *     WPP_RECORDER_AND_TRACE_SF_ddd @ 0x1402AC47C (WPP_RECORDER_AND_TRACE_SF_ddd.c)
 */

char __fastcall HitTargetAndMonitorFromPoint(int a1, __int64 a2, int a3, __int64 *a4, _DWORD *a5)
{
  int v5; // ebx
  __int64 v6; // rsi
  bool v8; // r15
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rdi
  __int64 v13; // rcx
  int v14; // ebp
  __int64 v15; // rdx
  __int64 v16; // rcx
  int v17; // esi
  __int64 v18; // rdx
  __int64 v19; // rcx
  int v20; // r12d
  __int64 v21; // rdx
  __int64 v22; // rdx
  char v23; // si
  char v24; // di
  __int64 v25; // r9
  int v26; // r8d
  int v27; // edx
  char v28; // bp
  char v29; // si
  char v31; // bp
  char v32; // si
  __int64 UserSessionState; // rax
  int v34; // r8d
  int v35; // edx
  __int128 v36; // [rsp+60h] [rbp-38h]
  int v37; // [rsp+ACh] [rbp+14h]

  v37 = HIDWORD(a2);
  v5 = a2;
  v6 = a3;
  v8 = (unsigned int)(a1 - 9) <= 1;
  v9 = MonitorFromPoint(a2, 2u, 0x12u);
  *a4 = v9;
  v36 = *(_OWORD *)(*(_QWORD *)(v9 + 40) + 44LL);
  v12 = v6;
  v13 = *(_QWORD *)(W32GetUserSessionState(v11, v10) + 63448);
  v14 = *(unsigned __int8 *)(v13 + 4 * v6 + 1);
  v16 = *(_QWORD *)(W32GetUserSessionState(v13, v15) + 63448);
  v17 = *(unsigned __int8 *)(v16 + 4 * v6 + 2);
  v19 = *(_QWORD *)(W32GetUserSessionState(v16, v18) + 63448);
  v20 = *(unsigned __int8 *)(v19 + 4 * v12);
  v22 = *(unsigned __int8 *)(*(_QWORD *)(W32GetUserSessionState(v19, v21) + 63448) + 4 * v12 + 3);
  if ( v8 )
  {
    if ( v5 < v14 + (int)v36 )
    {
      *a5 = 1;
      if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
        || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 1) == 0
        || (v23 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 5u) )
      {
        v23 = 0;
      }
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
        || (v24 = 1, !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL)) )
      {
        v24 = 0;
      }
      if ( !v23 && !v24 )
        return 1;
      goto LABEL_12;
    }
    if ( v5 >= DWORD2(v36) - v17 )
    {
      *a5 = 2;
      if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
        || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 1) == 0
        || (v23 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 5u) )
      {
        v23 = 0;
      }
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
        || (v24 = 1, !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL)) )
      {
        v24 = 0;
      }
      if ( !v23 && !v24 )
        return 1;
LABEL_12:
      v25 = *(_QWORD *)(W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v22) + 69160);
      LOBYTE(v26) = v24;
      LOBYTE(v27) = v23;
LABEL_47:
      WPP_RECORDER_AND_TRACE_SF_ddd(*(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL), v27, v26, v25);
      return 1;
    }
  }
  if ( v37 < v20 + DWORD1(v36) )
  {
    *a5 = 0;
    if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
      || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 1) == 0
      || (v28 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 5u) )
    {
      v28 = 0;
    }
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
      || (v29 = 1, !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL)) )
    {
      v29 = 0;
    }
    if ( !v28 && !v29 )
      return 1;
    goto LABEL_46;
  }
  if ( !v8 && v37 >= HIDWORD(v36) - (int)v22 )
  {
    *a5 = 3;
    if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
      || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 1) == 0
      || (v28 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 5u) )
    {
      v28 = 0;
    }
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
      || (v29 = 1, !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL)) )
    {
      v29 = 0;
    }
    if ( !v28 && !v29 )
      return 1;
LABEL_46:
    v25 = *(_QWORD *)(W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v22) + 69160);
    LOBYTE(v27) = v28;
    LOBYTE(v26) = v29;
    goto LABEL_47;
  }
  if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
    || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 1) == 0
    || (v31 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 5u) )
  {
    v31 = 0;
  }
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
    || (v32 = 1, !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL)) )
  {
    v32 = 0;
  }
  if ( v31 || v32 )
  {
    UserSessionState = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v22);
    LOBYTE(v34) = v32;
    LOBYTE(v35) = v31;
    WPP_RECORDER_AND_TRACE_SF_Dd(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
      v35,
      v34,
      *(_QWORD *)(UserSessionState + 69160),
      5,
      1,
      34,
      (__int64)&WPP_924099e52c3f3dd40e1f0060f4cc5e6a_Traceguids,
      v5,
      v37);
  }
  *a5 = 4;
  return 0;
}
