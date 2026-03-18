/*
 * XREFs of ?UpdateCheckpointForAction@AdvancedWindowPos@@YAXPEAUtagWND@@PEAUCHECKPOINT@@AEBUtagRECT@@W4ActionModifier@1@@Z @ 0x1402D6A54
 * Callers:
 *     ?xxxApplyWindowAction@AdvancedWindowPos@@YAXPEAUtagWND@@PEAUWindowAction@1@W4ApplyReason@1@@Z @ 0x1402D775C (-xxxApplyWindowAction@AdvancedWindowPos@@YAXPEAUtagWND@@PEAUWindowAction@1@W4ApplyReason@1@@Z.c)
 * Callees:
 *     ?SetRestoreToArrangeRect@CHECKPOINT@@QEAAXPEBUtagWND@@AEBUtagRECT@@@Z @ 0x140026328 (-SetRestoreToArrangeRect@CHECKPOINT@@QEAAXPEBUtagWND@@AEBUtagRECT@@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1400D9978 (WPP_RECORDER_AND_TRACE_SF_.c)
 */

void __fastcall AdvancedWindowPos::UpdateCheckpointForAction(
        const struct tagWND *a1,
        CHECKPOINT *a2,
        const struct tagRECT *a3,
        char a4)
{
  char v7; // bl
  bool v8; // si
  __int64 UserSessionState; // rax
  int v10; // r8d
  int v11; // edx
  char v12; // bl
  bool v13; // si
  __int64 v14; // rax
  int v15; // r8d
  int v16; // edx
  char v17; // bl
  bool v18; // si
  __int64 v19; // rax
  int v20; // r8d
  int v21; // edx

  if ( (a4 & 0x10) != 0 )
  {
    v7 = 1;
    v8 = *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
      && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) != 0
      && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 5u;
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
      || !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL) )
    {
      v7 = 0;
    }
    if ( v8 || v7 )
    {
      UserSessionState = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, a2);
      LOBYTE(v10) = v7;
      LOBYTE(v11) = v8;
      WPP_RECORDER_AND_TRACE_SF_(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
        v11,
        v10,
        *(_QWORD *)(UserSessionState + 69160),
        5,
        4,
        84,
        (__int64)&WPP_465f200ce2533ca40a0cb60e63eb1667_Traceguids);
    }
    *((_DWORD *)a2 + 4) &= 0xFFFFFFF1;
  }
  else if ( (a4 & 0x20) != 0 )
  {
    v12 = 1;
    v13 = *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
       && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) != 0
       && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 5u;
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
      || !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL) )
    {
      v12 = 0;
    }
    if ( v13 || v12 )
    {
      v14 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, a2);
      LOBYTE(v15) = v12;
      LOBYTE(v16) = v13;
      WPP_RECORDER_AND_TRACE_SF_(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
        v16,
        v15,
        *(_QWORD *)(v14 + 69160),
        5,
        4,
        85,
        (__int64)&WPP_465f200ce2533ca40a0cb60e63eb1667_Traceguids);
    }
    *((_DWORD *)a2 + 4) = *((_DWORD *)a2 + 4) & 0xFFFFFFF1 | 2;
  }
  else if ( (a4 & 0x40) != 0 )
  {
    v17 = 1;
    v18 = *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
       && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) != 0
       && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 5u;
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
      || !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL) )
    {
      v17 = 0;
    }
    if ( v18 || v17 )
    {
      v19 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, a2);
      LOBYTE(v20) = v17;
      LOBYTE(v21) = v18;
      WPP_RECORDER_AND_TRACE_SF_(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
        v21,
        v20,
        *(_QWORD *)(v19 + 69160),
        5,
        4,
        86,
        (__int64)&WPP_465f200ce2533ca40a0cb60e63eb1667_Traceguids);
    }
    *((_DWORD *)a2 + 4) = *((_DWORD *)a2 + 4) & 0xFFFFFFF1 | 8;
    CHECKPOINT::SetRestoreToArrangeRect(a2, a1, a3);
  }
}
