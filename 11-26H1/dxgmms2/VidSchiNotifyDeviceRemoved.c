/*
 * XREFs of VidSchiNotifyDeviceRemoved @ 0x140046508
 * Callers:
 *     VidSchiMarkDeviceAsError @ 0x140007A8C (VidSchiMarkDeviceAsError.c)
 * Callees:
 *     VidSchNotifyDeviceRemoved @ 0x140046610 (VidSchNotifyDeviceRemoved.c)
 *     _guard_dispatch_icall @ 0x14005B850 (_guard_dispatch_icall.c)
 */

void __fastcall VidSchiNotifyDeviceRemoved(__int64 a1)
{
  KIRQL CurrentIrql; // al
  struct _DEVICE_OBJECT *v3; // rcx
  struct _IO_WORKITEM *WorkItem; // rdi
  void (__fastcall *v5)(_QWORD, __int64, __int64, const wchar_t *, __int64, _QWORD, _QWORD, _QWORD, _QWORD); // rax
  __int64 v6; // r9

  CurrentIrql = KeGetCurrentIrql();
  v3 = *(struct _DEVICE_OBJECT **)(*(_QWORD *)(*(_QWORD *)(a1 + 40) + 16LL) + 216LL);
  if ( CurrentIrql >= 2u )
  {
    WorkItem = IoAllocateWorkItem(v3);
    if ( WorkItem )
    {
      WdLogSingleEntry0(4LL);
      v6 = *(_QWORD *)(a1 + 48);
      WdLogGlobalForLineNumber = 209;
      IoQueueWorkItemEx(WorkItem, VidSchNotifyDeviceRemoved, DelayedWorkQueue, *(PVOID *)(v6 + 2640));
    }
    else
    {
      WdLogSingleEntry0(1LL);
      v5 = (void (__fastcall *)(_QWORD, __int64, __int64, const wchar_t *, __int64, _QWORD, _QWORD, _QWORD, _QWORD))DxgCoreInterface[88];
      WdLogGlobalForLineNumber = 205;
      v5(0LL, 0x40000LL, 0xFFFFFFFFLL, L"Can't allocate memory to hold IO work item.", 205LL, 0LL, 0LL, 0LL, 0LL);
    }
  }
  else
  {
    VidSchNotifyDeviceRemoved(v3, *(PVOID *)(*(_QWORD *)(a1 + 48) + 2640LL), 0LL);
  }
}
