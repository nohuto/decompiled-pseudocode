/*
 * XREFs of RaidReleasePortData @ 0x14003A14C
 * Callers:
 *     StorEtwEnableCallback @ 0x140038A60 (StorEtwEnableCallback.c)
 *     StorpLogStatistics @ 0x140038EB8 (StorpLogStatistics.c)
 *     RaUnitSendInstanceCounters @ 0x140039378 (RaUnitSendInstanceCounters.c)
 *     RaUnitGetInstances @ 0x140039F84 (RaUnitGetInstances.c)
 *     RemoveNvmeIceInterfaceFromList @ 0x140071D84 (RemoveNvmeIceInterfaceFromList.c)
 *     StorEtwResetCounters @ 0x1400B24B8 (StorEtwResetCounters.c)
 *     RaDeleteDriver @ 0x140183DC0 (RaDeleteDriver.c)
 * Callees:
 *     <none>
 */

void __fastcall RaidReleasePortData(void *a1)
{
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)a1, 0xFFFFFFFF) == 1 )
  {
    RaidpPortData = 0LL;
    ExFreePoolWithTag(a1, 0x44506152u);
  }
}
