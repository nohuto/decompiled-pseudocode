/*
 * XREFs of ?LogApplyWindowActionEnd@AdvancedWindowPos@@YAXPEAUtagWND@@W4ApplyWindowActionResult@1@@Z @ 0x1402E7BA0
 * Callers:
 *     ?xxxApplyWindowAction@AdvancedWindowPos@@YAXPEAUtagWND@@PEAUWindowAction@1@W4ApplyReason@1@@Z @ 0x1402EAA34 (-xxxApplyWindowAction@AdvancedWindowPos@@YAXPEAUtagWND@@PEAUWindowAction@1@W4ApplyReason@1@@Z.c)
 * Callees:
 *     ?GetStateString@AdvancedWindowPos@@YAPEBDW4State@1@@Z @ 0x14015DA0C (-GetStateString@AdvancedWindowPos@@YAPEBDW4State@1@@Z.c)
 *     ?GetWindowState@AdvancedWindowPos@@YA?AW4State@1@PEBUtagWND@@@Z @ 0x14015E71C (-GetWindowState@AdvancedWindowPos@@YA-AW4State@1@PEBUtagWND@@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_dddddd @ 0x140160DC8 (WPP_RECORDER_AND_TRACE_SF_dddddd.c)
 *     WPP_RECORDER_AND_TRACE_SF_s @ 0x1401A15C0 (WPP_RECORDER_AND_TRACE_SF_s.c)
 *     WPP_RECORDER_AND_TRACE_SF_S @ 0x140226940 (WPP_RECORDER_AND_TRACE_SF_S.c)
 *     ?ApplyEnd@ApplyWindowAction@InputTraceLogging@@SAXPEAUHWND__@@PEBGUtagRECT@@PEBDH@Z @ 0x1402E72D8 (-ApplyEnd@ApplyWindowAction@InputTraceLogging@@SAXPEAUHWND__@@PEBGUtagRECT@@PEBDH@Z.c)
 *     ?GetApplyResultString@AdvancedWindowPos@@YAPEBGW4ApplyWindowActionResult@1@@Z @ 0x1402E7864 (-GetApplyResultString@AdvancedWindowPos@@YAPEBGW4ApplyWindowActionResult@1@@Z.c)
 */

struct MOVESIZEDATA **__fastcall AdvancedWindowPos::LogApplyWindowActionEnd(const struct tagWND *a1, int a2)
{
  __int64 v3; // rax
  struct tagRECT v5; // xmm6
  int v6; // ebx
  int WindowState; // eax
  const unsigned __int16 *ApplyResultString; // rbp
  const char *v9; // r9
  __int64 v10; // rdx
  char v11; // si
  char v12; // bl
  char v13; // di
  __int64 UserSessionState; // rax
  char v15; // r14
  char v16; // bp
  __int64 v17; // rax
  struct MOVESIZEDATA **result; // rax
  bool v19; // di
  int v20; // eax
  const char *StateString; // rbx
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // rax
  int v25; // r8d
  int v26; // edx
  __int64 v27; // [rsp+40h] [rbp-78h]
  struct tagRECT v28; // [rsp+80h] [rbp-38h] BYREF

  v3 = *((_QWORD *)a1 + 5);
  v5 = *(struct tagRECT *)(v3 + 88);
  v6 = *(_BYTE *)(v3 + 20) & 0x40;
  WindowState = AdvancedWindowPos::GetWindowState(a1);
  AdvancedWindowPos::GetStateString(WindowState);
  v28 = v5;
  ApplyResultString = AdvancedWindowPos::GetApplyResultString(a2);
  InputTraceLogging::ApplyWindowAction::ApplyEnd(*(HWND *)a1, ApplyResultString, &v28, v9, v6);
  v11 = 1;
  v12 = WPP_GLOBAL_Control != (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
     && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) != 0
     && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
  v13 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
  if ( v12 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control, v10);
    WPP_RECORDER_AND_TRACE_SF_S(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v12,
      v13,
      *(_QWORD *)(UserSessionState + 69152),
      4u,
      4u,
      0x96u,
      (__int64)&WPP_2b81e3d60f0933848e91eb35754e982c_Traceguids,
      (const char *)ApplyResultString);
  }
  v15 = WPP_GLOBAL_Control != (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
     && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) != 0
     && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 5u;
  v16 = *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED && *((_WORD *)WPP_GLOBAL_Control + 36);
  if ( v15 || v16 )
  {
    v17 = W32GetUserSessionState(WPP_GLOBAL_Control, v10);
    LODWORD(v27) = v5.left;
    WPP_RECORDER_AND_TRACE_SF_dddddd(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v15,
      v16,
      *(_QWORD *)(v17 + 69152),
      5u,
      4u,
      0x97u,
      (__int64)&WPP_2b81e3d60f0933848e91eb35754e982c_Traceguids,
      v27,
      v5.top,
      v5.right,
      v5.bottom,
      v5.right - v5.left,
      v5.bottom - v5.top);
  }
  result = &WPP_GLOBAL_Control;
  v19 = 0;
  if ( WPP_GLOBAL_Control != (struct MOVESIZEDATA *)&WPP_GLOBAL_Control )
  {
    result = (struct MOVESIZEDATA **)*((unsigned int *)WPP_GLOBAL_Control + 11);
    if ( ((unsigned __int8)result & 8) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 5u )
      v19 = 1;
  }
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED || !*((_WORD *)WPP_GLOBAL_Control + 36) )
    v11 = 0;
  if ( v19 || v11 )
  {
    v20 = AdvancedWindowPos::GetWindowState(a1);
    StateString = AdvancedWindowPos::GetStateString(v20);
    v24 = W32GetUserSessionState(v23, v22);
    LOBYTE(v25) = v11;
    LOBYTE(v26) = v19;
    return (struct MOVESIZEDATA **)WPP_RECORDER_AND_TRACE_SF_s(
                                     *((_QWORD *)WPP_GLOBAL_Control + 3),
                                     v26,
                                     v25,
                                     *(_QWORD *)(v24 + 69152),
                                     5,
                                     4,
                                     152,
                                     (__int64)&WPP_2b81e3d60f0933848e91eb35754e982c_Traceguids,
                                     (__int64)StateString);
  }
  return result;
}
