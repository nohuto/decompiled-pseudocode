/*
 * XREFs of ?xxxMoveThumb@@YAXPEAUtagWND@@PEAUtagSBCALC@@H@Z @ 0x1402E3890
 * Callers:
 *     ?xxxTrackThumb@@YAXPEAUtagWND@@I_K_JPEAUtagSBCALC@@@Z @ 0x1402E4590 (-xxxTrackThumb@@YAXPEAUtagWND@@I_K_JPEAUtagSBCALC@@@Z.c)
 * Callees:
 *     xxxDefWindowProc @ 0x1400C36C0 (xxxDefWindowProc.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x1400D99FC (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     WPP_RECORDER_AND_TRACE_SF_qd @ 0x140127EFC (WPP_RECORDER_AND_TRACE_SF_qd.c)
 *     WPP_RECORDER_AND_TRACE_SF_qdd @ 0x140217DC8 (WPP_RECORDER_AND_TRACE_SF_qdd.c)
 *     ?DrawThumb2@@YAXPEAUtagWND@@PEAUtagSBCALC@@PEAUHDC__@@PEAUHBRUSH__@@HI@Z @ 0x14025EB04 (-DrawThumb2@@YAXPEAUtagWND@@PEAUtagSBCALC@@PEAUHDC__@@PEAUHBRUSH__@@HI@Z.c)
 *     ?SBPosFromPx@@YAHPEAUtagSBCALC@@H@Z @ 0x1402E3464 (-SBPosFromPx@@YAHPEAUtagSBCALC@@H@Z.c)
 *     ?xxxDoScroll@@YAXPEAUtagWND@@0HHH@Z @ 0x1402E35E8 (-xxxDoScroll@@YAXPEAUtagWND@@0HHH@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_qddddddddddddd @ 0x1402E5A40 (WPP_RECORDER_AND_TRACE_SF_qddddddddddddd.c)
 */

