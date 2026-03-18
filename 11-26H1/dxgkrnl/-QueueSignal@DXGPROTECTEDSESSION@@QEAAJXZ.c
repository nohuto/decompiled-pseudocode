/*
 * XREFs of ?QueueSignal@DXGPROTECTEDSESSION@@QEAAJXZ @ 0x1401F9CBC
 * Callers:
 *     ?SetSessionStatus@DXGPROTECTEDSESSION@@QEAAJW4_DXGK_PROTECTED_SESSION_STATUS@@@Z @ 0x140080BCC (-SetSessionStatus@DXGPROTECTEDSESSION@@QEAAJW4_DXGK_PROTECTED_SESSION_STATUS@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?AddReference@DXGPROTECTEDSESSION@@QEAAJ_N@Z @ 0x14007F750 (-AddReference@DXGPROTECTEDSESSION@@QEAAJ_N@Z.c)
 */

__int64 __fastcall DXGPROTECTEDSESSION::QueueSignal(struct _EX_RUNDOWN_REF *this)
{
  struct _EX_RUNDOWN_REF *v1; // rdi
  struct _IO_WORKITEM *WorkItem; // rsi

  v1 = this + 17;
  if ( ExAcquireRundownProtection(this + 17) )
  {
    WorkItem = IoAllocateWorkItem(*(PDEVICE_OBJECT *)(*(_QWORD *)(this[2].Count + 16) + 216LL));
    if ( !WorkItem )
    {
      WdLogSingleEntry0(6LL);
      WdLogGlobalForLineNumber = 1216;
      DxgkLogInternalTriageEvent(
        0LL,
        262145,
        -1,
        (__int64)L"Can't allocate memory to hold IO work item.",
        1216LL,
        0LL,
        0LL,
        0LL,
        0LL);
      ExReleaseRundownProtection(v1);
      return 3221225495LL;
    }
    WdLogSingleEntry0(4LL);
    WdLogGlobalForLineNumber = 1221;
    DXGPROTECTEDSESSION::AddReference((DXGPROTECTEDSESSION *)this, 0);
    IoQueueWorkItemEx(WorkItem, DXGPROTECTEDSESSION::SignalFenceWorkItemRoutine, DelayedWorkQueue, this);
  }
  else
  {
    LOBYTE(this[18].Count) = 1;
  }
  return 0LL;
}
