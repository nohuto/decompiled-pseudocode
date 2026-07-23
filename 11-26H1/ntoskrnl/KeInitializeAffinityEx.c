/*
 * XREFs of KeInitializeAffinityEx @ 0x1404C7830
 * Callers:
 *     <none>
 * Callees:
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

void *__fastcall KeInitializeAffinityEx(_QWORD *a1)
{
  *a1 = 1310721LL;
  return memset_0(a1 + 1, 0, 0xA0uLL);
}
