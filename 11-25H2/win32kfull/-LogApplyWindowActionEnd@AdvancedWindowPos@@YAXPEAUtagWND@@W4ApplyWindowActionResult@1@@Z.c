/*
 * XREFs of ?LogApplyWindowActionEnd@AdvancedWindowPos@@YAXPEAUtagWND@@W4ApplyWindowActionResult@1@@Z @ 0x1402D4838
 * Callers:
 *     ?xxxApplyWindowAction@AdvancedWindowPos@@YAXPEAUtagWND@@PEAUWindowAction@1@W4ApplyReason@1@@Z @ 0x1402D775C (-xxxApplyWindowAction@AdvancedWindowPos@@YAXPEAUtagWND@@PEAUWindowAction@1@W4ApplyReason@1@@Z.c)
 * Callees:
 *     ?GetStateString@AdvancedWindowPos@@YAPEBDW4State@1@@Z @ 0x140026154 (-GetStateString@AdvancedWindowPos@@YAPEBDW4State@1@@Z.c)
 *     ?GetWindowState@AdvancedWindowPos@@YA?AW4State@1@PEBUtagWND@@@Z @ 0x140026190 (-GetWindowState@AdvancedWindowPos@@YA-AW4State@1@PEBUtagWND@@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_dddddd @ 0x14018C8D4 (WPP_RECORDER_AND_TRACE_SF_dddddd.c)
 *     WPP_RECORDER_AND_TRACE_SF_s @ 0x14018F548 (WPP_RECORDER_AND_TRACE_SF_s.c)
 *     WPP_RECORDER_AND_TRACE_SF_S @ 0x1401F16E4 (WPP_RECORDER_AND_TRACE_SF_S.c)
 *     ?ApplyEnd@ApplyWindowAction@InputTraceLogging@@SAXPEAUHWND__@@PEBGUtagRECT@@PEBDH@Z @ 0x1402D3DB0 (-ApplyEnd@ApplyWindowAction@InputTraceLogging@@SAXPEAUHWND__@@PEBGUtagRECT@@PEBDH@Z.c)
 *     ?GetApplyResultString@AdvancedWindowPos@@YAPEBGW4ApplyWindowActionResult@1@@Z @ 0x1402D44FC (-GetApplyResultString@AdvancedWindowPos@@YAPEBGW4ApplyWindowActionResult@1@@Z.c)
 */

unsigned int *__fastcall AdvancedWindowPos::LogApplyWindowActionEnd(const struct tagWND *a1, int a2)
{
  __int64 v3; // rax
  __int128 v5; // xmm6
  int v6; // ebx
  int WindowState; // eax
  const unsigned __int16 *ApplyResultString; // rbp
  const char *v9; // r9
  __int64 v10; // rdx
  char v11; // si
  bool v12; // bl
  bool v13; // di
  __int64 UserSessionState; // rax
  int v15; // r8d
  int v16; // edx
  bool v17; // r14
  bool v18; // bp
  __int64 v19; // rax
  int v20; // r8d
  int v21; // edx
  unsigned int *result; // rax
  bool v23; // di
  int v24; // eax
  const char *StateString; // rbx
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // rax
  int v29; // r8d
  int v30; // edx
  struct tagRECT v31; // [rsp+80h] [rbp-38h] BYREF

  v3 = *((_QWORD *)a1 + 5);
  v5 = *(_OWORD *)(v3 + 88);
  v6 = *(_BYTE *)(v3 + 20) & 0x40;
  WindowState = AdvancedWindowPos::GetWindowState(a1);
  AdvancedWindowPos::GetStateString(WindowState);
  v31 = (struct tagRECT)v5;
  ApplyResultString = AdvancedWindowPos::GetApplyResultString(a2);
  InputTraceLogging::ApplyWindowAction::ApplyEnd(*(HWND *)a1, ApplyResultString, &v31, v9, v6);
  v11 = 1;
  v12 = *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
     && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) != 0
     && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 4u;
  v13 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
  if ( v12 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    UserSessionState = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v10);
    LOBYTE(v15) = v13;
    LOBYTE(v16) = v12;
    WPP_RECORDER_AND_TRACE_SF_S(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
      v16,
      v15,
      *(_QWORD *)(UserSessionState + 69160),
      4,
      4,
      150,
      (__int64)&WPP_465f200ce2533ca40a0cb60e63eb1667_Traceguids,
      (__int64)ApplyResultString);
  }
  v17 = *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
     && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) != 0
     && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 5u;
  v18 = *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED
     && *(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL);
  if ( v17 || v18 )
  {
    v19 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v10);
    LOBYTE(v20) = v18;
    LOBYTE(v21) = v17;
    WPP_RECORDER_AND_TRACE_SF_dddddd(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
      v21,
      v20,
      *(_QWORD *)(v19 + 69160),
      5,
      4,
      151,
      (__int64)&WPP_465f200ce2533ca40a0cb60e63eb1667_Traceguids,
      v5,
      SBYTE4(v5),
      SBYTE8(v5),
      SBYTE12(v5),
      BYTE8(v5) - v5,
      HIDWORD(v5) - DWORD1(v5));
  }
  result = &WPP_GLOBAL_Control;
  v23 = 0;
  if ( *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control )
  {
    result = (unsigned int *)*(unsigned int *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL);
    if ( ((unsigned __int8)result & 8) != 0 && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 5u )
      v23 = 1;
  }
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
    || !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL) )
  {
    v11 = 0;
  }
  if ( v23 || v11 )
  {
    v24 = AdvancedWindowPos::GetWindowState(a1);
    StateString = AdvancedWindowPos::GetStateString(v24);
    v28 = W32GetUserSessionState(v27, v26);
    LOBYTE(v29) = v11;
    LOBYTE(v30) = v23;
    return (unsigned int *)WPP_RECORDER_AND_TRACE_SF_s(
                             *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
                             v30,
                             v29,
                             *(_QWORD *)(v28 + 69160),
                             5,
                             4,
                             152,
                             (__int64)&WPP_465f200ce2533ca40a0cb60e63eb1667_Traceguids,
                             (__int64)StateString);
  }
  return result;
}
