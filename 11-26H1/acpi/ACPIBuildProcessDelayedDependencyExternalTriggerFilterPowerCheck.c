/*
 * XREFs of ACPIBuildProcessDelayedDependencyExternalTriggerFilterPowerCheck @ 0x140042F5C
 * Callers:
 *     ACPIDispatchIrp @ 0x140024580 (ACPIDispatchIrp.c)
 * Callees:
 *     ACPIDevicePowerFlushQueue @ 0x14001C97C (ACPIDevicePowerFlushQueue.c)
 *     ACPIBuildScheduleDpc @ 0x14002809C (ACPIBuildScheduleDpc.c)
 *     ACPIBuildProcessDelayedDependencyShouldDelayRequest @ 0x140043030 (ACPIBuildProcessDelayedDependencyShouldDelayRequest.c)
 *     ACPIBuildFlushQueue @ 0x1400C7EBC (ACPIBuildFlushQueue.c)
 */

void __fastcall ACPIBuildProcessDelayedDependencyExternalTriggerFilterPowerCheck(__int64 a1)
{
  char v2; // di
  KIRQL v3; // al
  __int64 *v4; // rbx
  KIRQL v5; // r14
  __int64 *v6; // rsi
  __int64 v7; // rdx

  v2 = 0;
  v3 = KeAcquireSpinLockRaiseToDpc(&AcpiBuildQueueLock);
  v4 = (__int64 *)AcpiBuildDelayedDependencyList;
  v5 = v3;
  if ( (__int64 *)AcpiBuildDelayedDependencyList != &AcpiBuildDelayedDependencyList )
  {
    do
    {
      v6 = v4;
      v4 = (__int64 *)*v4;
      if ( v6[10] && !(unsigned __int8)ACPIBuildProcessDelayedDependencyShouldDelayRequest() )
      {
        _InterlockedCompareExchange((volatile signed __int32 *)v6 + 6, 4, 1);
        v2 = 1;
      }
    }
    while ( v4 != &AcpiBuildDelayedDependencyList );
    if ( v2 )
      ACPIBuildScheduleDpc();
  }
  KeReleaseSpinLock(&AcpiBuildQueueLock, v5);
  if ( v2 )
  {
    LOBYTE(v7) = 1;
    ACPIBuildFlushQueue(a1, v7);
    ACPIDevicePowerFlushQueue(a1);
  }
}
