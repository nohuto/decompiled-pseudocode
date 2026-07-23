/*
 * XREFs of CcPerfLogLoggedStreamsStats @ 0x1404DA8E0
 * Callers:
 *     CcLazyWriteScanVolume @ 0x14038AA5C (CcLazyWriteScanVolume.c)
 *     CcLazyWriteScan @ 0x1404F4BD4 (CcLazyWriteScan.c)
 * Callees:
 *     KeRcuReadUnlock @ 0x140222040 (KeRcuReadUnlock.c)
 *     KeRcuReadLock @ 0x140386340 (KeRcuReadLock.c)
 *     CcPerfLogVolumeLogHandleInfo @ 0x1404DA978 (CcPerfLogVolumeLogHandleInfo.c)
 */

__int64 __fastcall CcPerfLogLoggedStreamsStats(__int64 a1, int a2)
{
  int v3; // esi
  unsigned __int64 i; // rbx
  __int64 v5; // rcx

  v3 = a1;
  KeRcuReadLock(a1);
  for ( i = EmpParseLock.KernelWaitTime; (unsigned __int64 *)i != &EmpParseLock.KernelWaitTime; i = *(_QWORD *)i )
  {
    if ( *(_QWORD *)(i + 24) )
    {
      v5 = *(_QWORD *)(i + 152);
      if ( v5 )
      {
        CcPerfLogVolumeLogHandleInfo(v5, v3, a2, *(_QWORD *)(i + 136), *(_QWORD *)(i + 48), *(_QWORD *)(i + 72));
        *(_QWORD *)(i + 152) = 0LL;
      }
    }
  }
  return KeRcuReadUnlock();
}
