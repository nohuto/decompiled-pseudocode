/*
 * XREFs of KiInitializeSchedulerSubNode @ 0x1405F2494
 * Callers:
 *     KiAllocateSchedulerSubNode @ 0x1405F1CFC (KiAllocateSchedulerSubNode.c)
 *     KiConfigureInitialNodes @ 0x1405F1FE8 (KiConfigureInitialNodes.c)
 * Callees:
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

void *__fastcall KiInitializeSchedulerSubNode(_WORD *a1, _WORD *a2)
{
  memset_0(a1, 0, 0x300uLL);
  a1[69] = a2[1];
  a1[70] = *a2;
  a1[68] = a2[3];
  a1[71] = -1;
  return memset_0(a1 + 224, 255, 0x40uLL);
}
