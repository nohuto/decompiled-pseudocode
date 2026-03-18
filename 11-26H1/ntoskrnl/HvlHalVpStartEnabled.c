/*
 * XREFs of HvlHalVpStartEnabled @ 0x1405BD4F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool HvlHalVpStartEnabled()
{
  char v0; // cl

  v0 = 0;
  if ( !VslpReservedTransferLock.QueuePriority )
    return (HvlEnlightenments & 0x8000) != 0;
  return v0;
}
