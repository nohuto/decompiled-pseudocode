/*
 * XREFs of ?ndisReleaseReadLockSharedRefCnt@@YAXPEAU_NDIS_RW_LOCK@@@Z @ 0x14008C680
 * Callers:
 *     NdisReleaseReadWriteLock @ 0x14003FD10 (NdisReleaseReadWriteLock.c)
 *     ?ndisReleaseReadWriteLockX@@YAXPEAU_NDIS_RW_LOCK@@PEAU_LOCK_STATE@@E@Z @ 0x140040030 (-ndisReleaseReadWriteLockX@@YAXPEAU_NDIS_RW_LOCK@@PEAU_LOCK_STATE@@E@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall ndisReleaseReadLockSharedRefCnt(PKSPIN_LOCK SpinLock)
{
  int v2; // eax
  __int64 v3; // r8
  __int64 v4; // rcx
  unsigned int v5; // edx
  __int64 v6; // rax

  KeAcquireSpinLockAtDpcLevel(SpinLock + 2);
  v2 = *((_DWORD *)SpinLock + 6) - 1;
  *((_DWORD *)SpinLock + 6) = v2;
  if ( !v2 )
    KeReleaseSpinLockFromDpcLevel(SpinLock);
  KeReleaseSpinLockFromDpcLevel(SpinLock + 2);
  v3 = qword_14011E878 + 520LL * KeGetPcr()->Prcb.Number;
  v4 = 0LL;
  v5 = *(_DWORD *)(v3 + 512);
  while ( (unsigned int)v4 < v5 )
  {
    if ( SpinLock == *(PKSPIN_LOCK *)(v3 + 8 * v4) )
    {
      v6 = v5 - 1;
      *(_DWORD *)(v3 + 512) = v6;
      *(_QWORD *)(v3 + 8 * v4) = *(_QWORD *)(v3 + 8 * v6);
      return;
    }
    v4 = (unsigned int)(v4 + 1);
  }
}
