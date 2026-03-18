/*
 * XREFs of ?CreateTopologySnapshot@CMonitorTopology@@SAPEAV1@XZ @ 0x140212314
 * Callers:
 *     ?UpdateCurrent@CTopologyManager@@SA_NXZ @ 0x140292D08 (-UpdateCurrent@CTopologyManager@@SA_NXZ.c)
 * Callees:
 *     W32GetCurrentWin32kSessionId @ 0x1400FC820 (W32GetCurrentWin32kSessionId.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x14019025C (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     WPP_RECORDER_AND_TRACE_SF_Dd @ 0x1401A3DAC (WPP_RECORDER_AND_TRACE_SF_Dd.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x1401A4EE4 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     GreGetMonitorHash @ 0x140212DB4 (GreGetMonitorHash.c)
 *     ?ValidateTopology@CMonitorTopology@@SAXPEBV1@@Z @ 0x140212E70 (-ValidateTopology@CMonitorTopology@@SAXPEBV1@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_Ld @ 0x140212FF0 (WPP_RECORDER_AND_TRACE_SF_Ld.c)
 *     WPP_RECORDER_AND_TRACE_SF_dqddddddddd @ 0x140230CAC (WPP_RECORDER_AND_TRACE_SF_dqddddddddd.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14028B39C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

struct CMonitorTopology *__fastcall CMonitorTopology::CreateTopologySnapshot(__int64 a1, __int64 a2)
{
  unsigned int ***v2; // r14
  unsigned int v3; // eax
  __int64 v4; // rdx
  _DWORD *v5; // r15
  __int64 v6; // rdx
  bool v7; // di
  int v8; // ebp
  unsigned int *i; // rbx
  char v10; // r12
  char v11; // si
  __int64 v12; // r13
  int MonitorHash; // eax
  __int64 v14; // rdx
  char v15; // r13
  const struct CMonitorTopology *v16; // rsi
  __int64 v17; // rdx
  __int64 v18; // r8
  bool v19; // si
  bool v21; // si
  char v22; // bp
  bool v23; // r15
  _DWORD *v24; // r13
  int v25; // ebp
  __int64 v26; // rax
  __int64 v27; // r15
  unsigned int *v28; // rbx
  char v29; // bp
  __int64 v30; // r8
  int v31; // eax
  unsigned __int64 v32; // rcx
  char v33; // r15
  __int64 v34; // rdx
  __int64 v35; // rdx
  char v36; // al
  __int64 v37; // rcx
  __int64 v38; // rdx
  char v39; // r15
  unsigned int j; // edx
  __int64 v41; // rax
  unsigned int *v42; // rcx
  int v43; // edx
  int v44; // r8d
  __int64 v45; // r9
  int v46; // edi
  char CurrentWin32kSessionId; // bl
  __int64 v48; // rdx
  __int64 v49; // rcx
  __int64 v50; // rax
  int v51; // r8d
  int v52; // edx
  __int64 UserSessionState; // rax
  int v54; // r8d
  int v55; // edx
  bool v56; // r12
  __int64 v57; // rax
  int v58; // r8d
  int v59; // edx
  unsigned int *v60; // rcx
  __int64 v61; // rax
  int v62; // r8d
  int v63; // edx
  char v64; // bp
  bool v65; // r12
  __int64 v66; // rax
  int v67; // r8d
  int v68; // edx
  __int16 v69; // bx
  int v70; // edi
  int v71; // esi
  int v72; // ebp
  int v73; // r14d
  int v74; // r15d
  int v75; // r12d
  int v76; // r13d
  __int64 v77; // rax
  int v78; // r8d
  int v79; // edx
  int v80; // [rsp+20h] [rbp-108h]
  int v81; // [rsp+28h] [rbp-100h]
  int v82; // [rsp+30h] [rbp-F8h]
  __int16 v83; // [rsp+30h] [rbp-F8h]
  int v84; // [rsp+38h] [rbp-F0h]
  unsigned int v85; // [rsp+40h] [rbp-E8h]
  char v86; // [rsp+78h] [rbp-B0h]
  int v87; // [rsp+ACh] [rbp-7Ch]
  _DWORD *v88; // [rsp+B0h] [rbp-78h]
  unsigned int ***v89; // [rsp+B8h] [rbp-70h]
  unsigned int *v90; // [rsp+C0h] [rbp-68h]
  __int64 v91; // [rsp+C8h] [rbp-60h]
  _DWORD *v92; // [rsp+D0h] [rbp-58h]
  __int64 v93; // [rsp+D8h] [rbp-50h]
  int v94; // [rsp+130h] [rbp+8h]
  char v95; // [rsp+130h] [rbp+8h]
  char v96; // [rsp+130h] [rbp+8h]
  __int64 v97; // [rsp+130h] [rbp+8h]
  __int64 v98; // [rsp+138h] [rbp+10h]
  bool v99; // [rsp+138h] [rbp+10h]
  int v100; // [rsp+140h] [rbp+18h]
  int v101; // [rsp+148h] [rbp+20h] BYREF

  v2 = (unsigned int ***)(W32GetUserSessionState(a1, a2) + 56968);
  v89 = v2;
  v3 = ***v2;
  if ( v3 >= 0xFFFF || !v3 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 413LL);
  v5 = (_DWORD *)Win32AllocPoolZInit(4LL * ***v2, 1919775573LL);
  if ( !v5 )
  {
    v7 = WPP_GLOBAL_Control != (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x40) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 2u;
    v19 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( !v7 && *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
      return 0LL;
    v42 = **v2;
    v85 = *v42;
    v45 = *(_QWORD *)(W32GetUserSessionState(v42, v4) + 69152);
    v83 = 11;
    goto LABEL_95;
  }
  v6 = 0LL;
  v7 = 1;
  v94 = 0;
  v8 = 0;
  for ( i = (*v2)[13]; i; ++v8 )
  {
    if ( (*(_DWORD *)(*((_QWORD *)i + 5) + 24LL) & 1) != 0 )
    {
      v98 = *((_QWORD *)i + 10);
      if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x40) == 0
        || (v10 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
      {
        v10 = 0;
      }
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
        || (v11 = 1, !*((_WORD *)WPP_GLOBAL_Control + 36)) )
      {
        v11 = 0;
      }
      if ( v10 || v11 )
      {
        UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control, v6);
        LOBYTE(v54) = v11;
        v12 = v98;
        LOBYTE(v55) = v10;
        WPP_RECORDER_AND_TRACE_SF_q(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v55,
          v54,
          *(_QWORD *)(UserSessionState + 69152),
          5,
          7,
          12,
          (__int64)&WPP_f02a4a4a8b293b2feea165eb98bca231_Traceguids,
          v98);
      }
      else
      {
        v12 = *((_QWORD *)i + 10);
      }
      MonitorHash = GreGetMonitorHash(v12, &v5[v8], 0LL);
      v15 = MonitorHash;
      if ( (int)(MonitorHash + 0x80000000) >= 0 && MonitorHash != -1073741789 )
      {
        v21 = WPP_GLOBAL_Control != (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
           && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x40) != 0
           && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 2u;
        v56 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
        if ( v21 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        {
          v57 = W32GetUserSessionState(WPP_GLOBAL_Control, v14);
          LOBYTE(v58) = v56;
          LOBYTE(v59) = v21;
          WPP_RECORDER_AND_TRACE_SF_d(
            *((_QWORD *)WPP_GLOBAL_Control + 3),
            v59,
            v58,
            *(_QWORD *)(v57 + 69152),
            2,
            7,
            13,
            (__int64)&WPP_f02a4a4a8b293b2feea165eb98bca231_Traceguids,
            v15);
        }
        v5[v8] = 0;
      }
      v6 = (unsigned int)(v5[v8] + v94);
      v94 += v5[v8];
    }
    i = (unsigned int *)*((_QWORD *)i + 7);
  }
  v92 = (_DWORD *)Win32AllocPoolZInit(20 * (_DWORD)v6 + 8 * (9 * (***v2 - 1) + 11), 1919775573LL);
  v16 = (const struct CMonitorTopology *)v92;
  if ( v92 )
  {
    for ( j = 0; j < ***v2; v92[18 * v41 + 18] = v5[v41] )
      v41 = j++;
  }
  Win32FreePool(v5);
  v18 = 0LL;
  if ( !v92 )
  {
    if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x40) == 0
      || *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u )
    {
      v7 = 0;
    }
    v19 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( !v7 && *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
      return 0LL;
    v60 = **v2;
    v85 = *v60;
    v45 = *(_QWORD *)(W32GetUserSessionState(v60, v17) + 69152);
    v83 = 14;
LABEL_95:
    LOBYTE(v44) = v19;
    LOBYTE(v43) = v7;
    WPP_RECORDER_AND_TRACE_SF_d(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v43,
      v44,
      v45,
      2,
      7,
      v83,
      (__int64)&WPP_f02a4a4a8b293b2feea165eb98bca231_Traceguids,
      v85);
    return 0LL;
  }
  *v92 = 1;
  if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x40) == 0
    || (v22 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
  {
    v22 = 0;
  }
  v23 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
  if ( v22 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    v46 = v92[3];
    CurrentWin32kSessionId = W32GetCurrentWin32kSessionId((__int64)WPP_GLOBAL_Control);
    v50 = W32GetUserSessionState(v49, v48);
    LOBYTE(v51) = v23;
    LOBYTE(v52) = v22;
    WPP_RECORDER_AND_TRACE_SF_Ld(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v52,
      v51,
      *(_QWORD *)(v50 + 69152),
      v80,
      v81,
      v82,
      v84,
      CurrentWin32kSessionId,
      v46);
    v18 = 0LL;
  }
  v24 = v92 + 4;
  v25 = 0;
  v100 = 0;
  v26 = ***v2;
  v92[1] = v26;
  v27 = (__int64)&v92[18 * v26 + 4];
  v28 = (*v2)[13];
  while ( 1 )
  {
    v90 = v28;
    v88 = v24;
    if ( !v28 )
      break;
    v37 = *((_QWORD *)v28 + 5);
    if ( (*(_DWORD *)(v37 + 24) & 1) != 0 )
    {
      *(_OWORD *)(v24 + 2) = *(_OWORD *)(v37 + 28);
      *(_OWORD *)(v24 + 6) = *(_OWORD *)(*((_QWORD *)v28 + 5) + 44LL);
      *((_WORD *)v24 + 20) = *(_WORD *)(*((_QWORD *)v28 + 5) + 60LL);
      v24[16] = *(unsigned __int16 *)(*((_QWORD *)(*v2)[13] + 5) + 62LL);
      if ( *(_WORD *)(*((_QWORD *)(*v2)[13] + 5) + 62LL) != *(_WORD *)(*((_QWORD *)v28 + 5) + 62LL) )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 518LL);
      v38 = *((_QWORD *)(*v2)[13] + 5);
      if ( *(_WORD *)(v38 + 62) > *(_WORD *)(*((_QWORD *)v28 + 5) + 60LL) )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 520LL);
      if ( (unsigned int)HdevFromMonitor(v28, v38, v18) != -1 )
        *(_QWORD *)v24 = *(_QWORD *)v28;
      v32 = (unsigned int)v24[14];
      *((_QWORD *)v24 + 6) = v27;
      v93 = v27 + 20 * v32;
      if ( (_DWORD)v32 )
      {
        v97 = *((_QWORD *)v28 + 10);
        if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
          || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x40) == 0
          || (v39 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
        {
          v39 = 0;
        }
        if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
          || (v29 = 1, !*((_WORD *)WPP_GLOBAL_Control + 36)) )
        {
          v29 = 0;
        }
        if ( v39 || v29 )
        {
          v61 = W32GetUserSessionState(WPP_GLOBAL_Control, v34);
          LOBYTE(v62) = v29;
          LOBYTE(v63) = v39;
          WPP_RECORDER_AND_TRACE_SF_q(
            *((_QWORD *)WPP_GLOBAL_Control + 3),
            v63,
            v62,
            *(_QWORD *)(v61 + 69152),
            5,
            7,
            16,
            (__int64)&WPP_f02a4a4a8b293b2feea165eb98bca231_Traceguids,
            v97);
        }
        v30 = *((_QWORD *)v24 + 6);
        v101 = v24[14];
        v31 = GreGetMonitorHash(v97, &v101, v30);
        v33 = v101;
        v34 = 0LL;
        v95 = v31;
        if ( v31 < 0 || v101 != v24[14] )
        {
          if ( v101 != v24[14] )
          {
            MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 543LL);
            v33 = v101;
            v34 = 0LL;
          }
          v32 = (unsigned __int64)WPP_GLOBAL_Control;
          if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
            || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x40) == 0
            || (v64 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u) )
          {
            v64 = 0;
          }
          v65 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
          if ( v64 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
          {
            v66 = W32GetUserSessionState(WPP_GLOBAL_Control, 0LL);
            LOBYTE(v67) = v65;
            LOBYTE(v68) = v64;
            WPP_RECORDER_AND_TRACE_SF_Dd(
              *((_QWORD *)WPP_GLOBAL_Control + 3),
              v68,
              v67,
              *(_QWORD *)(v66 + 69152),
              3,
              7,
              17,
              (__int64)&WPP_f02a4a4a8b293b2feea165eb98bca231_Traceguids,
              v95,
              v33);
            v34 = 0LL;
          }
          *((_QWORD *)v24 + 6) = 0LL;
          v24[14] = 0;
        }
        v25 = v100;
      }
      if ( v28 == *(unsigned int **)(GetDispInfo(v32, v34) + 96) )
        *((_DWORD *)v16 + 2) = v25;
      if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x40) == 0
        || *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u )
      {
        v18 = 0LL;
        v36 = 0;
      }
      else
      {
        v36 = 1;
        v18 = 0LL;
      }
      v96 = v36;
      v99 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( v36 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        v69 = *((_WORD *)v24 + 20);
        v70 = v24[9];
        v71 = v24[8];
        v72 = v24[7];
        v73 = v24[6];
        v74 = v24[5];
        v75 = v24[4];
        v76 = v24[3];
        v87 = v88[2];
        v91 = *(_QWORD *)v88;
        v77 = W32GetUserSessionState(v88, v35);
        LOBYTE(v78) = v99;
        LOBYTE(v79) = v96;
        v86 = v72;
        v25 = v100;
        WPP_RECORDER_AND_TRACE_SF_dqddddddddd(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v79,
          v78,
          *(_QWORD *)(v77 + 69152),
          v80,
          v81,
          v82,
          v84,
          v100,
          v91,
          v87,
          v76,
          v75,
          v74,
          v73,
          v86,
          v71,
          v70,
          v69);
        v24 = v88;
        v16 = (const struct CMonitorTopology *)v92;
        v18 = 0LL;
        v28 = v90;
        v2 = v89;
      }
      v27 = v93;
      v100 = ++v25;
    }
    v28 = (unsigned int *)*((_QWORD *)v28 + 7);
    v24 += 18;
  }
  if ( *((_DWORD *)v16 + 1) != v25 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 576LL);
  if ( !*((_DWORD *)v16 + 1) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 577LL);
  CMonitorTopology::ValidateTopology(v16);
  return v16;
}
