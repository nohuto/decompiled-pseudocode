/*
 * XREFs of ?UpdateActionForAnchor@CRecalcProp@@AEAAXPEAVCWindowAction@AdvancedWindowPos@@PEAPEBUMonitorData@CMonitorTopology@@PEAW4Result@CRecalcContext@@PEAVCRecalcState@@_N@Z @ 0x1402DE810
 * Callers:
 *     ?xxxProcessPendingRecalcState@CRecalcProp@@AEAAXPEAVCRecalcState@@_NPEAVCRecalcContext@@@Z @ 0x1402DFB54 (-xxxProcessPendingRecalcState@CRecalcProp@@AEAAXPEAVCRecalcState@@_NPEAVCRecalcContext@@@Z.c)
 * Callees:
 *     ?IsArranged@@YA_NPEBUtagWND@@@Z @ 0x1400326CC (-IsArranged@@YA_NPEBUtagWND@@@Z.c)
 *     ?RestoreStateSettingEnabled@DesktopRecalcSettings@@YA_NXZ @ 0x14015CB14 (-RestoreStateSettingEnabled@DesktopRecalcSettings@@YA_NXZ.c)
 *     ?MonitorDataFromRect@CMonitorTopology@@QEBAPEBUMonitorData@1@PEBUtagWND@@UtagRECT@@@Z @ 0x14015FB64 (-MonitorDataFromRect@CMonitorTopology@@QEBAPEBUMonitorData@1@PEBUtagWND@@UtagRECT@@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_dddddd @ 0x140160DC8 (WPP_RECORDER_AND_TRACE_SF_dddddd.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x14019025C (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     ?ClearAnchorPosition@CRecalcProp@@AEAAXXZ @ 0x140210358 (-ClearAnchorPosition@CRecalcProp@@AEAAXXZ.c)
 *     ?SetAnchorPosition@CRecalcProp@@AEAAXPEAVCRecalcState@@@Z @ 0x14027CAFC (-SetAnchorPosition@CRecalcProp@@AEAAXPEAVCRecalcState@@@Z.c)
 *     ?ShouldMigrateFromAnchor@CRecalcProp@@AEAA_NXZ @ 0x14027CC38 (-ShouldMigrateFromAnchor@CRecalcProp@@AEAA_NXZ.c)
 *     ?LogicalWorkArea@MonitorData@CMonitorTopology@@QEBA?AUtagRECT@@PEBUtagWND@@@Z @ 0x140292398 (-LogicalWorkArea@MonitorData@CMonitorTopology@@QEBA-AUtagRECT@@PEBUtagWND@@@Z.c)
 */

void __fastcall CRecalcProp::UpdateActionForAnchor(
        CRecalcProp *this,
        struct AdvancedWindowPos::CWindowAction *a2,
        const struct CMonitorTopology::MonitorData **a3,
        enum CRecalcContext::Result *a4,
        struct CRecalcState *a5,
        bool a6)
{
  enum CRecalcContext::Result *v6; // rsi
  CMonitorTopology::MonitorData **v7; // rdi
  __int64 v10; // rdx
  char v11; // r12
  char v12; // r13
  int v13; // ebp
  int v14; // edi
  int v15; // esi
  int v16; // ebx
  __int64 UserSessionState; // rax
  const struct tagWND *v18; // rdx
  CMonitorTopology *v19; // rcx
  __int64 v20; // rdx
  const struct CMonitorTopology::MonitorData *v21; // rbx
  const struct tagWND *v22; // rcx
  struct tagRECT v23; // xmm0
  __int128 v24; // xmm0
  int v25; // eax
  int v26; // ecx
  bool v27; // di
  __int64 v28; // rbx
  __int64 v29; // rax
  int v30; // r8d
  int v31; // edx
  struct tagRECT v32; // [rsp+70h] [rbp-48h] BYREF
  char v35; // [rsp+E8h] [rbp+30h]

  v6 = a4;
  v7 = a3;
  if ( a6 && DesktopRecalcSettings::RestoreStateSettingEnabled(this) )
  {
    if ( CRecalcProp::ShouldMigrateFromAnchor((const struct tagWND **)this) )
    {
      v11 = 1;
      v12 = WPP_GLOBAL_Control != (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
         && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x40) != 0
         && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
      v35 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( v12 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        v13 = *((_DWORD *)this + 16);
        v14 = *((_DWORD *)this + 18);
        v15 = *((_DWORD *)this + 15);
        v16 = *((_DWORD *)this + 17);
        UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control, v10);
        WPP_RECORDER_AND_TRACE_SF_dddddd(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v12,
          v35,
          *(_QWORD *)(UserSessionState + 69152),
          4u,
          7u,
          0x70u,
          (__int64)&WPP_78206adbc0fc3667085fdf33c34682f8_Traceguids,
          v15,
          v13,
          v16,
          v14,
          v16 - v15,
          v14 - v13);
        v7 = a3;
        v6 = a4;
      }
      v18 = (const struct tagWND *)*((_QWORD *)this + 2);
      v19 = (CMonitorTopology *)*((_QWORD *)this + 10);
      v32 = *(struct tagRECT *)((char *)this + 60);
      v21 = CMonitorTopology::MonitorDataFromRect(v19, v18, &v32);
      if ( v21 )
      {
        v22 = (const struct tagWND *)*((_QWORD *)this + 2);
        *(_DWORD *)v6 = 6;
        if ( IsArranged(v22) )
        {
          CMonitorTopology::MonitorData::LogicalWorkArea(*v7, &v32, *((const struct tagWND **)this + 2));
          v23 = v32;
          *((_DWORD *)a2 + 1) |= 0x40000u;
          *(struct tagRECT *)((char *)a2 + 152) = v23;
        }
        v24 = *(_OWORD *)((char *)this + 60);
        *(_DWORD *)a2 |= 0x40u;
        *v7 = v21;
        *(_OWORD *)((char *)a2 + 44) = v24;
        v25 = *((unsigned __int16 *)v21 + 20);
        *((_DWORD *)a2 + 1) |= 0x100u;
        *((_DWORD *)a2 + 24) = v25;
        v26 = *((_DWORD *)a5 + 6);
        *(_DWORD *)a2 |= 0x20u;
        *((_DWORD *)a2 + 10) = v26;
      }
      else
      {
        if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
          || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x40) == 0
          || *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u )
        {
          v11 = 0;
        }
        v27 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
        if ( v11 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        {
          v28 = **((_QWORD **)this + 2);
          v29 = W32GetUserSessionState(WPP_GLOBAL_Control, v20);
          LOBYTE(v30) = v27;
          LOBYTE(v31) = v11;
          WPP_RECORDER_AND_TRACE_SF_q(
            *((_QWORD *)WPP_GLOBAL_Control + 3),
            v31,
            v30,
            *(_QWORD *)(v29 + 69152),
            2,
            7,
            113,
            (__int64)&WPP_78206adbc0fc3667085fdf33c34682f8_Traceguids,
            v28);
        }
      }
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
