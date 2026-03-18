/*
 * XREFs of ?_AppStarting_Clear@CForegroundLaunch@@AEAAXPEAUtagPROCESSINFO@@@Z @ 0x14028B1AC
 * Callers:
 *     ?TryRecordParentPidLegacyPolicy@CForegroundLaunch@@QEAAXPEAUtagPROCESSINFO@@@Z @ 0x1402140B4 (-TryRecordParentPidLegacyPolicy@CForegroundLaunch@@QEAAXPEAUtagPROCESSINFO@@@Z.c)
 *     ?OnFirstActivationAttempted@CForegroundLaunch@@QEAAXXZ @ 0x1402527A0 (-OnFirstActivationAttempted@CForegroundLaunch@@QEAAXXZ.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x1401A4EE4 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14028B39C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

void __fastcall CForegroundLaunch::_AppStarting_Clear(CForegroundLaunch *this, struct tagPROCESSINFO *a2)
{
  char *v4; // rcx
  char *v5; // rax
  char *v6; // rdi
  struct tagPROCESSINFO **v7; // r14
  struct tagPROCESSINFO *v8; // rbx
  char v9; // si
  bool v10; // bp
  int v11; // ebx
  __int64 UserSessionState; // rax
  int v13; // r8d
  int v14; // edx
  __int64 v15; // rdx
  char **v16; // rax

  if ( (*((_DWORD *)a2 + 3) & 0x40) == 0 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1033LL);
  if ( *((_BYTE *)this + 440) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1035LL);
  v4 = (char *)this + 424;
  v5 = (char *)*((_QWORD *)this + 53);
  while ( 1 )
  {
    v6 = v5;
    if ( v5 == v4 )
      break;
    v7 = (struct tagPROCESSINFO **)(v5 - 16);
    v5 = *(char **)v5;
    v8 = *v7;
    if ( *v7 == a2 )
    {
      *((_DWORD *)v8 + 3) &= ~0x40u;
      if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) == 0
        || (v9 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
      {
        v9 = 0;
      }
      v10 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( v9 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        v11 = *((_DWORD *)v8 + 14);
        UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control, a2);
        LOBYTE(v13) = v10;
        LOBYTE(v14) = v9;
        WPP_RECORDER_AND_TRACE_SF_d(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v14,
          v13,
          *(_QWORD *)(UserSessionState + 69152),
          4,
          2,
          54,
          (__int64)&WPP_b22b714c1b94308c01bf3b20d92a8bdb_Traceguids,
          v11);
      }
      v15 = *(_QWORD *)v6;
      if ( *(char **)(*(_QWORD *)v6 + 8LL) != v6 || (v16 = (char **)*((_QWORD *)v6 + 1), *v16 != v6) )
        __fastfail(3u);
      *v16 = (char *)v15;
      *(_QWORD *)(v15 + 8) = v16;
      Win32FreePool(v7);
      return;
    }
  }
}
