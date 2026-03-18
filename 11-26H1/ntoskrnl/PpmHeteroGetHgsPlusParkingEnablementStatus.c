/*
 * XREFs of PpmHeteroGetHgsPlusParkingEnablementStatus @ 0x1404E24E4
 * Callers:
 *     PopInitializeHeteroProcessors @ 0x140A9DA10 (PopInitializeHeteroProcessors.c)
 * Callees:
 *     <none>
 */

bool PpmHeteroGetHgsPlusParkingEnablementStatus()
{
  char v0; // cl

  v0 = 0;
  if ( PopHeteroSystem == 5 )
    return PpmHeteroHgsThreadEnabled != 0;
  return v0;
}
