/*
 * XREFs of CcRemoveExternalCache @ 0x1405B3AFC
 * Callers:
 *     CcUnregisterExternalCache @ 0x1405B3C80 (CcUnregisterExternalCache.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x140309520 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140331330 (KeAcquireSpinLockRaiseToDpc.c)
 *     CcDereferencePartitionAndPrivateVolumeCacheMap @ 0x14039DEC0 (CcDereferencePartitionAndPrivateVolumeCacheMap.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 */

void __fastcall CcRemoveExternalCache(_QWORD *a1)
{
  KIRQL v2; // di
  __int64 v3; // r8
  _QWORD *v4; // rcx
  int ReadOperationCount; // eax

  v2 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&EmpParseLock.SchedulerAssistYieldCounter);
  v3 = a1[4];
  if ( *(_QWORD **)(v3 + 8) != a1 + 4 || (v4 = (_QWORD *)a1[5], (_QWORD *)*v4 != a1 + 4) )
    __fastfail(3u);
  ReadOperationCount = EmpParseLock.ReadOperationCount;
  *v4 = v3;
  *(_QWORD *)(v3 + 8) = v4;
  if ( !ReadOperationCount )
    KeBugCheckEx(0x34u, 0x1E5DuLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  LODWORD(EmpParseLock.ReadOperationCount) = ReadOperationCount - 1;
  if ( CcEnablePerVolumeLazyWriter )
    CcDereferencePartitionAndPrivateVolumeCacheMap(a1[6], a1[7]);
  KeReleaseSpinLock((PKSPIN_LOCK)&EmpParseLock.SchedulerAssistYieldCounter, v2);
}
