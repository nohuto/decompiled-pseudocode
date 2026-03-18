/*
 * XREFs of xxxSBTrackInit @ 0x1402E8980
 * Callers:
 *     xxxSysCommand @ 0x1402B6EB4 (xxxSysCommand.c)
 *     xxxDoScrollMenu @ 0x1402E8138 (xxxDoScrollMenu.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036850 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     WPP_RECORDER_AND_TRACE_SF_Dd @ 0x14005F670 (WPP_RECORDER_AND_TRACE_SF_Dd.c)
 *     ?xxxCapture@@YAXPEAUtagTHREADINFO@@PEAUtagWND@@I@Z @ 0x1400625CC (-xxxCapture@@YAXPEAUtagTHREADINFO@@PEAUtagWND@@I@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_qq @ 0x1400D897C (WPP_RECORDER_AND_TRACE_SF_qq.c)
 *     WPP_RECORDER_AND_TRACE_SF_ddq @ 0x14022EFF8 (WPP_RECORDER_AND_TRACE_SF_ddq.c)
 *     CalcSBStuff @ 0x14025FAB8 (CalcSBStuff.c)
 *     GetWndSBDisableFlags @ 0x14026006C (GetWndSBDisableFlags.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14026E830 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     GetScrollbarTypeString @ 0x14029454C (GetScrollbarTypeString.c)
 *     ??$UserFreeIsolatedType@V?$CTypeIsolation@$0HAAA@$0HA@@NSInstrumentation@@@@YAXPEAX@Z @ 0x1402E26C4 (--$UserFreeIsolatedType@V-$CTypeIsolation@$0HAAA@$0HA@@NSInstrumentation@@@@YAXPEAX@Z.c)
 *     ?Allocate@?$CTypeIsolation@$0HAAA@$0HA@@NSInstrumentation@@IEAAPEAXXZ @ 0x1402E2850 (-Allocate@-$CTypeIsolation@$0HAAA@$0HA@@NSInstrumentation@@IEAAPEAXXZ.c)
 *     ?CalcTrackDragRect@@YAXPEAUtagSBTRACK@@@Z @ 0x1402E29E0 (-CalcTrackDragRect@@YAXPEAUtagSBTRACK@@@Z.c)
 *     ?xxxDoScroll@@YAXPEAUtagWND@@0HHH@Z @ 0x1402E35E8 (-xxxDoScroll@@YAXPEAUtagWND@@0HHH@Z.c)
 *     ?xxxSBTrackLoop@@YAXPEAUtagWND@@_JPEAUtagSBCALC@@@Z @ 0x1402E3E2C (-xxxSBTrackLoop@@YAXPEAUtagWND@@_JPEAUtagSBCALC@@@Z.c)
 *     GetScrollRequestCodeString @ 0x1402E4F04 (GetScrollRequestCodeString.c)
 *     WPP_RECORDER_AND_TRACE_SF_ddddddddddd @ 0x1402E50F8 (WPP_RECORDER_AND_TRACE_SF_ddddddddddd.c)
 *     WPP_RECORDER_AND_TRACE_SF_qddds @ 0x1402E5CAC (WPP_RECORDER_AND_TRACE_SF_qddds.c)
 *     WPP_RECORDER_AND_TRACE_SF_sdddds @ 0x1402E7F0C (WPP_RECORDER_AND_TRACE_SF_sdddds.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 *     memset_0 @ 0x140342900 (memset_0.c)
 */

