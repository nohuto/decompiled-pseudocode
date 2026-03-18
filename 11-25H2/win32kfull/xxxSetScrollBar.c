/*
 * XREFs of xxxSetScrollBar @ 0x1400504D8
 * Callers:
 *     NtUserSetScrollInfo @ 0x140050C40 (NtUserSetScrollInfo.c)
 * Callees:
 *     UserSetLastError @ 0x14001A2B4 (UserSetLastError.c)
 *     xxxWindowEvent @ 0x14002EAB0 (xxxWindowEvent.c)
 *     SetOrClrWF @ 0x1400373A0 (SetOrClrWF.c)
 *     xxxSetWindowPos @ 0x14004CAF4 (xxxSetWindowPos.c)
 *     IsVisible @ 0x140053FD8 (IsVisible.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x1400D99FC (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     xxxEnableWndSBArrows @ 0x1401E8CE0 (xxxEnableWndSBArrows.c)
 *     ?DrawThumb@@YAXPEAUtagWND@@PEAUtagSBCALC@@H@Z @ 0x14025EF60 (-DrawThumb@@YAXPEAUtagWND@@PEAUtagSBCALC@@H@Z.c)
 *     ?SBSetParms@@YAHPEAUtagSBDATA@@PEAUtagSCROLLINFO@@PEAHPEAJ@Z @ 0x14025F0FC (-SBSetParms@@YAHPEAUtagSBDATA@@PEAUtagSCROLLINFO@@PEAHPEAJ@Z.c)
 *     GetScrollbarTypeString @ 0x14029454C (GetScrollbarTypeString.c)
 *     _InitPwSB @ 0x1402E19AC (_InitPwSB.c)
 *     WPP_RECORDER_AND_TRACE_SF_qsllllDddddd @ 0x1402E7C24 (WPP_RECORDER_AND_TRACE_SF_qsllllDddddd.c)
 */

