/*
 * XREFs of PopPrintEx @ 0x1404C33A8
 * Callers:
 *     PopCoalescingSetTimer @ 0x1404C3348 (PopCoalescingSetTimer.c)
 *     PopDeferDoze @ 0x1407718E0 (PopDeferDoze.c)
 *     PoFxRegisterDevice @ 0x1407CD0E0 (PoFxRegisterDevice.c)
 *     PopCoalescingNotify @ 0x1407CF2D0 (PopCoalescingNotify.c)
 *     PopSessionConnectionChangeV2 @ 0x1407DDEB4 (PopSessionConnectionChangeV2.c)
 *     NtPowerInformation @ 0x1409DE3E0 (NtPowerInformation.c)
 *     PopSessionWinlogonNotification @ 0x140A3B184 (PopSessionWinlogonNotification.c)
 *     PopSetSessionDisplayStatus @ 0x140A3C548 (PopSetSessionDisplayStatus.c)
 *     PopSetSessionUserStatus @ 0x140A3E39C (PopSetSessionUserStatus.c)
 *     PopEvaluateGlobalUserStatus @ 0x140A3ECC8 (PopEvaluateGlobalUserStatus.c)
 *     PopCheckThermalPolicy @ 0x140AC40EC (PopCheckThermalPolicy.c)
 *     PopDiagTraceIoCoalescingOn @ 0x140B2D18C (PopDiagTraceIoCoalescingOn.c)
 *     PopDiagTraceIoCoalescingOff @ 0x140B47D38 (PopDiagTraceIoCoalescingOff.c)
 *     PopSessionConnectionChange @ 0x140B72640 (PopSessionConnectionChange.c)
 * Callees:
 *     vDbgPrintExWithPrefixInternal @ 0x1403975BC (vDbgPrintExWithPrefixInternal.c)
 */

__int64 PopPrintEx(int a1, int a2, ...)
{
  va_list va; // [rsp+60h] [rbp+18h] BYREF

  va_start(va, a2);
  return vDbgPrintExWithPrefixInternal((int)&File, 146, a1, a2, va, 1);
}
