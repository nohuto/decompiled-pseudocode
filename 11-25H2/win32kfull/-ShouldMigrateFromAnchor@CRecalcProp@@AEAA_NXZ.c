/*
 * XREFs of ?ShouldMigrateFromAnchor@CRecalcProp@@AEAA_NXZ @ 0x1402C5E5C
 * Callers:
 *     ?UpdateActionForAnchor@CRecalcProp@@AEAAXPEAVCWindowAction@AdvancedWindowPos@@PEAPEBUMonitorData@CMonitorTopology@@PEAW4Result@CRecalcContext@@PEAVCRecalcState@@_N@Z @ 0x1402C6604 (-UpdateActionForAnchor@CRecalcProp@@AEAAXPEAVCWindowAction@AdvancedWindowPos@@PEAPEBUMonitorData.c)
 *     ?xxxProcessPendingRecalcStateOld@CRecalcProp@@AEAAXPEAUtagWND@@PEAVCRecalcState@@_NPEAVCRecalcContext@@@Z @ 0x1402C8868 (-xxxProcessPendingRecalcStateOld@CRecalcProp@@AEAAXPEAUtagWND@@PEAVCRecalcState@@_NPEAVCRecalcCo.c)
 * Callees:
 *     ?GetRestoreRect@CRecalcState@@SA?AUtagRECT@@PEBUtagWND@@@Z @ 0x140025FCC (-GetRestoreRect@CRecalcState@@SA-AUtagRECT@@PEBUtagWND@@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1400D9978 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_dddddd @ 0x14018C8D4 (WPP_RECORDER_AND_TRACE_SF_dddddd.c)
 *     WPP_RECORDER_AND_TRACE_SF_qdddddd @ 0x1402C163C (WPP_RECORDER_AND_TRACE_SF_qdddddd.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 */

char __fastcall CRecalcProp::ShouldMigrateFromAnchor(CRecalcProp *this)
{
  char v2; // r14
  char v3; // r15
  char v4; // bp
  __int64 v5; // r12
  __int64 v6; // rdi
  __int64 UserSessionState; // rax
  int v8; // r8d
  int v9; // edx
  __int64 v10; // rdi
  char v11; // r15
  int v12; // edi
  int v13; // ebp
  int v14; // ebx
  int v15; // esi
  __int64 v16; // rax
  int v17; // r8d
  int v18; // edx
  char v20; // di
  char v21; // bl
  __int64 v22; // rax
  int v23; // r8d
  int v24; // edx
  struct tagRECT v25; // [rsp+80h] [rbp-48h] BYREF

  if ( !*((_QWORD *)this + 10) )
    return 0;
  v25 = *CRecalcState::GetRestoreRect(&v25, *((const struct tagWND **)this + 2));
  v2 = 1;
  if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
    || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x40) == 0
    || (v3 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 5u) )
  {
    v3 = 0;
  }
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
    || (v4 = 1, !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL)) )
  {
    v4 = 0;
  }
  v5 = *(_QWORD *)&v25.right;
  v6 = *(_QWORD *)&v25.left;
  if ( v3 || v4 )
  {
    UserSessionState = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, &WPP_RECORDER_INITIALIZED);
    LOBYTE(v8) = v4;
    LOBYTE(v9) = v3;
    WPP_RECORDER_AND_TRACE_SF_qdddddd(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
      v9,
      v8,
      *(_QWORD *)(UserSessionState + 69160));
  }
  v10 = v6 - *((_QWORD *)this + 11);
  if ( !v10 )
    v10 = v5 - *((_QWORD *)this + 12);
  if ( v10 )
  {
    if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
      || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x40) == 0
      || (v11 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 5u) )
    {
      v11 = 0;
    }
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
      || !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL) )
    {
      v2 = 0;
    }
    if ( v11 || v2 )
    {
      v12 = *((_DWORD *)this + 25);
      v13 = *((_DWORD *)this + 23);
      v14 = *((_DWORD *)this + 24);
      v15 = *((_DWORD *)this + 22);
      v16 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, &WPP_RECORDER_INITIALIZED);
      LOBYTE(v17) = v2;
      LOBYTE(v18) = v11;
      WPP_RECORDER_AND_TRACE_SF_dddddd(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
        v18,
        v17,
        *(_QWORD *)(v16 + 69160),
        5,
        7,
        110,
        (__int64)&WPP_5203336677413a97442e065d09735669_Traceguids,
        v15,
        v13,
        v14,
        v12,
        v14 - v15,
        v12 - v13);
    }
    return 0;
  }
  if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
    || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x40) == 0
    || (v20 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 5u) )
  {
    v20 = 0;
  }
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
    || (v21 = 1, !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL)) )
  {
    v21 = 0;
  }
  if ( v20 || v21 )
  {
    v22 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, &WPP_RECORDER_INITIALIZED);
    LOBYTE(v23) = v21;
    LOBYTE(v24) = v20;
    WPP_RECORDER_AND_TRACE_SF_(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
      v24,
      v23,
      *(_QWORD *)(v22 + 69160),
      5,
      7,
      111,
      (__int64)&WPP_5203336677413a97442e065d09735669_Traceguids);
  }
  return 1;
}
