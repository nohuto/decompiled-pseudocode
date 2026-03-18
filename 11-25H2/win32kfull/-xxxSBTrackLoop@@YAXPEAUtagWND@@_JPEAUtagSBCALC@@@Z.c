/*
 * XREFs of ?xxxSBTrackLoop@@YAXPEAUtagWND@@_JPEAUtagSBCALC@@@Z @ 0x1402E3E2C
 * Callers:
 *     xxxSBTrackInit @ 0x1402E8980 (xxxSBTrackInit.c)
 * Callees:
 *     xxxCallMsgFilter @ 0x14001FA20 (xxxCallMsgFilter.c)
 *     xxxTranslateMessage @ 0x14002187C (xxxTranslateMessage.c)
 *     xxxWindowEvent @ 0x14002EAB0 (xxxWindowEvent.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036850 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     SetOrClrWF @ 0x1400373A0 (SetOrClrWF.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1400D9978 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x1400D99FC (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     xxxInternalGetMessage @ 0x1401153B0 (xxxInternalGetMessage.c)
 *     xxxDispatchMessage @ 0x140116D64 (xxxDispatchMessage.c)
 *     SystoChar @ 0x14016EA68 (SystoChar.c)
 *     WPP_RECORDER_AND_TRACE_SF_qdd @ 0x140217DC8 (WPP_RECORDER_AND_TRACE_SF_qdd.c)
 *     GetMouseMessageString @ 0x1402E4EC8 (GetMouseMessageString.c)
 *     WPP_RECORDER_AND_TRACE_SF_qsDdd @ 0x1402E7258 (WPP_RECORDER_AND_TRACE_SF_qsDdd.c)
 *     _guard_dispatch_icall @ 0x140342490 (_guard_dispatch_icall.c)
 */

