/*
 * XREFs of ?PostWindowAction@@YA_NPEAUtagWND@@PEBU_WINDOW_ACTION@@PEAVCMonitorTopology@@@Z @ 0x1402CBA38
 * Callers:
 *     ?xxxApplyActionOld@WindowActions@@YAKPEAUtagWND@@_NPEAU_WINDOW_ACTION@@@Z @ 0x1402CE998 (-xxxApplyActionOld@WindowActions@@YAKPEAUtagWND@@_NPEAU_WINDOW_ACTION@@@Z.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1400D9978 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_qd @ 0x140127EFC (WPP_RECORDER_AND_TRACE_SF_qd.c)
 *     ?PostEventMessageWindow@@YA_NPEAUtagWND@@K_K_J@Z @ 0x14021E418 (-PostEventMessageWindow@@YA_NPEAUtagWND@@K_K_J@Z.c)
 *     ?CoalesceWindowAction@@YA_NPEAUtagWND@@PEBU_WINDOW_ACTION@@PEAVCMonitorTopology@@@Z @ 0x1402CAB84 (-CoalesceWindowAction@@YA_NPEAUtagWND@@PEBU_WINDOW_ACTION@@PEAVCMonitorTopology@@@Z.c)
 */

char __fastcall PostWindowAction(PETHREAD **a1, const struct _WINDOW_ACTION *a2, struct CMonitorTopology *a3)
{
  _OWORD *v6; // rax
  __int64 v7; // rdx
  void *v8; // rbp
  bool v9; // si
  bool v10; // bl
  __int64 UserSessionState; // rax
  int v12; // r8d
  int v13; // edx
  char v14; // si
  char v15; // al
  char v16; // r13
  unsigned __int8 ThreadId; // al
  PETHREAD *v18; // rdi
  char v19; // bl
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rax
  int v23; // r8d
  int v24; // edx
  __int64 v25; // rdx
  bool v26; // bl
  __int64 v27; // rax
  int v28; // r8d
  int v29; // edx
  char v31; // [rsp+A8h] [rbp+20h]

  if ( CoalesceWindowAction((struct tagWND *)a1, a2, a3) )
    return 1;
  v6 = (_OWORD *)Win32AllocPoolZInit(96LL, 1886871893LL);
  v8 = v6;
  if ( !v6 )
  {
    v9 = *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
      && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) != 0
      && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 2u;
    v10 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v9 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      UserSessionState = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v7);
      LOBYTE(v12) = v10;
      LOBYTE(v13) = v9;
      WPP_RECORDER_AND_TRACE_SF_(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
        v13,
        v12,
        *(_QWORD *)(UserSessionState + 69160),
        2,
        4,
        126,
        (__int64)&WPP_fade6bfb655b3fa6b02839cd02f2d6ee_Traceguids);
    }
    return 0;
  }
  *v6 = *(_OWORD *)a2;
  v6[1] = *((_OWORD *)a2 + 1);
  v6[2] = *((_OWORD *)a2 + 2);
  v6[3] = *((_OWORD *)a2 + 3);
  v6[4] = *((_OWORD *)a2 + 4);
  v6[5] = *((_OWORD *)a2 + 5);
  v14 = 1;
  if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
    || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) == 0
    || (v15 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 5u) )
  {
    v15 = 0;
  }
  v31 = v15;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
    || (v16 = 1, !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL)) )
  {
    v16 = 0;
  }
  if ( v15 || v16 )
  {
    ThreadId = (unsigned __int8)PsGetThreadId(*a1[2]);
    v18 = *a1;
    v19 = ThreadId;
    v22 = W32GetUserSessionState(v21, v20);
    LOBYTE(v23) = v16;
    LOBYTE(v24) = v31;
    WPP_RECORDER_AND_TRACE_SF_qd(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
      v24,
      v23,
      *(_QWORD *)(v22 + 69160),
      5,
      4,
      127,
      (__int64)&WPP_fade6bfb655b3fa6b02839cd02f2d6ee_Traceguids,
      (char)v18,
      v19);
  }
  if ( !PostEventMessageWindow((struct tagTHREADINFO **)a1, 0x1Fu, (LARGE_INTEGER)a3, (__int64)v8) )
  {
    if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
      || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) == 0
      || *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 2u )
    {
      v14 = 0;
    }
    v26 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v14 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      v27 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v25);
      LOBYTE(v28) = v26;
      LOBYTE(v29) = v14;
      WPP_RECORDER_AND_TRACE_SF_(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
        v29,
        v28,
        *(_QWORD *)(v27 + 69160),
        2,
        4,
        128,
        (__int64)&WPP_fade6bfb655b3fa6b02839cd02f2d6ee_Traceguids);
    }
    Win32FreePool(v8);
    return 0;
  }
  _InterlockedAdd((volatile signed __int32 *)a3, 1u);
  return 1;
}
