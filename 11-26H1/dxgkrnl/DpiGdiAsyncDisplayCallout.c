/*
 * XREFs of DpiGdiAsyncDisplayCallout @ 0x1403F2C40
 * Callers:
 *     _lambda_5bf16074e78eca97c9745c10e52e39f7_::operator() @ 0x14008A5AC (_lambda_5bf16074e78eca97c9745c10e52e39f7_--operator().c)
 *     ?SubmitBatch@DXGDISPLAYCALLOUTQUEUE@@QEAAJPEAU_LIST_ENTRY@@_K@Z @ 0x1403D8CD4 (-SubmitBatch@DXGDISPLAYCALLOUTQUEUE@@QEAAJPEAU_LIST_ENTRY@@_K@Z.c)
 *     ?SubmitSingleEntry@DXGDISPLAYCALLOUTQUEUE@@QEAAJPEAUDISPLAY_CALLOUT_ENTRY@@_K@Z @ 0x1403F2B34 (-SubmitSingleEntry@DXGDISPLAYCALLOUTQUEUE@@QEAAJPEAUDISPLAY_CALLOUT_ENTRY@@_K@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DpiGdiAsyncDisplayCallout(__int64 a1)
{
  unsigned int v2; // ebx
  struct _IO_WORKITEM *WorkItem; // rdi
  _BYTE *Pool2; // rax

  v2 = 0;
  WorkItem = IoAllocateWorkItem(g_pDriverObject);
  if ( WorkItem )
  {
    Pool2 = (_BYTE *)ExAllocatePool2(256LL, 16LL, 1953656900LL);
    if ( Pool2 )
    {
      *(_QWORD *)Pool2 = a1;
      Pool2[8] = 1;
      IoQueueWorkItemEx(WorkItem, (PIO_WORKITEM_ROUTINE_EX)DpiGdiHandleAsyncDisplayCallout, DelayedWorkQueue, Pool2);
    }
    else
    {
      IoFreeWorkItem(WorkItem);
      v2 = -1073741670;
      WdLogSingleEntry1(6LL);
      WdLogGlobalForLineNumber = 279;
    }
  }
  else
  {
    v2 = -1073741670;
    WdLogSingleEntry1(6LL);
    WdLogGlobalForLineNumber = 266;
  }
  return v2;
}
