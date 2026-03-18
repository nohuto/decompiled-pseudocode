/*
 * XREFs of ?xxxProcessPendingRecalcStateOld@CRecalcProp@@AEAAXPEAUtagWND@@PEAVCRecalcState@@_NPEAVCRecalcContext@@@Z @ 0x1402C8868
 * Callers:
 *     ?s_xxxProcessTopologyChange@CRecalcProp@@SAXPEAUHWND__@@PEAVCRecalcContext@@@Z @ 0x1402C6EFC (-s_xxxProcessTopologyChange@CRecalcProp@@SAXPEAUHWND__@@PEAVCRecalcContext@@@Z.c)
 * Callees:
 *     IsImmersiveBand @ 0x140025E6C (IsImmersiveBand.c)
 *     ?RestoreStateSettingEnabled@DesktopRecalcSettings@@YA_NXZ @ 0x140028B68 (-RestoreStateSettingEnabled@DesktopRecalcSettings@@YA_NXZ.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x1400D99FC (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     ?ShouldSkipRecalcForWindow@CRecalcProp@@CA_NPEBUtagWND@@PEAVCRecalcState@@@Z @ 0x1401A4394 (-ShouldSkipRecalcForWindow@CRecalcProp@@CA_NPEBUtagWND@@PEAVCRecalcState@@@Z.c)
 *     ?ClearAnchorPosition@CRecalcProp@@AEAAXXZ @ 0x140206524 (-ClearAnchorPosition@CRecalcProp@@AEAAXXZ.c)
 *     ??1CThreadLockedCurrentMonitorTopologyPtr@@QEAA@XZ @ 0x140217238 (--1CThreadLockedCurrentMonitorTopologyPtr@@QEAA@XZ.c)
 *     WPP_RECORDER_AND_TRACE_SF_qdd @ 0x140217DC8 (WPP_RECORDER_AND_TRACE_SF_qdd.c)
 *     ??0CThreadLockedCurrentMonitorTopologyPtr@@QEAA@XZ @ 0x140227B24 (--0CThreadLockedCurrentMonitorTopologyPtr@@QEAA@XZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14026E830 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?ClearLastInterceptedTopology@CRecalcProp@@QEAAXXZ @ 0x1402C4134 (-ClearLastInterceptedTopology@CRecalcProp@@QEAAXXZ.c)
 *     ?ReattachRecalcState@CRecalcProp@@AEAAXPEAVCRecalcState@@@Z @ 0x1402C54CC (-ReattachRecalcState@CRecalcProp@@AEAAXPEAVCRecalcState@@@Z.c)
 *     ?SetAnchorPosition@CRecalcProp@@AEAAXPEAVCRecalcState@@@Z @ 0x1402C57B8 (-SetAnchorPosition@CRecalcProp@@AEAAXPEAVCRecalcState@@@Z.c)
 *     ?SetLastInterceptedTopology@DesktopRecalc@@YAXPEAUtagWND@@PEAVCMonitorTopology@@@Z @ 0x1402C58A8 (-SetLastInterceptedTopology@DesktopRecalc@@YAXPEAUtagWND@@PEAVCMonitorTopology@@@Z.c)
 *     ?SetStateAfterProcessing@CRecalcProp@@AEAAXPEAVCMonitorTopology@@@Z @ 0x1402C5BD0 (-SetStateAfterProcessing@CRecalcProp@@AEAAXPEAVCMonitorTopology@@@Z.c)
 *     ?SetStateBeforeProcessing@CRecalcProp@@AEAAPEAVCRecalcState@@XZ @ 0x1402C5DF0 (-SetStateBeforeProcessing@CRecalcProp@@AEAAPEAVCRecalcState@@XZ.c)
 *     ?ShouldMigrateFromAnchor@CRecalcProp@@AEAA_NXZ @ 0x1402C5E5C (-ShouldMigrateFromAnchor@CRecalcProp@@AEAA_NXZ.c)
 *     ?xxxFullscreenRestore@CRecalcState@@QEAAXPEAUtagWND@@AEBVCMonitorTopology@@PEAVCRecalcContext@@@Z @ 0x1402C7654 (-xxxFullscreenRestore@CRecalcState@@QEAAXPEAUtagWND@@AEBVCMonitorTopology@@PEAVCRecalcContext@@@.c)
 *     ?xxxImmersiveZBandDpiChange@CRecalcState@@QEAAXPEAUtagWND@@@Z @ 0x1402C7B44 (-xxxImmersiveZBandDpiChange@CRecalcState@@QEAAXPEAUtagWND@@@Z.c)
 *     ?xxxMigrate@CRecalcState@@QEAAXPEAUtagWND@@PEAUtagRECT@@PEAVCMonitorTopology@@PEAVCRecalcContext@@@Z @ 0x1402C7E98 (-xxxMigrate@CRecalcState@@QEAAXPEAUtagWND@@PEAUtagRECT@@PEAVCMonitorTopology@@PEAVCRecalcContext.c)
 *     ?xxxRestore@CRecalcState@@QEAAXPEAUtagWND@@PEAVCRecalcContext@@@Z @ 0x1402C8BC0 (-xxxRestore@CRecalcState@@QEAAXPEAUtagWND@@PEAVCRecalcContext@@@Z.c)
 */

