/*
 * XREFs of ndisUnloadPeriodicReceives @ 0x140190AAC
 * Callers:
 *     ?ndisInitializePeriodicReceives@@YAHXZ @ 0x1401907A4 (-ndisInitializePeriodicReceives@@YAHXZ.c)
 * Callees:
 *     NdisReleaseRWLock @ 0x1400337F0 (NdisReleaseRWLock.c)
 *     NdisAcquireRWLockWrite @ 0x140033910 (NdisAcquireRWLockWrite.c)
 *     NdisFreeRWLock @ 0x140054D90 (NdisFreeRWLock.c)
 *     NdisFreeNetBufferListPool @ 0x140067350 (NdisFreeNetBufferListPool.c)
 *     memset @ 0x1400EA4C0 (memset.c)
 */

void ndisUnloadPeriodicReceives()
{
  NDIS_HANDLE v0; // rbx
  struct _LOCK_STATE_EX LockState; // [rsp+30h] [rbp+8h] BYREF

  v0 = 0LL;
  *(_WORD *)&LockState.OldIrql = 0;
  LockState.Flags = 0;
  if ( Lock )
  {
    NdisAcquireRWLockWrite(Lock, &LockState, 0);
    if ( PoolHandle )
    {
      v0 = PoolHandle;
      PoolHandle = 0LL;
    }
    if ( ndisPeriodicReceives == 1 )
    {
      ndisPeriodicReceives = 0;
      ExDeleteNPagedLookasideList(&Lookaside);
      ExDeleteNPagedLookasideList(&stru_14011D500);
      memset(&Lookaside, 0, sizeof(Lookaside));
      memset(&stru_14011D500, 0, sizeof(stru_14011D500));
    }
    NdisReleaseRWLock(Lock, &LockState);
    NdisFreeRWLock(Lock);
    if ( v0 )
      NdisFreeNetBufferListPool(v0);
  }
  if ( ndisPerCpuPoisonPills )
  {
    ExFreePoolWithTag(ndisPerCpuPoisonPills, 0);
    ndisPerCpuPoisonPills = 0LL;
  }
  if ( qword_14011D448 )
  {
    ExFreePoolWithTag(qword_14011D448, 0);
    qword_14011D448 = 0LL;
  }
  if ( qword_14011D440 )
  {
    ExFreePoolWithTag(qword_14011D440, 0);
    qword_14011D440 = 0LL;
  }
  if ( qword_14011D438 )
  {
    ExFreePoolWithTag(qword_14011D438, 0);
    qword_14011D438 = 0LL;
  }
  if ( qword_14011D430 )
  {
    ExFreePoolWithTag(qword_14011D430, 0);
    qword_14011D430 = 0LL;
  }
}
