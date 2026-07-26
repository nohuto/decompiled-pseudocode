/*
 * XREFs of ?IsReadLockAlreadyHeldByCurrentThread@@YAHPEAU_NDIS_RW_LOCK@@@Z @ 0x14008E070
 * Callers:
 *     ?ndisAcquireWriteLockSharedRefCnt@@YAHPEAU_NDIS_RW_LOCK@@@Z @ 0x14003B550 (-ndisAcquireWriteLockSharedRefCnt@@YAHPEAU_NDIS_RW_LOCK@@@Z.c)
 *     ?ndisAcquireReadLockSharedRefCnt@@YAHPEAU_NDIS_RW_LOCK@@@Z @ 0x1400C57E0 (-ndisAcquireReadLockSharedRefCnt@@YAHPEAU_NDIS_RW_LOCK@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IsReadLockAlreadyHeldByCurrentThread(struct _NDIS_RW_LOCK *a1)
{
  __int64 v1; // r9
  __int64 i; // rax

  v1 = qword_14011E878 + 520LL * KeGetPcr()->Prcb.Number;
  for ( i = 0LL; (unsigned int)i < *(_DWORD *)(v1 + 512); i = (unsigned int)(i + 1) )
  {
    if ( a1 == *(struct _NDIS_RW_LOCK **)(v1 + 8 * i) )
      return 1LL;
  }
  return 0LL;
}
