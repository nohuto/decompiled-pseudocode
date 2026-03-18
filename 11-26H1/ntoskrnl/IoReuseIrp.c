/*
 * XREFs of IoReuseIrp @ 0x140268650
 * Callers:
 *     PopAllocateIrp @ 0x14026F82C (PopAllocateIrp.c)
 *     PopThermalWorker @ 0x140AC3C50 (PopThermalWorker.c)
 *     PopPrepareIoctl @ 0x140AFBC84 (PopPrepareIoctl.c)
 *     PopBatteryQueryStatus @ 0x140AFEBC0 (PopBatteryQueryStatus.c)
 *     PopBatteryInitialize @ 0x140B0831C (PopBatteryInitialize.c)
 *     PopBatteryQueryEstimatedTime @ 0x140B22040 (PopBatteryQueryEstimatedTime.c)
 *     PopFanWorker @ 0x140B348C0 (PopFanWorker.c)
 *     PopBatteryReadTag @ 0x140B3D420 (PopBatteryReadTag.c)
 *     PopBatteryWaitTag @ 0x140B625D0 (PopBatteryWaitTag.c)
 * Callees:
 *     EtwWriteEx @ 0x140212F70 (EtwWriteEx.c)
 *     IopFreeIrpExtension @ 0x140268930 (IopFreeIrpExtension.c)
 *     EtwActivityIdControl @ 0x140466BF0 (EtwActivityIdControl.c)
 *     IoSetActivityIdIrp @ 0x140482190 (IoSetActivityIdIrp.c)
 *     IopIsActivityTracingEventEnabled @ 0x1404EBB28 (IopIsActivityTracingEventEnabled.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 *     VfIoInitializeIrp @ 0x140C45954 (VfIoInitializeIrp.c)
 *     IovpLogStackTrace @ 0x140C45DF4 (IovpLogStackTrace.c)
 */

void __stdcall IoReuseIrp(PIRP Irp, NTSTATUS Iostatus)
{
  char v2; // r14
  __int64 StackCount; // r15
  UCHAR v6; // si
  size_t Size; // r13
  __int64 v8; // rax
  __int64 v9; // rbp
  USHORT v10; // di
  GUID v11; // xmm0
  __int64 v12; // rax
  GUID ActivityId; // [rsp+40h] [rbp-48h] BYREF
  void *retaddr; // [rsp+88h] [rbp+0h]

  v2 = 0;
  ActivityId = 0LL;
  if ( (MmVerifierData & 0x10) != 0 )
  {
    VfIoInitializeIrp(Irp, retaddr, 1);
    IovpLogStackTrace(Irp);
  }
  StackCount = Irp->StackCount;
  v6 = Irp->AllocationFlags & 0x6D;
  Size = Irp->Size;
  v8 = *((_QWORD *)&Irp->Tail.CompletionKey + 10);
  if ( (Irp->AllocationFlags & 0x80u) == 0 && v8 && (*(_BYTE *)(v8 + 2) & 1) != 0 )
  {
    v2 = 1;
    ActivityId = *(GUID *)(*((_QWORD *)&Irp->Tail.CompletionKey + 10) + 24LL);
  }
  IopFreeIrpExtension(Irp, 0xFFFFFFFFLL, 0LL);
  v9 = *((_QWORD *)&Irp->Tail.CompletionKey + 10);
  v10 = *(&Irp->Size + 1);
  memset_0(Irp, 0, Size);
  Irp->Type = 6;
  Irp->CurrentLocation = StackCount + 1;
  Irp->Size = Size;
  Irp->StackCount = StackCount;
  Irp->ApcEnvironment = KeGetCurrentThread()->ApcStateIndex;
  Irp->ThreadListEntry.Blink = &Irp->ThreadListEntry;
  Irp->ThreadListEntry.Flink = &Irp->ThreadListEntry;
  *(&Irp->Size + 1) = v10;
  Irp->AllocationFlags = v6;
  Irp->IoStatus.Status = Iostatus;
  Irp->Tail.Overlay.CurrentStackLocation = (struct _IO_STACK_LOCATION *)((char *)&Irp[1]
                                                                       + 64 * StackCount
                                                                       + 8 * StackCount);
  if ( v9 )
  {
    *((_QWORD *)&Irp->Tail.CompletionKey + 10) = v9;
    if ( v2 == 1 )
    {
      v11 = ActivityId;
      *(_WORD *)(v9 + 2) |= 1u;
      *(GUID *)(v9 + 24) = v11;
    }
    if ( (IopFunctionPointerMask & 4) != 0 && (IopIrpExtensionStatus & 1) != 0 )
    {
      v12 = *((_QWORD *)&Irp->Tail.CompletionKey + 10);
      if ( (Irp->AllocationFlags & 0x80u) != 0
        || !v12
        || (*(_BYTE *)(v12 + 2) & 1) == 0
        || (unsigned __int8)IopIsActivityTracingEventEnabled(&IoTrace_KernelIo_ReuseIrp) )
      {
        ActivityId = 0LL;
        EtwActivityIdControl(3u, &ActivityId);
        if ( (unsigned __int8)IopIsActivityTracingEventEnabled(&IoTrace_KernelIo_ReuseIrp) )
          EtwWriteEx(IoTraceHandle, &IoTrace_KernelIo_ReuseIrp, 0LL, 0, (LPCGUID)(v9 + 24), &ActivityId, 0, 0LL);
        IoSetActivityIdIrp(Irp, &ActivityId);
      }
    }
  }
}
