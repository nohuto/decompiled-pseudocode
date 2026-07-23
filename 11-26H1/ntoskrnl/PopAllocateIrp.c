/*
 * XREFs of PopAllocateIrp @ 0x14026ED9C
 * Callers:
 *     PopRequestPowerIrp @ 0x14026F334 (PopRequestPowerIrp.c)
 *     PopNotifyDevice @ 0x140C13C14 (PopNotifyDevice.c)
 * Callees:
 *     PopFxAllocatePowerIrp @ 0x14021BA28 (PopFxAllocatePowerIrp.c)
 *     KeDelayExecutionThread @ 0x1402461A0 (KeDelayExecutionThread.c)
 *     ObfDereferenceObjectWithTag @ 0x140264E00 (ObfDereferenceObjectWithTag.c)
 *     IoReuseIrp @ 0x140267BC0 (IoReuseIrp.c)
 *     IoAllocateIrp @ 0x14026BA40 (IoAllocateIrp.c)
 *     IoGetDeviceAttachmentBaseRefWithTag @ 0x14026E824 (IoGetDeviceAttachmentBaseRefWithTag.c)
 *     IoGetAttachedDeviceReferenceWithTag @ 0x14026F250 (IoGetAttachedDeviceReferenceWithTag.c)
 *     ObfReferenceObjectWithTag @ 0x1402780A0 (ObfReferenceObjectWithTag.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1402FF400 (KeAcquireInStackQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140304580 (KeReleaseInStackQueuedSpinLock.c)
 *     ExAllocateFromNPagedLookasideList @ 0x14030C430 (ExAllocateFromNPagedLookasideList.c)
 *     ExFreeToNPagedLookasideList @ 0x1403BF960 (ExFreeToNPagedLookasideList.c)
 *     PopFxDereferenceDevice @ 0x1403C00F4 (PopFxDereferenceDevice.c)
 *     PopFxLockDevice @ 0x1403C13A4 (PopFxLockDevice.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     VfIrpWatermark @ 0x140C32784 (VfIrpWatermark.c)
 */

__int64 __fastcall PopAllocateIrp(
        struct _LIST_ENTRY *a1,
        __int64 a2,
        UCHAR a3,
        int a4,
        int a5,
        char a6,
        char a7,
        __int64 a8,
        struct _LIST_ENTRY *a9,
        PIRP *a10,
        struct _LIST_ENTRY **a11)
{
  ULONG_PTR BugCheckParameter4; // rdi
  PIRP v14; // r14
  struct _LIST_ENTRY *QuadPart; // rsi
  __int64 v16; // r12
  struct _LIST_ENTRY *AttachedDeviceReferenceWithTag; // r13
  struct _LIST_ENTRY *DeviceAttachmentBaseRefWithTag; // rax
  __int64 v19; // r8
  __int64 v20; // r9
  struct _LIST_ENTRY *v21; // rbx
  __int64 Blink; // rcx
  int v23; // eax
  unsigned int v24; // r15d
  int v25; // ecx
  int v26; // ecx
  struct _LIST_ENTRY *v27; // rax
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rax
  struct _IO_STACK_LOCATION *v29; // rax
  struct _LIST_ENTRY *Flink; // rax
  PIRP Irp; // [rsp+48h] [rbp-41h] BYREF
  struct _LIST_ENTRY *v33; // [rsp+50h] [rbp-39h]
  LARGE_INTEGER Interval; // [rsp+58h] [rbp-31h] BYREF
  __int64 v35; // [rsp+60h] [rbp-29h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+68h] [rbp-21h] BYREF
  bool v38; // [rsp+E0h] [rbp+57h]

