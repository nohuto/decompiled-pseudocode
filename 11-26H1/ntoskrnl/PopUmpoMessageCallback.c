/*
 * XREFs of PopUmpoMessageCallback @ 0x1404C5F00
 * Callers:
 *     <none>
 * Callees:
 *     PopUmpoProcessMessages @ 0x140AA766C (PopUmpoProcessMessages.c)
 */

void __fastcall PopUmpoMessageCallback(PVOID CallbackContext, PVOID Argument1, PVOID Argument2)
{
  PopUmpoProcessMessages(CallbackContext, Argument1, Argument2);
}
