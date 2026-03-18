/*
 * XREFs of VfRandomGetNumber @ 0x140B730FC
 * Callers:
 *     VfPendingShouldForce @ 0x140B81BE8 (VfPendingShouldForce.c)
 *     VfFaultsInjectResourceFailure @ 0x140B86588 (VfFaultsInjectResourceFailure.c)
 *     DifpLwSPProcessPrePoolAlloc @ 0x140B94284 (DifpLwSPProcessPrePoolAlloc.c)
 *     ViInitPickRandomTargets @ 0x140C2A2B8 (ViInitPickRandomTargets.c)
 * Callees:
 *     RtlRandomEx @ 0x14041CDA0 (RtlRandomEx.c)
 */

ULONG __fastcall VfRandomGetNumber(unsigned int a1, unsigned int a2)
{
  ULONG result; // eax

  result = RtlRandomEx(&ViRandomSeed);
  if ( a2 >= a1 )
    return a1 + result % (a2 - a1 + 1);
  return result;
}
