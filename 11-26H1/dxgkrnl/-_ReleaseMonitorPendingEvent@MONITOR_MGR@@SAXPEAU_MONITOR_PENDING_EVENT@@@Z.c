/*
 * XREFs of ?_ReleaseMonitorPendingEvent@MONITOR_MGR@@SAXPEAU_MONITOR_PENDING_EVENT@@@Z @ 0x14005AF10
 * Callers:
 *     ??1MONITOR_MGR@@UEAA@XZ @ 0x1402737EC (--1MONITOR_MGR@@UEAA@XZ.c)
 *     ?MonitorReleaseMonitorPendingEvent@@YAJPEAU_MONITOR_PENDING_EVENT@@@Z @ 0x1403CFBC8 (-MonitorReleaseMonitorPendingEvent@@YAJPEAU_MONITOR_PENDING_EVENT@@@Z.c)
 * Callees:
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x14001D870 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 */

void __fastcall MONITOR_MGR::_ReleaseMonitorPendingEvent(struct _MONITOR_PENDING_EVENT *a1)
{
  KIRQL v2; // al
  __int64 v3; // r8
  struct _MONITOR_PENDING_EVENT **v4; // rdx

  if ( !a1 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 136;
  }
  if ( *((int *)a1 + 4) <= 0 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 137;
  }
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)a1 + 4, 0xFFFFFFFF) == 1 )
  {
    v2 = KeAcquireSpinLockRaiseToDpc(&MONITOR_MGR::_MonitorPendingEventTraceLock);
    v3 = *(_QWORD *)a1;
    if ( *(struct _MONITOR_PENDING_EVENT **)(*(_QWORD *)a1 + 8LL) != a1
      || (v4 = (struct _MONITOR_PENDING_EVENT **)*((_QWORD *)a1 + 1), *v4 != a1) )
    {
      __fastfail(3u);
    }
    *v4 = (struct _MONITOR_PENDING_EVENT *)v3;
    *(_QWORD *)(v3 + 8) = v4;
    KeReleaseSpinLock(&MONITOR_MGR::_MonitorPendingEventTraceLock, v2);
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(a1);
  }
}
