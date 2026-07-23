/*
 * XREFs of VfRandomGetNumber @ 0x140C275B4
 * Callers:
 *     VfPendingShouldForce @ 0x140C3605C (VfPendingShouldForce.c)
 *     VfFaultsInjectResourceFailure @ 0x140C3A7C4 (VfFaultsInjectResourceFailure.c)
 *     DifpLwSPProcessPrePoolAlloc @ 0x140C49214 (DifpLwSPProcessPrePoolAlloc.c)
 *     ViInitPickRandomTargets @ 0x140CE4FF0 (ViInitPickRandomTargets.c)
 * Callees:
 *     RtlRandomEx @ 0x140200BE0 (RtlRandomEx.c)
 */

ULONG __fastcall VfRandomGetNumber(unsigned int a1, unsigned int a2)
{
  ULONG result; // eax

  result = RtlRandomEx(&ViRandomSeed);
  if ( a2 >= a1 )
    return a1 + result % (a2 - a1 + 1);
  return result;
}
