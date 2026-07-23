/*
 * XREFs of PopPrintEx @ 0x1404BCBF8
 * Callers:
 *     PopCoalescingSetTimer @ 0x1404BCB98 (PopCoalescingSetTimer.c)
 *     PopDeferDoze @ 0x1407748E0 (PopDeferDoze.c)
 *     PoFxRegisterDevice @ 0x1407D0180 (PoFxRegisterDevice.c)
 *     PopCoalescingNotify @ 0x1407D2370 (PopCoalescingNotify.c)
 *     PopSessionConnectionChangeV2 @ 0x1407E24E4 (PopSessionConnectionChangeV2.c)
 *     PopSetSessionDisplayStatus @ 0x1409F7F68 (PopSetSessionDisplayStatus.c)
 *     PopSetSessionUserStatus @ 0x1409F9DBC (PopSetSessionUserStatus.c)
 *     PopEvaluateGlobalUserStatus @ 0x1409FA6E8 (PopEvaluateGlobalUserStatus.c)
 *     NtPowerInformation @ 0x140A1B510 (NtPowerInformation.c)
 *     PopCheckThermalPolicy @ 0x140AC5D5C (PopCheckThermalPolicy.c)
 *     PopDiagTraceIoCoalescingOn @ 0x140B2F20C (PopDiagTraceIoCoalescingOn.c)
 *     PopDiagTraceIoCoalescingOff @ 0x140B49AC8 (PopDiagTraceIoCoalescingOff.c)
 *     PopSessionConnectionChange @ 0x140B77620 (PopSessionConnectionChange.c)
 *     PopSessionWinlogonNotification @ 0x140B776DC (PopSessionWinlogonNotification.c)
 * Callees:
 *     vDbgPrintExWithPrefixInternal @ 0x14039933C (vDbgPrintExWithPrefixInternal.c)
 */

__int64 PopPrintEx(int a1, int a2, ...)
{
  va_list va; // [rsp+60h] [rbp+18h] BYREF

  va_start(va, a2);
  return vDbgPrintExWithPrefixInternal((int)&File, 146, a1, a2, va, 1);
}
