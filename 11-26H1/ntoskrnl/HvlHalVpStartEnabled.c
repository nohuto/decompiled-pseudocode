/*
 * XREFs of HvlHalVpStartEnabled @ 0x1405BFD60
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool HvlHalVpStartEnabled()
{
  char v0; // cl

  v0 = 0;
  if ( !VslpReservedTransferLock.IdealProcessor )
    return (HvlEnlightenments & 0x8000) != 0;
  return v0;
}
