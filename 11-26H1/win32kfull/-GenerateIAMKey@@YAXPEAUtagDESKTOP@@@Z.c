/*
 * XREFs of ?GenerateIAMKey@@YAXPEAUtagDESKTOP@@@Z @ 0x1402DB398
 * Callers:
 *     ?RegisterShell@@YA_NPEAUtagWND@@@Z @ 0x14027C828 (-RegisterShell@@YA_NPEAUtagWND@@@Z.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1401913D0 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14028B39C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

void __fastcall GenerateIAMKey(struct tagDESKTOP *a1)
{
  __int64 v2; // rdx
  bool v3; // bl
  bool v4; // di
  __int64 UserSessionState; // rax
  int v6; // r8d
  int v7; // edx

  if ( (unsigned int)SystemPrng((char *)a1 + 280, 8LL) )
  {
    *((_DWORD *)a1 + 68) = 1;
  }
  else
  {
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTellMeIf", 0x20000, 2582);
    v3 = WPP_GLOBAL_Control != (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 2u;
    v4 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v3 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control, v2);
      LOBYTE(v6) = v4;
      LOBYTE(v7) = v3;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v7,
        v6,
        *(_QWORD *)(UserSessionState + 69152),
        2,
        2,
        44,
        (__int64)&WPP_92f77d0ad927336281f8f045e6412d0f_Traceguids);
    }
  }
}
