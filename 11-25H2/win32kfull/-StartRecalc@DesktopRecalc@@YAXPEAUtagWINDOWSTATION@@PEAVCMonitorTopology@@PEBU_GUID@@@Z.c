/*
 * XREFs of ?StartRecalc@DesktopRecalc@@YAXPEAUtagWINDOWSTATION@@PEAVCMonitorTopology@@PEBU_GUID@@@Z @ 0x14002860C
 * Callers:
 *     ?OnMonitorRectsChanged@DesktopRecalc@@YAXPEAUtagWINDOWSTATION@@PEAVCMonitorTopology@@PEAU_DXGK_SET_DISPLAY_CONFIG_PARAMS_EX@@@Z @ 0x140028254 (-OnMonitorRectsChanged@DesktopRecalc@@YAXPEAUtagWINDOWSTATION@@PEAVCMonitorTopology@@PEAU_DXGK_S.c)
 *     ?OnWorkAreaChanged@DesktopRecalc@@YAXPEAVCMonitorTopology@@@Z @ 0x140028434 (-OnWorkAreaChanged@DesktopRecalc@@YAXPEAVCMonitorTopology@@@Z.c)
 *     ?OnRapidHpdTimeout@DesktopRecalc@@YAXPEAVCMonitorTopology@@AEBU_GUID@@@Z @ 0x1402C4C9C (-OnRapidHpdTimeout@DesktopRecalc@@YAXPEAVCMonitorTopology@@AEBU_GUID@@@Z.c)
 * Callees:
 *     ?CompareToCurrent@CMonitorTopology@@QEBA?AW4CompareResult@1@W4CompareType@1@@Z @ 0x14002233C (-CompareToCurrent@CMonitorTopology@@QEBA-AW4CompareResult@1@W4CompareType@1@@Z.c)
 *     ?Release@CMonitorTopology@@QEAAXXZ @ 0x1400229F8 (-Release@CMonitorTopology@@QEAAXXZ.c)
 *     ?StartDesktopRecalc@DesktopRecalc@InputTraceLogging@@SAXIW4InputTracing_DesktopRecalcInitReason@@@Z @ 0x140028ADC (-StartDesktopRecalc@DesktopRecalc@InputTraceLogging@@SAXIW4InputTracing_DesktopRecalcInitReason@.c)
 *     ?RestoreStateSettingEnabled@DesktopRecalcSettings@@YA_NXZ @ 0x140028B68 (-RestoreStateSettingEnabled@DesktopRecalcSettings@@YA_NXZ.c)
 *     ?TraceLoggingStartingRecalc@@YAXHIIIPEBU_GUID@@HH@Z @ 0x140028C78 (-TraceLoggingStartingRecalc@@YAXHIIIPEBU_GUID@@HH@Z.c)
 *     ?LogComparisonToCurrent@CMonitorTopology@@QEBAXXZ @ 0x140028E98 (-LogComparisonToCurrent@CMonitorTopology@@QEBAXXZ.c)
 *     ?MinimizeSettingEnabled@DesktopRecalcSettings@@YA_NXZ @ 0x140029100 (-MinimizeSettingEnabled@DesktopRecalcSettings@@YA_NXZ.c)
 *     ?StartRecalcForDesktop@DesktopRecalc@@YAXPEAUtagDESKTOP@@PEAVCMonitorTopology@@W4StartRecalcReason@@@Z @ 0x1400295EC (-StartRecalcForDesktop@DesktopRecalc@@YAXPEAUtagDESKTOP@@PEAVCMonitorTopology@@W4StartRecalcReas.c)
 *     WPP_RECORDER_AND_TRACE_SF_sd @ 0x140029E70 (WPP_RECORDER_AND_TRACE_SF_sd.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036850 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1400D9978 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x14018EC58 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     ?SessionDisconnectEvent@DesktopRecalc@InputTraceLogging@@SAXIH@Z @ 0x140228028 (-SessionDisconnectEvent@DesktopRecalc@InputTraceLogging@@SAXIH@Z.c)
 */