void __fastcall xxxSBTrackInit(struct tagWND *a1, int a2, int a3, unsigned int a4)
{
  int v4; // ebx
  __int64 *v6; // rsi
  __int64 v8; // rcx
  __int64 v9; // rdx
  char v10; // di
  char v11; // r12
  bool v12; // r13
  __int64 v13; // rcx
  __int64 UserSessionState; // rax
  int v15; // edx
  int v16; // r8d
  struct tagTHREADINFO *v17; // rax
  int v18; // r8d
  __int64 v19; // rcx
  __int64 v20; // rdx
  __int64 v21; // r12
  bool v22; // r14
  __int64 v23; // rbx
  __int64 v24; // rax
  int v25; // r8d
  int v26; // edx
  __int64 *v27; // rcx
  char *v28; // rax
  char *v29; // r13
  __int64 v30; // rcx
  int v31; // edx
  int v32; // ecx
  unsigned __int64 v33; // r12
  _BOOL8 v34; // rdx
  __int64 v35; // rdx
  _BYTE *v36; // rbx
  bool v37; // r15
  __int64 v38; // rbx
  __int64 v39; // rax
  int v40; // r8d
  int v41; // edx
  int v42; // eax
  __int128 *v43; // rdx
  __int128 *v44; // rcx
  unsigned __int64 v45; // rax
  int v46; // r8d
  __int64 v47; // rcx
  __int64 v48; // rdx
  char v49; // al
  __int64 v50; // rax
  char v51; // r12
  char v52; // r15
  __int64 v53; // rax
  int v54; // edx
  int v55; // r8d
  bool v56; // r15
  __int64 v57; // rbx
  __int64 v58; // rax
  int v59; // r8d
  int v60; // edx
  __int64 v61; // r9
  _DWORD *v62; // rcx
  int v63; // eax
  char v64; // r12
  char v65; // r15
  __int64 v66; // rax
  int v67; // edx
  int v68; // r8d
  __int64 v69; // rbx
  __int64 v70; // rax
  _DWORD *v71; // rcx
  char v72; // r12
  char v73; // r15
  __int64 v74; // rax
  int v75; // edx
  int v76; // r8d
  char v77; // r12
  char v78; // r15
  __int64 v79; // rax
  int v80; // edx
  int v81; // r8d
  char v82; // r12
  char v83; // r15
  __int64 v84; // rax
  int v85; // edx
  int v86; // r8d
  int v87; // eax
  int v88; // eax
  __int64 v89; // rdx
  __int64 v90; // rcx
  struct tagTHREADINFO *v91; // rax
  char v92; // al
  unsigned int *v93; // rcx
  const char *ScrollbarTypeString; // rdi
  int v95; // esi
  int v96; // r14d
  int v97; // r15d
  int v98; // r12d
  const char *ScrollRequestCodeString; // rbx
  __int64 v100; // rdx
  __int64 v101; // rcx
  __int64 v102; // rax
  int v103; // r8d
  int v104; // edx
  struct tagTHREADINFO *v105; // rax
  struct tagWND *v106; // rdi
  __int64 v107; // rax
  __int64 v108; // rbx
  __int64 v109; // rdx
  __int64 v110; // rcx
  __int64 v111; // rbx
  __int64 v112; // rax
  int v113; // [rsp+20h] [rbp-100h]
  int v114; // [rsp+28h] [rbp-F8h]
  int v115; // [rsp+30h] [rbp-F0h]
  __int16 v116; // [rsp+30h] [rbp-F0h]
  int v117; // [rsp+38h] [rbp-E8h]
  char v118; // [rsp+40h] [rbp-E0h]
  char v119; // [rsp+48h] [rbp-D8h]
  char v120; // [rsp+50h] [rbp-D0h]
  char v121; // [rsp+A0h] [rbp-80h]
  char v122; // [rsp+A0h] [rbp-80h]
  int v124; // [rsp+A4h] [rbp-7Ch]
  char v125; // [rsp+A8h] [rbp-78h]
  bool v126; // [rsp+A8h] [rbp-78h]
  __int64 v127; // [rsp+B0h] [rbp-70h]
  char WndSBDisableFlags; // [rsp+B8h] [rbp-68h]
  _QWORD v130[2]; // [rsp+C0h] [rbp-60h] BYREF
  _QWORD v131[2]; // [rsp+D0h] [rbp-50h] BYREF
  struct tagWND *v132; // [rsp+E0h] [rbp-40h]
  _QWORD v133[2]; // [rsp+F0h] [rbp-30h] BYREF
  __int128 v134; // [rsp+100h] [rbp-20h] BYREF
  _BYTE v135[64]; // [rsp+110h] [rbp-10h] BYREF

  v4 = a3;
  v132 = a1;
  v6 = (__int64 *)a1;
  memset_0(v135, 0, sizeof(v135));
  v134 = 0LL;
  v8 = *(_QWORD *)&WPP_GLOBAL_Control;
  v9 = 0LL;
  v10 = 1;
  if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
    || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x100) == 0
    || (v11 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u) )
  {
    v11 = 0;
  }
  v12 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
  if ( v11 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    v13 = a4;
    if ( a4 )
      v13 = a4 - 1;
    UserSessionState = W32GetUserSessionState(v13, 0LL);
    v15 = a3;
    LOBYTE(v16) = v12;
    LOBYTE(v15) = v11;
    WPP_RECORDER_AND_TRACE_SF_qddds(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
      v15,
      v16,
      *(_QWORD *)(UserSessionState + 69160));
    v4 = a3;
  }
  v17 = PtiCurrent(v8, v9);
  v18 = 2374;
  if ( (struct tagTHREADINFO *)v6[2] == v17 )
    v18 = 2376;
  MicrosoftTelemetryAssertTriggeredArgsKM("IXPTellMeIf", 0x20000, v18);
  v20 = v6[2];
  if ( (_InterlockedCompareExchange((volatile signed __int32 *)(v20 + 528), 0, 0) & 1) != 0 )
  {
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTellMeIf", 0x20000, 2383);
    return;
  }
  v21 = *(_QWORD *)(v6[2] + 752);
  if ( v21 )
  {
    if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
      || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x100) == 0
      || *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 3u )
    {
      v10 = 0;
    }
    v22 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v10 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      v23 = *v6;
      v24 = W32GetUserSessionState(&WPP_RECORDER_INITIALIZED, v20);
      LOBYTE(v25) = v22;
      LOBYTE(v26) = v10;
      WPP_RECORDER_AND_TRACE_SF_qq(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
        v26,
        v25,
        *(_QWORD *)(v24 + 69160),
        3,
        9,
        53,
        (__int64)&WPP_cccf0f77aa2331519192f0f5d1ba828a_Traceguids,
        v21,
        v23);
    }
    return;
  }
  v27 = *(__int64 **)(*(_QWORD *)(W32GetUserSessionState(v19, v20) + 19800) + 40LL);
  if ( !v27 )
    return;
  v28 = (char *)NSInstrumentation::CTypeIsolation<28672,112>::Allocate(v27);
  v29 = v28;
  if ( !v28 )
    return;
  *(_DWORD *)v28 &= ~1u;
  *((_QWORD *)v28 + 8) = 0LL;
  *((_QWORD *)v28 + 6) = xxxTrackBox;
  *((_QWORD *)v28 + 1) = 0LL;
  v131[0] = v28 + 8;
  *((_QWORD *)v28 + 2) = 0LL;
  *((_QWORD *)v28 + 3) = 0LL;
  v131[1] = v6;
  HMAssignmentLock(v131, 0LL);
  *(_QWORD *)(v6[2] + 752) = v29;
  v30 = v6[5];
  v31 = (unsigned __int16)(HIWORD(a2) - *(_WORD *)(v30 + 92)) << 16;
  if ( (*(_BYTE *)(v30 + 26) & 0x40) != 0 )
    v32 = (unsigned __int16)(*(_WORD *)(v30 + 96) - a2);
  else
    v32 = (unsigned __int16)(a2 - *(_WORD *)(v30 + 88));
  v130[1] = v6;
  v33 = v31 | v32;
  v127 = v33;
  v130[0] = v29 + 24;
  HMAssignmentLock(v130, 0LL);
  v133[1] = 0LL;
  v133[0] = v29 + 16;
  HMAssignmentLock(v133, 0LL);
  *(_DWORD *)v29 ^= (*(_DWORD *)v29 ^ (2 * v4)) & 2;
  WndSBDisableFlags = GetWndSBDisableFlags(v6, v4 & 1);
  v34 = v4 != 6;
  *((_DWORD *)v29 + 22) = v34;
  if ( (struct tagTHREADINFO *)v6[2] == PtiCurrent((unsigned int)(v4 - 6), v34) )
  {
    v36 = v135;
  }
  else
  {
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTellMeIf", 0x20000, 2445);
    v36 = &unk_14039C500;
  }
  v131[0] = v36;
  *((_QWORD *)v29 + 12) = v36;
  if ( (WndSBDisableFlags & 3) != 3 )
  {
    CalcSBStuff((__int64)v6, (__int64)v36, (*(_DWORD *)v29 >> 1) & 1);
    v42 = *(_DWORD *)v29 & 2;
    v43 = (__int128 *)((char *)&v134 + 4);
    if ( !v42 )
      v43 = &v134;
    v130[0] = v43;
    v44 = &v134;
    if ( v42 )
    {
      v45 = v33 >> 16;
    }
    else
    {
      v44 = (__int128 *)((char *)&v134 + 4);
      LOWORD(v45) = v33;
    }
    v46 = (__int16)v45;
    *(_DWORD *)v44 = *((_DWORD *)v36 + 6);
    *(_DWORD *)v43 = *((_DWORD *)v36 + 4);
    *((_DWORD *)v44 + 2) = *((_DWORD *)v36 + 7);
    *((_DWORD *)v43 + 2) = *((_DWORD *)v36 + 5);
    v124 = (__int16)v45;
    v47 = *(_QWORD *)&WPP_GLOBAL_Control;
    v48 = (__int64)&WPP_GLOBAL_Control;
    if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
      || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x100) == 0
      || (v49 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u) )
    {
      v49 = 0;
    }
    v121 = v49;
    v125 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v49 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v47) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      v50 = W32GetUserSessionState(v47, &WPP_GLOBAL_Control);
      WPP_RECORDER_AND_TRACE_SF_ddddddddddd(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
        v121,
        v125,
        *(_QWORD *)(v50 + 69160),
        v113,
        v114,
        v115,
        v117);
      v36 = (_BYTE *)v131[0];
      v48 = (__int64)&WPP_GLOBAL_Control;
      v6 = (__int64 *)v132;
      v46 = v124;
      v10 = 1;
    }
    *((_DWORD *)v29 + 14) = -1;
    if ( v46 >= *((_DWORD *)v36 + 9) )
    {
      if ( v46 >= *((_DWORD *)v36 + 10) )
      {
        if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
          || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x100) == 0
          || (v64 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 5u) )
        {
          v64 = 0;
        }
        if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
          || (v65 = 1, !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL)) )
        {
          v65 = 0;
        }
        if ( v64 || v65 )
        {
          v66 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, &WPP_GLOBAL_Control);
          v67 = v127;
          LOBYTE(v68) = v65;
          LOBYTE(v67) = v64;
          WPP_RECORDER_AND_TRACE_SF_Dd(
            *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
            v67,
            v68,
            *(_QWORD *)(v66 + 69160),
            5,
            9,
            58,
            (__int64)&WPP_cccf0f77aa2331519192f0f5d1ba828a_Traceguids,
            v127,
            SBYTE2(v127));
          v48 = (__int64)&WPP_GLOBAL_Control;
        }
        if ( (WndSBDisableFlags & 2) == 0 )
        {
          v71 = (_DWORD *)v130[0];
          *((_DWORD *)v29 + 14) = 1;
          *v71 = *((_DWORD *)v36 + 10);
          goto LABEL_130;
        }
        if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
          || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x100) == 0
          || *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 3u )
        {
          v10 = 0;
        }
        v56 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
        if ( !v10 && *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
          goto LABEL_156;
        v69 = *v6;
        v70 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, &WPP_GLOBAL_Control);
        v60 = v127;
        v120 = v69;
        v61 = *(_QWORD *)(v70 + 69160);
        v119 = BYTE2(v127);
        v118 = v127;
        v116 = 59;
        goto LABEL_155;
      }
      if ( v46 >= *((_DWORD *)v36 + 13) )
      {
        if ( v46 < *((_DWORD *)v36 + 12) )
          goto LABEL_116;
        if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
          || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x100) == 0
          || (v77 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 5u) )
        {
          v77 = 0;
        }
        if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
          || (v78 = 1, !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL)) )
        {
          v78 = 0;
        }
        if ( v77 || v78 )
        {
          v79 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, &WPP_GLOBAL_Control);
          v80 = v127;
          LOBYTE(v81) = v78;
          LOBYTE(v80) = v77;
          WPP_RECORDER_AND_TRACE_SF_Dd(
            *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
            v80,
            v81,
            *(_QWORD *)(v79 + 69160),
            5,
            9,
            63,
            (__int64)&WPP_cccf0f77aa2331519192f0f5d1ba828a_Traceguids,
            v127,
            SBYTE2(v127));
        }
        v62 = (_DWORD *)v130[0];
        *((_DWORD *)v29 + 14) = 3;
        *v62 = *((_DWORD *)v36 + 12);
        v63 = *((_DWORD *)v36 + 10);
      }
      else
      {
        if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
          || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x100) == 0
          || (v72 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 5u) )
        {
          v72 = 0;
        }
        if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
          || (v73 = 1, !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL)) )
        {
          v73 = 0;
        }
        if ( v72 || v73 )
        {
          v74 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, &WPP_GLOBAL_Control);
          v75 = v127;
          LOBYTE(v76) = v73;
          LOBYTE(v75) = v72;
          WPP_RECORDER_AND_TRACE_SF_Dd(
            *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
            v75,
            v76,
            *(_QWORD *)(v74 + 69160),
            5,
            9,
            60,
            (__int64)&WPP_cccf0f77aa2331519192f0f5d1ba828a_Traceguids,
            v127,
            SBYTE2(v127));
        }
        v62 = (_DWORD *)v130[0];
        *((_DWORD *)v29 + 14) = 2;
        *v62 = *((_DWORD *)v36 + 9);
        v63 = *((_DWORD *)v36 + 13);
      }
    }
    else
    {
      if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
        || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x100) == 0
        || (v51 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 5u) )
      {
        v51 = 0;
      }
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
        || (v52 = 1, !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL)) )
      {
        v52 = 0;
      }
      if ( v51 || v52 )
      {
        v53 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, &WPP_GLOBAL_Control);
        v54 = v127;
        LOBYTE(v55) = v52;
        LOBYTE(v54) = v51;
        WPP_RECORDER_AND_TRACE_SF_Dd(
          *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
          v54,
          v55,
          *(_QWORD *)(v53 + 69160),
          5,
          9,
          56,
          (__int64)&WPP_cccf0f77aa2331519192f0f5d1ba828a_Traceguids,
          v127,
          SBYTE2(v127));
        v48 = (__int64)&WPP_GLOBAL_Control;
      }
      if ( (WndSBDisableFlags & 1) != 0 )
      {
        if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
          || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x100) == 0
          || *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 3u )
        {
          v10 = 0;
        }
        v56 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
        if ( !v10 && *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
          goto LABEL_156;
        v57 = *v6;
        v58 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, &WPP_GLOBAL_Control);
        v60 = v127;
        v120 = v57;
        v61 = *(_QWORD *)(v58 + 69160);
        v119 = BYTE2(v127);
        v118 = v127;
        v116 = 57;