  BugCheckParameter4 = 0LL;
  Irp = 0LL;
  Interval.QuadPart = 0LL;
  memset(&LockHandle, 0, sizeof(LockHandle));
  *a10 = 0LL;
  v14 = 0LL;
  QuadPart = 0LL;
  v16 = 0LL;
  v38 = 0;
  *a11 = 0LL;
  AttachedDeviceReferenceWithTag = (struct _LIST_ENTRY *)IoGetAttachedDeviceReferenceWithTag(a1, 0x72496F50u);
  DeviceAttachmentBaseRefWithTag = (struct _LIST_ENTRY *)IoGetDeviceAttachmentBaseRefWithTag((__int64)a1, 0x72496F50u);
  v33 = DeviceAttachmentBaseRefWithTag;
  v21 = DeviceAttachmentBaseRefWithTag;
  if ( DeviceAttachmentBaseRefWithTag )
  {
    Blink = (__int64)DeviceAttachmentBaseRefWithTag[19].Blink[2].Blink;
    v35 = Blink;
    if ( Blink )
    {
      if ( a3 == 2 && a4 == 1 )
      {
        v23 = PopFxAllocatePowerIrp(Blink, (__int64)a1, a5, a8, (__int64)a9, a7, &Irp, &Interval);
        v24 = v23;
        if ( v23 < 0 && v23 != -1073741130 || v23 == 259 )
        {
          v14 = Irp;
          QuadPart = (struct _LIST_ENTRY *)Interval.QuadPart;
LABEL_30:
          v21 = v33;
LABEL_31:
          if ( v14 )
            goto LABEL_32;
          goto LABEL_25;
        }
        if ( v23 >= 0 )
        {
          v16 = *(_QWORD *)(v35 + 80);
          if ( SBYTE4(AttachedDeviceReferenceWithTag[4].Blink) > *(_BYTE *)(*(_QWORD *)(v16 + 16) + 66LL) )
          {
            ObfDereferenceObjectWithTag(AttachedDeviceReferenceWithTag, 0x72496F50u);
            ObfReferenceObjectWithTag(*(PVOID *)(v16 + 104), 0x72496F50u);
            AttachedDeviceReferenceWithTag = *(struct _LIST_ENTRY **)(v16 + 104);
          }
          v14 = Irp;
          QuadPart = (struct _LIST_ENTRY *)Interval.QuadPart;
LABEL_18:
          IoReuseIrp(v14, -1073741637);
          if ( IovUtilVerifierEnabled )
            VfIrpWatermark(v14, 1LL);
          v14->IoStatus.Information = 0LL;
          v14->Tail.Overlay.ListEntry.Blink = &v14->Tail.Overlay.ListEntry;
          v14->Tail.Overlay.ListEntry.Flink = &v14->Tail.Overlay.ListEntry;
          memset_0(QuadPart, 0, 0x138uLL);
          v27 = v33;
          QuadPart[2].Flink = AttachedDeviceReferenceWithTag;
          QuadPart[1].Blink = v27;
          LOBYTE(QuadPart[11].Blink) = a3;
          HIDWORD(QuadPart[11].Blink) = a4;
          LODWORD(QuadPart[12].Flink) = a5;
          QuadPart[1].Flink = (struct _LIST_ENTRY *)v14;
          QuadPart[12].Blink = (struct _LIST_ENTRY *)v16;
          HIDWORD(QuadPart[13].Flink) = _InterlockedIncrement(&PopCurrentIrpSequenceID);
          QuadPart[13].Blink = (struct _LIST_ENTRY *)a8;
          QuadPart[14].Flink = a9;
          QuadPart[14].Blink = a1;
          QuadPart[18].Flink = 0LL;
          QuadPart[16].Blink = (struct _LIST_ENTRY *)PopHandleDevicePowerIrpCompletion;
          QuadPart[17].Flink = QuadPart;
          QuadPart[15].Blink = 0LL;
          CurrentStackLocation = v14->Tail.Overlay.CurrentStackLocation;
          CurrentStackLocation[-1].DeviceObject = 0LL;
          CurrentStackLocation[-1].Context = QuadPart;
          v29 = --v14->Tail.Overlay.CurrentStackLocation;
          --v14->CurrentLocation;
          v29[-1].MinorFunction = a3;
          v29[-1].MajorFunction = 22;
          v29[-1].DeviceObject = (PDEVICE_OBJECT)AttachedDeviceReferenceWithTag;
          KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)&PpmIdlePolicyLock.WaitListEntry.Blink, &LockHandle);
          PopIrpLockThread = (__int64)KeGetCurrentThread();
          Flink = PpmIdlePolicyLock.WaitListEntry.Flink;
          if ( PpmIdlePolicyLock.WaitListEntry.Flink->Flink != (struct _LIST_ENTRY *)&PpmIdlePolicyLock.WaitBlockList )
            __fastfail(3u);
          QuadPart->Flink = (struct _LIST_ENTRY *)&PpmIdlePolicyLock.WaitBlockList;
          QuadPart->Blink = Flink;
          Flink->Flink = QuadPart;
          PpmIdlePolicyLock.WaitListEntry.Flink = QuadPart;
          PopIrpLockThread = 0LL;
          KeReleaseInStackQueuedSpinLock(&LockHandle);
          AttachedDeviceReferenceWithTag = 0LL;
          v21 = 0LL;
          v38 = 0;
          v24 = 0;
          *a10 = v14;
          *a11 = QuadPart;
          QuadPart = 0LL;
          goto LABEL_31;
        }
        v14 = Irp;
      }
      else
      {
        v24 = -1073741130;
        if ( !a3 )
        {
          v16 = PopFxLockDevice(Blink, 0LL, 0LL);
          v38 = v16 != 0;
        }
      }
      v25 = 0;
      Interval.QuadPart = -500000LL;
      LODWORD(Irp) = 0;
      while ( 1 )
      {
        if ( v25 && KeGetCurrentIrql() <= 1u )
        {
          KeDelayExecutionThread(0, 0, &Interval);
          v25 = (int)Irp;
        }
        LODWORD(Irp) = v25 + 1;
        QuadPart = (struct _LIST_ENTRY *)ExAllocateFromNPagedLookasideList(&PopIrpDataLookaside);
        if ( QuadPart )
          break;
        if ( a6 )
        {
          v25 = (int)Irp;
          if ( (unsigned int)Irp < 0xA )
            continue;
        }
        goto LABEL_30;
      }
      v26 = 0;
      LODWORD(Irp) = 0;
      while ( 1 )
      {
        if ( v26 && KeGetCurrentIrql() <= 1u )
        {
          KeDelayExecutionThread(0, 0, &Interval);
          v26 = (int)Irp;
        }
        LODWORD(Irp) = v26 + 1;
        v14 = IoAllocateIrp(BYTE4(AttachedDeviceReferenceWithTag[4].Blink) + 1, 0);
        if ( v14 )
          goto LABEL_18;
        if ( a6 )
        {
          v26 = (int)Irp;
          if ( (unsigned int)Irp < 0xA )
            continue;
        }
        goto LABEL_30;
      }
    }
  }
  v24 = -1073741808;
LABEL_25:
  if ( a6 && v24 != 259 )
  {
    LOBYTE(BugCheckParameter4) = a4 != 0;
    KeBugCheckEx(0xA0u, 1uLL, 6uLL, (ULONG_PTR)AttachedDeviceReferenceWithTag, BugCheckParameter4);
  }
LABEL_32:
  if ( QuadPart )
    ExFreeToNPagedLookasideList(&PopIrpDataLookaside, QuadPart);
  if ( AttachedDeviceReferenceWithTag )
    ObfDereferenceObjectWithTag(AttachedDeviceReferenceWithTag, 0x72496F50u);
  if ( v21 )
    ObfDereferenceObjectWithTag(v21, 0x72496F50u);
  if ( v38 )
    PopFxDereferenceDevice(v16, 0LL, v19, v20);
  return v24;
}
