/*
 * XREFs of ?MonitorCancelSkippedDepartures@@YAJPEAXI@Z @ 0x1403EEEE4
 * Callers:
 *     DpiPdoHandleChildConnectionChange @ 0x140443F48 (DpiPdoHandleChildConnectionChange.c)
 * Callees:
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1400319C0 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?_CancelSkippedDepartures@MONITOR_MGR@@QEAAJI@Z @ 0x1403EEFB8 (-_CancelSkippedDepartures@MONITOR_MGR@@QEAAJI@Z.c)
 */

__int64 __fastcall MonitorCancelSkippedDepartures(PERESOURCE *this, __int64 a2)
{
  __int64 v2; // rdi
  __int64 v4; // rax
  PERESOURCE v5; // rax
  MONITOR_MGR *Blink; // rcx

  v2 = (unsigned int)a2;
  v4 = WdLogNewEntry5_WdTrace(this, a2);
  *(_QWORD *)(v4 + 24) = v2;
  *(_QWORD *)(v4 + 32) = this;
  WdLogGlobalForLineNumber = 899;
  if ( !this || (_DWORD)v2 == -1 )
    return 3221225485LL;
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(this) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 917;
  }
  v5 = this[395];
  if ( !v5 )
  {
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 921;
    return 3221225485LL;
  }
  Blink = (MONITOR_MGR *)v5[1].SystemResourcesList.Blink;
  if ( !Blink )
  {
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 934;
    return 3221225485LL;
  }
  return MONITOR_MGR::_CancelSkippedDepartures(Blink, v2);
}
