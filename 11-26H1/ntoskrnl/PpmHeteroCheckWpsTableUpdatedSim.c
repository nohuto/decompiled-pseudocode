/*
 * XREFs of PpmHeteroCheckWpsTableUpdatedSim @ 0x140615EB0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char PpmHeteroCheckWpsTableUpdatedSim()
{
  char result; // al

  result = 1;
  if ( !PpmHeteroHgsEnabled || PpmHeteroHgsVendor != 15 )
    return 0;
  return result;
}
