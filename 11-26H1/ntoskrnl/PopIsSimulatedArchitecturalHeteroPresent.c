/*
 * XREFs of PopIsSimulatedArchitecturalHeteroPresent @ 0x140B56DD0
 * Callers:
 *     PopInitializeHeteroProcessors @ 0x140B76758 (PopInitializeHeteroProcessors.c)
 * Callees:
 *     PopHeteroCapabilityDeepCopy @ 0x140B76650 (PopHeteroCapabilityDeepCopy.c)
 */

char __fastcall PopIsSimulatedArchitecturalHeteroPresent(__int64 a1)
{
  __int64 v1; // rdx
  char v2; // bl
  int v4; // esi

  v1 = PpmHeteroCapabilitySimulation;
  v2 = 0;
  if ( PpmHeteroCapabilitySimulation && (PpmHeteroSimulationStateConfig & 1) != 0 )
  {
    v4 = *(_DWORD *)(a1 + 4);
    *(_DWORD *)(a1 + 4) = *(_DWORD *)(PpmHeteroCapabilitySimulation + 4);
    if ( (unsigned int)PopHeteroCapabilityDeepCopy(a1, v1) )
      return 1;
    else
      *(_DWORD *)(a1 + 4) = v4;
  }
  return v2;
}
