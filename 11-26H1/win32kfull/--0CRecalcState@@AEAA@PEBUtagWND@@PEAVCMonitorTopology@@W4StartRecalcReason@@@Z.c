/*
 * XREFs of ??0CRecalcState@@AEAA@PEBUtagWND@@PEAVCMonitorTopology@@W4StartRecalcReason@@@Z @ 0x14015E4E4
 * Callers:
 *     ?CreateRecalcState@CRecalcState@@SAPEAV1@PEBUtagWND@@PEAVCMonitorTopology@@W4StartRecalcReason@@PEAW4ProcessingDecision@1@@Z @ 0x14015DA7C (-CreateRecalcState@CRecalcState@@SAPEAV1@PEBUtagWND@@PEAVCMonitorTopology@@W4StartRecalcReason@@.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_qdsddddddds @ 0x14015D6F4 (WPP_RECORDER_AND_TRACE_SF_qdsddddddds.c)
 *     ?GetStateString@AdvancedWindowPos@@YAPEBDW4State@1@@Z @ 0x14015DA0C (-GetStateString@AdvancedWindowPos@@YAPEBDW4State@1@@Z.c)
 *     ?GetWindowState@AdvancedWindowPos@@YA?AW4State@1@PEBUtagWND@@@Z @ 0x14015E71C (-GetWindowState@AdvancedWindowPos@@YA-AW4State@1@PEBUtagWND@@@Z.c)
 *     ?MonitorDataFromRect@CMonitorTopology@@QEBAPEBUMonitorData@1@PEBUtagWND@@UtagRECT@@@Z @ 0x14015FB64 (-MonitorDataFromRect@CMonitorTopology@@QEBAPEBUMonitorData@1@PEBUtagWND@@UtagRECT@@@Z.c)
 *     ?GetRestoreRect@CRecalcState@@SA?AUtagRECT@@PEBUtagWND@@@Z @ 0x1401604A0 (-GetRestoreRect@CRecalcState@@SA-AUtagRECT@@PEBUtagWND@@@Z.c)
 *     ?HasFullscreenState@AdvancedWindowPos@@YA_NPEBUtagWND@@@Z @ 0x1401605BC (-HasFullscreenState@AdvancedWindowPos@@YA_NPEBUtagWND@@@Z.c)
 */

__int64 __fastcall CRecalcState::CRecalcState(__int64 a1, const struct tagWND *a2, __int64 a3, int a4)
{
  __int64 v4; // rdi
  __int128 v8; // xmm0
  const struct tagWND *v9; // rdx
  bool HasFullscreenState; // al
  char v11; // bl
  const char *v12; // r12
  int v13; // ebp
  int v14; // r15d
  int v15; // r13d
  int v16; // r14d
  int WindowState; // eax
  const char *StateString; // rsi
  unsigned __int8 ThreadId; // al
  __int64 v20; // rdi
  char v21; // bl
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 UserSessionState; // rax
  int v26; // [rsp+20h] [rbp-E8h]
  int v27; // [rsp+28h] [rbp-E0h]
  int v28; // [rsp+30h] [rbp-D8h]
  __int64 v29; // [rsp+38h] [rbp-D0h]
  int v30; // [rsp+A0h] [rbp-68h]
  struct tagRECT v31; // [rsp+B0h] [rbp-58h] BYREF
  char v34; // [rsp+120h] [rbp+18h]
  char v35; // [rsp+128h] [rbp+20h]

  *(_QWORD *)(a1 + 16) = a3;
  *(_QWORD *)a1 = &CRecalcState::`vftable';
  v4 = a1;
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_DWORD *)(a1 + 24) = AdvancedWindowPos::GetWindowState(a2);
  *(_OWORD *)(v4 + 28) = *(_OWORD *)(*((_QWORD *)a2 + 5) + 88LL);
  v8 = (__int128)*CRecalcState::GetRestoreRect(&v31, a2);
  *(_BYTE *)(v4 + 60) = 0;
  *(_OWORD *)(v4 + 44) = v8;
  HasFullscreenState = AdvancedWindowPos::HasFullscreenState(a2, v9);
  *(_DWORD *)(v4 + 64) = a4;
  v11 = 1;
  v34 = 1;
  *(_BYTE *)(v4 + 61) = HasFullscreenState;
  *(_QWORD *)(v4 + 72) = 0LL;
  _InterlockedAdd((volatile signed __int32 *)a3, 1u);
  v31 = *(struct tagRECT *)(((*(_BYTE *)(*((_QWORD *)a2 + 5) + 31LL) & 0x20) != 0 ? 0x10 : 0) + v4 + 28);
  *(_QWORD *)(v4 + 72) = CMonitorTopology::MonitorDataFromRect((CMonitorTopology *)a3, a2, &v31);
  if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x40) == 0
    || *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u )
  {
    v11 = 0;
    v34 = 0;
  }
  v35 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
  if ( v11 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    v12 = " (fullscreen)";
    v13 = *(_DWORD *)(a3 + 12);
    if ( !*(_BYTE *)(v4 + 61) )
      v12 = " ";
    v14 = *(_DWORD *)(v4 + 56);
    v15 = *(_DWORD *)(v4 + 44);
    v16 = *(_DWORD *)(v4 + 52);
    v30 = *(_DWORD *)(v4 + 48);
    WindowState = AdvancedWindowPos::GetWindowState(a2);
    StateString = AdvancedWindowPos::GetStateString(WindowState);
    ThreadId = (unsigned __int8)PsGetThreadId(**((PETHREAD **)a2 + 2));
    v20 = *(_QWORD *)a2;
    v21 = ThreadId;
    UserSessionState = W32GetUserSessionState(v23, v22);
    WPP_RECORDER_AND_TRACE_SF_qdsddddddds(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v34,
      v35,
      *(_QWORD *)(UserSessionState + 69152),
      v26,
      v27,
      v28,
      v29,
      v20,
      v21,
      StateString,
      v15,
      v30,
      v16,
      v14,
      v16 - v15,
      v14 - v30,
      v13,
      (__int64)v12);
    return a1;
  }
  return v4;
}
