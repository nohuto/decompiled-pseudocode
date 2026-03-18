/*
 * XREFs of NtUserInitializeTouchInjection @ 0x14029A1D0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x14001A2B4 (UserSetLastError.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1400D9978 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ?CheckCurrentInjectionConfiguration@@YAXXZ @ 0x14021FAE0 (-CheckCurrentInjectionConfiguration@@YAXXZ.c)
 *     _InitializeTouchInjectionWorker @ 0x14027B154 (_InitializeTouchInjectionWorker.c)
 */

__int64 __fastcall NtUserInitializeTouchInjection(unsigned int a1, unsigned int a2)
{
  char v4; // si
  int v5; // edi
  __int64 v6; // rbx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rbx
  bool v10; // bl
  __int64 UserSessionState; // rax
  int v12; // r8d
  int v13; // edx
  int v14; // ecx
  __int64 v15; // rcx
  char v17; // [rsp+70h] [rbp+18h] BYREF

  v4 = 1;
  v5 = 0;
  v6 = EnterCrit(1LL, 0LL);
  v17 = 0;
  EnterLeaveCritMitRitHandOffHazard::Enter((EnterLeaveCritMitRitHandOffHazard *)&v17);
  InputExtensibilityCalloutGuard();
  v9 = *(_QWORD *)(v6 + 464);
  if ( v17 )
  {
    if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
      || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x80000) == 0
      || *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 2u )
    {
      v4 = 0;
    }
    v10 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v4 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      UserSessionState = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v7);
      LOBYTE(v12) = v10;
      LOBYTE(v13) = v4;
      WPP_RECORDER_AND_TRACE_SF_(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
        v13,
        v12,
        *(_QWORD *)(UserSessionState + 69160),
        2,
        20,
        29,
        (__int64)&WPP_212fca24ed3e3073058b582086d1855d_Traceguids);
    }
    v14 = 5;
    goto LABEL_14;
  }
  if ( a1 - 1 > 0xFF || a2 - 1 > 2 )
  {
    v14 = 87;
LABEL_14:
    UserSetLastError(v14);
    goto LABEL_15;
  }
  CheckCurrentInjectionConfiguration(v8, v7);
  v5 = InitializeTouchInjectionWorker(a1, a2, v9);
LABEL_15:
  LeaveMitRitHazardCrit();
  UserSessionSwitchLeaveCrit(v15);
  return v5;
}
