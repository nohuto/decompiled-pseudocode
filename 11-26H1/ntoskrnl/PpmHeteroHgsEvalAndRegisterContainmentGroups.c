/*
 * XREFs of PpmHeteroHgsEvalAndRegisterContainmentGroups @ 0x14060B3A0
 * Callers:
 *     PpmHeteroHgsUpdateContainmentConfiguration @ 0x14025D3AC (PpmHeteroHgsUpdateContainmentConfiguration.c)
 * Callees:
 *     PpmHeteroHgsRegisterContainmentGroups @ 0x14060B540 (PpmHeteroHgsRegisterContainmentGroups.c)
 */

__int64 PpmHeteroHgsEvalAndRegisterContainmentGroups()
{
  __int64 result; // rax
  unsigned __int16 i; // bx
  __int64 v2; // rcx

  result = (unsigned int)PpmHeteroHgsContainmentState;
  if ( (PpmHeteroHgsContainmentState & 2) != 0 )
  {
    for ( i = 0; i < PopModernStandbyStateNotify.SystemCallNumber; result = i )
    {
      v2 = *(_QWORD *)((char *)&PopModernStandbyStateNotify.116 + 4) + 1264LL * i;
      if ( !*(_QWORD *)(v2 + 1240) )
        PpmHeteroHgsRegisterContainmentGroups(v2, 0LL);
      ++i;
    }
  }
  return result;
}
