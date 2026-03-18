/*
 * XREFs of ?NotifyHardwareContentProtectionTeardown@DXGADAPTER@@QEAAXI@Z @ 0x14006F020
 * Callers:
 *     DxgkHardwareContentProtectionTeardownCB @ 0x140075200 (DxgkHardwareContentProtectionTeardownCB.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?HandleAdapterTeardownEvent@@YAXPEAU_DEVICE_OBJECT@@PEAXPEAU_IO_WORKITEM@@@Z @ 0x140199090 (-HandleAdapterTeardownEvent@@YAXPEAU_DEVICE_OBJECT@@PEAXPEAU_IO_WORKITEM@@@Z.c)
 */

void __fastcall DXGADAPTER::NotifyHardwareContentProtectionTeardown(DXGADAPTER *this, int a2)
{
  __int64 Pool2; // rax
  _QWORD *v5; // rbx
  __int64 v6; // rax
  const wchar_t *v7; // r9
  KIRQL CurrentIrql; // al
  struct _DEVICE_OBJECT *v9; // rcx
  struct _IO_WORKITEM *WorkItem; // rdi

  Pool2 = ExAllocatePool2(64LL, 24LL, 1265072196LL);
  v5 = (_QWORD *)Pool2;
  if ( !Pool2 )
  {
    WdLogSingleEntry0(6LL);
    v6 = 2414LL;
    v7 = L"Cannot allocate memory for teardown event structure";
LABEL_3:
    WdLogGlobalForLineNumber = v6;
    DxgkLogInternalTriageEvent(0LL, 262145, -1, (__int64)v7, v6, 0LL, 0LL, 0LL, 0LL);
    return;
  }
  *(_QWORD *)Pool2 = this;
  *(_DWORD *)(Pool2 + 8) = a2;
  *(_DWORD *)(Pool2 + 12) = PsGetCurrentProcessSessionId();
  v5[2] = *(_QWORD *)((char *)this + 412);
  CurrentIrql = KeGetCurrentIrql();
  v9 = (struct _DEVICE_OBJECT *)*((_QWORD *)this + 27);
  if ( CurrentIrql >= 2u )
  {
    WorkItem = IoAllocateWorkItem(v9);
    if ( !WorkItem )
    {
      WdLogSingleEntry0(6LL);
      v6 = 2435LL;
      v7 = L"Can't allocate memory to hold IO work item.";
      goto LABEL_3;
    }
    WdLogSingleEntry0(4LL);
    WdLogGlobalForLineNumber = 2439;
    IoQueueWorkItemEx(WorkItem, HandleAdapterTeardownEvent, DelayedWorkQueue, v5);
  }
  else
  {
    HandleAdapterTeardownEvent(v9, v5, 0LL);
  }
}
