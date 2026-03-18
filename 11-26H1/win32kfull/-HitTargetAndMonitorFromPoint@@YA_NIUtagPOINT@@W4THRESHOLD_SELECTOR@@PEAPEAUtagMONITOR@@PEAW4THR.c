/*
 * XREFs of ?HitTargetAndMonitorFromPoint@@YA_NIUtagPOINT@@W4THRESHOLD_SELECTOR@@PEAPEAUtagMONITOR@@PEAW4THRESHOLD_MARGIN_DIRECTION@@@Z @ 0x140089BA0
 * Callers:
 *     ?xxxInitializeMoveSizeData@@YAXPEAUtagWND@@PEAUMOVESIZEDATA@@IK@Z @ 0x14005EF30 (-xxxInitializeMoveSizeData@@YAXPEAUtagWND@@PEAUMOVESIZEDATA@@IK@Z.c)
 *     ?xxxSizeOrMoveRect@@YA_NPEAUMOVESIZEDATA@@UtagPOINT@@PEAUtagRECT@@PEAI@Z @ 0x14019DD24 (-xxxSizeOrMoveRect@@YA_NPEAUMOVESIZEDATA@@UtagPOINT@@PEAUtagRECT@@PEAI@Z.c)
 *     ?ComputeSizeOutcome@@YA?AW4_MOUSE_SIZE_OUTCOME@@QEBUMOVESIZEDATA@@PEAPEAUtagMONITOR@@PEAW4THRESHOLD_MARGIN_DIRECTION@@@Z @ 0x140242174 (-ComputeSizeOutcome@@YA-AW4_MOUSE_SIZE_OUTCOME@@QEBUMOVESIZEDATA@@PEAPEAUtagMONITOR@@PEAW4THRESH.c)
 * Callees:
 *     _MonitorFromPoint @ 0x14008A650 (_MonitorFromPoint.c)
 *     WPP_RECORDER_AND_TRACE_SF_Dd @ 0x1401A3DAC (WPP_RECORDER_AND_TRACE_SF_Dd.c)
 *     WPP_RECORDER_AND_TRACE_SF_ddd @ 0x1402C84EC (WPP_RECORDER_AND_TRACE_SF_ddd.c)
 */

char __fastcall HitTargetAndMonitorFromPoint(int a1, __int64 a2, int a3, __int64 *a4, _DWORD *a5)
{
  int v5; // ebx
  __int64 v6; // rsi
  bool v8; // r15
  __int64 v9; // rax
  __int64 v10; // rdi
  __int64 v11; // rdx
  __int64 v12; // rcx
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
  char v23; // bp
  char v24; // si
  char v26; // si
  char v27; // di
  __int64 v28; // r9
  int v29; // r8d
  int v30; // edx
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
  v9 = MonitorFromPoint(a2, 2LL, 18LL);
  *a4 = v9;
  v10 = v6;
  v36 = *(_OWORD *)(*(_QWORD *)(v9 + 40) + 44LL);
  v13 = *(_QWORD *)(W32GetUserSessionState(v12, v11) + 63432);
  v14 = *(unsigned __int8 *)(v13 + 4 * v6 + 1);
  v16 = *(_QWORD *)(W32GetUserSessionState(v13, v15) + 63432);
  v17 = *(unsigned __int8 *)(v16 + 4 * v6 + 2);
  v19 = *(_QWORD *)(W32GetUserSessionState(v16, v18) + 63432);
  v20 = *(unsigned __int8 *)(v19 + 4 * v10);
  v22 = *(unsigned __int8 *)(*(_QWORD *)(W32GetUserSessionState(v19, v21) + 63432) + 4 * v10 + 3);
  if ( v8 )
  {
    if ( v5 < v14 + (int)v36 )
    {
      *a5 = 1;
      if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
        || (v26 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
      {
        v26 = 0;
      }
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
        || (v27 = 1, !*((_WORD *)WPP_GLOBAL_Control + 36)) )
      {
        v27 = 0;
      }
      if ( !v26 && !v27 )
        return 1;
    }
    else
    {
      if ( v5 < DWORD2(v36) - v17 )
        goto LABEL_2;
      *a5 = 2;
      if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
        || (v26 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
      {
        v26 = 0;
      }
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
        || (v27 = 1, !*((_WORD *)WPP_GLOBAL_Control + 36)) )
      {
        v27 = 0;
      }
      if ( !v26 && !v27 )
        return 1;
    }
    v28 = *(_QWORD *)(W32GetUserSessionState(WPP_GLOBAL_Control, v22) + 69152);
    LOBYTE(v29) = v27;
    LOBYTE(v30) = v26;
LABEL_43:
    WPP_RECORDER_AND_TRACE_SF_ddd(*((_QWORD *)WPP_GLOBAL_Control + 3), v30, v29, v28);
    return 1;
  }
LABEL_2:
  if ( v37 < v20 + DWORD1(v36) )
  {
    *a5 = 0;
    if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
      || (v31 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
    {
      v31 = 0;
    }
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
      || (v32 = 1, !*((_WORD *)WPP_GLOBAL_Control + 36)) )
    {
      v32 = 0;
    }
    if ( !v31 && !v32 )
      return 1;
LABEL_42:
    v28 = *(_QWORD *)(W32GetUserSessionState(WPP_GLOBAL_Control, v22) + 69152);
    LOBYTE(v30) = v31;
    LOBYTE(v29) = v32;
    goto LABEL_43;
  }
  if ( !v8 && v37 >= HIDWORD(v36) - (int)v22 )
  {
    *a5 = 3;
    if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
      || (v31 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
    {
      v31 = 0;
    }
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
      || (v32 = 1, !*((_WORD *)WPP_GLOBAL_Control + 36)) )
    {
      v32 = 0;
    }
    if ( !v31 && !v32 )
      return 1;
    goto LABEL_42;
  }
  if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
    || (v23 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
  {
    v23 = 0;
  }
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
    || (v24 = 1, !*((_WORD *)WPP_GLOBAL_Control + 36)) )
  {
    v24 = 0;
  }
  if ( v23 || v24 )
  {
    UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control, v22);
    LOBYTE(v34) = v24;
    LOBYTE(v35) = v23;
    WPP_RECORDER_AND_TRACE_SF_Dd(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v35,
      v34,
      *(_QWORD *)(UserSessionState + 69152),
      5,
      1,
      34,
      (__int64)&WPP_5ceb73a2e55e3301d45450cfa64f8ae9_Traceguids,
      v5,
      v37);
  }
  *a5 = 4;
  return 0;
}
