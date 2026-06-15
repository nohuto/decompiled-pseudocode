/*
 * XREFs of ?IncrementObjectCount@ServiceModule@Internal@Windows@@UEAAKXZ @ 0x1800D90D0
 * Callers:
 *     ?IncrementObjectCount@ServiceModule@Internal@Windows@@WCI@EAAKXZ @ 0x1800D90F0 (-IncrementObjectCount@ServiceModule@Internal@Windows@@WCI@EAAKXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
ULONG __stdcall Windows::Internal::ServiceModule::IncrementObjectCount()
{
  return CoAddRefServerProcess();
}
