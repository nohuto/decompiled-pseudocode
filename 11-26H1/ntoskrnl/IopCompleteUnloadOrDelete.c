/*
 * XREFs of IopCompleteUnloadOrDelete @ 0x140426EA4
 * Callers:
 *     IopDecrementDeviceObjectRef @ 0x1402FD820 (IopDecrementDeviceObjectRef.c)
 *     IoDetachDevice @ 0x140426A30 (IoDetachDevice.c)
 *     IoDeleteDevice @ 0x140426AC0 (IoDeleteDevice.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140264E00 (ObfDereferenceObjectWithTag.c)
 *     IopGetDeviceAttachmentBase @ 0x14026E884 (IopGetDeviceAttachmentBase.c)
 *     KeWaitForSingleObject @ 0x140277AD0 (KeWaitForSingleObject.c)
 *     KeReleaseQueuedSpinLock @ 0x1402C4710 (KeReleaseQueuedSpinLock.c)
 *     IopIncrementDeviceObjectRefCount @ 0x1402F84A0 (IopIncrementDeviceObjectRefCount.c)
 *     KeAcquireQueuedSpinLock @ 0x1402FF360 (KeAcquireQueuedSpinLock.c)
 *     ExQueueWorkItem @ 0x140383A20 (ExQueueWorkItem.c)
 *     MmIsDriverVerifying @ 0x1403C18E0 (MmIsDriverVerifying.c)
 *     IopInsertRemoveDevice @ 0x14042701C (IopInsertRemoveDevice.c)
 *     IopDecrementDeviceObjectRefCount @ 0x140442C00 (IopDecrementDeviceObjectRefCount.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     ObDereferenceSecurityDescriptor @ 0x14090D9C0 (ObDereferenceSecurityDescriptor.c)
 *     PnpChainDereferenceComplete @ 0x1409B69F0 (PnpChainDereferenceComplete.c)
 *     IopLoadUnloadDriver @ 0x140A39590 (IopLoadUnloadDriver.c)
 *     ObMakeTemporaryObject @ 0x140B03770 (ObMakeTemporaryObject.c)
 *     VfFastIoCheckState @ 0x140C4DF34 (VfFastIoCheckState.c)
 *     VfFastIoSnapState @ 0x140C4E25C (VfFastIoSnapState.c)
 */