void __fastcall xxxSBTrackLoop(struct tagWND *a1, __int64 a2, struct tagSBCALC *a3)
{
  __int64 v5; // rcx
  unsigned int *v6; // rdx
  char v7; // si
  bool v8; // r14
  bool v9; // r15
  __int64 v10; // rbx
  __int64 UserSessionState; // rax
  int v12; // r8d
  int v13; // edx
  __int64 v14; // rbx
  void (__fastcall *v15)(struct tagWND *, __int64, _QWORD, __int64, struct tagSBCALC *); // r12
  struct tagTHREADINFO *v16; // r14
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // rdx
  int v26; // r15d
  __int64 v27; // rdx
  __int64 v28; // rcx
  struct tagWND *v29; // rdx
  __int64 v30; // rdx
  __int64 v31; // rcx
  unsigned int v32; // eax
  __int64 v33; // r9
  void (__fastcall *v34)(struct tagWND *, _QWORD, _QWORD, __int64, struct tagSBCALC *); // r10
  __int64 v35; // rdx
  bool v36; // r14
  __int64 MouseMessageString; // rax
  __int64 v38; // rdi
  __int64 v39; // rbx
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // rax
  int v43; // r8d
  int v44; // edx
  bool v45; // r14
  __int64 v46; // rbx
  __int64 v47; // rax
  int v48; // r8d
  int v49; // edx
  bool v50; // bl
  __int64 v51; // rax
  int v52; // r8d
  int v53; // edx
  unsigned __int64 v54; // [rsp+28h] [rbp-49h]
  int v55; // [rsp+30h] [rbp-41h]
  int v56; // [rsp+40h] [rbp-31h]
  __int128 v57; // [rsp+78h] [rbp+7h] BYREF
  __int128 v58; // [rsp+88h] [rbp+17h]
  __int128 v59; // [rsp+98h] [rbp+27h]

  v57 = 0LL;
  v58 = 0LL;
  v59 = 0LL;
  v5 = *(_QWORD *)&WPP_GLOBAL_Control;
  v6 = &WPP_GLOBAL_Control;
  v7 = 1;
  v8 = *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
    && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x100) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 4u;
  v9 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
  if ( v8 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    v10 = *(_QWORD *)a1;
    UserSessionState = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, &WPP_GLOBAL_Control);
    LOBYTE(v12) = v9;
    LOBYTE(v13) = v8;
    WPP_RECORDER_AND_TRACE_SF_qdd(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
      v13,
      v12,
      *(_QWORD *)(UserSessionState + 69160),
      4,
      9,
      48,
      (__int64)&WPP_cccf0f77aa2331519192f0f5d1ba828a_Traceguids,
      v10,
      a2,
      SBYTE2(a2));
    v6 = &WPP_GLOBAL_Control;
  }
  v14 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 752LL);
  if ( v14
    && (v15 = *(void (__fastcall **)(struct tagWND *, __int64, _QWORD, __int64, struct tagSBCALC *))(v14 + 48)) != 0LL )
  {
    if ( (*(_DWORD *)v14 & 2) != 0 )
      SetOrClrWF(1, a1, 0x620u, 1);
    v16 = PtiCurrent(v5, (__int64)v6);
    if ( !*(_QWORD *)(W32GetUserSessionState(v18, v17) + 18888) )
      goto LABEL_22;
    v22 = *(_QWORD *)(W32GetUserSessionState(v20, v19) + 18888);
    if ( !*(_QWORD *)(v22 + 120) )
      goto LABEL_22;
    v24 = *(_QWORD *)(W32GetUserSessionState(v22, v21) + 18888);
    if ( v24 != *((_QWORD *)v16 + 59) )
      goto LABEL_22;
    v26 = 33;
    if ( *(struct tagTHREADINFO **)(*(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(v24, v23) + 18888) + 120LL) + 16LL) != v16 )
      v26 = 49;
    v28 = *(_QWORD *)(W32GetUserSessionState(49LL, v25) + 18888);
    v29 = *(struct tagTHREADINFO **)(*(_QWORD *)(v28 + 120) + 16LL) == v16
        ? a1
        : *(struct tagWND **)(*(_QWORD *)(W32GetUserSessionState(v28, v27) + 18888) + 120LL);
    xxxWindowEvent(0x80000004, v29, 0, 3u, v26);
    if ( v14 == *(_QWORD *)(*((_QWORD *)a1 + 2) + 752LL) )
    {
LABEL_22:
      xxxWindowEvent(0x12u, a1, ((*(_DWORD *)v14 & 2) != 0) | 0xFFFFFFFA, 0, 0);
      v15(a1, 513LL, 0LL, a2, a3);
      while ( *(struct tagWND **)(*((_QWORD *)v16 + 59) + 112LL) == a1 )
      {
        LODWORD(v54) = 1;
        if ( !(unsigned int)xxxInternalGetMessage((__int64)&v57, 0LL, 0, 0, v54, 1) )
        {
          if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
            || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x100) == 0
            || *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u )
          {
            v7 = 0;
          }
          v45 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
          if ( v7 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
          {
            v46 = *(_QWORD *)a1;
            v47 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v30);
            LOBYTE(v48) = v45;
            LOBYTE(v49) = v7;
            WPP_RECORDER_AND_TRACE_SF_q(
              *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
              v49,
              v48,
              *(_QWORD *)(v47 + 69160),
              4,
              9,
              50,
              (__int64)&WPP_cccf0f77aa2331519192f0f5d1ba828a_Traceguids,
              v46);
          }
          return;
        }
        if ( !(unsigned int)xxxCallMsgFilter((__int64)&v57, 5LL) )
        {
          if ( (_QWORD)v57 == *(_QWORD *)a1
            && ((unsigned int)(DWORD2(v57) - 512) <= 0xE || (unsigned int)(DWORD2(v57) - 256) <= 9) )
          {
            v31 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 752LL);
            if ( !v31 || !*(_QWORD *)(v31 + 48) )
            {
              if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
                || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x100) == 0
                || *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u )
              {
                v7 = 0;
              }
              v36 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
              if ( v7 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
              {
                MouseMessageString = GetMouseMessageString(DWORD2(v57));
                v38 = *(_QWORD *)a1;
                v39 = MouseMessageString;
                v42 = W32GetUserSessionState(v41, v40);
                LOBYTE(v43) = v36;
                LOBYTE(v44) = v7;
                WPP_RECORDER_AND_TRACE_SF_qsDdd(
                  *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
                  v44,
                  v43,
                  *(_QWORD *)(v42 + 69160),
                  v54,
                  v55,
                  51,
                  v56,
                  v38,
                  v39,
                  SBYTE8(v57),
                  SBYTE8(v58),
                  SBYTE10(v58));
              }
              return;
            }
            v32 = SystoChar(DWORD2(v57), SDWORD2(v58));
            v34(a1, v32, v58, v33, a3);
          }
          else
          {
            xxxTranslateMessage((__int64)&v57, 0);
            xxxDispatchMessage((struct tagMSG *)&v57, v35);
          }
        }
      }
    }
  }
  else
  {
    if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
      || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x100) == 0
      || *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u )
    {
      v7 = 0;
    }
    v50 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v7 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      v51 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, &WPP_GLOBAL_Control);
      LOBYTE(v52) = v50;
      LOBYTE(v53) = v7;
      WPP_RECORDER_AND_TRACE_SF_(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
        v53,
        v52,
        *(_QWORD *)(v51 + 69160),
        4,
        9,
        49,
        (__int64)&WPP_cccf0f77aa2331519192f0f5d1ba828a_Traceguids);
    }
  }
}
