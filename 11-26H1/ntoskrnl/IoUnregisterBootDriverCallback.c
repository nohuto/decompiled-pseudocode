/*
 * XREFs of IoUnregisterBootDriverCallback @ 0x140CC3DA0
 * Callers:
 *     <none>
 * Callees:
 *     ExUnregisterCallback @ 0x1404ECF50 (ExUnregisterCallback.c)
 */

void __fastcall IoUnregisterBootDriverCallback(void *a1)
{
  ExUnregisterCallback(a1);
}
