/*
 * XREFs of NtUserEnableShellWindowManagementBehavior @ 0x140296000
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x14001A2B4 (UserSetLastError.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036850 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     IAMThreadAccessGranted @ 0x14015C7E0 (IAMThreadAccessGranted.c)
 *     ?Registered@ShellWindowManagement@@YA_NXZ @ 0x14021AFAC (-Registered@ShellWindowManagement@@YA_NXZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14026E830 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall NtUserEnableShellWindowManagementBehavior(int a1, int a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rbx
  struct tagTHREADINFO *v7; // rdi
  __int64 v8; // rbp
  int v9; // r15d
  int v10; // eax
  __int64 v11; // rdx
  ShellWindowManagement *v12; // rcx
  int v13; // ecx
  __int64 v14; // rcx
  int v16; // edi

  EnterCrit(0LL, 0LL);
  v6 = 0LL;
  v7 = PtiCurrent(v5, v4);
  v8 = *((_QWORD *)v7 + 62);
  v9 = *(_DWORD *)(v8 + 336);
  if ( (a2 & 0xC) != 0 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 7866);
  LOBYTE(v10) = IAMThreadAccessGranted(v7);
  if ( !v10 )
  {
    v13 = 5;
LABEL_5:
    UserSetLastError(v13);
    UserSessionSwitchLeaveCrit(v14);
    return 0LL;
  }
  if ( (a2 & 0x8FFFF800) != 0 )
  {
    v13 = 87;
    goto LABEL_5;
  }
  v16 = a2 & a1 | v9 & ~a1;
  if ( !v16 || ShellWindowManagement::Registered(v12, v11) )
  {
    *(_DWORD *)(v8 + 336) = v16;
    v6 = 1LL;
  }
  else
  {
    *(_DWORD *)(v8 + 336) = 0;
    UserSetLastError(5023);
  }
  UserSessionSwitchLeaveCrit(v12);
  return v6;
}
