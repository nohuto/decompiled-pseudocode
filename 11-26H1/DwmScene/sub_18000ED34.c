/*
 * XREFs of sub_18000ED34 @ 0x18000ED34
 * Callers:
 *     sub_18000E6A0 @ 0x18000E6A0 (sub_18000E6A0.c)
 * Callees:
 *     <none>
 */

BOOL __fastcall sub_18000ED34(void *a1)
{
  HANDLE ProcessHeap; // rax

  ProcessHeap = GetProcessHeap();
  return HeapFree(ProcessHeap, 0, a1);
}