LABEL_155:
        LOBYTE(v59) = v56;
        LOBYTE(v60) = v10;
        WPP_RECORDER_AND_TRACE_SF_ddq(
          *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
          v60,
          v59,
          v61,
          3,
          9,
          v116,
          (__int64)&WPP_cccf0f77aa2331519192f0f5d1ba828a_Traceguids,
          v118,
          v119,
          v120);
LABEL_156:
        *(_QWORD *)(v6[2] + 752) = 0LL;
        goto LABEL_157;
      }
      v62 = (_DWORD *)v130[0];
      *((_DWORD *)v29 + 14) = 0;
      v63 = *((_DWORD *)v36 + 9);
    }
    v62[2] = v63;
    while ( 1 )
    {
LABEL_130:
      if ( a4 == 1 )
      {
        if ( *((_DWORD *)v29 + 14) < 2u )
          goto LABEL_136;
      }
      else if ( a4 != 2 )
      {
        goto LABEL_136;
      }
      if ( *((_DWORD *)v29 + 14) == 4 )
      {
        v48 = (unsigned int)(*((int *)v36 + 8) >> 31);
        *((_DWORD *)v29 + 18) = *((_DWORD *)v36 + 8) / -2;
LABEL_136:
        if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
          || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x100) == 0
          || (v92 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u) )
        {
          v92 = 0;
        }
        v93 = &WPP_RECORDER_INITIALIZED;
        v122 = v92;
        LOBYTE(v93) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
        v126 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
        if ( v92 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        {
          ScrollbarTypeString = GetScrollbarTypeString(*((_DWORD *)v29 + 22));
          v95 = *((_DWORD *)v29 + 21);
          v96 = *((_DWORD *)v29 + 20);
          v97 = *((_DWORD *)v29 + 19);
          v98 = *((_DWORD *)v29 + 18);
          ScrollRequestCodeString = GetScrollRequestCodeString(*((_DWORD *)v29 + 14), (*(_DWORD *)v29 >> 1) & 1);
          v102 = W32GetUserSessionState(v101, v100);
          LOBYTE(v103) = v126;
          LOBYTE(v104) = v122;
          WPP_RECORDER_AND_TRACE_SF_sdddds(
            *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
            v104,
            v103,
            *(_QWORD *)(v102 + 69160),
            v113,
            v114,
            v115,
            v117,
            (__int64)ScrollRequestCodeString,
            v98,
            v97,
            v96,
            v95,
            (__int64)ScrollbarTypeString);
          v36 = (_BYTE *)v131[0];
        }
        v105 = PtiCurrent((__int64)v93, v48);
        v106 = v132;
        xxxCapture(v105, v132, 3);
        if ( v29 == *(char **)(*((_QWORD *)v106 + 2) + 752LL) )
        {
          if ( *((_DWORD *)v29 + 14) != 4 )
            *((_OWORD *)v29 + 2) = v134;
          xxxSBTrackLoop(v106, v127, (struct tagSBCALC *)v36);
          v107 = *((_QWORD *)v106 + 2);
          v108 = *(_QWORD *)(v107 + 752);
          if ( v108 )
          {
            *(_QWORD *)(v107 + 752) = 0LL;
            HMAssignmentUnlock(v108 + 24);
            HMAssignmentUnlock(v108 + 16);
            HMAssignmentUnlock(v108 + 8);
            v110 = v108;
            goto LABEL_158;
          }
        }
        return;
      }
