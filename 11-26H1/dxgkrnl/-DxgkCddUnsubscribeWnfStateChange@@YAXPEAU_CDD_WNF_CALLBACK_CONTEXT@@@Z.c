/*
 * XREFs of ?DxgkCddUnsubscribeWnfStateChange@@YAXPEAU_CDD_WNF_CALLBACK_CONTEXT@@@Z @ 0x140415000
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 */

void __fastcall DxgkCddUnsubscribeWnfStateChange(struct _EX_RUNDOWN_REF *Context)
{
  struct _IO_WORKITEM *WorkItem; // rax

  ExWaitForRundownProtectionRelease(Context + 4);
  WorkItem = IoAllocateWorkItem(g_pDriverObject);
  if ( WorkItem )
  {
    IoQueueWorkItemEx(WorkItem, DxgkUnsubscribeWnfStateChangeWork, DelayedWorkQueue, Context);
  }
  else
  {
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 4001;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Failed allocating workitem to unsubscribe the WNF callback.",
      4001LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
}
