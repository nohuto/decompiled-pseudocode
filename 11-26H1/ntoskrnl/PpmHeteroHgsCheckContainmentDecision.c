/*
 * XREFs of PpmHeteroHgsCheckContainmentDecision @ 0x1402589C8
 * Callers:
 *     PpmCheckStart @ 0x14025699C (PpmCheckStart.c)
 *     PpmParkApplyPolicy @ 0x1402592F0 (PpmParkApplyPolicy.c)
 *     PpmHeteroHgsUpdateContainmentConfiguration @ 0x14025D3AC (PpmHeteroHgsUpdateContainmentConfiguration.c)
 *     PopPowerRequestCallbackPerfBoostRequired @ 0x140A9CFA0 (PopPowerRequestCallbackPerfBoostRequired.c)
 *     PpmReapplyPerfPolicy @ 0x140A9D088 (PpmReapplyPerfPolicy.c)
 * Callees:
 *     PpmHeteroHgsEvaluateContainmentDecision @ 0x1404F9270 (PpmHeteroHgsEvaluateContainmentDecision.c)
 */

__int64 PpmHeteroHgsCheckContainmentDecision()
{
  __int64 result; // rax
  unsigned __int16 i; // bx

  result = (unsigned int)PpmHeteroHgsContainmentState;
  if ( (PpmHeteroHgsContainmentState & 4) != 0 )
  {
    for ( i = 0; i < PopModernStandbyStateNotify.SystemCallNumber; result = i )
      PpmHeteroHgsEvaluateContainmentDecision(*(_QWORD *)((char *)&PopModernStandbyStateNotify.116 + 4) + 1264LL * i++);
  }
  return result;
}
