/*
 * XREFs of LockProcessByClientId @ 0x1400D8B9C
 * Callers:
 *     GetConsoleDesktop @ 0x14019C77C (GetConsoleDesktop.c)
 *     ProcessInfoFromPID @ 0x1401EE4B0 (ProcessInfoFromPID.c)
 *     xxxWaitForInputIdle @ 0x1401FAC5C (xxxWaitForInputIdle.c)
 *     NtUserCheckProcessForClipboardAccess @ 0x1402484F0 (NtUserCheckProcessForClipboardAccess.c)
 *     NtUserDwmValidateWindow @ 0x140248A50 (NtUserDwmValidateWindow.c)
 *     NtUserSetActiveProcessForMonitor @ 0x14024D090 (NtUserSetActiveProcessForMonitor.c)
 *     xxxActivateDebugger @ 0x14025E0C0 (xxxActivateDebugger.c)
 *     NtUserGetDisplayAutoRotationPreferencesByProcessId @ 0x140297650 (NtUserGetDisplayAutoRotationPreferencesByProcessId.c)
 * Callees:
 *     W32GetCurrentWin32kSessionId @ 0x1400D8E2C (W32GetCurrentWin32kSessionId.c)
 */

__int64 __fastcall LockProcessByClientId(void *a1, PEPROCESS *a2)
{
  NTSTATUS v3; // esi
  int ProcessSessionId; // ebx

  *a2 = 0LL;
  v3 = PsLookupProcessByProcessId(a1, a2);
  if ( v3 < 0 )
    return (unsigned int)v3;
  ProcessSessionId = PsGetProcessSessionId(*a2);
  if ( ProcessSessionId == (unsigned int)W32GetCurrentWin32kSessionId() )
    return (unsigned int)v3;
  ObfDereferenceObject(*a2);
  *a2 = 0LL;
  return 3221225473LL;
}
