/*
 * XREFs of ?ClearOverrideMargins@CWindowMarginProp@WindowMargins@@SAXPEAUtagWND@@@Z @ 0x1402DAA3C
 * Callers:
 *     ?DwmSetBorderMargins@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@@Z @ 0x1402CB6EC (-DwmSetBorderMargins@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@@Z.c)
 * Callees:
 *     SetOrClrWF @ 0x14004EE90 (SetOrClrWF.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x14019025C (WPP_RECORDER_AND_TRACE_SF_q.c)
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
    v2 = WPP_GLOBAL_Control != (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x100000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 5u;
    v3 = *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED && *((_WORD *)WPP_GLOBAL_Control + 36);
    if ( v2 || v3 )
    {
      v4 = *(_QWORD *)a1;
      UserSessionState = W32GetUserSessionState(a1, WPP_GLOBAL_Control);
      LOBYTE(v6) = v3;
      LOBYTE(v7) = v2;
      WPP_RECORDER_AND_TRACE_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v7,
        v6,
        *(_QWORD *)(UserSessionState + 69152),
        5,
        21,
        25,
        (__int64)&WPP_eee9cda623e73e3ec961397a6ae94f7b_Traceguids,
        v4);
    }
    SetOrClrWF(0, a1, 0xDA02u, 1);
  }
}
