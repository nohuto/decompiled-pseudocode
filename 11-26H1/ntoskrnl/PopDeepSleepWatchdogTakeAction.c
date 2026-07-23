/*
 * XREFs of PopDeepSleepWatchdogTakeAction @ 0x1407E8D4C
 * Callers:
 *     PopDripsWatchdogDiagnosticWorker @ 0x1407E2A20 (PopDripsWatchdogDiagnosticWorker.c)
 * Callees:
 *     PopPowerSettingPendingUpdateWatchdog @ 0x1406099A0 (PopPowerSettingPendingUpdateWatchdog.c)
 *     PopDiagTraceCsDeepSleepWatchdog @ 0x14060AD28 (PopDiagTraceCsDeepSleepWatchdog.c)
 *     DbgkWerCaptureLiveKernelDump @ 0x140B43CF0 (DbgkWerCaptureLiveKernelDump.c)
 */

char __fastcall PopDeepSleepWatchdogTakeAction(__int64 a1, char a2)
{
  unsigned __int8 updated; // si
  char result; // al
  int v6; // r8d

  updated = PopPowerSettingPendingUpdateWatchdog(10000LL * *(unsigned int *)(a1 + 8));
  result = PopDiagTraceCsDeepSleepWatchdog(
             *(_DWORD *)(a1 + 4),
             *(_DWORD *)(a1 + 12),
             *(_DWORD *)(a1 + 8),
             *(_BYTE *)(a1 + 24) != 0,
             a2,
             updated);
  if ( !*(_BYTE *)(a1 + 24) || (a2 & 1) != 0 )
  {
    if ( (_BYTE)KdDebuggerEnabled && !(_BYTE)KdDebuggerNotPresent && (a2 & 8) != 0 && *(_DWORD *)(a1 + 16) <= 0x64u )
      __debugbreak();
    v6 = 4;
    if ( (a2 & 4) != 0 )
    {
      if ( updated )
        v6 = 5;
      return DbgkWerCaptureLiveKernelDump(
               (unsigned int)L"DripsWatchdog",
               351,
               v6,
               a1,
               *(unsigned int *)(a1 + 4),
               0LL,
               0LL,
               0LL,
               0);
    }
  }
  return result;
}
