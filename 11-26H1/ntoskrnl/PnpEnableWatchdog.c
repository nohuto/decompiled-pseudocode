/*
 * XREFs of PnpEnableWatchdog @ 0x140A19C80
 * Callers:
 *     PnpCallAddDevice @ 0x14096F278 (PnpCallAddDevice.c)
 *     PnpDeviceCompletionRequestCreate @ 0x1409B03D4 (PnpDeviceCompletionRequestCreate.c)
 *     PnpDelayedRemoveWorker @ 0x1409B5BA0 (PnpDelayedRemoveWorker.c)
 *     PnpAllocateAndEnableEventWatchdog @ 0x140A19AB0 (PnpAllocateAndEnableEventWatchdog.c)
 *     PnpCallDriverEntry @ 0x140A3937C (PnpCallDriverEntry.c)
 * Callees:
 *     PnpAllocateWatchdog @ 0x14040DEE4 (PnpAllocateWatchdog.c)
 *     PnpWatchdogTimerStart @ 0x140A19CDC (PnpWatchdogTimerStart.c)
 */

__int64 __fastcall PnpEnableWatchdog(int a1, __int64 a2, const UNICODE_STRING *a3)
{
  __int64 Watchdog; // rax
  __int64 v6; // rbx
  __int64 v7; // rcx

  Watchdog = PnpAllocateWatchdog(a3);
  v6 = Watchdog;
  if ( Watchdog )
  {
    *(_QWORD *)(Watchdog + 24) = a2;
    *(_DWORD *)(Watchdog + 16) = a1;
    v7 = *(_QWORD *)(Watchdog + 8);
    *(_QWORD *)Watchdog = MEMORY[0xFFFFF78000000008];
    PnpWatchdogTimerStart(v7);
  }
  return v6;
}
