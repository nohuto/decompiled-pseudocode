/*
 * XREFs of PnpDisableWatchdog @ 0x140A1B0D4
 * Callers:
 *     PnpDeviceCompletionRequestDestroyWorkItem @ 0x14049BA20 (PnpDeviceCompletionRequestDestroyWorkItem.c)
 *     PnpCallAddDevice @ 0x14096F278 (PnpCallAddDevice.c)
 *     PnpDelayedRemoveWorker @ 0x1409B5BA0 (PnpDelayedRemoveWorker.c)
 *     PnpDisableAndFreeEventWatchdog @ 0x140A1B08C (PnpDisableAndFreeEventWatchdog.c)
 *     PnpCallDriverEntry @ 0x140A3937C (PnpCallDriverEntry.c)
 * Callees:
 *     WdtpCancelTimer @ 0x140A1B10C (WdtpCancelTimer.c)
 *     PnpCancelWatchdog @ 0x140A1B180 (PnpCancelWatchdog.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

void __fastcall PnpDisableWatchdog(__int64 a1)
{
  void *v2; // rbx
  __int64 v3; // rdx

  PnpCancelWatchdog();
  v2 = *(void **)(a1 + 8);
  LOBYTE(v3) = 1;
  WdtpCancelTimer(v2, v3);
  ExFreePoolWithTag(v2, 0x54645750u);
}
