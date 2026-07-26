/*
 * XREFs of ?ndisAcquireWriteLockSharedRefCnt@@YAHPEAU_NDIS_RW_LOCK@@@Z @ 0x14003B550
 * Callers:
 *     NdisAcquireReadWriteLock @ 0x14003B0B0 (NdisAcquireReadWriteLock.c)
 *     ?ndisAcquireReadWriteLockX@@YAXPEAU_NDIS_RW_LOCK@@EPEAU_LOCK_STATE@@E@Z @ 0x14003B2F0 (-ndisAcquireReadWriteLockX@@YAXPEAU_NDIS_RW_LOCK@@EPEAU_LOCK_STATE@@E@Z.c)
 * Callees:
 *     ?IsReadLockAlreadyHeldByCurrentThread@@YAHPEAU_NDIS_RW_LOCK@@@Z @ 0x14008E070 (-IsReadLockAlreadyHeldByCurrentThread@@YAHPEAU_NDIS_RW_LOCK@@@Z.c)
 */

_BOOL8 __fastcall ndisAcquireWriteLockSharedRefCnt(struct _NDIS_RW_LOCK *a1)
{
  KSPIN_LOCK *v2; // rcx
  int LockAlreadyHeldByCurrentThread; // edi

  a1->RefCount[0].cacheLine[12] = 1;
  LockAlreadyHeldByCurrentThread = IsReadLockAlreadyHeldByCurrentThread(a1);
  if ( LockAlreadyHeldByCurrentThread )
  {
    while ( 1 )
    {
      while ( a1->RefCountEx[2] != 1 )
        _mm_pause();
      KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)&a1->16);
      if ( a1->RefCountEx[2] == 1 )
        break;
      KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)&a1->16);
    }
  }
  else
  {
    KeAcquireSpinLockAtDpcLevel(v2);
  }
  a1->Context = KeGetCurrentThread();
  a1->RefCount[0].cacheLine[12] = 0;
  return LockAlreadyHeldByCurrentThread == 0;
}
