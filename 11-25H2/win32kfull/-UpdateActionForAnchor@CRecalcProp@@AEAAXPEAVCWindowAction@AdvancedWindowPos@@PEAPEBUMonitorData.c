/*
 * XREFs of ?UpdateActionForAnchor@CRecalcProp@@AEAAXPEAVCWindowAction@AdvancedWindowPos@@PEAPEBUMonitorData@CMonitorTopology@@PEAW4Result@CRecalcContext@@PEAVCRecalcState@@_N@Z @ 0x1402C6604
 * Callers:
 *     ?xxxProcessPendingRecalcState@CRecalcProp@@AEAAXPEAVCRecalcState@@_NPEAVCRecalcContext@@@Z @ 0x1402C8210 (-xxxProcessPendingRecalcState@CRecalcProp@@AEAAXPEAVCRecalcState@@_NPEAVCRecalcContext@@@Z.c)
 * Callees:
 *     ?MonitorDataFromRect@CMonitorTopology@@QEBAPEBUMonitorData@1@PEBUtagWND@@UtagRECT@@@Z @ 0x1400227A8 (-MonitorDataFromRect@CMonitorTopology@@QEBAPEBUMonitorData@1@PEBUtagWND@@UtagRECT@@@Z.c)
 *     ?RestoreStateSettingEnabled@DesktopRecalcSettings@@YA_NXZ @ 0x140028B68 (-RestoreStateSettingEnabled@DesktopRecalcSettings@@YA_NXZ.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1400D9978 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ?ClearAnchorPosition@CRecalcProp@@AEAAXXZ @ 0x140206524 (-ClearAnchorPosition@CRecalcProp@@AEAAXXZ.c)
 *     ?SetAnchorPosition@CRecalcProp@@AEAAXPEAVCRecalcState@@@Z @ 0x1402C57B8 (-SetAnchorPosition@CRecalcProp@@AEAAXPEAVCRecalcState@@@Z.c)
 *     ?ShouldMigrateFromAnchor@CRecalcProp@@AEAA_NXZ @ 0x1402C5E5C (-ShouldMigrateFromAnchor@CRecalcProp@@AEAA_NXZ.c)
 */

void __fastcall CRecalcProp::UpdateActionForAnchor(
        CRecalcProp *this,
        struct AdvancedWindowPos::CWindowAction *a2,
        const struct CMonitorTopology::MonitorData **a3,
        enum CRecalcContext::Result *a4,
        struct CRecalcState *a5,
        bool a6)
{
  __int64 v10; // rdx
  char v11; // di
  bool v12; // si
  __int64 UserSessionState; // rax
  int v14; // r8d
  int v15; // edx
  int v16; // ecx
  __int128 v17; // xmm0
  CMonitorTopology *v18; // rcx
  const struct tagWND *v19; // rdx
  unsigned __int16 *v20; // rax
  int v21; // ecx
  struct tagRECT v22; // [rsp+40h] [rbp-28h] BYREF

  if ( a6 && DesktopRecalcSettings::RestoreStateSettingEnabled(this) )
  {
    if ( CRecalcProp::ShouldMigrateFromAnchor(this) )
    {
      v11 = 1;
      v12 = *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
         && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x40) != 0
         && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 5u;
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
        || !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL) )
      {
        v11 = 0;
      }
      if ( v12 || v11 )
      {
        UserSessionState = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v10);
        LOBYTE(v14) = v11;
        LOBYTE(v15) = v12;
        WPP_RECORDER_AND_TRACE_SF_(
          *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
          v15,
          v14,
          *(_QWORD *)(UserSessionState + 69160),
          5,
          7,
          113,
          (__int64)&WPP_5203336677413a97442e065d09735669_Traceguids);
      }
      *(_DWORD *)a4 = 6;
      v16 = *((_DWORD *)a5 + 6);
      *(_DWORD *)a2 |= 0x20u;
      *((_DWORD *)a2 + 10) = v16;
      v17 = *(_OWORD *)((char *)this + 60);
      *(_DWORD *)a2 |= 0x40u;
      *(_OWORD *)((char *)a2 + 44) = v17;
      v18 = (CMonitorTopology *)*((_QWORD *)this + 10);
      v19 = (const struct tagWND *)*((_QWORD *)this + 2);
      v22 = *(struct tagRECT *)((char *)this + 60);
      v20 = (unsigned __int16 *)CMonitorTopology::MonitorDataFromRect(v18, v19, &v22);
      *a3 = (const struct CMonitorTopology::MonitorData *)v20;
      v21 = v20[20];
      *((_DWORD *)a2 + 1) |= 0x100u;
      *((_DWORD *)a2 + 24) = v21;
    }
    else
    {
      CRecalcProp::SetAnchorPosition(this, (volatile signed __int32 **)a5);
    }
  }
  else
  {
    CRecalcProp::ClearAnchorPosition(this);
  }
}
