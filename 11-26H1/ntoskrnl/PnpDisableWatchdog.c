/*
 * XREFs of PnpDisableWatchdog @ 0x1409DDFA8
 * Callers:
 *     PnpDeviceCompletionRequestDestroyWorkItem @ 0x1404A1EF0 (PnpDeviceCompletionRequestDestroyWorkItem.c)
 *     PnpDelayedRemoveWorker @ 0x140913AC0 (PnpDelayedRemoveWorker.c)
 *     PnpCallAddDevice @ 0x14091480C (PnpCallAddDevice.c)
 *     PnpDisableAndFreeEventWatchdog @ 0x1409DDF60 (PnpDisableAndFreeEventWatchdog.c)
 *     PnpCallDriverEntry @ 0x140A262DC (PnpCallDriverEntry.c)
 * Callees:
 *     WdtpCancelTimer @ 0x1409DDFE0 (WdtpCancelTimer.c)
 *     PnpCancelWatchdog @ 0x1409DE054 (PnpCancelWatchdog.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
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
