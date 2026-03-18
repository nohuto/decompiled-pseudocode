/*
 * XREFs of ?ShouldMinimizeOnMonitorRemove@CRecalcState@@AEAA_NPEAUtagWND@@PEBUMonitorData@CMonitorTopology@@PEBVCRecalcContext@@@Z @ 0x14002808C
 * Callers:
 *     ?GetMigrateMonitor@CRecalcState@@QEAAPEAUtagMONITOR@@PEAUtagWND@@PEAVCRecalcContext@@PEBUMonitorData@CMonitorTopology@@@Z @ 0x1402C4458 (-GetMigrateMonitor@CRecalcState@@QEAAPEAUtagMONITOR@@PEAUtagWND@@PEAVCRecalcContext@@PEBUMonitor.c)
 * Callees:
 *     ?MinimizeSettingEnabled@DesktopRecalcSettings@@YA_NXZ @ 0x140029100 (-MinimizeSettingEnabled@DesktopRecalcSettings@@YA_NXZ.c)
 *     ?AnyHashPresentInCurrent@CMonitorTopology@@QEAA_NAEBUMonitorId@1@@Z @ 0x140029FC4 (-AnyHashPresentInCurrent@CMonitorTopology@@QEAA_NAEBUMonitorId@1@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1400D9978 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ?IsWindowEligibleForMinimize@CRecalcState@@AEAA_NPEBUtagWND@@@Z @ 0x14026B178 (-IsWindowEligibleForMinimize@CRecalcState@@AEAA_NPEBUtagWND@@@Z.c)
 */

char __fastcall CRecalcState::ShouldMinimizeOnMonitorRemove(
        CRecalcState *this,
        struct tagWND *a2,
        const struct CMonitorTopology::MonitorData *a3,
        const struct CRecalcContext *a4)
{
  DesktopRecalcSettings *v7; // rcx
  __int64 v8; // rdx
  char i; // bl
  char v10; // di
  int v11; // edx
  int v12; // r8d
  __int64 v13; // r9
  __int64 v15; // rdx
  unsigned int v16; // edi
  __int64 v17; // rdx
  __int16 v18; // [rsp+30h] [rbp-18h]

  if ( !CRecalcState::IsWindowEligibleForMinimize(this, a2) || !DesktopRecalcSettings::MinimizeSettingEnabled(v7) )
    return 0;
  if ( *((_DWORD *)a4 + 8) == 3 )
  {
    i = 1;
    if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
      || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x40) == 0
      || (v10 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 5u) )
    {
      v10 = 0;
    }
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
      || !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL) )
    {
      i = 0;
    }
    if ( !v10 && !i )
      return 0;
    v13 = *(_QWORD *)(W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v8) + 69160);
    v18 = 46;
    goto LABEL_14;
  }
  v15 = *((_QWORD *)this + 2);
  v16 = 0;
  for ( i = 1; v16 < *(_DWORD *)(v15 + 4); ++v16 )
  {
    v17 = v15 + 72LL * v16 + 16;
    if ( a3 != (const struct CMonitorTopology::MonitorData *)v17
      && CMonitorTopology::AnyHashPresentInCurrent(
           (CMonitorTopology *)(9LL * v16),
           (const struct CMonitorTopology::MonitorId *)(v17 + 48)) )
    {
      break;
    }
    v15 = *((_QWORD *)this + 2);
  }
  if ( v16 == *(_DWORD *)(*((_QWORD *)this + 2) + 4LL) )
  {
    if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
      || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x40) == 0
      || (v10 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 5u) )
    {
      v10 = 0;
    }
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
      || !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL) )
    {
      i = 0;
    }
    if ( !v10 && !i )
      return 0;
    v13 = *(_QWORD *)(W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v15) + 69160);
    v18 = 47;
LABEL_14:
    LOBYTE(v12) = i;
    LOBYTE(v11) = v10;
    WPP_RECORDER_AND_TRACE_SF_(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
      v11,
      v12,
      v13,
      5,
      7,
      v18,
      (__int64)&WPP_5203336677413a97442e065d09735669_Traceguids);
    return 0;
  }
  return 1;
}
