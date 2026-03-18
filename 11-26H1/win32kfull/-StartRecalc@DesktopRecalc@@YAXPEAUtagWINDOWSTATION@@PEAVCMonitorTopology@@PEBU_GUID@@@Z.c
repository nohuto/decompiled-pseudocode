/*
 * XREFs of ?StartRecalc@DesktopRecalc@@YAXPEAUtagWINDOWSTATION@@PEAVCMonitorTopology@@PEBU_GUID@@@Z @ 0x14015CCB0
 * Callers:
 *     ?OnRapidHpdTimeout@DesktopRecalc@@YAXPEAVCMonitorTopology@@AEBU_GUID@@@Z @ 0x14015B9A0 (-OnRapidHpdTimeout@DesktopRecalc@@YAXPEAVCMonitorTopology@@AEBU_GUID@@@Z.c)
 *     ?OnMonitorRectsChanged@DesktopRecalc@@YAXPEAUtagWINDOWSTATION@@PEAVCMonitorTopology@@PEAU_DXGK_SET_DISPLAY_CONFIG_PARAMS_EX@@@Z @ 0x14015C0C8 (-OnMonitorRectsChanged@DesktopRecalc@@YAXPEAUtagWINDOWSTATION@@PEAVCMonitorTopology@@PEAU_DXGK_S.c)
 *     ?OnWorkAreaChanged@DesktopRecalc@@YAXPEAVCMonitorTopology@@@Z @ 0x14015C41C (-OnWorkAreaChanged@DesktopRecalc@@YAXPEAVCMonitorTopology@@@Z.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ?SessionDisconnectEvent@DesktopRecalc@InputTraceLogging@@SAXIH@Z @ 0x14015C048 (-SessionDisconnectEvent@DesktopRecalc@InputTraceLogging@@SAXIH@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_sd @ 0x14015C2D0 (WPP_RECORDER_AND_TRACE_SF_sd.c)
 *     ?MinimizeSettingEnabled@DesktopRecalcSettings@@YA_NXZ @ 0x14015C584 (-MinimizeSettingEnabled@DesktopRecalcSettings@@YA_NXZ.c)
 *     ?LogComparisonToCurrent@CMonitorTopology@@QEBAXXZ @ 0x14015C68C (-LogComparisonToCurrent@CMonitorTopology@@QEBAXXZ.c)
 *     ?TraceLoggingStartingRecalc@@YAXHIIIPEBU_GUID@@HH@Z @ 0x14015C8F4 (-TraceLoggingStartingRecalc@@YAXHIIIPEBU_GUID@@HH@Z.c)
 *     ?RestoreStateSettingEnabled@DesktopRecalcSettings@@YA_NXZ @ 0x14015CB14 (-RestoreStateSettingEnabled@DesktopRecalcSettings@@YA_NXZ.c)
 *     ?StartDesktopRecalc@DesktopRecalc@InputTraceLogging@@SAXIW4InputTracing_DesktopRecalcInitReason@@@Z @ 0x14015CC24 (-StartDesktopRecalc@DesktopRecalc@InputTraceLogging@@SAXIW4InputTracing_DesktopRecalcInitReason@.c)
 *     ?StartRecalcForDesktop@DesktopRecalc@@YAXPEAUtagDESKTOP@@PEAVCMonitorTopology@@W4StartRecalcReason@@@Z @ 0x14015E754 (-StartRecalcForDesktop@DesktopRecalc@@YAXPEAUtagDESKTOP@@PEAVCMonitorTopology@@W4StartRecalcReas.c)
 *     ?CompareToCurrent@CMonitorTopology@@QEBA?AW4CompareResult@1@W4CompareType@1@@Z @ 0x14015F6F8 (-CompareToCurrent@CMonitorTopology@@QEBA-AW4CompareResult@1@W4CompareType@1@@Z.c)
 *     ?Release@CMonitorTopology@@QEAAXXZ @ 0x14015FDB4 (-Release@CMonitorTopology@@QEAAXXZ.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1401913D0 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x1401A4EE4 (WPP_RECORDER_AND_TRACE_SF_d.c)
 */

