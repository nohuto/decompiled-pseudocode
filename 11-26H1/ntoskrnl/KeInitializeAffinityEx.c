/*
 * XREFs of KeInitializeAffinityEx @ 0x1404CDE00
 * Callers:
 *     <none>
 * Callees:
 *     memset_0 @ 0x14073D880 (memset_0.c)
 */

void *__fastcall KeInitializeAffinityEx(_QWORD *a1)
{
  *a1 = 1310721LL;
  return memset_0(a1 + 1, 0, 0xA0uLL);
}
