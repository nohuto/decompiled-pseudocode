/*
 * XREFs of CcAddExternalCacheInternalEx @ 0x1405B0998
 * Callers:
 *     CcAddExternalCacheToVolumeEx @ 0x1405B0A30 (CcAddExternalCacheToVolumeEx.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x1402BE860 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14032F300 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeBugCheckEx @ 0x1405339B0 (KeBugCheckEx.c)
 */

void __fastcall CcAddExternalCacheInternalEx(__int64 a1, __int64 a2)
{
  KIRQL v4; // al
  _QWORD *v5; // rcx
  _QWORD *v6; // rbx
  KIRQL v7; // r8
  unsigned int Flink; // eax

  v4 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&EmpParseLock.SchedulerSharedSwappablePage);
  v5 = *(_QWORD **)(a2 + 8);
  v6 = (_QWORD *)(a1 + 32);
  v7 = v4;
  if ( *v5 != a2 )
    __fastfail(3u);
  Flink = (unsigned int)EmpParseLock.GlobalForegroundListEntry.Flink;
  *v6 = a2;
  v6[1] = v5;
  *v5 = v6;
  *(_QWORD *)(a2 + 8) = v6;
  if ( Flink + 1 < Flink )
    KeBugCheckEx(0x34u, 0x23C3uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  LODWORD(EmpParseLock.GlobalForegroundListEntry.Flink) = Flink + 1;
  KeReleaseSpinLock((PKSPIN_LOCK)&EmpParseLock.SchedulerSharedSwappablePage, v7);
}
