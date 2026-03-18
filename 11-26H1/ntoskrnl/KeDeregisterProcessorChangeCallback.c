/*
 * XREFs of KeDeregisterProcessorChangeCallback @ 0x1407BA2B0
 * Callers:
 *     <none>
 * Callees:
 *     ExUnregisterCallback @ 0x1404ECF50 (ExUnregisterCallback.c)
 */

void __stdcall KeDeregisterProcessorChangeCallback(PVOID CallbackHandle)
{
  ExUnregisterCallback(CallbackHandle);
}
