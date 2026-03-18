/*
 * XREFs of HalpAcquirePmuAccessRequest @ 0x14057FDF0
 * Callers:
 *     HalpNotifyActorIfPmuAvailable @ 0x140B110C8 (HalpNotifyActorIfPmuAvailable.c)
 *     HalpRequestPmuAccess @ 0x140B5BF20 (HalpRequestPmuAccess.c)
 * Callees:
 *     <none>
 */

__int64 HalpAcquirePmuAccessRequest()
{
  unsigned int v0; // ecx

  v0 = 0;
  if ( _InterlockedCompareExchange((volatile signed __int32 *)&HalpPmuArbiter.Header.WaitListHead, 1, 0) == 1 )
    return (unsigned int)-2147483631;
  return v0;
}
