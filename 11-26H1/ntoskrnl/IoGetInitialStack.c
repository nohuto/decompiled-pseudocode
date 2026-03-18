/*
 * XREFs of IoGetInitialStack @ 0x140B1A520
 * Callers:
 *     DifIoGetInitialStackWrapper @ 0x14065CB80 (DifIoGetInitialStackWrapper.c)
 * Callees:
 *     <none>
 */

PVOID IoGetInitialStack(void)
{
  return KeGetCurrentThread()->InitialStack;
}
