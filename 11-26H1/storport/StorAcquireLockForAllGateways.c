/*
 * XREFs of StorAcquireLockForAllGateways @ 0x1400AED38
 * Callers:
 *     RaidResumeAdapterQueue @ 0x140010650 (RaidResumeAdapterQueue.c)
 *     StorResumeIoGateway @ 0x14002BBC0 (StorResumeIoGateway.c)
 * Callees:
 *     <none>
 */

char __fastcall StorAcquireLockForAllGateways(__int64 a1)
{
  unsigned int v1; // ebx

  v1 = 0;
  if ( !*(_QWORD *)(a1 + 6136) )
    return 0;
  if ( *(_DWORD *)(a1 + 1032) )
  {
    do
    {
      KeAcquireInStackQueuedSpinLock(
        (PKSPIN_LOCK)(*(_QWORD *)(a1 + 1024) + 320LL * v1),
        (PKLOCK_QUEUE_HANDLE)(*(_QWORD *)(a1 + 6136) + 24LL * v1));
      ++v1;
    }
    while ( v1 < *(_DWORD *)(a1 + 1032) );
  }
  return 1;
}
