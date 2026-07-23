/*
 * XREFs of IopSynchronousCall @ 0x1409B0720
 * Callers:
 *     PnpGetRelatedTargetDevice @ 0x14049B114 (PnpGetRelatedTargetDevice.c)
 *     PnpSendIrp @ 0x14049B254 (PnpSendIrp.c)
 *     PnpIrpDeviceEnumerated @ 0x1404E30E8 (PnpIrpDeviceEnumerated.c)
 *     IopQueryDockRemovalInterface @ 0x1407B59D8 (IopQueryDockRemovalInterface.c)
 *     IopQueryReconfiguration @ 0x1407B5AD8 (IopQueryReconfiguration.c)
 *     PiProcessQueryDeviceState @ 0x1409B0470 (PiProcessQueryDeviceState.c)
 *     PpIrpQueryCapabilities @ 0x1409B0694 (PpIrpQueryCapabilities.c)
 *     PnpIrpQueryID @ 0x1409B0948 (PnpIrpQueryID.c)
 *     IopQueryDeviceState @ 0x1409B11E0 (IopQueryDeviceState.c)
 *     IopRemoveDevice @ 0x1409B1DD8 (IopRemoveDevice.c)
 *     PpIrpQueryResourceRequirements @ 0x1409B25B8 (PpIrpQueryResourceRequirements.c)
 *     IopQueryLegacyBusInformation @ 0x1409B2634 (IopQueryLegacyBusInformation.c)
 *     PnpQueryDeviceText @ 0x1409DAEC4 (PnpQueryDeviceText.c)
 *     PpIrpQueryBusInformation @ 0x1409DBBC0 (PpIrpQueryBusInformation.c)
 *     IopQueryDeviceResources @ 0x140AA0860 (IopQueryDeviceResources.c)
 *     IopQueryResourceHandlerInterface @ 0x140B09A60 (IopQueryResourceHandlerInterface.c)
 * Callees:
 *     IofCallDriver @ 0x140264B10 (IofCallDriver.c)
 *     ObfDereferenceObjectWithTag @ 0x140264E00 (ObfDereferenceObjectWithTag.c)
 *     IoAllocateIrp @ 0x14026BA40 (IoAllocateIrp.c)
 *     IoGetAttachedDeviceReferenceWithTag @ 0x14026F250 (IoGetAttachedDeviceReferenceWithTag.c)
 *     KeWaitForSingleObject @ 0x140277AD0 (KeWaitForSingleObject.c)
 *     IopQueueThreadIrp @ 0x1403310C0 (IopQueueThreadIrp.c)
 *     KeInitializeEvent @ 0x140460680 (KeInitializeEvent.c)
 *     IoGetLowerDeviceObjectWithTag @ 0x1404902AC (IoGetLowerDeviceObjectWithTag.c)
 *     IovUtilWatermarkIrp @ 0x1404B853C (IovUtilWatermarkIrp.c)
 */

__int64 __fastcall IopSynchronousCall(_QWORD *a1, __int64 a2, NTSTATUS a3, ULONG_PTR a4, _QWORD *a5)
{
  struct _DEVICE_OBJECT *AttachedDeviceReferenceWithTag; // rax
  struct _DEVICE_OBJECT *v9; // rbx
  PIRP Irp; // rax
  IRP *v11; // rdi
  __int64 v12; // rdx
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rax
  __int128 v14; // xmm1
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  unsigned int v17; // edi
  struct _DEVICE_OBJECT *LowerDeviceObjectWithTag; // rdi
  __int128 v20; // [rsp+30h] [rbp-38h] BYREF
  struct _KEVENT Event; // [rsp+40h] [rbp-28h] BYREF

  memset(&Event, 0, sizeof(Event));
  v20 = 0LL;
  AttachedDeviceReferenceWithTag = (struct _DEVICE_OBJECT *)IoGetAttachedDeviceReferenceWithTag(a1, 0x69706E50u);
  v9 = AttachedDeviceReferenceWithTag;
  if ( (AttachedDeviceReferenceWithTag->Flags & 0x80u) != 0 )
  {
    LowerDeviceObjectWithTag = (struct _DEVICE_OBJECT *)IoGetLowerDeviceObjectWithTag(
                                                          (__int64)AttachedDeviceReferenceWithTag,
                                                          0x69706E50u);
    if ( !LowerDeviceObjectWithTag )
    {
      v17 = -1073741436;
      goto LABEL_7;
    }
    ObfDereferenceObjectWithTag(v9, 0x69706E50u);
    v9 = LowerDeviceObjectWithTag;
  }
  Irp = IoAllocateIrp(v9->StackSize, 0);
  v11 = Irp;
  if ( Irp )
  {
    IovUtilWatermarkIrp((__int64)Irp, 1LL);
    LODWORD(v20) = a3;
    v11->IoStatus.Status = a3;
    *((_QWORD *)&v20 + 1) = a4;
    v11->IoStatus.Information = a4;
    KeInitializeEvent(&Event, SynchronizationEvent, 0);
    v11->UserIosb = (PIO_STATUS_BLOCK)&v20;
    v11->UserEvent = &Event;
    v11->Tail.Overlay.Thread = KeGetCurrentThread();
    IopQueueThreadIrp((__int64)v11, v12);
    CurrentStackLocation = v11->Tail.Overlay.CurrentStackLocation;
    v14 = *(_OWORD *)(a2 + 16);
    *(_OWORD *)&CurrentStackLocation[-1].MajorFunction = *(_OWORD *)a2;
    v15 = *(_OWORD *)(a2 + 32);
    *(_OWORD *)&CurrentStackLocation[-1].Parameters.NotifyDirectoryEx.CompletionFilter = v14;
    v16 = *(_OWORD *)(a2 + 48);
    *(_OWORD *)(&CurrentStackLocation[-1].Parameters.SetQuota + 6) = v15;
    *(_QWORD *)&v15 = *(_QWORD *)(a2 + 64);
    *(_OWORD *)&CurrentStackLocation[-1].FileObject = v16;
    CurrentStackLocation[-1].Context = (PVOID)v15;
    v17 = IofCallDriver(v9, v11);
    if ( v17 == 259 )
    {
      KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
      v17 = v20;
    }
    if ( a5 )
      *a5 = *((_QWORD *)&v20 + 1);
  }
  else
  {
    v17 = -1073741670;
  }
LABEL_7:
  ObfDereferenceObjectWithTag(v9, 0x69706E50u);
  return v17;
}
