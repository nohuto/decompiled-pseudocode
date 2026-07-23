/*
 * XREFs of PpmHeteroHgsCheckContainmentDecision @ 0x14025A1A8
 * Callers:
 *     PpmCheckStart @ 0x14025832C (PpmCheckStart.c)
 *     PpmParkApplyPolicy @ 0x14025AAD0 (PpmParkApplyPolicy.c)
 *     PpmHeteroHgsUpdateContainmentConfiguration @ 0x14051704C (PpmHeteroHgsUpdateContainmentConfiguration.c)
 *     PpmReapplyPerfPolicy @ 0x140AD8B10 (PpmReapplyPerfPolicy.c)
 *     PopPowerRequestCallbackPerfBoostRequired @ 0x140AD8CF0 (PopPowerRequestCallbackPerfBoostRequired.c)
 * Callees:
 *     PpmHeteroHgsEvaluateContainmentDecision @ 0x1404F2880 (PpmHeteroHgsEvaluateContainmentDecision.c)
 */

__int64 PpmHeteroHgsCheckContainmentDecision()
{
  __int64 result; // rax
  unsigned __int16 i; // bx

  result = (unsigned int)PpmHeteroHgsContainmentState;
  if ( (PpmHeteroHgsContainmentState & 4) != 0 )
  {
    for ( i = 0; i < (unsigned int)PpmParkNumNodes; result = i )
      PpmHeteroHgsEvaluateContainmentDecision(PpmParkNodes + 1264LL * i++);
  }
  return result;
}