void __fastcall DesktopRecalc::StartRecalc(
        DesktopRecalc *this,
        struct tagWINDOWSTATION *a2,
        const struct _GUID *a3,
        const struct _GUID *a4)
{
  struct tagWINDOWSTATION *v4; // rbp
  unsigned int v5; // r12d
  __int64 UserSessionState; // rsi
  int IsDisconnectConnection; // eax
  __int64 v8; // rdx
  char v9; // di
  unsigned int v10; // r12d
  bool v11; // si
  bool v12; // bp
  __int64 v13; // rax
  int v14; // r8d
  int v15; // edx
  bool v16; // si
  __int64 v17; // rax
  int v18; // r8d
  int v19; // edx
  bool v20; // bp
  __int64 v21; // rax
  int v22; // edx
  int v23; // r8d
  __int64 v24; // rdx
  bool v25; // si
  int v26; // edx
  int v27; // r8d
  __int64 v28; // r9
  DesktopRecalcSettings *v29; // rcx
  bool v30; // si
  int v31; // ebx
  __int64 v32; // rax
  DesktopRecalc *v33; // r14
  int v34; // r8d
  int v35; // edx
  __int64 v36; // r9
  const char *v37; // rax
  __int64 i; // rbx
  struct tagTHREADINFO *v39; // rax
  int v40; // edi
  DesktopRecalcSettings *v41; // rcx
  int v42; // ebx
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // rax
  int v46; // [rsp+20h] [rbp-78h]
  int v47; // [rsp+28h] [rbp-70h]
  int v48; // [rsp+30h] [rbp-68h]
  __int16 v49; // [rsp+30h] [rbp-68h]
  int v50; // [rsp+38h] [rbp-60h]
  bool v51; // [rsp+50h] [rbp-48h]
  unsigned int v52; // [rsp+54h] [rbp-44h]
  unsigned int v53; // [rsp+54h] [rbp-44h]
  char v56; // [rsp+B8h] [rbp+20h]
  bool v57; // [rsp+B8h] [rbp+20h]

  v56 = 0;
  v4 = a2;
  v5 = this != 0LL ? 2 : 0;
  UserSessionState = W32GetUserSessionState(this, a2);
  IsDisconnectConnection = UserIsDisconnectConnection();
  v8 = *(_QWORD *)(UserSessionState + 71232);
  v9 = 1;
  if ( IsDisconnectConnection )
  {
    if ( !v8 )
    {
      *(_QWORD *)(UserSessionState + 71232) = v4;
      _InterlockedAdd((volatile signed __int32 *)v4, 1u);
      v10 = *(_DWORD *)(*(_QWORD *)(UserSessionState + 71232) + 12LL);
      v11 = *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
         && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x40) != 0
         && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 4u;
      v12 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( v11 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        v13 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, 0LL);
        LOBYTE(v14) = v12;
        LOBYTE(v15) = v11;
        WPP_RECORDER_AND_TRACE_SF_d(
          *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
          v15,
          v14,
          *(_QWORD *)(v13 + 69160),
          4,
          7,
          144,
          (__int64)&WPP_5203336677413a97442e065d09735669_Traceguids,
          v10);
      }
      InputTraceLogging::DesktopRecalc::SessionDisconnectEvent(v10, 1);
    }
    if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
      || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x40) == 0
      || *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u )
    {
      v9 = 0;
    }
    v16 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v9 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      v17 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v8);
      LOBYTE(v18) = v16;
      LOBYTE(v19) = v9;
      WPP_RECORDER_AND_TRACE_SF_(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
        v19,
        v18,
        *(_QWORD *)(v17 + 69160),
        4,
        7,
        145,
        (__int64)&WPP_5203336677413a97442e065d09735669_Traceguids);
    }
    return;
  }
  if ( v8 )
  {
    v52 = *(_DWORD *)(v8 + 12);
    v20 = *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
       && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x40) != 0
       && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 4u;
    v57 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v20 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      v21 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v8);
      LOBYTE(v22) = v20;
      LOBYTE(v23) = v57;
      WPP_RECORDER_AND_TRACE_SF_d(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
        v22,
        v23,
        *(_QWORD *)(v21 + 69160),
        4,
        7,
        146,
        (__int64)&WPP_5203336677413a97442e065d09735669_Traceguids,
        v52);
    }
    InputTraceLogging::DesktopRecalc::SessionDisconnectEvent(v52, 0);
    v4 = *(struct tagWINDOWSTATION **)(UserSessionState + 71232);
    *(_QWORD *)(UserSessionState + 71232) = 0LL;
    v56 = 1;
    if ( *(_BYTE *)(UserSessionState + 71280) )
    {
      v5 = 1;
      v25 = *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
         && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x40) != 0
         && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 4u;
      v51 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( !v25 && *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
        goto LABEL_46;
      v28 = *(_QWORD *)(W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v24) + 69160);
      v49 = 147;
    }
    else
    {
      v25 = *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
         && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x40) != 0
         && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 4u;
      v51 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( !v25 && *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
        goto LABEL_46;
      v28 = *(_QWORD *)(W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v24) + 69160);
      v49 = 148;
    }
    LOBYTE(v26) = v25;
    LOBYTE(v27) = v51;
    WPP_RECORDER_AND_TRACE_SF_(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
      v26,
      v27,
      v28,
      4,
      7,
      v49,
      (__int64)&WPP_5203336677413a97442e065d09735669_Traceguids);
  }
