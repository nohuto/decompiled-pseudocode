/*
 * XREFs of ?ClearOverrideMargins@CWindowMarginProp@WindowMargins@@SAXPEAUtagWND@@@Z @ 0x1402C0ED8
 * Callers:
 *     ?DwmSetBorderMargins@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@@Z @ 0x1402AFA24 (-DwmSetBorderMargins@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@@Z.c)
 * Callees:
 *     SetOrClrWF @ 0x1400373A0 (SetOrClrWF.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x1400D99FC (WPP_RECORDER_AND_TRACE_SF_q.c)
 */

void __fastcall WindowMargins::CWindowMarginProp::ClearOverrideMargins(struct tagWND *a1)
{
  bool v2; // si
  bool v3; // di
  __int64 v4; // rbx
  __int64 UserSessionState; // rax
  int v6; // r8d
  int v7; // edx

  if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 234LL) & 2) != 0 )
  {
    v2 = *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
      && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x100000) != 0
      && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 5u;
    v3 = *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED
      && *(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL);
    if ( v2 || v3 )
    {
      v4 = *(_QWORD *)a1;
      UserSessionState = W32GetUserSessionState(a1, *(_QWORD *)&WPP_GLOBAL_Control);
      LOBYTE(v6) = v3;
      LOBYTE(v7) = v2;
      WPP_RECORDER_AND_TRACE_SF_q(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
        v7,
        v6,
        *(_QWORD *)(UserSessionState + 69160),
        5,
        21,
        25,
        (__int64)&WPP_eee9cda623e73e3ec961397a6ae94f7b_Traceguids,
        v4);
    }
    SetOrClrWF(0, a1, 0xDA02u, 1);
  }
}
