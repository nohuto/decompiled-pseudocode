/*
 * XREFs of IoGetInitialStack @ 0x140B1C7D0
 * Callers:
 *     DifIoGetInitialStackWrapper @ 0x140660760 (DifIoGetInitialStackWrapper.c)
 * Callees:
 *     <none>
 */

PVOID IoGetInitialStack(void)
{
  return KeGetCurrentThread()->InitialStack;
}
