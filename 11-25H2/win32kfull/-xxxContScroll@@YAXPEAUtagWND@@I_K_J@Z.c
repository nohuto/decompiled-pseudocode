/*
 * XREFs of ?xxxContScroll@@YAXPEAUtagWND@@I_K_J@Z @ 0x14025F3B0
 * Callers:
 *     <none>
 * Callees:
 *     _GetMessagePos @ 0x1400385F8 (_GetMessagePos.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x1400D99FC (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     _SetSystemTimer @ 0x140158A0C (_SetSystemTimer.c)
 *     WPP_RECORDER_AND_TRACE_SF_qddddddd @ 0x14028462C (WPP_RECORDER_AND_TRACE_SF_qddddddd.c)
 *     ?xxxDoScroll@@YAXPEAUtagWND@@0HHH@Z @ 0x1402E35E8 (-xxxDoScroll@@YAXPEAUtagWND@@0HHH@Z.c)
 *     ?xxxTrackBox@@YAXPEAUtagWND@@I_K_JPEAUtagSBCALC@@@Z @ 0x1402E4340 (-xxxTrackBox@@YAXPEAUtagWND@@I_K_JPEAUtagSBCALC@@@Z.c)
 */

void __fastcall xxxContScroll(struct tagWND *a1, __int64 a2)
{
  struct tagWND *v2; // r14
  __int64 v3; // r12
  char v4; // r15
  char v5; // di
  __int64 v6; // rbx
  __int64 v7; // rax
  int v8; // r8d
  int v9; // edx
  unsigned int MessagePos; // eax
  __int64 v11; // rdi
  __int64 v12; // rdx
  int v13; // r13d
  int v14; // r13d
  __int64 v15; // rcx
  int v16; // esi
  int v17; // ebp
  int v18; // ebx
  int v19; // edi
  __int64 v20; // r14
  __int64 UserSessionState; // rax
  int v22; // r8d
  int v23; // edx
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // rax
  __int64 v27; // rax
  struct tagWND *v28; // rdx
  char v29; // [rsp+80h] [rbp-38h]
  bool v30; // [rsp+81h] [rbp-37h]

  v2 = a1;
  v3 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 752LL);
  if ( v3 )
  {
    MessagePos = GetMessagePos((__int64)a1, a2);
    v11 = *((_QWORD *)v2 + 5);
    v12 = MessagePos;
    if ( (*(_BYTE *)(v11 + 26) & 0x40) != 0 )
    {
      v13 = (unsigned __int16)(*(_WORD *)(v11 + 96) - MessagePos);
    }
    else
    {
      LOWORD(v12) = MessagePos - *(_WORD *)(v11 + 88);
      v13 = (unsigned __int16)v12;
    }
    v14 = ((unsigned __int16)(HIWORD(MessagePos) - *(_WORD *)(v11 + 92)) << 16) | v13;
    v15 = *(_QWORD *)&WPP_GLOBAL_Control;
    if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
      || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x100) == 0
      || (LOBYTE(v15) = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u) )
    {
      LOBYTE(v15) = 0;
    }
    v29 = v15;
    v30 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( (_BYTE)v15 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      v16 = *(_DWORD *)(v11 + 100);
      v17 = *(_DWORD *)(v11 + 92);
      v18 = *(_DWORD *)(v11 + 96);
      v19 = *(_DWORD *)(v11 + 88);
      v20 = *(_QWORD *)v2;
      UserSessionState = W32GetUserSessionState(v15, v12);
      LOBYTE(v22) = v30;
      LOBYTE(v23) = v29;
      WPP_RECORDER_AND_TRACE_SF_qddddddd(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
        v23,
        v22,
        *(_QWORD *)(UserSessionState + 69160),
        4,
        9,
        45,
        (__int64)&WPP_cccf0f77aa2331519192f0f5d1ba828a_Traceguids,
        v20,
        v14,
        v19,
        v17,
        v16,
        v18,
        v18 - v19,
        v16 - v17);
      v2 = a1;
    }
    xxxTrackBox(v2, 0, 0LL, v14, 0LL);
    if ( v3 == *(_QWORD *)(*((_QWORD *)v2 + 2) + 752LL) && (*(_DWORD *)v3 & 1) != 0 )
    {
      v26 = W32GetUserSessionState(v25, v24);
      v27 = SetSystemTimer(
              (__int64)v2,
              65534LL,
              *(_DWORD *)(*(_QWORD *)(v26 + 19872) + 4976LL) >> 3,
              (__int64)xxxContScroll,
              0);
      v28 = *(struct tagWND **)(v3 + 24);
      *(_QWORD *)(v3 + 64) = v27;
      if ( v28 )
        xxxDoScroll(*(struct tagWND **)(v3 + 16), v28, *(_DWORD *)(v3 + 56), 0, (*(_DWORD *)v3 >> 1) & 1);
    }
  }
  else
  {
    v4 = 1;
    if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
      || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x100) == 0
      || (v5 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 5u) )
    {
      v5 = 0;
    }
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
      || !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL) )
    {
      v4 = 0;
    }
    if ( v5 || v4 )
    {
      v6 = *(_QWORD *)a1;
      v7 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, a2);
      LOBYTE(v8) = v4;
      LOBYTE(v9) = v5;
      WPP_RECORDER_AND_TRACE_SF_q(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
        v9,
        v8,
        *(_QWORD *)(v7 + 69160),
        5,
        9,
        44,
        (__int64)&WPP_cccf0f77aa2331519192f0f5d1ba828a_Traceguids,
        v6);
    }
  }
}