__int64 __fastcall xxxSetScrollBar(struct tagWND *a1, __int64 a2, __int64 a3, int a4)
{
  char v4; // r15
  __int64 v5; // rbp
  unsigned int v6; // r10d
  struct tagWND *v7; // rsi
  unsigned int *v8; // r11
  char v9; // di
  char v10; // al
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 UserSessionState; // rax
  __int64 v14; // rdx
  __int64 v15; // r8
  int v16; // r8d
  int v17; // edx
  int v18; // r9d
  BOOL v19; // r13d
  unsigned __int16 v20; // r14
  char v21; // r12
  bool v22; // r14
  __int64 v23; // rbx
  __int64 v24; // rax
  int v25; // r8d
  int v26; // edx
  __int64 inited; // rcx
  __int64 v29; // rdx
  bool v30; // r14
  __int64 v31; // rbx
  __int64 v32; // rax
  int v33; // r8d
  int v34; // edx
  int v35; // ebx
  __int64 v36; // rdx
  char v37; // r14
  __int64 v38; // rbx
  __int64 v39; // rax
  int v40; // r8d
  int v41; // edx
  bool v42; // zf
  int v43; // r15d
  _DWORD *v44; // rcx
  __int64 v45; // rcx
  char v46; // al
  __int64 v47; // rbx
  __int64 v48; // rax
  int v49; // r8d
  int v50; // edx
  unsigned int v51; // ebx
  __int64 v52; // rcx
  char v53; // r14
  __int64 v54; // rbx
  __int64 v55; // rax
  int v56; // r8d
  int v57; // edx
  char v58; // cl
  int v59; // ecx
  struct tagSBCALC *v60; // rdx
  __int64 v61; // rcx
  char v62; // [rsp+A0h] [rbp-58h]
  bool v63; // [rsp+A1h] [rbp-57h]
  bool v64; // [rsp+A1h] [rbp-57h]
  int v65; // [rsp+A4h] [rbp-54h] BYREF
  int v66; // [rsp+A8h] [rbp-50h]
  struct tagWND *v67; // [rsp+100h] [rbp+8h] BYREF
  unsigned int v68; // [rsp+108h] [rbp+10h]
  __int64 v69; // [rsp+110h] [rbp+18h]
  int v70; // [rsp+118h] [rbp+20h]

  v70 = a4;
  v69 = a3;
  v68 = a2;
  v67 = a1;
  v4 = 0;
  v5 = a3;
  v65 = 0;
  v6 = a2;
  v7 = a1;
  v8 = &WPP_GLOBAL_Control;
  v9 = 1;
  if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
    || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x100) == 0
    || (v10 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u) )
  {
    v10 = 0;
  }
  v62 = v10;
  v63 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
  if ( v10 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    v66 = *(_DWORD *)(a3 + 8);
    IsVisible(a1);
    UserSessionState = W32GetUserSessionState(v12, v11);
    GetScrollbarTypeString(v68, v14, v15, *(_QWORD *)(UserSessionState + 69160));
    LOBYTE(v16) = v63;
    LOBYTE(v17) = v62;
    WPP_RECORDER_AND_TRACE_SF_qsllllDddddd(*(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL), v17, v16, v18);
    a4 = v70;
    v8 = &WPP_GLOBAL_Control;
    v6 = v68;
    v4 = 0;
    v7 = v67;
    v9 = 1;
    v5 = v69;
  }
  if ( a4 )
    v70 = IsVisible(v7);
  v19 = v6 != 0;
  v20 = v6 != 0 ? 3616 : 3600;
  v21 = *(_BYTE *)(*((_QWORD *)v7 + 5) + 30LL) & (v6 != 0 ? 32 : 16);
  v66 = v21 != 0;
  LODWORD(v67) = v66;
  if ( (*(_DWORD *)(v5 + 4) & 1) == 0 && !v21 && !*((_QWORD *)v7 + 19) )
  {
    if ( *(unsigned int **)&WPP_GLOBAL_Control == v8
      || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x100) == 0
      || *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 2u )
    {
      v9 = 0;
    }
    v22 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v9 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      v23 = *(_QWORD *)v7;
      v24 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, a2);
      LOBYTE(v25) = v22;
      LOBYTE(v26) = v9;
      WPP_RECORDER_AND_TRACE_SF_q(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
        v26,
        v25,
        *(_QWORD *)(v24 + 69160),
        2,
        9,
        28,
        (__int64)&WPP_cccf0f77aa2331519192f0f5d1ba828a_Traceguids,
        v23);
    }
    UserSetLastError(1447);
    return 0LL;
  }
  inited = *((_QWORD *)v7 + 19);
  if ( inited )
  {
    v35 = 0;
  }
  else
  {
    inited = InitPwSB(v7);
    if ( !inited )
    {
      if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
        || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x100) == 0
        || *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 2u )
      {
        v9 = 0;
      }
      v30 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( v9 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        v31 = *(_QWORD *)v7;
        v32 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v29);
        LOBYTE(v33) = v30;
        LOBYTE(v34) = v9;
        WPP_RECORDER_AND_TRACE_SF_q(
          *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
          v34,
          v33,
          *(_QWORD *)(v32 + 69160),
          2,
          9,
          29,
          (__int64)&WPP_cccf0f77aa2331519192f0f5d1ba828a_Traceguids,
          v31);
      }
      return 0LL;
    }
    v35 = 1;
  }
  if ( !(unsigned int)SBSetParms(
                        (struct tagSBDATA *)(16LL * v19 + 4 + inited),
                        (struct tagSCROLLINFO *)v5,
                        (int *)&v67,
                        &v65)
    && !v35 )
  {
    if ( *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
      && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x100) != 0
      && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 5u )
    {
      v4 = 1;
    }
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
      || (v37 = 1, !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL)) )
    {
      v37 = 0;
    }
    if ( v4 || v37 )
    {
      v38 = *(_QWORD *)v7;
      v39 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v36);
      LOBYTE(v40) = v37;
      LOBYTE(v41) = v4;
      WPP_RECORDER_AND_TRACE_SF_q(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
        v41,
        v40,
        *(_QWORD *)(v39 + 69160),
        5,
        9,
        30,
        (__int64)&WPP_cccf0f77aa2331519192f0f5d1ba828a_Traceguids,
        v38);
    }
    if ( !v21 )
      return (unsigned int)v65;
    v42 = v70 == 0;
    goto LABEL_85;
  }
  SetOrClrWF(0, v7, v20, 1);
  v43 = (int)v67;
  if ( (_DWORD)v67 )
  {
    SetOrClrWF(1, v7, v20, 1);
  }
  else if ( (*(_BYTE *)(*((_QWORD *)v7 + 5) + 30LL) & 0x30) == 0 )
  {
    v44 = (_DWORD *)*((_QWORD *)v7 + 19);
    if ( v44[1] == v44[2] && v44[5] == v44[6] )
    {
      v45 = *(_QWORD *)&WPP_GLOBAL_Control;
      if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
        || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x100) == 0
        || (v46 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u) )
      {
        v46 = 0;
      }
      LOBYTE(v67) = v46;
      v64 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( v46 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        v47 = *(_QWORD *)v7;
        LOBYTE(v45) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
        v48 = W32GetUserSessionState(v45, 0LL);
        LOBYTE(v49) = v64;
        LOBYTE(v50) = (_BYTE)v67;
        WPP_RECORDER_AND_TRACE_SF_q(
          *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
          v50,
          v49,
          *(_QWORD *)(v48 + 69160),
          4,
          9,
          31,
          (__int64)&WPP_cccf0f77aa2331519192f0f5d1ba828a_Traceguids,
          v47);
      }
      RtlFreeHeap(*(PVOID *)(*((_QWORD *)v7 + 3) + 136LL), 0, *((PVOID *)v7 + 19));
      *(_QWORD *)(*((_QWORD *)v7 + 5) + 144LL) = 0LL;
      *((_QWORD *)v7 + 19) = 0LL;
    }
  }
  if ( (*(_DWORD *)(v69 + 4) & 8) == 0 )
  {
    v66 ^= v43;
    if ( v66 )
    {
      v52 = *(_QWORD *)(*((_QWORD *)v7 + 2) + 752LL);
      if ( v52 && v7 == *(struct tagWND **)(v52 + 8) )
        *(_DWORD *)v52 |= 8u;
      if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
        || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x100) == 0
        || (v53 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 5u) )
      {
        v53 = 0;
      }
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
        || !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL) )
      {
        v9 = 0;
      }
      if ( v53 || v9 )
      {
        v54 = *(_QWORD *)v7;
        v55 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, 0LL);
        LOBYTE(v56) = v9;
        LOBYTE(v57) = v53;
        WPP_RECORDER_AND_TRACE_SF_q(
          *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
          v57,
          v56,
          *(_QWORD *)(v55 + 69160),
          5,
          9,
          32,
          (__int64)&WPP_cccf0f77aa2331519192f0f5d1ba828a_Traceguids,
          v54);
      }
      xxxSetWindowPos(v7, 0LL, 0LL, 0LL, 0, 0, 55);
      return (unsigned int)v65;
    }
    goto LABEL_78;
  }
  if ( !v21 )
  {
LABEL_78:
    v51 = v68;
    goto LABEL_79;
  }
  SetOrClrWF(1, v7, v20, 1);
  v51 = v68;
  xxxEnableWndSBArrows(v7, v68, v43 == 0 ? 3 : 0);
LABEL_79:
  if ( v43 && v70 )
  {
    v58 = *(_BYTE *)(*((_QWORD *)v7 + 5) + 16LL);
    if ( v51 )
      v59 = v58 & 2;
    else
      v59 = v58 & 4;
    v42 = v59 == 0;
LABEL_85:
    if ( !v42 )
    {
      xxxWindowEvent(0x800Eu, v7, v19 - 6, 0, 1);
      v61 = *(_QWORD *)(*((_QWORD *)v7 + 2) + 752LL);
      if ( !v61
        || v7 != *(struct tagWND **)(v61 + 8)
        || ((*(_DWORD *)v61 >> 1) & 1) != v19
        || *(void (__usercall **)(struct tagWND *@<rcx>, unsigned int@<edx>, unsigned __int64@<r8>, __int64@<r9>, struct tagSBCALC *))(v61 + 48) != xxxTrackThumb )
      {
        DrawThumb(v7, v60, v19);
      }
    }
  }
  return (unsigned int)v65;
}
