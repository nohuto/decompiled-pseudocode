/*
 * XREFs of PpmHeteroIsMultiClassParkingEnabled @ 0x1404205F0
 * Callers:
 *     PpmCheckComputeHeteroResponse @ 0x14041E6A0 (PpmCheckComputeHeteroResponse.c)
 *     PpmPerfSnapUtility @ 0x14041FB20 (PpmPerfSnapUtility.c)
 *     PpmParkCalculateUnparkCount @ 0x140420130 (PpmParkCalculateUnparkCount.c)
 *     PpmParkInitParkNode @ 0x14060F9F4 (PpmParkInitParkNode.c)
 * Callees:
 *     <none>
 */

bool PpmHeteroIsMultiClassParkingEnabled()
{
  return PpmHeteroMultiClassParkingEnabled != 0;
}
