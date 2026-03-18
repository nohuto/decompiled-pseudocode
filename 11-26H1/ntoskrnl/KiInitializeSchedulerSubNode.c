/*
 * XREFs of KiInitializeSchedulerSubNode @ 0x1405EFB24
 * Callers:
 *     KiAllocateSchedulerSubNode @ 0x1405EF38C (KiAllocateSchedulerSubNode.c)
 *     KiConfigureInitialNodes @ 0x1405EF678 (KiConfigureInitialNodes.c)
 * Callees:
 *     memset_0 @ 0x14073D880 (memset_0.c)
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
