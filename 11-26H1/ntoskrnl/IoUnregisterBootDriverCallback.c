/*
 * XREFs of IoUnregisterBootDriverCallback @ 0x140CC9E80
 * Callers:
 *     <none>
 * Callees:
 *     ExUnregisterCallback @ 0x1404E6530 (ExUnregisterCallback.c)
 */

void __fastcall IoUnregisterBootDriverCallback(void *a1)
{
  ExUnregisterCallback(a1);
}
