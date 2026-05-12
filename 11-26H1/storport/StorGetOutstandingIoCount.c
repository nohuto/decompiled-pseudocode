/*
 * XREFs of StorGetOutstandingIoCount @ 0x14005C75C
 * Callers:
 *     StorRemoveIoGatewayItem @ 0x1400135F0 (StorRemoveIoGatewayItem.c)
 *     RaidAdapterResetBus @ 0x1400349BC (RaidAdapterResetBus.c)
 *     RaidAdapterReclaimIoResourceTimerDpcRoutine @ 0x140065100 (RaidAdapterReclaimIoResourceTimerDpcRoutine.c)
 *     RaidAdapterResetBusNoLock @ 0x14006571C (RaidAdapterResetBusNoLock.c)
 *     StorSetAllIoGatewayBusy @ 0x1400AF9A8 (StorSetAllIoGatewayBusy.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall StorGetOutstandingIoCount(__int64 a1)
{
  unsigned int v1; // r8d
  unsigned int i; // r10d

  v1 = 0;
  for ( i = 0; i < *(_DWORD *)(a1 + 1032); ++i )
    v1 += _InterlockedCompareExchange((volatile signed __int32 *)(320LL * i + *(_QWORD *)(a1 + 1024) + 192), 0, 0);
  return v1;
}