LABEL_116:
      if ( *((_DWORD *)v36 + 10) - *((_DWORD *)v36 + 9) <= *((_DWORD *)v36 + 8) )
        break;
      if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
        || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x100) == 0
        || (v82 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 5u) )
      {
        v82 = 0;
      }
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
        || (v83 = 1, !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL)) )
      {
        v83 = 0;
      }
      if ( v82 || v83 )
      {
        v84 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, &WPP_GLOBAL_Control);
        v85 = v127;
        LOBYTE(v86) = v83;
        LOBYTE(v85) = v82;
        WPP_RECORDER_AND_TRACE_SF_Dd(
          *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
          v85,
          v86,
          *(_QWORD *)(v84 + 69160),
          5,
          9,
          62,
          (__int64)&WPP_cccf0f77aa2331519192f0f5d1ba828a_Traceguids,
          v127,
          SBYTE2(v127));
      }
      *((_DWORD *)v29 + 14) = 4;
      CalcTrackDragRect((struct tagSBTRACK *)v29);
      *((_QWORD *)v29 + 6) = xxxTrackThumb;
      v87 = *((_DWORD *)v36 + 13);
      *((_DWORD *)v36 + 11) = v87;
      *((_DWORD *)v29 + 19) = v87;
      v88 = *((_DWORD *)v36 + 3);
      *((_DWORD *)v29 + 20) = v88;
      *((_DWORD *)v29 + 21) = v88;
      *((_DWORD *)v29 + 18) = *((_DWORD *)v36 + 11) - v124;
      v91 = PtiCurrent(v90, v89);
      xxxCapture(v91, (struct tagWND *)v6, 3);
      if ( v29 == *(char **)(v6[2] + 752) )
      {
        v48 = *((_QWORD *)v29 + 3);
        if ( !v48 )
          continue;
        xxxDoScroll(
          *((struct tagDRAWITEMSTRUCT ***)v29 + 2),
          (struct tagTHREADINFO **)v48,
          5u,
          *((_DWORD *)v29 + 20),
          (*(_DWORD *)v29 >> 1) & 1);
        if ( v29 == *(char **)(v6[2] + 752) )
          continue;
      }
      return;
    }
    if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
      || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x100) == 0
      || *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 3u )
    {
      v10 = 0;
    }
    v56 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v10 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      v111 = *v6;
      v112 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, &WPP_GLOBAL_Control);
      v60 = v127;
      v120 = v111;
      v61 = *(_QWORD *)(v112 + 69160);
      v119 = BYTE2(v127);
      v118 = v127;
      v116 = 61;
      goto LABEL_155;
    }
    goto LABEL_156;
  }
  if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
    || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x100) == 0
    || *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 3u )
  {
    v10 = 0;
  }
  v37 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
  if ( v10 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    v38 = *v6;
    v39 = W32GetUserSessionState(&WPP_RECORDER_INITIALIZED, v35);
    LOBYTE(v40) = v37;
    LOBYTE(v41) = v10;
    WPP_RECORDER_AND_TRACE_SF_ddq(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
      v41,
      v40,
      *(_QWORD *)(v39 + 69160),
      3,
      9,
      54,
      (__int64)&WPP_cccf0f77aa2331519192f0f5d1ba828a_Traceguids,
      v33,
      SBYTE2(v33),
      v38);
  }
  *(_QWORD *)(v6[2] + 752) = 0LL;
LABEL_157:
  HMAssignmentUnlock(v29 + 24);
  HMAssignmentUnlock(v29 + 16);
  HMAssignmentUnlock(v29 + 8);
  v110 = (__int64)v29;
LABEL_158:
  UserFreeIsolatedType<NSInstrumentation::CTypeIsolation<28672,112>>(v110, v109);
}
