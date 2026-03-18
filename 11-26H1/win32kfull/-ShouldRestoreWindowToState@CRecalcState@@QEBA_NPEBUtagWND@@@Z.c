/*
 * XREFs of ?ShouldRestoreWindowToState@CRecalcState@@QEBA_NPEBUtagWND@@@Z @ 0x14011D0A0
 * Callers:
 *     ?FindRestorableRecalcState@CRecalcProp@@AEAAPEAVCRecalcState@@XZ @ 0x14011CF74 (-FindRestorableRecalcState@CRecalcProp@@AEAAPEAVCRecalcState@@XZ.c)
 * Callees:
 *     ?ShouldStoreAfterProcessing@CRecalcState@@QEBA_NPEBUtagWND@@@Z @ 0x14011D60C (-ShouldStoreAfterProcessing@CRecalcState@@QEBA_NPEBUtagWND@@@Z.c)
 *     ?GetStateString@AdvancedWindowPos@@YAPEBDW4State@1@@Z @ 0x14015DA0C (-GetStateString@AdvancedWindowPos@@YAPEBDW4State@1@@Z.c)
 *     ?GetWindowState@AdvancedWindowPos@@YA?AW4State@1@PEBUtagWND@@@Z @ 0x14015E71C (-GetWindowState@AdvancedWindowPos@@YA-AW4State@1@PEBUtagWND@@@Z.c)
 *     ?CompareToCurrent@CMonitorTopology@@QEBA?AW4CompareResult@1@W4CompareType@1@@Z @ 0x14015F6F8 (-CompareToCurrent@CMonitorTopology@@QEBA-AW4CompareResult@1@W4CompareType@1@@Z.c)
 *     ?HasFullscreenState@AdvancedWindowPos@@YA_NPEBUtagWND@@@Z @ 0x1401605BC (-HasFullscreenState@AdvancedWindowPos@@YA_NPEBUtagWND@@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_qd @ 0x140162868 (WPP_RECORDER_AND_TRACE_SF_qd.c)
 *     WPP_RECORDER_AND_TRACE_SF_qssss @ 0x1402E0F20 (WPP_RECORDER_AND_TRACE_SF_qssss.c)
 */

char __fastcall CRecalcState::ShouldRestoreWindowToState(CRecalcState *this, const struct tagWND *a2)
{
  char v4; // r15
  const struct tagWND *v5; // rdx
  char v6; // bl
  __int64 v7; // rdx
  bool v8; // r13
  unsigned int WindowState; // eax
  const struct tagWND *v10; // rdx
  bool HasFullscreenState; // bl
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 UserSessionState; // rax
  const char *v15; // rdx
  int v16; // r8d
  char v18; // bp
  char v19; // si
  __int64 v20; // rax
  __int64 v21; // rdi
  int v22; // ebx
  __int64 v23; // rax
  int v24; // r8d
  int v25; // edx

  if ( !CRecalcState::ShouldStoreAfterProcessing(this, a2) )
    return 0;
  v4 = 1;
  if ( (unsigned int)CMonitorTopology::CompareToCurrent(*((_QWORD *)this + 2), 1LL) )
    return 0;
  v6 = *((_BYTE *)this + 61);
  if ( AdvancedWindowPos::HasFullscreenState(a2, v5) != v6 )
  {
    if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x40) == 0
      || *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u )
    {
      v4 = 0;
    }
    v8 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v4 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      AdvancedWindowPos::GetStateString(*((unsigned int *)this + 6));
      WindowState = AdvancedWindowPos::GetWindowState(a2);
      AdvancedWindowPos::GetStateString(WindowState);
      HasFullscreenState = AdvancedWindowPos::HasFullscreenState(a2, v10);
      UserSessionState = W32GetUserSessionState(v13, v12);
      v15 = " ";
      LOBYTE(v16) = v8;
      if ( !HasFullscreenState )
        v15 = " Fullscreen/";
      LOBYTE(v15) = v4;
      WPP_RECORDER_AND_TRACE_SF_qssss(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        (_DWORD)v15,
        v16,
        *(_QWORD *)(UserSessionState + 69152));
    }
    return 0;
  }
  if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x40) == 0
    || (v18 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
  {
    v18 = 0;
  }
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
    || (v19 = 1, !*((_WORD *)WPP_GLOBAL_Control + 36)) )
  {
    v19 = 0;
  }
  if ( v18 || v19 )
  {
    v20 = *((_QWORD *)this + 2);
    v21 = *(_QWORD *)a2;
    v22 = *(_DWORD *)(v20 + 12);
    v23 = W32GetUserSessionState(WPP_GLOBAL_Control, v7);
    LOBYTE(v24) = v19;
    LOBYTE(v25) = v18;
    WPP_RECORDER_AND_TRACE_SF_qd(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v25,
      v24,
      *(_QWORD *)(v23 + 69152),
      5,
      7,
      31,
      (__int64)&WPP_78206adbc0fc3667085fdf33c34682f8_Traceguids,
      v21,
      v22);
  }
  return 1;
}