void __fastcall DesktopRecalc::StartRecalc(
        DesktopRecalc *this,
        struct tagWINDOWSTATION *a2,
        const struct _GUID *a3,
        const struct _GUID *a4)
{
  int *v4; // rbp
  unsigned int v5; // r13d
  __int64 UserSessionState; // r14
  int IsDisconnectConnection; // eax
  __int64 v8; // rdx
  __int64 v9; // rcx
  char v10; // di
  __int64 v11; // rcx
  bool v12; // si
  DesktopRecalc *v13; // r14
  struct tagTHREADINFO *v14; // rax
  int v15; // edi
  DesktopRecalcSettings *v16; // rcx
  int v17; // ebx
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rax
  bool v21; // si
  __int64 v22; // rax
  int v23; // r8d
  int v24; // edx
  int v25; // ebx
  __int64 v26; // rax
  int v27; // r8d
  int v28; // edx
  __int64 v29; // r9
  const char *v30; // rax
  __int64 i; // rbx
  int v32; // r13d
  bool v33; // bp
  bool v34; // r14
  __int64 v35; // rax
  int v36; // r8d
  int v37; // edx
  bool v38; // bp
  __int64 v39; // rax
  int v40; // edx
  int v41; // r8d
  __int64 v42; // rdx
  bool v43; // r14
  int v44; // edx
  int v45; // r8d
  __int64 v46; // r9
  int v47; // [rsp+20h] [rbp-78h]
  int v48; // [rsp+28h] [rbp-70h]
  int v49; // [rsp+30h] [rbp-68h]
  __int16 v50; // [rsp+30h] [rbp-68h]
  int v51; // [rsp+38h] [rbp-60h]
  bool v52; // [rsp+50h] [rbp-48h]
  unsigned int v53; // [rsp+54h] [rbp-44h]
  unsigned int v54; // [rsp+54h] [rbp-44h]
  char v57; // [rsp+B8h] [rbp+20h]
  bool v58; // [rsp+B8h] [rbp+20h]

  v57 = 0;
  v4 = (int *)a2;
  v5 = this != 0LL ? 2 : 0;
  UserSessionState = W32GetUserSessionState(this, a2);
  IsDisconnectConnection = UserIsDisconnectConnection();
  v9 = *(_QWORD *)(UserSessionState + 71216);
  v10 = 1;
  if ( !IsDisconnectConnection )
  {
    if ( v9 )
    {
      v54 = *(_DWORD *)(v9 + 12);
      v38 = WPP_GLOBAL_Control != (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
         && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x40) != 0
         && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
      v58 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( v38 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        v39 = W32GetUserSessionState(WPP_GLOBAL_Control, v8);
        LOBYTE(v40) = v38;
        LOBYTE(v41) = v58;
        WPP_RECORDER_AND_TRACE_SF_d(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v40,
          v41,
          *(_QWORD *)(v39 + 69152),
          4,
          7,
          146,
          (__int64)&WPP_78206adbc0fc3667085fdf33c34682f8_Traceguids,
          v54);
      }
      InputTraceLogging::DesktopRecalc::SessionDisconnectEvent(v54, 0);
      v4 = *(int **)(UserSessionState + 71216);
      *(_QWORD *)(UserSessionState + 71216) = 0LL;
      v57 = 1;
      if ( *(_BYTE *)(UserSessionState + 71264) )
      {
        v5 = 1;
        v43 = WPP_GLOBAL_Control != (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
           && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x40) != 0
           && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
        v52 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
        if ( !v43 && *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
          goto LABEL_3;
        v46 = *(_QWORD *)(W32GetUserSessionState(WPP_GLOBAL_Control, v42) + 69152);
        v50 = 147;
      }
      else
      {
        v43 = WPP_GLOBAL_Control != (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
           && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x40) != 0
           && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
        v52 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
        if ( !v43 && *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
          goto LABEL_3;
        v46 = *(_QWORD *)(W32GetUserSessionState(WPP_GLOBAL_Control, v42) + 69152);
        v50 = 148;
      }
      LOBYTE(v44) = v43;
      LOBYTE(v45) = v52;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v44,
        v45,
        v46,
        4,
        7,
        v50,
        (__int64)&WPP_78206adbc0fc3667085fdf33c34682f8_Traceguids);
    }
LABEL_3:
    v53 = CMonitorTopology::CompareToCurrent(v4, 0LL);
    CMonitorTopology::LogComparisonToCurrent((CMonitorTopology *)v4);
    if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
      || (v11 = *((unsigned int *)WPP_GLOBAL_Control + 11), (v11 & 0x40) == 0)
      || *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u )
    {
      v10 = 0;
    }
    v12 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v10 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      v25 = v4[3];
      v26 = W32GetUserSessionState(v11, WPP_GLOBAL_Control);
      v13 = this;
      LOBYTE(v27) = v12;
      LOBYTE(v28) = v10;
      v29 = *(_QWORD *)(v26 + 69152);
      v30 = "for mode change";
      if ( !this )
        v30 = "for SPI_SETWORKAREA";
      WPP_RECORDER_AND_TRACE_SF_sd(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v28,
        v27,
        v29,
        v47,
        v48,
        v49,
        v51,
        (__int64)v30,
        v25);
    }
    else
    {
      v13 = this;
    }
    if ( v13 )
    {
      for ( i = *((_QWORD *)v13 + 2); i; i = *(_QWORD *)(i + 32) )
        DesktopRecalc::StartRecalcForDesktop(i, v4, v5);
    }
    else
    {
      v14 = PtiCurrent(v11);
      DesktopRecalc::StartRecalcForDesktop(*((_QWORD *)v14 + 61), v4, v5);
    }
    v15 = DesktopRecalcSettings::RestoreStateSettingEnabled((DesktopRecalcSettings *)v11);
    v17 = DesktopRecalcSettings::MinimizeSettingEnabled(v16);
    v20 = W32GetUserSessionState(v19, v18);
    TraceLoggingStartingRecalc(v13 == 0LL, v53, v4[1], ***(_DWORD ***)(v20 + 56968), a3, v17, v15);
    InputTraceLogging::DesktopRecalc::StartDesktopRecalc();
    if ( v57 )
      CMonitorTopology::Release((CMonitorTopology *)v4);
    return;
  }
  if ( !v9 )
  {
    *(_QWORD *)(UserSessionState + 71216) = v4;
    _InterlockedAdd(v4, 1u);
    v32 = *(_DWORD *)(*(_QWORD *)(UserSessionState + 71216) + 12LL);
    v33 = WPP_GLOBAL_Control != (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
       && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x40) != 0
       && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
    v34 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v33 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      v35 = W32GetUserSessionState(WPP_GLOBAL_Control, v8);
      LOBYTE(v36) = v34;
      LOBYTE(v37) = v33;
      WPP_RECORDER_AND_TRACE_SF_d(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v37,
        v36,
        *(_QWORD *)(v35 + 69152),
        4,
        7,
        144,
        (__int64)&WPP_78206adbc0fc3667085fdf33c34682f8_Traceguids,
        v32);
    }
    InputTraceLogging::DesktopRecalc::SessionDisconnectEvent(v32, 1);
  }
  if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x40) == 0
    || *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u )
  {
    v10 = 0;
  }
  v21 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
  if ( v10 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    v22 = W32GetUserSessionState(WPP_GLOBAL_Control, v8);
    LOBYTE(v23) = v21;
    LOBYTE(v24) = v10;
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v24,
      v23,
      *(_QWORD *)(v22 + 69152),
      4,
      7,
      145,
      (__int64)&WPP_78206adbc0fc3667085fdf33c34682f8_Traceguids);
  }
}