LABEL_46:
  v53 = CMonitorTopology::CompareToCurrent((__int64)v4, 0LL);
  CMonitorTopology::LogComparisonToCurrent(v4);
  if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
    || (v29 = (DesktopRecalcSettings *)*(unsigned int *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL),
        ((unsigned __int8)v29 & 0x40) == 0)
    || *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u )
  {
    v9 = 0;
  }
  v30 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
  if ( !v9 && *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
  {
    v33 = this;
  }
  else
  {
    v31 = *((_DWORD *)v4 + 3);
    v32 = W32GetUserSessionState(v29, *(_QWORD *)&WPP_GLOBAL_Control);
    v33 = this;
    LOBYTE(v34) = v30;
    LOBYTE(v35) = v9;
    v36 = *(_QWORD *)(v32 + 69160);
    v37 = "for mode change";
    if ( !this )
      v37 = "for SPI_SETWORKAREA";
    WPP_RECORDER_AND_TRACE_SF_sd(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
      v35,
      v34,
      v36,
      v46,
      v47,
      v48,
      v50,
      (__int64)v37,
      v31);
  }
  if ( v33 )
  {
    for ( i = *((_QWORD *)v33 + 2); i; i = *(_QWORD *)(i + 32) )
      DesktopRecalc::StartRecalcForDesktop(i, v4, v5);
  }
  else
  {
    v39 = PtiCurrent();
    DesktopRecalc::StartRecalcForDesktop(*((_QWORD *)v39 + 62), v4, v5);
  }
  v40 = DesktopRecalcSettings::RestoreStateSettingEnabled(v29);
  v42 = DesktopRecalcSettings::MinimizeSettingEnabled(v41);
  v45 = W32GetUserSessionState(v44, v43);
  TraceLoggingStartingRecalc(v33 == 0LL, v53, *((_DWORD *)v4 + 1), ***(_DWORD ***)(v45 + 56968), a3, v42, v40);
  InputTraceLogging::DesktopRecalc::StartDesktopRecalc(*((unsigned int *)v4 + 3), v33 == 0LL);
  if ( v56 )
    CMonitorTopology::Release(v4);
}
