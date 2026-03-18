/*
 * XREFs of PopAllocateIrp @ 0x14026F82C
 * Callers:
 *     PopRequestPowerIrp @ 0x14026FDC4 (PopRequestPowerIrp.c)
 *     PopNotifyDevice @ 0x140C0DA04 (PopNotifyDevice.c)
 * Callees:
 *     PopFxAllocatePowerIrp @ 0x14021A098 (PopFxAllocatePowerIrp.c)
 *     KeDelayExecutionThread @ 0x140244840 (KeDelayExecutionThread.c)
 *     ObfDereferenceObjectWithTag @ 0x140265890 (ObfDereferenceObjectWithTag.c)
 *     IoReuseIrp @ 0x140268650 (IoReuseIrp.c)
 *     IoAllocateIrp @ 0x14026C4D0 (IoAllocateIrp.c)
 *     IoGetDeviceAttachmentBaseRefWithTag @ 0x14026F2B4 (IoGetDeviceAttachmentBaseRefWithTag.c)
 *     IoGetAttachedDeviceReferenceWithTag @ 0x14026FCE0 (IoGetAttachedDeviceReferenceWithTag.c)
 *     ObfReferenceObjectWithTag @ 0x140278B30 (ObfReferenceObjectWithTag.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1402B4730 (KeAcquireInStackQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x1402B98C0 (KeReleaseInStackQueuedSpinLock.c)
 *     ExAllocateFromNPagedLookasideList @ 0x1402C1770 (ExAllocateFromNPagedLookasideList.c)
 *     ExFreeToNPagedLookasideList @ 0x1403B5A60 (ExFreeToNPagedLookasideList.c)
 *     PopFxDereferenceDevice @ 0x1403B61F4 (PopFxDereferenceDevice.c)
 *     PopFxLockDevice @ 0x1403B74A4 (PopFxLockDevice.c)
 *     KeBugCheckEx @ 0x1405339B0 (KeBugCheckEx.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 *     VfIrpWatermark @ 0x140C2C774 (VfIrpWatermark.c)
 */

__int64 __fastcall PopAllocateIrp(
        void *a1,
        __int64 a2,
        UCHAR a3,
        int a4,
        int a5,
        char a6,
        char a7,
        __int64 a8,
        __int64 a9,
        PIRP *a10,
        _QWORD *a11)
{
  ULONG_PTR BugCheckParameter4; // rdi
  PIRP v14; // r14
  _QWORD *QuadPart; // rsi
  __int64 v16; // r12
  struct _DEVICE_OBJECT *AttachedDeviceReferenceWithTag; // r13
  void *DeviceAttachmentBaseRefWithTag; // rax
  __int64 v19; // r8
  __int64 v20; // r9
  void *v21; // rbx
  __int64 v22; // rcx
  int v23; // eax
  unsigned int v24; // r15d
  int v25; // ecx
  int v26; // ecx
  void *v27; // rax
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rax
  struct _IO_STACK_LOCATION *v29; // rax
  _QWORD *v30; // rax
  PIRP Irp; // [rsp+48h] [rbp-41h] BYREF
  void *v33; // [rsp+50h] [rbp-39h]
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
  AttachedDeviceReferenceWithTag = (struct _DEVICE_OBJECT *)IoGetAttachedDeviceReferenceWithTag(a1, 0x72496F50u);
  DeviceAttachmentBaseRefWithTag = IoGetDeviceAttachmentBaseRefWithTag((__int64)a1, 0x72496F50u);
  v33 = DeviceAttachmentBaseRefWithTag;
  v21 = DeviceAttachmentBaseRefWithTag;
  if ( DeviceAttachmentBaseRefWithTag )
  {
    v22 = *(_QWORD *)(*((_QWORD *)DeviceAttachmentBaseRefWithTag + 39) + 40LL);
    v35 = v22;
    if ( v22 )
    {
      if ( a3 == 2 && a4 == 1 )
      {
        v23 = PopFxAllocatePowerIrp(v22, (__int64)a1, a5, a8, a9, a7, &Irp, &Interval);
        v24 = v23;
        if ( v23 < 0 && v23 != -1073741130 || v23 == 259 )
        {
          v14 = Irp;
          QuadPart = (_QWORD *)Interval.QuadPart;
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
          if ( AttachedDeviceReferenceWithTag->StackSize > *(_BYTE *)(*(_QWORD *)(v16 + 16) + 66LL) )
          {
            ObfDereferenceObjectWithTag(AttachedDeviceReferenceWithTag, 0x72496F50u);
            ObfReferenceObjectWithTag(*(PVOID *)(v16 + 104), 0x72496F50u);
            AttachedDeviceReferenceWithTag = *(struct _DEVICE_OBJECT **)(v16 + 104);
          }
          v14 = Irp;
          QuadPart = (_QWORD *)Interval.QuadPart;
LABEL_18:
          IoReuseIrp(v14, -1073741637);
          if ( IovUtilVerifierEnabled )
            VfIrpWatermark(v14, 1LL);
          v14->IoStatus.Information = 0LL;
          v14->Tail.Overlay.ListEntry.Blink = &v14->Tail.Overlay.ListEntry;
          v14->Tail.Overlay.ListEntry.Flink = &v14->Tail.Overlay.ListEntry;
          memset_0(QuadPart, 0, 0x138uLL);
          v27 = v33;
          QuadPart[4] = AttachedDeviceReferenceWithTag;
          QuadPart[3] = v27;
          *((_BYTE *)QuadPart + 184) = a3;
          *((_DWORD *)QuadPart + 47) = a4;
          *((_DWORD *)QuadPart + 48) = a5;
          QuadPart[2] = v14;
          QuadPart[25] = v16;
          *((_DWORD *)QuadPart + 53) = _InterlockedIncrement(&dword_140F0FB40);
          QuadPart[27] = a8;
          QuadPart[28] = a9;
          QuadPart[29] = a1;
          QuadPart[36] = 0LL;
          QuadPart[33] = PopHandleDevicePowerIrpCompletion;
          QuadPart[34] = QuadPart;
          QuadPart[31] = 0LL;
          CurrentStackLocation = v14->Tail.Overlay.CurrentStackLocation;
          CurrentStackLocation[-1].DeviceObject = 0LL;
          CurrentStackLocation[-1].Context = QuadPart;
          v29 = --v14->Tail.Overlay.CurrentStackLocation;
          --v14->CurrentLocation;
          v29[-1].MinorFunction = a3;
          v29[-1].MajorFunction = 22;
          v29[-1].DeviceObject = AttachedDeviceReferenceWithTag;
          KeAcquireInStackQueuedSpinLock(&qword_140F10540, &LockHandle);
          stru_140F10070.ApcState.ApcListHead[1].Flink = (struct _LIST_ENTRY *)KeGetCurrentThread();
          v30 = (_QWORD *)qword_140F10558;
          if ( *(__int64 **)qword_140F10558 != &qword_140F10550 )
            __fastfail(3u);
          *QuadPart = &qword_140F10550;
          QuadPart[1] = v30;
          *v30 = QuadPart;
          qword_140F10558 = (__int64)QuadPart;
          stru_140F10070.ApcState.ApcListHead[1].Flink = 0LL;
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
          v16 = PopFxLockDevice(v22, 0LL, 0LL);
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
        QuadPart = ExAllocateFromNPagedLookasideList(&PopIrpDataLookaside);
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
        v14 = IoAllocateIrp(AttachedDeviceReferenceWithTag->StackSize + 1, 0);
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
