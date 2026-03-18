/*
 * XREFs of PpmHvUseNativeAlgorithms @ 0x1404EBFCC
 * Callers:
 *     PpmIdleRegisterDefaultStates @ 0x1407C9A54 (PpmIdleRegisterDefaultStates.c)
 *     PpmUpdateIdleStates @ 0x140AFE7B0 (PpmUpdateIdleStates.c)
 *     PoInitializePrcb @ 0x140BFDDE8 (PoInitializePrcb.c)
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
