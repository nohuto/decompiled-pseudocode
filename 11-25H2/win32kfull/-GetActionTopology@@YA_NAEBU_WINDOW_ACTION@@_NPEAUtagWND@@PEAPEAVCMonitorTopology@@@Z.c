/*
 * XREFs of ?GetActionTopology@@YA_NAEBU_WINDOW_ACTION@@_NPEAUtagWND@@PEAPEAVCMonitorTopology@@@Z @ 0x1402CAEB8
 * Callers:
 *     ?xxxApplyActionOld@WindowActions@@YAKPEAUtagWND@@_NPEAU_WINDOW_ACTION@@@Z @ 0x1402CE998 (-xxxApplyActionOld@WindowActions@@YAKPEAUtagWND@@_NPEAU_WINDOW_ACTION@@@Z.c)
 * Callees:
 *     ?GetCurrent@CTopologyManager@@SAPEAVCMonitorTopology@@XZ @ 0x1400229C8 (-GetCurrent@CTopologyManager@@SAPEAVCMonitorTopology@@XZ.c)
 *     ??1CCurrentMonitorTopologyPtr@@QEAA@XZ @ 0x1400232B8 (--1CCurrentMonitorTopologyPtr@@QEAA@XZ.c)
 *     WPP_RECORDER_AND_TRACE_SF_Dd @ 0x14005F670 (WPP_RECORDER_AND_TRACE_SF_Dd.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1400D9978 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x14018EC58 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     ?WindowHasPendingRecalc@DesktopRecalc@@YA_NPEBUtagWND@@@Z @ 0x140259954 (-WindowHasPendingRecalc@DesktopRecalc@@YA_NPEBUtagWND@@@Z.c)
 *     ?GetLastInterceptedTopology@DesktopRecalc@@YAPEAVCMonitorTopology@@PEAUtagWND@@@Z @ 0x1402C436C (-GetLastInterceptedTopology@DesktopRecalc@@YAPEAVCMonitorTopology@@PEAUtagWND@@@Z.c)
 */

char __fastcall GetActionTopology(
        const struct _WINDOW_ACTION *a1,
        struct tagWND *a2,
        struct tagWND *a3,
        struct CMonitorTopology **a4)
{
  int v4; // eax
  struct CMonitorTopology *v5; // rdi
  char v7; // bp
  const struct _WINDOW_ACTION *v8; // rsi
  bool v9; // bl
  bool v10; // di
  int v11; // edx
  int v12; // r8d
  __int64 v13; // r9
  struct CMonitorTopology *LastInterceptedTopology; // rax
  int v15; // r14d
  bool v16; // bl
  bool v17; // di
  __int64 UserSessionState; // rax
  int v19; // r8d
  int v20; // edx
  char v22; // bl
  bool v23; // al
  struct CMonitorTopology *Current; // rax
  __int64 v25; // rdx
  bool v26; // zf
  int v27; // esi
  int v28; // ebp
  bool v29; // di
  __int64 v30; // rax
  int v31; // r8d
  int v32; // edx
  __int16 v33; // [rsp+30h] [rbp-38h]
  CMonitorTopology *v34; // [rsp+70h] [rbp+8h] BYREF

