/*
 * XREFs of PpmCheckAdjustNextPerfCheck @ 0x1404B8170
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 PpmCheckAdjustNextPerfCheck()
{
  __int64 result; // rax

  if ( PpmCheckCurrentPipelineId == 5 )
  {
    result = PpmCheckLastEffectiveExecutionTime;
    if ( PpmCheckLastEffectiveExecutionTime )
      return _InterlockedExchange64(&PpmCheckLastEffectiveExecutionTime, MEMORY[0xFFFFF78000000008]);
  }
  return result;
}
