/*
 * XREFs of xxxAppAdjustDpiCandidateRect @ 0x14024092C
 * Callers:
 *     NtUserUpdateLayeredWindow @ 0x140051B10 (NtUserUpdateLayeredWindow.c)
 *     xxxInheritWindowMonitor @ 0x140064724 (xxxInheritWindowMonitor.c)
 *     _anonymous_namespace_::xxxNormalizeRect_0 @ 0x14014DEF4 (_anonymous_namespace_--xxxNormalizeRect_0.c)
 *     ?xxxCalcValidRects@@YAHPEAUtagSMWP@@@Z @ 0x140232CAC (-xxxCalcValidRects@@YAHPEAUtagSMWP@@@Z.c)
 *     ?xxxSendDpiChangedMsgs@@YA_NPEAUtagWND@@PEAUtagRECT@@PEAUtagBWL@@G@Z @ 0x1402405D0 (-xxxSendDpiChangedMsgs@@YA_NPEAUtagWND@@PEAUtagRECT@@PEAUtagBWL@@G@Z.c)
 *     ?xxxDetectNewMonitor@@YAHPEAUMOVESIZEDATA@@PEAUtagRECT@@@Z @ 0x14028373C (-xxxDetectNewMonitor@@YAHPEAUMOVESIZEDATA@@PEAUtagRECT@@@Z.c)
 *     ?xxxTransformRectToMonitor@AdvancedWindowPos@@YA?AUtagRECT@@PEAUtagWND@@AEBU2@PEBUMonitorData@CMonitorTopology@@2_N@Z @ 0x1402D9920 (-xxxTransformRectToMonitor@AdvancedWindowPos@@YA-AUtagRECT@@PEAUtagWND@@AEBU2@PEBUMonitorData@CM.c)
 * Callees:
 *     xxxSendTransformableMessageTimeout @ 0x140030264 (xxxSendTransformableMessageTimeout.c)
 *     WPP_RECORDER_AND_TRACE_SF_Dd @ 0x14005F670 (WPP_RECORDER_AND_TRACE_SF_Dd.c)
 *     WPP_RECORDER_AND_TRACE_SF_qddd @ 0x14016813C (WPP_RECORDER_AND_TRACE_SF_qddd.c)
 *     ?IsWindowBroadcastingDpiToChildrenX@@YA_NPEAUtagWND@@@Z @ 0x1401A924C (-IsWindowBroadcastingDpiToChildrenX@@YA_NPEAUtagWND@@@Z.c)
 */

__int64 __fastcall xxxAppAdjustDpiCandidateRect(struct tagTHREADINFO **a1, unsigned __int16 a2, _DWORD *a3, _DWORD *a4)
{
  unsigned __int64 v5; // r13
  unsigned int v8; // edi
  __int64 v9; // rdx
  int v10; // r10d
  char v11; // r15
  char v12; // bp
  struct tagTHREADINFO *v13; // rbx
  __int64 UserSessionState; // rax
  int v15; // r8d
  int v16; // edx
  __int64 v17; // rdx
  char v18; // bp
  char v19; // bl
  __int64 v20; // rax
  int v21; // r8d
  int v22; // edx
  int v24; // [rsp+60h] [rbp-38h] BYREF
  int v25; // [rsp+64h] [rbp-34h]

  v5 = a2;
  v8 = 0;
  if ( IsWindowBroadcastingDpiToChildrenX((struct tagWND *)a1) )
  {
    v10 = a3[2] - *a3;
    v25 = a3[3] - a3[1];
    v24 = v10;
    if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
      || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) == 0
      || (v11 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 5u) )
    {
      v11 = 0;
    }
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
      || (v12 = 1, !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL)) )
    {
      v12 = 0;
    }
    if ( v11 || v12 )
    {
      v13 = *a1;
      UserSessionState = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v9);
      LOBYTE(v15) = v12;
      LOBYTE(v16) = v11;
      WPP_RECORDER_AND_TRACE_SF_qddd(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
        v16,
        v15,
        *(_QWORD *)(UserSessionState + 69160),
        5,
        4,
        25,
        (__int64)&WPP_bd5572f5d1ad3e1a276576d737b3d2ca_Traceguids,
        (char)v13,
        v5,
        v24,
        v25);
    }
    if ( xxxSendTransformableMessageTimeout(a1, 740LL, v5, (struct tagDRAWITEMSTRUCT *)&v24, 0, 0, 0LL, 1, 1) )
    {
      if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
        || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) == 0
        || (v18 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 5u) )
      {
        v18 = 0;
      }
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
        || (v19 = 1, !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL)) )
      {
        v19 = 0;
      }
      if ( v18 || v19 )
      {
        v20 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v17);
        LOBYTE(v21) = v19;
        LOBYTE(v22) = v18;
        WPP_RECORDER_AND_TRACE_SF_Dd(
          *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
          v22,
          v21,
          *(_QWORD *)(v20 + 69160),
          5,
          4,
          26,
          (__int64)&WPP_bd5572f5d1ad3e1a276576d737b3d2ca_Traceguids,
          v24,
          v25);
      }
      v8 = 1;
      a4[1] = a3[1];
      *a4 = *a3;
      a4[2] = v24 + *a3;
      a4[3] = v25 + a3[1];
    }
  }
  return v8;
}
