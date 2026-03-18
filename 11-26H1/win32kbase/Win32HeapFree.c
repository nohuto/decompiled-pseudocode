/*
 * XREFs of Win32HeapFree @ 0x140149250
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

BOOLEAN __fastcall Win32HeapFree(void *a1, void *a2)
{
  return RtlFreeHeap(a1, 0, a2);
}
