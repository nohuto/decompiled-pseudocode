/*
 * XREFs of PopMonitorAlpcCallback @ 0x140B270F0
 * Callers:
 *     <none>
 * Callees:
 *     PopMonitorProcessLoop @ 0x140B27108 (PopMonitorProcessLoop.c)
 */

void __fastcall PopMonitorAlpcCallback(PVOID CallbackContext, PVOID Argument1, PVOID Argument2)
{
  PopMonitorProcessLoop(CallbackContext, Argument1, Argument2);
}
