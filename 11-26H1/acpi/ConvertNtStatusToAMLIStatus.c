/*
 * XREFs of ConvertNtStatusToAMLIStatus @ 0x14004A4D8
 * Callers:
 *     ParseRelease @ 0x14000C360 (ParseRelease.c)
 *     PerformNativeMethodCall @ 0x14004A244 (PerformNativeMethodCall.c)
 *     PerformMutexDriverCallbacks @ 0x14004A31C (PerformMutexDriverCallbacks.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ConvertNtStatusToAMLIStatus(unsigned int a1)
{
  __int64 result; // rax

  if ( a1 == -1073741643 || a1 == -1073741536 )
    return 32773LL;
  result = 32772LL;
  if ( a1 != 259 )
    return a1;
  return result;
}
