/*
 * XREFs of KeResumeDynamicTracing @ 0x1405FC444
 * Callers:
 *     PopInvokeSystemStateHandler @ 0x140C04104 (PopInvokeSystemStateHandler.c)
 * Callees:
 *     <none>
 */

void KeResumeDynamicTracing()
{
  _InterlockedAnd(&KiDynamicTraceMask, 0xFFFFFFFB);
}
