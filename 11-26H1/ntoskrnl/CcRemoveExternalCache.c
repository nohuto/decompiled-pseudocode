/*
 * XREFs of CcRemoveExternalCache @ 0x1405B12EC
 * Callers:
 *     CcUnregisterExternalCache @ 0x1405B1470 (CcUnregisterExternalCache.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x1402BE860 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14032F300 (KeAcquireSpinLockRaiseToDpc.c)
 *     CcDereferencePartitionAndPrivateVolumeCacheMap @ 0x14039C160 (CcDereferencePartitionAndPrivateVolumeCacheMap.c)
 *     KeBugCheckEx @ 0x1405339B0 (KeBugCheckEx.c)
 */

void __fastcall CcRemoveExternalCache(_QWORD *a1)
{
  KIRQL v2; // di
  __int64 v3; // r8
  _QWORD *v4; // rcx
  int Flink; // eax

  v2 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&EmpParseLock.SchedulerSharedSwappablePage);
  v3 = a1[4];
  if ( *(_QWORD **)(v3 + 8) != a1 + 4 || (v4 = (_QWORD *)a1[5], (_QWORD *)*v4 != a1 + 4) )
    __fastfail(3u);
  Flink = (int)EmpParseLock.GlobalForegroundListEntry.Flink;
  *v4 = v3;
  *(_QWORD *)(v3 + 8) = v4;
  if ( !Flink )
    KeBugCheckEx(0x34u, 0x1E5DuLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  LODWORD(EmpParseLock.GlobalForegroundListEntry.Flink) = Flink - 1;
  if ( CcEnablePerVolumeLazyWriter )
    CcDereferencePartitionAndPrivateVolumeCacheMap(a1[6], a1[7]);
  KeReleaseSpinLock((PKSPIN_LOCK)&EmpParseLock.SchedulerSharedSwappablePage, v2);
}
