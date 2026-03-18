/*
 * XREFs of ?LogApplyWindowActionStart@AdvancedWindowPos@@YAXPEAUtagWND@@PEAUWindowAction@1@W4ApplyReason@1@@Z @ 0x1402E7E40
 * Callers:
 *     ?xxxApplyWindowAction@AdvancedWindowPos@@YAXPEAUtagWND@@PEAUWindowAction@1@W4ApplyReason@1@@Z @ 0x1402EAA34 (-xxxApplyWindowAction@AdvancedWindowPos@@YAXPEAUtagWND@@PEAUWindowAction@1@W4ApplyReason@1@@Z.c)
 * Callees:
 *     ?GetStateString@AdvancedWindowPos@@YAPEBDW4State@1@@Z @ 0x14015DA0C (-GetStateString@AdvancedWindowPos@@YAPEBDW4State@1@@Z.c)
 *     ?GetWindowState@AdvancedWindowPos@@YA?AW4State@1@PEBUtagWND@@@Z @ 0x14015E71C (-GetWindowState@AdvancedWindowPos@@YA-AW4State@1@PEBUtagWND@@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_S @ 0x140226940 (WPP_RECORDER_AND_TRACE_SF_S.c)
 *     ?ApplyStart@ApplyWindowAction@InputTraceLogging@@SAXPEAUHWND__@@PEBGKKUtagRECT@@PEBDHUtagPOINT@@UtagSIZE@@032I422@Z @ 0x1402E73BC (-ApplyStart@ApplyWindowAction@InputTraceLogging@@SAXPEAUHWND__@@PEBGKKUtagRECT@@PEBDHUtagPOINT@@.c)
 *     ?GetApplyReasonString@AdvancedWindowPos@@YAPEBGW4ApplyReason@1@@Z @ 0x1402E7780 (-GetApplyReasonString@AdvancedWindowPos@@YAPEBGW4ApplyReason@1@@Z.c)
 */

void __fastcall AdvancedWindowPos::LogApplyWindowActionStart(const struct tagWND *a1, unsigned int *a2, int a3)
{
  const struct tagWND *v4; // rdx
  const char *StateString; // r13
  struct tagRECT v6; // xmm7
  struct tagPOINT v7; // rbx
  struct tagRECT v8; // xmm8
  unsigned int v9; // r14d
  int v10; // ebp
  struct tagRECT v11; // xmm6
  HWND v12; // r15
  struct tagSIZE v13; // rdi
  struct tagPOINT v14; // rsi
  int WindowState; // eax
  __int64 v16; // rcx
  HWND *v17; // r10
  const char *v18; // rdx
  __int64 v19; // rdx
  char v20; // bl
  char v21; // di
  __int64 UserSessionState; // rax
  struct tagRECT v23; // [rsp+80h] [rbp-A8h] BYREF
  struct tagRECT v24; // [rsp+90h] [rbp-98h] BYREF
  struct tagRECT v25; // [rsp+A0h] [rbp-88h] BYREF
  struct tagRECT v26; // [rsp+B0h] [rbp-78h] BYREF
  const unsigned __int16 *ApplyReasonString; // [rsp+130h] [rbp+8h]

  v4 = a1;
  if ( (*a2 & 0x20) != 0 )
    StateString = AdvancedWindowPos::GetStateString(a2[10]);
  else
    StateString = (const char *)&unk_14035E7E1;
  v6 = *(struct tagRECT *)(a2 + 19);
  v7 = *(struct tagPOINT *)(a2 + 25);
  v8 = *(struct tagRECT *)(a2 + 15);
  v9 = a2[24];
  v10 = *(_BYTE *)(*((_QWORD *)v4 + 5) + 20LL) & 0x40;
  v11 = *(struct tagRECT *)(a2 + 11);
  v12 = (HWND)*((_QWORD *)a2 + 4);
  v13 = *(struct tagSIZE *)(a2 + 5);
  v14 = *(struct tagPOINT *)(a2 + 3);
  WindowState = AdvancedWindowPos::GetWindowState(v4);
  AdvancedWindowPos::GetStateString(WindowState);
  v23 = v6;
  v24 = v8;
  v16 = *((_QWORD *)a1 + 5);
  v25 = v11;
  v26 = *(struct tagRECT *)(v16 + 88);
  ApplyReasonString = AdvancedWindowPos::GetApplyReasonString(a3);
  InputTraceLogging::ApplyWindowAction::ApplyStart(
    *v17,
    ApplyReasonString,
    *a2,
    a2[1],
    &v26,
    v18,
    v10,
    v14,
    v13,
    v12,
    StateString,
    &v25,
    v9,
    v7,
    &v24,
    &v23);
  v20 = WPP_GLOBAL_Control != (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
     && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) != 0
     && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
  v21 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
  if ( v20 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control, v19);
    WPP_RECORDER_AND_TRACE_SF_S(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v20,
      v21,
      *(_QWORD *)(UserSessionState + 69152),
      4u,
      4u,
      0x95u,
      (__int64)&WPP_2b81e3d60f0933848e91eb35754e982c_Traceguids,
      (const char *)ApplyReasonString);
  }
}