char __fastcall IopCompleteUnloadOrDelete(ULONG_PTR BugCheckParameter2, unsigned __int8 a2, __int64 a3)
{
  char v3; // di
  __int64 v4; // rsi
  KIRQL v6; // r15
  char v7; // r13
  char v8; // r12
  int v9; // ecx
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 DeviceAttachmentBase; // rsi
  int v14; // edx
  __int64 *v15; // rcx
  int v16; // ebx
  __int64 j; // rax
  __int64 i; // rdx
  __int64 v19; // r13
  ULONG_PTR v20; // r13
  struct _DRIVER_OBJECT *v21; // r15
  void *v22; // r15
  int v23; // eax
  struct _KTHREAD *CurrentThread; // rax
  struct _LIST_ENTRY *Blink; // rbx
  struct _WORK_QUEUE_ITEM WorkItem; // [rsp+30h] [rbp-50h] BYREF
  _BYTE Object[4]; // [rsp+50h] [rbp-30h] BYREF
  int v28; // [rsp+54h] [rbp-2Ch]
  _QWORD v29[5]; // [rsp+58h] [rbp-28h] BYREF
  __int64 v30; // [rsp+C0h] [rbp+40h] BYREF
  unsigned __int8 v31; // [rsp+C8h] [rbp+48h]

  v31 = a2;
  v3 = 0;
  v4 = *(_QWORD *)(BugCheckParameter2 + 8);
  v6 = a3;
  v7 = 0;
  v8 = 1;
  v9 = *(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 312) + 32LL);
  if ( (v9 & 4) == 0 )
  {
    if ( (v9 & 2) != 0 )
    {
      if ( (v9 & 1) == 0 || (*(_DWORD *)(v4 + 16) & 1) != 0 )
        v8 = 0;
      v10 = *(_QWORD *)(BugCheckParameter2 + 24);
      v30 = v10;
      if ( v10 )
      {
        v19 = *(_QWORD *)(*(_QWORD *)(v10 + 8) + 80LL);
        IopIncrementDeviceObjectRefCount(BugCheckParameter2, 0LL, a3);
        KeReleaseQueuedSpinLock(0xAuLL, v6);
        if ( v19 )
        {
          if ( *(_DWORD *)v19 > 0x68u )
          {
            v20 = *(_QWORD *)(v19 + 104);
            if ( v20 )
            {
              if ( (MmVerifierData & 0x10) != 0
                && (v21 = *(struct _DRIVER_OBJECT **)(BugCheckParameter2 + 8), MmIsDriverVerifying(v21)) )
              {
                v22 = (void *)VfFastIoSnapState(v21);
              }
              else
              {
                v22 = 0LL;
              }
              guard_dispatch_icall_no_overrides(v30, BugCheckParameter2);
              if ( v22 )
                VfFastIoCheckState(v22, v20);
            }
          }
        }
        v6 = KeAcquireQueuedSpinLock(0xAuLL);
        IopDecrementDeviceObjectRefCount(BugCheckParameter2);
        if ( *(_QWORD *)(BugCheckParameter2 + 24) || *(_DWORD *)(BugCheckParameter2 + 4) )
          goto LABEL_35;
      }
      KeReleaseQueuedSpinLock(0xAuLL, v6);
      v11 = *(_QWORD *)(BugCheckParameter2 + 272);
      if ( v11 )
        ObDereferenceSecurityDescriptor(v11, 1LL);
      IopInsertRemoveDevice(*(_QWORD *)(BugCheckParameter2 + 8), BugCheckParameter2, 0LL);
      ObfDereferenceObjectWithTag((PVOID)BugCheckParameter2, 0x746C6644u);
      v7 = 1;
      if ( !v8 )
        return v7;
      v6 = KeAcquireQueuedSpinLock(0xAuLL);
      if ( (*(_DWORD *)(v4 + 16) & 1) != 0 )
      {
        v3 = 1;
LABEL_35:
        KeReleaseQueuedSpinLock(0xAuLL, v6);
        return v3;
      }
    }
    for ( i = *(_QWORD *)(v4 + 8); i; i = *(_QWORD *)(i + 16) )
    {
      if ( *(_DWORD *)(i + 4) || *(_QWORD *)(i + 24) || (*(_DWORD *)(*(_QWORD *)(i + 312) + 32LL) & 6) != 0 )
      {
        v8 = 0;
        break;
      }
    }
    v23 = *(_DWORD *)(v4 + 16);
    if ( (v23 & 0x80u) != 0 && *(_QWORD *)(v4 + 8) )
    {
      v8 = 0;
    }
    else if ( v8 )
    {
      *(_DWORD *)(v4 + 16) = v23 | 1;
    }
    KeReleaseQueuedSpinLock(0xAuLL, v6);
    if ( v8 )
    {
      memset_0(&WorkItem, 0, 0x50uLL);
      Object[2] = 6;
      v29[1] = v29;
      v28 = 0;
      v29[0] = v29;
      v29[2] = v4;
      if ( v31 )
      {
        CurrentThread = KeGetCurrentThread();
        Blink = CurrentThread[1].WaitBlock[3].WaitListEntry.Blink;
        CurrentThread[1].WaitBlock[3].WaitListEntry.Blink = 0LL;
        IopLoadUnloadDriver(&WorkItem);
        KeGetCurrentThread()[1].WaitBlock[3].WaitListEntry.Blink = Blink;
      }
      else
      {
        WorkItem.List.Flink = 0LL;
        WorkItem.WorkerRoutine = (void (__fastcall *)(void *))IopLoadUnloadDriver;
        WorkItem.Parameter = &WorkItem;
        ExQueueWorkItem(&WorkItem, DelayedWorkQueue);
        KeWaitForSingleObject(Object, Executive, 0, 0, 0LL);
      }
      ObMakeTemporaryObject((PVOID)v4);
      ObfDereferenceObjectWithTag((PVOID)v4, 0x746C6644u);
    }
    return v7;
  }
  DeviceAttachmentBase = IopGetDeviceAttachmentBase(BugCheckParameter2);
  v30 = DeviceAttachmentBase;
  v14 = 0;
  v15 = &v30;
  v16 = 0;
  do
  {
    if ( v16 )
      break;
    for ( j = *v15; j; j = *(_QWORD *)(j + 24) )
    {
      v16 = *(_DWORD *)(j + 4);
      if ( v16 )
        break;
    }
    ++v14;
    ++v15;
  }
  while ( !v14 );
  KeReleaseQueuedSpinLock(0xAuLL, v6);
  if ( !v16 )
    PnpChainDereferenceComplete(DeviceAttachmentBase, v31);
  return 0;
}
