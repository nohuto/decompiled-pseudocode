/*
 * XREFs of ?NotifyUnblockUEFIFrameBufferRanges@DXGADAPTER@@QEAAJPEBU_DXGK_QUERYSEGMENTMEMORYSTATE@@@Z @ 0x14006F180
 * Callers:
 *     DxgkUnblockUEFIFrameBufferRangesCB @ 0x140075680 (DxgkUnblockUEFIFrameBufferRangesCB.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 */

__int64 __fastcall DXGADAPTER::NotifyUnblockUEFIFrameBufferRanges(
        DXGADAPTER *this,
        const struct _DXGK_QUERYSEGMENTMEMORYSTATE *a2)
{
  unsigned int v4; // ebx
  __int64 NumInvalidMemoryRanges; // rax
  const wchar_t *v6; // r9
  int v7; // edx
  char *Pool2; // rdi
  struct _IO_WORKITEM *WorkItem; // rbp
  DXGK_MEMORYRANGE *pMemoryRanges; // rcx
  __int64 v11; // rax

  v4 = 0;
  if ( a2->NumInvalidMemoryRanges != 1 )
  {
    v4 = -1073741811;
    WdLogSingleEntry1(2LL);
    NumInvalidMemoryRanges = a2->NumInvalidMemoryRanges;
    v6 = L"UnblockUEFIFrameBufferRanges: NumUEFIFrameBufferRanges must be 1, but 0x%08X";
    v7 = 0x40000;
    WdLogGlobalForLineNumber = 2616;
LABEL_3:
    DxgkLogInternalTriageEvent(0LL, v7, -1, (__int64)v6, NumInvalidMemoryRanges, 0LL, 0LL, 0LL, 0LL);
    return v4;
  }
  Pool2 = (char *)ExAllocatePool2(64LL, 40LL, 1265072196LL);
  if ( !Pool2 )
  {
    v4 = -1073741670;
    WdLogSingleEntry0(6LL);
    NumInvalidMemoryRanges = 2626LL;
    v6 = L"Can't allocate memory to hold IO work item data.";
    WdLogGlobalForLineNumber = 2626;
    v7 = 262145;
    goto LABEL_3;
  }
  WorkItem = IoAllocateWorkItem(*((PDEVICE_OBJECT *)this + 27));
  if ( WorkItem )
  {
    pMemoryRanges = a2->pMemoryRanges;
    v11 = *(_QWORD *)((char *)this + 412);
    *(struct _DXGK_QUERYSEGMENTMEMORYSTATE *)(Pool2 + 8) = *a2;
    *((_QWORD *)Pool2 + 2) = Pool2 + 24;
    *(_QWORD *)Pool2 = v11;
    *(DXGK_MEMORYRANGE *)(Pool2 + 24) = *pMemoryRanges;
    WdLogSingleEntry0(4LL);
    WdLogGlobalForLineNumber = 2643;
    IoQueueWorkItemEx(WorkItem, HandleUnblockUEFIFrameBufferRanges, DelayedWorkQueue, Pool2);
  }
  else
  {
    v4 = -1073741670;
    WdLogSingleEntry0(6LL);
    WdLogGlobalForLineNumber = 2634;
    DxgkLogInternalTriageEvent(
      0LL,
      262145,
      -1,
      (__int64)L"Can't allocate memory to hold IO work item.",
      2634LL,
      0LL,
      0LL,
      0LL,
      0LL);
    ExFreePoolWithTag(Pool2, 0);
  }
  return v4;
}
