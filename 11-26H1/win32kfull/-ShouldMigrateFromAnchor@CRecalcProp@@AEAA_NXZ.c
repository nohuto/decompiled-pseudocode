/*
 * XREFs of ?ShouldMigrateFromAnchor@CRecalcProp@@AEAA_NXZ @ 0x14027CC38
 * Callers:
 *     ?UpdateActionForAnchor@CRecalcProp@@AEAAXPEAVCWindowAction@AdvancedWindowPos@@PEAPEBUMonitorData@CMonitorTopology@@PEAW4Result@CRecalcContext@@PEAVCRecalcState@@_N@Z @ 0x1402DE810 (-UpdateActionForAnchor@CRecalcProp@@AEAAXPEAVCWindowAction@AdvancedWindowPos@@PEAPEBUMonitorData.c)
 *     ?xxxProcessPendingRecalcStateOld@CRecalcProp@@AEAAXPEAUtagWND@@PEAVCRecalcState@@_NPEAVCRecalcContext@@@Z @ 0x1402E01BC (-xxxProcessPendingRecalcStateOld@CRecalcProp@@AEAAXPEAUtagWND@@PEAVCRecalcState@@_NPEAVCRecalcCo.c)
 * Callees:
 *     ?GetRestoreRect@CRecalcState@@SA?AUtagRECT@@PEBUtagWND@@@Z @ 0x1401604A0 (-GetRestoreRect@CRecalcState@@SA-AUtagRECT@@PEBUtagWND@@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_dddddd @ 0x140160DC8 (WPP_RECORDER_AND_TRACE_SF_dddddd.c)
 *     WPP_RECORDER_AND_TRACE_SF_qdddddd @ 0x1402DAF4C (WPP_RECORDER_AND_TRACE_SF_qdddddd.c)
 */

char __fastcall CRecalcProp::ShouldMigrateFromAnchor(const struct tagWND **this)
{
  char v2; // r14
  char v3; // si
  char v4; // di
  const struct tagWND *v5; // rbp
  const struct tagWND *v6; // r12
  __int64 v7; // rbx
  __int64 UserSessionState; // rax
  int v9; // r8d
  int v10; // edx
  char v12; // r12
  int v13; // ebp
  int v14; // edi
  int v15; // esi
  int v16; // ebx
  __int64 v17; // rax
  __int64 v18; // [rsp+40h] [rbp-78h]
  struct tagRECT v19; // [rsp+80h] [rbp-38h] BYREF

  if ( this[10] )
  {
    v19 = *CRecalcState::GetRestoreRect(&v19, this[2]);
    v2 = 1;
    if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x40) == 0
      || (v3 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
    {
      v3 = 0;
    }
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
      || (v4 = 1, !*((_WORD *)WPP_GLOBAL_Control + 36)) )
    {
      v4 = 0;
    }
    v5 = *(const struct tagWND **)&v19.right;
    v6 = *(const struct tagWND **)&v19.left;
    if ( v3 || v4 )
    {
      v7 = *(_QWORD *)this[2];
      UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control, &WPP_RECORDER_INITIALIZED);
      LOBYTE(v9) = v4;
      LOBYTE(v10) = v3;
      HIDWORD(v18) = HIDWORD(v7);
      WPP_RECORDER_AND_TRACE_SF_qdddddd(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v10,
        v9,
        *(_QWORD *)(UserSessionState + 69152));
    }
    if ( v6 == this[11] && v5 == this[12] )
      return 1;
    if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x40) == 0
      || (v12 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
    {
      v12 = 0;
    }
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
      || !*((_WORD *)WPP_GLOBAL_Control + 36) )
    {
      v2 = 0;
    }
    if ( v12 || v2 )
    {
      v13 = *((_DWORD *)this + 23);
      v14 = *((_DWORD *)this + 25);
      v15 = *((_DWORD *)this + 22);
      v16 = *((_DWORD *)this + 24);
      v17 = W32GetUserSessionState(WPP_GLOBAL_Control, &WPP_RECORDER_INITIALIZED);
      LODWORD(v18) = v15;
      WPP_RECORDER_AND_TRACE_SF_dddddd(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v12,
        v2,
        *(_QWORD *)(v17 + 69152),
        5u,
        7u,
        0x6Eu,
        (__int64)&WPP_78206adbc0fc3667085fdf33c34682f8_Traceguids,
        v18,
        v13,
        v16,
        v14,
        v16 - v15,
        v14 - v13);
    }
  }
  return 0;
}
