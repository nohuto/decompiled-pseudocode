/*
 * XREFs of CcSlowReferenceSharedCacheMapFileObject @ 0x14039D524
 * Callers:
 *     CcReferenceSharedCacheMapFileObject @ 0x14039CB54 (CcReferenceSharedCacheMapFileObject.c)
 * Callees:
 *     ExfAcquirePushLockSharedEx @ 0x140277230 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     ObfReferenceObjectWithTag @ 0x1402780A0 (ObfReferenceObjectWithTag.c)
 *     ExfReleasePushLockShared @ 0x140278140 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 */

unsigned __int64 __fastcall CcSlowReferenceSharedCacheMapFileObject(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        struct _KLOCK_ENTRIES *a4)
{
  LegacyAutoBoost *v5; // rbx
  unsigned __int64 v6; // rbx

  v5 = (LegacyAutoBoost *)KeAbPreAcquire((__int64)&EmpParseLock.WriteOperationCount, 0LL, 0LL, a4);
  if ( _InterlockedCompareExchange64(&EmpParseLock.WriteOperationCount, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(
      &EmpParseLock.WriteOperationCount,
      0,
      v5,
      (struct _KTHREAD *)&EmpParseLock.WriteOperationCount);
  if ( v5 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      *((_BYTE *)v5 + 33) |= 2u;
    else
      *((_BYTE *)v5 + 10) = 1;
  }
  v6 = *(_QWORD *)(a1 + 96) & 0xFFFFFFFFFFFFFFF0uLL;
  if ( v6 )
    ObfReferenceObjectWithTag((PVOID)(*(_QWORD *)(a1 + 96) & 0xFFFFFFFFFFFFFFF0uLL), 0x63536343u);
  if ( _InterlockedCompareExchange64(&EmpParseLock.WriteOperationCount, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(&EmpParseLock.WriteOperationCount);
  KeAbPostRelease((unsigned __int64)&EmpParseLock.WriteOperationCount);
  return v6;
}
