/*
 * XREFs of PnpEnableWatchdog @ 0x1409DC9D0
 * Callers:
 *     PnpDeviceCompletionRequestCreate @ 0x14090E2A4 (PnpDeviceCompletionRequestCreate.c)
 *     PnpDelayedRemoveWorker @ 0x140913AC0 (PnpDelayedRemoveWorker.c)
 *     PnpCallAddDevice @ 0x14091480C (PnpCallAddDevice.c)
 *     PnpAllocateAndEnableEventWatchdog @ 0x1409DC800 (PnpAllocateAndEnableEventWatchdog.c)
 *     PnpCallDriverEntry @ 0x140A262DC (PnpCallDriverEntry.c)
 * Callees:
 *     PnpAllocateWatchdog @ 0x1404199B4 (PnpAllocateWatchdog.c)
 *     PnpWatchdogTimerStart @ 0x1409DCA2C (PnpWatchdogTimerStart.c)
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
