/*
 * XREFs of PpmParkDistributeAllUtility @ 0x14025C2A0
 * Callers:
 *     <none>
 * Callees:
 *     PpmParkDistributeUtility @ 0x14025C334 (PpmParkDistributeUtility.c)
 */

__int64 PpmParkDistributeAllUtility()
{
  __int64 result; // rax
  unsigned int i; // ebx

  result = SHIDWORD(PpmIdlePolicyLock.PropagateBoostsEntry.Next);
  for ( i = 0; i < PpmParkNumNodes; ++i )
    result = PpmParkDistributeUtility(
               (struct _KAFFINITY_EX *)(1264LL * i + PpmParkNodes + 16),
               (struct _KAFFINITY_EX *)(1264LL * i + PpmParkNodes + 280),
               0,
               0LL);
  return result;
}