void __fastcall xxxMoveThumb(struct tagWND *a1, struct tagSBCALC *a2, int a3)
{
  int v3; // esi
  struct tagSBCALC *v4; // r13
  struct tagWND *v5; // r14
  char v6; // di
  char v7; // al
  __int64 UserSessionState; // rax
  int v9; // r8d
  int v10; // edx
  __int64 v11; // rbx
  __int64 v12; // rdx
  struct tagTHREADINFO **v13; // rdx
  int v14; // eax
  HWND DCEx; // rbp
  unsigned int *v16; // rcx
  char v17; // r12
  struct tagTHREADINFO *v18; // rbx
  __int64 v19; // rax
  int v20; // r8d
  int v21; // edx
  HBRUSH v22; // r12
  __int64 v23; // rdx
  _DWORD *v24; // rbx
  bool v25; // bl
  __int64 v26; // rax
  int v27; // r8d
  int v28; // edx
  bool v29; // si
  struct tagTHREADINFO *v30; // rbx
  __int64 v31; // rax
  int v32; // r8d
  int v33; // edx
  char v34; // bp
  struct tagTHREADINFO *v35; // rbx
  __int64 v36; // rax
  int v37; // r8d
  int v38; // edx
  bool v39; // [rsp+B0h] [rbp-68h]
  char v41; // [rsp+120h] [rbp+8h]
  __int64 v42; // [rsp+120h] [rbp+8h]
  char v45; // [rsp+138h] [rbp+20h]
  int v46; // [rsp+138h] [rbp+20h]

  v3 = a3;
  v4 = a2;
  v5 = a1;
  v6 = 1;
  if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
    || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x100) == 0
    || (v7 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u) )
  {
    v7 = 0;
  }
  v45 = v7;
  v39 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
  if ( v7 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    UserSessionState = W32GetUserSessionState(a1, &WPP_RECORDER_INITIALIZED);
    LOBYTE(v9) = v39;
    LOBYTE(v10) = v45;
    v3 = a3;
    WPP_RECORDER_AND_TRACE_SF_qddddddddddddd(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
      v10,
      v9,
      *(_QWORD *)(UserSessionState + 69160));
    v4 = a2;
    v5 = a1;
    v6 = 1;
  }
  v11 = *(_QWORD *)(*((_QWORD *)v5 + 2) + 752LL);
  if ( !v11 || v3 == *(_DWORD *)(v11 + 76) )
  {
    if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
      || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x100) == 0
      || (v34 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 5u) )
    {
      v34 = 0;
    }
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
      || !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL) )
    {
      v6 = 0;
    }
    if ( v34 || v6 )
    {
      v35 = *(struct tagTHREADINFO **)v5;
      v36 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, &WPP_RECORDER_INITIALIZED);
      LOBYTE(v37) = v6;
      LOBYTE(v38) = v34;
      WPP_RECORDER_AND_TRACE_SF_qd(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
        v38,
        v37,
        *(_QWORD *)(v36 + 69160),
        5,
        9,
        38,
        (__int64)&WPP_cccf0f77aa2331519192f0f5d1ba828a_Traceguids,
        (char)v35,
        v3);
    }
  }
  else
  {
    v12 = (unsigned int)v3;
    while ( 1 )
    {
      v14 = SBPosFromPx(v4, v12);
      *(_DWORD *)(v11 + 84) = v14;
      if ( v14 == *(_DWORD *)(v11 + 80) )
      {
LABEL_18:
        DCEx = (HWND)_GetDCEx(v5, 0LL, 65537LL);
        *((_DWORD *)v4 + 13) = v3;
        v46 = v3 + *((_DWORD *)v4 + 8);
        *((_DWORD *)v4 + 12) = v46;
        v16 = &WPP_GLOBAL_Control;
        if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
          || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x100) == 0
          || (LOBYTE(v16) = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 5u) )
        {
          LOBYTE(v16) = 0;
        }
        v41 = (char)v16;
        if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
          || (v17 = 1, !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL)) )
        {
          v17 = 0;
        }
        if ( (_BYTE)v16 || v17 )
        {
          v18 = *(struct tagTHREADINFO **)v5;
          v19 = W32GetUserSessionState(v16, &WPP_RECORDER_INITIALIZED);
          LOBYTE(v20) = v17;
          LOBYTE(v21) = v41;
          WPP_RECORDER_AND_TRACE_SF_qdd(
            *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
            v21,
            v20,
            *(_QWORD *)(v19 + 69160),
            5,
            9,
            40,
            (__int64)&WPP_cccf0f77aa2331519192f0f5d1ba828a_Traceguids,
            (char)v18,
            v3,
            v46);
        }
        v22 = (HBRUSH)xxxDefWindowProc((struct tagTHREADINFO **)v5, 311LL, DCEx, *(struct tagDRAWITEMSTRUCT **)v5);
        v42 = GreSelectBrush(DCEx, v22);
        v24 = *(_DWORD **)(*((_QWORD *)v5 + 2) + 752LL);
        if ( v24 )
        {
          DrawThumb2(v5, v4, (HDC)DCEx, v22, (*v24 >> 1) & 1, 0);
          GreSelectBrush(DCEx, v42);
          _ReleaseDC(DCEx);
          v24[19] = v3;
        }
        else
        {
          if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
            || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x100) == 0
            || *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 2u )
          {
            v6 = 0;
          }
          v25 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
          if ( v6 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
          {
            v26 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v23);
            LOBYTE(v27) = v25;
            LOBYTE(v28) = v6;
            WPP_RECORDER_AND_TRACE_SF_q(
              *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
              v28,
              v27,
              *(_QWORD *)(v26 + 69160),
              2,
              9,
              41,
              (__int64)&WPP_cccf0f77aa2331519192f0f5d1ba828a_Traceguids,
              (char)DCEx);
          }
          _ReleaseDC(DCEx);
        }
        return;
      }
      v13 = *(struct tagTHREADINFO ***)(v11 + 24);
      if ( v13 )
        xxxDoScroll(
          *(struct tagDRAWITEMSTRUCT ***)(v11 + 16),
          v13,
          5u,
          *(_DWORD *)(v11 + 84),
          (*(_DWORD *)v11 >> 1) & 1);
      v11 = *(_QWORD *)(*((_QWORD *)v5 + 2) + 752LL);
      if ( !v11 || !*(_QWORD *)(v11 + 48) )
        break;
      *(_DWORD *)(v11 + 80) = *(_DWORD *)(v11 + 84);
      v12 = (unsigned int)(*((_DWORD *)v4 + 14) + *((_DWORD *)v4 + 15));
      if ( v3 < (int)v12 )
        goto LABEL_18;
      v3 = *((_DWORD *)v4 + 14) + *((_DWORD *)v4 + 15);
    }
    if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
      || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x100) == 0
      || *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 3u )
    {
      v6 = 0;
    }
    v29 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v6 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      v30 = *(struct tagTHREADINFO **)v5;
      v31 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, &WPP_RECORDER_INITIALIZED);
      LOBYTE(v32) = v29;
      LOBYTE(v33) = v6;
      WPP_RECORDER_AND_TRACE_SF_q(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
        v33,
        v32,
        *(_QWORD *)(v31 + 69160),
        3,
        9,
        39,
        (__int64)&WPP_cccf0f77aa2331519192f0f5d1ba828a_Traceguids,
        (char)v30);
    }
  }
}
