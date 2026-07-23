/*
 * XREFs of PpmHeteroHgsEvalAndRegisterContainmentGroups @ 0x14060E08C
 * Callers:
 *     PpmHeteroHgsUpdateContainmentConfiguration @ 0x14051704C (PpmHeteroHgsUpdateContainmentConfiguration.c)
 * Callees:
 *     PpmHeteroHgsRegisterContainmentGroups @ 0x14060E258 (PpmHeteroHgsRegisterContainmentGroups.c)
 */

__int64 PpmHeteroHgsEvalAndRegisterContainmentGroups()
{
  __int64 result; // rax
  unsigned __int16 i; // bx
  __int64 v2; // rcx

  result = (unsigned int)PpmHeteroHgsContainmentState;
  if ( (PpmHeteroHgsContainmentState & 2) != 0 )
  {
    for ( i = 0; i < (unsigned int)PpmParkNumNodes; result = i )
    {
      v2 = PpmParkNodes + 1264LL * i;
      if ( !*(_QWORD *)(v2 + 1240) )
        PpmHeteroHgsRegisterContainmentGroups(v2, 0LL);
      ++i;
    }
  }
  return result;
}