  v4 = *(_DWORD *)a1;
  v5 = 0LL;
  v7 = (char)a2;
  v8 = a1;
  if ( (*(_DWORD *)a1 & 0x200) != 0 )
  {
    a1 = (const struct _WINDOW_ACTION *)*((unsigned int *)a1 + 22);
    if ( !(_DWORD)a1 && (v4 & 0xFFFFFDFF) != 0 )
    {
      v9 = *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
        && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) != 0
        && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 3u;
      v10 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( !v9 && *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
        return 0;
      v13 = *(_QWORD *)(W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, a2) + 69160);
      v33 = 99;
LABEL_59:
      LOBYTE(v12) = v10;
      LOBYTE(v11) = v9;
      WPP_RECORDER_AND_TRACE_SF_(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
        v11,
        v12,
        v13,
        3,
        4,
        v33,
        (__int64)&WPP_fade6bfb655b3fa6b02839cd02f2d6ee_Traceguids);
      return 0;
    }
    if ( (_BYTE)a2 )
    {
      if ( (_DWORD)a1 )
      {
        LastInterceptedTopology = DesktopRecalc::GetLastInterceptedTopology(a3, a2);
        v5 = LastInterceptedTopology;
        if ( !LastInterceptedTopology )
        {
          v9 = *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
            && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) != 0
            && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 3u;
          v10 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
          if ( !v9 && *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
            return 0;
          v13 = *(_QWORD *)(W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, a2) + 69160);
          v33 = 100;
          goto LABEL_59;
        }
        v15 = *((_DWORD *)v8 + 22);
        if ( *((_DWORD *)LastInterceptedTopology + 3) != v15 )
        {
          v16 = *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
             && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) != 0
             && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 3u;
          v17 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
          if ( v16 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
          {
            UserSessionState = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, a2);
            LOBYTE(v19) = v17;
            LOBYTE(v20) = v16;
            WPP_RECORDER_AND_TRACE_SF_d(
              *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
              v20,
              v19,
              *(_QWORD *)(UserSessionState + 69160),
              3,
              4,
              101,
              (__int64)&WPP_fade6bfb655b3fa6b02839cd02f2d6ee_Traceguids,
              v15);
          }
          return 0;
        }
      }
    }
    else
    {
      if ( (*((_DWORD *)a3 + 95) & 0x10) == 0 )
      {
        v9 = *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
          && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) != 0
          && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 3u;
        v10 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
        if ( !v9 && *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
          return 0;
        v13 = *(_QWORD *)(W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, a2) + 69160);
        v33 = 102;
        goto LABEL_59;
      }
      if ( !(_DWORD)a1 )
      {
        v9 = *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
          && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) != 0
          && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 3u;
        v10 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
        if ( !v9 && *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
          return 0;
        v13 = *(_QWORD *)(W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, a2) + 69160);
        v33 = 103;
        goto LABEL_59;
      }
      if ( !DesktopRecalc::WindowHasPendingRecalc(a3, a2) )
      {
        v9 = *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
          && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) != 0
          && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 3u;
        v10 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
        if ( !v9 && *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
          return 0;
        v13 = *(_QWORD *)(W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, a2) + 69160);
        v33 = 104;
        goto LABEL_59;
      }
    }
  }
  v22 = 1;
  v23 = (*(_DWORD *)v8 & 0x200) == 0 || !v7;
  if ( !v5 && v23 )
  {
    Current = CTopologyManager::GetCurrent((__int64)a1, (__int64)a2);
    v26 = (*(_DWORD *)v8 & 0x200) == 0;
    v5 = Current;
    v34 = Current;
    if ( !v26 && !v7 )
    {
      v27 = *((_DWORD *)v8 + 22);
      v28 = *((_DWORD *)Current + 3);
      if ( v27 != v28 )
      {
        if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
          || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) == 0
          || *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 3u )
        {
          v22 = 0;
        }
        v29 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
        if ( v22 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        {
          v30 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v25);
          LOBYTE(v31) = v29;
          LOBYTE(v32) = v22;
          WPP_RECORDER_AND_TRACE_SF_Dd(
            *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
            v32,
            v31,
            *(_QWORD *)(v30 + 69160),
            3,
            4,
            105,
            (__int64)&WPP_fade6bfb655b3fa6b02839cd02f2d6ee_Traceguids,
            v27,
            v28);
        }
        CCurrentMonitorTopologyPtr::~CCurrentMonitorTopologyPtr(&v34);
        return 0;
      }
    }
    _InterlockedAdd((volatile signed __int32 *)Current, 1u);
    CCurrentMonitorTopologyPtr::~CCurrentMonitorTopologyPtr(&v34);
  }
  *a4 = v5;
  return 1;
}
