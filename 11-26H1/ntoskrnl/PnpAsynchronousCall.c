/*
 * XREFs of PnpAsynchronousCall @ 0x140AE1C5C
 * Callers:
 *     PnpSendIrp @ 0x14049B254 (PnpSendIrp.c)
 *     PiIrpQueryRemoveDevice @ 0x140AE1AFC (PiIrpQueryRemoveDevice.c)
 * Callees:
 *     IofCallDriver @ 0x140264B10 (IofCallDriver.c)
 *     ObfDereferenceObjectWithTag @ 0x140264E00 (ObfDereferenceObjectWithTag.c)
 *     IoAllocateIrp @ 0x14026BA40 (IoAllocateIrp.c)
 *     IoGetAttachedDeviceReferenceWithTag @ 0x14026F250 (IoGetAttachedDeviceReferenceWithTag.c)
 *     IovUtilWatermarkIrp @ 0x1404B853C (IovUtilWatermarkIrp.c)
 */

__int64 __fastcall PnpAsynchronousCall(_QWORD *a1, __int128 *a2, IO_COMPLETION_ROUTINE *a3, void *a4)
{
  struct _DEVICE_OBJECT *AttachedDeviceReferenceWithTag; // rsi
  PIRP Irp; // rax
  IRP *v10; // rbx
  __int64 v11; // rax
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rax
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  struct _IO_STACK_LOCATION *v17; // rax
  unsigned int v18; // ebx

  AttachedDeviceReferenceWithTag = (struct _DEVICE_OBJECT *)IoGetAttachedDeviceReferenceWithTag(a1, 0x69706E50u);
  Irp = IoAllocateIrp(AttachedDeviceReferenceWithTag->StackSize, 0);
  v10 = Irp;
  if ( Irp )
  {
    IovUtilWatermarkIrp((__int64)Irp, 1LL);
    if ( a1 )
    {
      v11 = *(_QWORD *)(a1[39] + 40LL);
      if ( v11 )
        *(_QWORD *)(v11 + 72) = v10;
    }
    v12 = *a2;
    v10->IoStatus.Status = -1073741637;
    v13 = a2[1];
    v10->IoStatus.Information = 0LL;
    v10->Tail.Overlay.Thread = KeGetCurrentThread();
    CurrentStackLocation = v10->Tail.Overlay.CurrentStackLocation;
    v10->RequestorMode = 0;
    v10->UserIosb = 0LL;
    v10->UserEvent = 0LL;
    *(_OWORD *)&CurrentStackLocation[-1].MajorFunction = v12;
    v15 = a2[2];
    *(_OWORD *)&CurrentStackLocation[-1].Parameters.NotifyDirectoryEx.CompletionFilter = v13;
    v16 = a2[3];
    *(_OWORD *)(&CurrentStackLocation[-1].Parameters.SetQuota + 6) = v15;
    *(_QWORD *)&v15 = *((_QWORD *)a2 + 8);
    *(_OWORD *)&CurrentStackLocation[-1].FileObject = v16;
    CurrentStackLocation[-1].Context = (PVOID)v15;
    v17 = v10->Tail.Overlay.CurrentStackLocation;
    v17[-1].CompletionRoutine = a3;
    v17[-1].Context = a4;
    v17[-1].Control = -32;
    v18 = IofCallDriver(AttachedDeviceReferenceWithTag, v10);
  }
  else
  {
    v18 = -1073741670;
  }
  ObfDereferenceObjectWithTag(AttachedDeviceReferenceWithTag, 0x69706E50u);
  return v18;
}
