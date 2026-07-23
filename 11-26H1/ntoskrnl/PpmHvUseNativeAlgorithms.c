/*
 * XREFs of PpmHvUseNativeAlgorithms @ 0x1404E55AC
 * Callers:
 *     PpmIdleRegisterDefaultStates @ 0x1407CCAF4 (PpmIdleRegisterDefaultStates.c)
 *     PpmUpdateIdleStates @ 0x140B00820 (PpmUpdateIdleStates.c)
 *     PoInitializePrcb @ 0x140C03E34 (PoInitializePrcb.c)
 * Callees:
 *     <none>
 */

bool PpmHvUseNativeAlgorithms()
{
  char v0; // dl

  v0 = 0;
  if ( !HvlHypervisorConnected )
    return 1;
  if ( (HvlpFlags & 2) != 0 )
    return (HvlEnlightenments & 0x400) == 0;
  return v0;
}
