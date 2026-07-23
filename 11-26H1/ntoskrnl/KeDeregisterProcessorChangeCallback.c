/*
 * XREFs of KeDeregisterProcessorChangeCallback @ 0x1407BD310
 * Callers:
 *     <none>
 * Callees:
 *     ExUnregisterCallback @ 0x1404E6530 (ExUnregisterCallback.c)
 */

void __stdcall KeDeregisterProcessorChangeCallback(PVOID CallbackHandle)
{
  ExUnregisterCallback(CallbackHandle);
}
