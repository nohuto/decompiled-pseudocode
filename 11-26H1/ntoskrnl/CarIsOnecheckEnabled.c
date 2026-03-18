/*
 * XREFs of CarIsOnecheckEnabled @ 0x140640160
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char CarIsOnecheckEnabled()
{
  return VfFlightOptions & 1;
}
