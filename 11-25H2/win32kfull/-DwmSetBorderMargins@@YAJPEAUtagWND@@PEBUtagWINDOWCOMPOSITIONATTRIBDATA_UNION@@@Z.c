/*
 * XREFs of ?DwmSetBorderMargins@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@@Z @ 0x1402AFA24
 * Callers:
 *     NtUserSetWindowCompositionAttribute @ 0x14024E5B0 (NtUserSetWindowCompositionAttribute.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036850 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ?CheckForChanges@WindowMargins@@YAXPEAUtagWND@@W4ChangeReason@1@@Z @ 0x140037578 (-CheckForChanges@WindowMargins@@YAXPEAUtagWND@@W4ChangeReason@1@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1400D9978 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_dddd @ 0x14026BB14 (WPP_RECORDER_AND_TRACE_SF_dddd.c)
 *     ?ClearOverrideMargins@CWindowMarginProp@WindowMargins@@SAXPEAUtagWND@@@Z @ 0x1402C0ED8 (-ClearOverrideMargins@CWindowMarginProp@WindowMargins@@SAXPEAUtagWND@@@Z.c)
 *     ?SetOverrideMargins@CWindowMarginProp@WindowMargins@@SAJPEAUtagWND@@AEBUFRAME_MARGIN@@@Z @ 0x1402C11E0 (-SetOverrideMargins@CWindowMarginProp@WindowMargins@@SAJPEAUtagWND@@AEBUFRAME_MARGIN@@@Z.c)
 */

__int64 __fastcall DwmSetBorderMargins(struct tagWND *a1, const struct tagWINDOWCOMPOSITIONATTRIBDATA_UNION *a2)
{
  unsigned __int64 v4; // rdx
  char v5; // si
  bool v6; // bl
  __int64 v7; // rax
  int v8; // r8d
  int v9; // edx
  unsigned __int64 v11; // rbx
  unsigned int v12; // edi
  char v13; // si
  bool v14; // bp
  __int64 UserSessionState; // rax
  int v16; // r8d
  int v17; // edx
  __int64 v18; // r9
  __int16 v19; // [rsp+30h] [rbp-38h]
  char v20; // [rsp+40h] [rbp-28h]
  char v21; // [rsp+48h] [rbp-20h]
  char v22; // [rsp+50h] [rbp-18h]
  char v23; // [rsp+58h] [rbp-10h]
  unsigned __int64 v24; // [rsp+70h] [rbp+8h] BYREF

  if ( *((struct tagTHREADINFO **)a1 + 2) == PtiCurrent((__int64)a1, (__int64)a2) )
  {
    v11 = *(_QWORD *)a2;
    v12 = 0;
    v24 = v11;
    if ( (v11 & 0x8000u) != 0LL
      || (v11 & 0x800000000000LL) != 0
      || (v11 & 0x80000000) != 0
      || (v4 = HIWORD(v11), (v11 & 0x8000000000000000uLL) != 0LL) )
    {
      if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
        || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x100000) == 0
        || (v13 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 3u) )
      {
        v13 = 0;
      }
      v14 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( !v13 && *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
        return 3221225485LL;
      v18 = *(_QWORD *)(W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v4) + 69160);
      v23 = BYTE6(v24);
      v22 = BYTE2(v24);
      v21 = BYTE4(v24);
      v20 = v11;
      v19 = 11;
    }
    else
    {
      if ( (_WORD)v11 )
      {
        if ( WORD2(v11) && WORD1(v11) && HIWORD(v11) )
        {
          v12 = WindowMargins::CWindowMarginProp::SetOverrideMargins(a1, (const struct FRAME_MARGIN *)&v24);
          goto LABEL_23;
        }
      }
      else if ( __PAIR32__(WORD1(v11), 0) == WORD2(v11) && !HIWORD(v11) )
      {
        WindowMargins::CWindowMarginProp::ClearOverrideMargins(a1);
LABEL_23:
        WindowMargins::CheckForChanges(a1, 6LL);
        return v12;
      }
      if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
        || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x100000) == 0
        || (v13 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 3u) )
      {
        v13 = 0;
      }
      v14 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( !v13 && *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
        return 3221225485LL;
      UserSessionState = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v4);
      v17 = SWORD2(v24);
      v18 = *(_QWORD *)(UserSessionState + 69160);
      v23 = BYTE6(v24);
      v22 = BYTE2(v24);
      v21 = BYTE4(v24);
      v20 = v11;
      v19 = 12;
    }
    LOBYTE(v16) = v14;
    LOBYTE(v17) = v13;
    WPP_RECORDER_AND_TRACE_SF_dddd(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
      v17,
      v16,
      v18,
      3,
      21,
      v19,
      (__int64)&WPP_8a3faf74a2313f35df68134ab4bc02da_Traceguids,
      v20,
      v21,
      v22,
      v23);
    return 3221225485LL;
  }
  if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
    || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x100000) == 0
    || (v5 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 3u) )
  {
    v5 = 0;
  }
  v6 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
  if ( v5 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    v7 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v4);
    LOBYTE(v8) = v6;
    LOBYTE(v9) = v5;
    WPP_RECORDER_AND_TRACE_SF_(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
      v9,
      v8,
      *(_QWORD *)(v7 + 69160),
      3,
      21,
      10,
      (__int64)&WPP_8a3faf74a2313f35df68134ab4bc02da_Traceguids);
  }
  return 3221225506LL;
}
