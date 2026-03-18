/*
 * XREFs of CcPerfLogLoggedStreamsStats @ 0x1404E1200
 * Callers:
 *     CcLazyWriteScanVolume @ 0x140388CAC (CcLazyWriteScanVolume.c)
 *     CcLazyWriteScan @ 0x1404FB788 (CcLazyWriteScan.c)
 * Callees:
 *     KeRcuReadUnlock @ 0x1402206B0 (KeRcuReadUnlock.c)
 *     KeRcuReadLock @ 0x140384590 (KeRcuReadLock.c)
 *     CcPerfLogVolumeLogHandleInfo @ 0x1404E1298 (CcPerfLogVolumeLogHandleInfo.c)
 */

__int64 __fastcall CcPerfLogLoggedStreamsStats(__int64 a1, int a2)
{
  int v3; // esi
  struct _LIST_ENTRY *i; // rbx
  struct _LIST_ENTRY *Blink; // rcx

  v3 = a1;
  KeRcuReadLock(a1);
  for ( i = EmpParseLock.GlobalUpdateVpThreadPriorityListEntry.Blink;
        i != (struct _LIST_ENTRY *)&EmpParseLock.InGlobalUpdateVpThreadPriorityList;
        i = i->Flink )
  {
    if ( i[1].Blink )
    {
      Blink = i[9].Blink;
      if ( Blink )
      {
        CcPerfLogVolumeLogHandleInfo((_DWORD)Blink, v3, a2, i[8].Blink, (__int64)i[3].Flink, (__int64)i[4].Blink);
        i[9].Blink = 0LL;
      }
    }
  }
  return KeRcuReadUnlock();
}