void __fastcall CRecalcProp::xxxProcessPendingRecalcStateOld(
        struct CMonitorTopology **this,
        struct tagTHREADINFO **a2,
        struct CRecalcState *a3,
        char a4,
        struct CRecalcContext *a5)
{
  struct tagRECT *v5; // rbp
  struct CRecalcState *v9; // r13
  __int64 v10; // rdx
  __int64 v11; // rdx
  char v12; // si
  char v13; // al
  unsigned int *v14; // rcx
  int v15; // esi
  int v16; // edi
  __int64 v17; // rbx
  __int64 UserSessionState; // rax
  int v19; // r8d
  int v20; // edx
  __int64 v21; // rdx
  CRecalcState *v22; // rcx
  struct CMonitorTopology *v23; // r8
  char v24; // r12
  struct tagTHREADINFO *v25; // rbx
  __int64 v26; // rax
  int v27; // r8d
  int v28; // edx
  struct CMonitorTopology *v29; // rbx
  bool v30; // [rsp+60h] [rbp-68h]
  struct tagWND *v31[12]; // [rsp+68h] [rbp-60h] BYREF
  char v32; // [rsp+D8h] [rbp+10h]

  v5 = 0LL;
  if ( a4 && a3 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 4161);
  v9 = CRecalcProp::SetStateBeforeProcessing((CRecalcProp *)this);
  CThreadLockedCurrentMonitorTopologyPtr::CThreadLockedCurrentMonitorTopologyPtr(
    (CThreadLockedCurrentMonitorTopologyPtr *)v31,
    v10);
  v12 = 1;
  if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
    || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x40) == 0
    || (v13 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u) )
  {
    v13 = 0;
  }
  v14 = &WPP_RECORDER_INITIALIZED;
  v32 = v13;
  v30 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
  if ( v13 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    v15 = *((_DWORD *)v31[0] + 3);
    v16 = *(_DWORD *)(*((_QWORD *)v9 + 2) + 12LL);
    v17 = *(_QWORD *)this[2];
    LOBYTE(v14) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    UserSessionState = W32GetUserSessionState(v14, v11);
    LOBYTE(v19) = v30;
    LOBYTE(v20) = v32;
    WPP_RECORDER_AND_TRACE_SF_qdd(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
      v20,
      v19,
      *(_QWORD *)(UserSessionState + 69160),
      4,
      7,
      121,
      (__int64)&WPP_5203336677413a97442e065d09735669_Traceguids,
      v17,
      v16,
      v15);
    v12 = 1;
  }
  *((_DWORD *)a5 + 3) = *((_DWORD *)v31[0] + 3);
  *((_DWORD *)a5 + 4) = *(_DWORD *)(*((_QWORD *)v9 + 2) + 12LL);
  if ( CRecalcProp::ShouldSkipRecalcForWindow((const struct tagWND *)a2, v9) )
  {
    *(_DWORD *)a5 = 2;
  }
  else if ( (unsigned int)IsImmersiveBand((__int64)a2) )
  {
    CRecalcState::xxxImmersiveZBandDpiChange(v22, a2);
    *(_DWORD *)a5 = 9;
  }
  else
  {
    if ( ((_DWORD)a2[48] & 0x10) != 0 )
    {
      CRecalcProp::ReattachRecalcState((CRecalcProp *)this, v9);
      DesktopRecalc::SetLastInterceptedTopology((DesktopRecalc *)a2, v31[0], v23);
    }
    if ( a3 )
    {
      if ( *((_BYTE *)a3 + 61) )
        CRecalcState::xxxFullscreenRestore(a3, a2, *((const struct CMonitorTopology **)v9 + 2), a5);
      else
        CRecalcState::xxxRestore(a3, (struct tagWND *)a2, a5);
    }
    if ( *(_DWORD *)a5 != 7 )
    {
      if ( *((_QWORD *)v9 + 9) )
      {
        v29 = 0LL;
        if ( DesktopRecalcSettings::RestoreStateSettingEnabled(v22) && a4 )
        {
          if ( CRecalcProp::ShouldMigrateFromAnchor((CRecalcProp *)this) )
          {
            v29 = this[10];
            v5 = (struct tagRECT *)((char *)this + 60);
          }
          else
          {
            CRecalcProp::SetAnchorPosition((CRecalcProp *)this, (volatile signed __int32 **)v9);
          }
        }
        else
        {
          CRecalcProp::ClearAnchorPosition((CRecalcProp *)this);
        }
        CRecalcState::xxxMigrate(v9, (struct tagWND *)a2, v5, v29, a5);
      }
      else
      {
        *(_DWORD *)a5 = 2;
        if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
          || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x40) == 0
          || (v24 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 5u) )
        {
          v24 = 0;
        }
        if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
          || !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL) )
        {
          v12 = 0;
        }
        if ( v24 || v12 )
        {
          v25 = *a2;
          v26 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v21);
          LOBYTE(v27) = v12;
          LOBYTE(v28) = v24;
          WPP_RECORDER_AND_TRACE_SF_q(
            *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
            v28,
            v27,
            *(_QWORD *)(v26 + 69160),
            5,
            7,
            122,
            (__int64)&WPP_5203336677413a97442e065d09735669_Traceguids,
            (char)v25);
        }
        if ( ((_DWORD)a2[48] & 0x10) != 0 )
        {
          CRecalcProp::SetStateBeforeProcessing((CRecalcProp *)this);
          CRecalcProp::ClearLastInterceptedTopology((CRecalcProp *)this);
        }
      }
    }
    if ( *(_DWORD *)a5 == 3 )
      CRecalcProp::ReattachRecalcState((CRecalcProp *)this, v9);
  }
  if ( ((_DWORD)a2[48] & 0x10) == 0 || *(_DWORD *)a5 == 2 || *(_DWORD *)a5 == 9 )
    CRecalcProp::SetStateAfterProcessing((CRecalcProp *)this, v31[0]);
  CThreadLockedCurrentMonitorTopologyPtr::~CThreadLockedCurrentMonitorTopologyPtr(
    (CThreadLockedCurrentMonitorTopologyPtr *)v31,
    v21);
}
