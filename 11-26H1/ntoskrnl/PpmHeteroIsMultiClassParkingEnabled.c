/*
 * XREFs of PpmHeteroIsMultiClassParkingEnabled @ 0x140417E30
 * Callers:
 *     PpmCheckComputeHeteroResponse @ 0x140415EE0 (PpmCheckComputeHeteroResponse.c)
 *     PpmPerfSnapUtility @ 0x140417360 (PpmPerfSnapUtility.c)
 *     PpmParkCalculateUnparkCount @ 0x140417970 (PpmParkCalculateUnparkCount.c)
 *     PpmParkInitParkNode @ 0x140612C58 (PpmParkInitParkNode.c)
 * Callees:
 *     <none>
 */

bool PpmHeteroIsMultiClassParkingEnabled()
{
  return PpmHeteroMultiClassParkingEnabled != 0;
}
