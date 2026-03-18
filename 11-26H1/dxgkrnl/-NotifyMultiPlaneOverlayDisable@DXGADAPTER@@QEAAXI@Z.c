/*
 * XREFs of ?NotifyMultiPlaneOverlayDisable@DXGADAPTER@@QEAAXI@Z @ 0x140034B2C
 * Callers:
 *     DxgkMultiPlaneOverlayDisabledCB @ 0x1400346A0 (DxgkMultiPlaneOverlayDisabledCB.c)
 *     ?SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_MASKS@@PEAU_DMM_SET_TIMING_RESULT@@EPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1402D4EF8 (-SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_.c)
 * Callees:
 *     McTemplateK0zqqzxxxxx_EtwWriteTransfer @ 0x14000E53C (McTemplateK0zqqzxxxxx_EtwWriteTransfer.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?HandleAdapterMultiPlaneDisableEvent@@YAXPEAU_DEVICE_OBJECT@@PEAXPEAU_IO_WORKITEM@@@Z @ 0x1403F0470 (-HandleAdapterMultiPlaneDisableEvent@@YAXPEAU_DEVICE_OBJECT@@PEAXPEAU_IO_WORKITEM@@@Z.c)
 */

void __fastcall DXGADAPTER::NotifyMultiPlaneOverlayDisable(DXGADAPTER *this, int a2)
{
  __int64 Pool2; // rax
  void *v5; // rbx
  KIRQL CurrentIrql; // al
  struct _DEVICE_OBJECT *v7; // rcx
  int v8; // edx
  int v9; // r8d
  struct _IO_WORKITEM *WorkItem; // rdi

  Pool2 = ExAllocatePool2(64LL, 16LL, 1265072196LL);
  v5 = (void *)Pool2;
  if ( Pool2 )
  {
    *(_QWORD *)Pool2 = this;
    *(_DWORD *)(Pool2 + 8) = a2;
    *(_DWORD *)(Pool2 + 12) = PsGetCurrentProcessSessionId();
    CurrentIrql = KeGetCurrentIrql();
    v7 = (struct _DEVICE_OBJECT *)*((_QWORD *)this + 27);
    if ( CurrentIrql >= 2u )
    {
      WorkItem = IoAllocateWorkItem(v7);
      if ( WorkItem )
      {
        WdLogSingleEntry0(4LL);
        WdLogGlobalForLineNumber = 2503;
        IoQueueWorkItemEx(WorkItem, HandleAdapterMultiPlaneDisableEvent, DelayedWorkQueue, v5);
      }
      else
      {
        WdLogSingleEntry0(6LL);
        WdLogGlobalForLineNumber = 2499;
        DxgkLogInternalTriageEvent(
          0LL,
          262145,
          -1,
          (__int64)L"Can't allocate memory to hold IO work item.",
          2499LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
    }
    else
    {
      HandleAdapterMultiPlaneDisableEvent(v7, v5, 0LL);
    }
  }
  else
  {
    WdLogSingleEntry0(6LL);
    WdLogGlobalForLineNumber = 2479;
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x1000000000LL) != 0 )
      McTemplateK0zqqzxxxxx_EtwWriteTransfer(
        2479,
        v8,
        v9,
        0LL,
        1,
        -1,
        (__int64)L"Cannot allocate memory for teardown event structure",
        2479LL,
        0LL,
        0LL,
        0LL,
        0LL);
  }
}
