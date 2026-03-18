/*
 * XREFs of ?LogApplyWindowActionStart@AdvancedWindowPos@@YAXPEAUtagWND@@PEAUWindowAction@1@W4ApplyReason@1@@Z @ 0x1402D4AD8
 * Callers:
 *     ?xxxApplyWindowAction@AdvancedWindowPos@@YAXPEAUtagWND@@PEAUWindowAction@1@W4ApplyReason@1@@Z @ 0x1402D775C (-xxxApplyWindowAction@AdvancedWindowPos@@YAXPEAUtagWND@@PEAUWindowAction@1@W4ApplyReason@1@@Z.c)
 * Callees:
 *     ?GetStateString@AdvancedWindowPos@@YAPEBDW4State@1@@Z @ 0x140026154 (-GetStateString@AdvancedWindowPos@@YAPEBDW4State@1@@Z.c)
 *     ?GetWindowState@AdvancedWindowPos@@YA?AW4State@1@PEBUtagWND@@@Z @ 0x140026190 (-GetWindowState@AdvancedWindowPos@@YA-AW4State@1@PEBUtagWND@@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_S @ 0x1401F16E4 (WPP_RECORDER_AND_TRACE_SF_S.c)
 *     ?ApplyStart@ApplyWindowAction@InputTraceLogging@@SAXPEAUHWND__@@PEBGKKUtagRECT@@PEBDHUtagPOINT@@UtagSIZE@@032I422@Z @ 0x1402D3E94 (-ApplyStart@ApplyWindowAction@InputTraceLogging@@SAXPEAUHWND__@@PEBGKKUtagRECT@@PEBDHUtagPOINT@@.c)
 *     ?GetApplyReasonString@AdvancedWindowPos@@YAPEBGW4ApplyReason@1@@Z @ 0x1402D4418 (-GetApplyReasonString@AdvancedWindowPos@@YAPEBGW4ApplyReason@1@@Z.c)
 */

unsigned int *__fastcall AdvancedWindowPos::LogApplyWindowActionStart(
        const struct tagWND *a1,
        unsigned int *a2,
        int a3)
{
  const struct tagWND *v4; // rdx
  const char *StateString; // r13
  int v6; // ebp
  HWND v7; // r15
  struct tagSIZE v8; // rdi
  struct tagPOINT v9; // rsi
  int WindowState; // eax
  HWND *v11; // r10
  const char *v12; // rdx
  __int64 v13; // rdx
  bool v14; // bl
  unsigned int *result; // rax
  bool v16; // di
  __int64 UserSessionState; // rax
  int v18; // r8d
  int v19; // edx
  struct tagRECT v20; // [rsp+B0h] [rbp-78h] BYREF
  const unsigned __int16 *ApplyReasonString; // [rsp+130h] [rbp+8h]

  v4 = a1;
  if ( (*a2 & 0x20) != 0 )
    StateString = AdvancedWindowPos::GetStateString(a2[10]);
  else
    StateString = (const char *)&unk_140351139;
  v6 = *(_BYTE *)(*((_QWORD *)v4 + 5) + 20LL) & 0x40;
  v7 = (HWND)*((_QWORD *)a2 + 4);
  v8 = *(struct tagSIZE *)(a2 + 5);
  v9 = *(struct tagPOINT *)(a2 + 3);
  WindowState = AdvancedWindowPos::GetWindowState(v4);
  AdvancedWindowPos::GetStateString(WindowState);
  v20 = *(struct tagRECT *)(*((_QWORD *)a1 + 5) + 88LL);
  ApplyReasonString = AdvancedWindowPos::GetApplyReasonString(a3);
  InputTraceLogging::ApplyWindowAction::ApplyStart(
    *v11,
    ApplyReasonString,
    *a2,
    a2[1],
    &v20,
    v12,
    v6,
    v9,
    v8,
    v7,
    StateString);
  v14 = *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
     && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) != 0
     && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 4u;
  result = &WPP_RECORDER_INITIALIZED;
  v16 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
  if ( v14 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    UserSessionState = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v13);
    LOBYTE(v18) = v16;
    LOBYTE(v19) = v14;
    return (unsigned int *)WPP_RECORDER_AND_TRACE_SF_S(
                             *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
                             v19,
                             v18,
                             *(_QWORD *)(UserSessionState + 69160),
                             4,
                             4,
                             149,
                             (__int64)&WPP_465f200ce2533ca40a0cb60e63eb1667_Traceguids,
                             (__int64)ApplyReasonString);
  }
  return result;
}
