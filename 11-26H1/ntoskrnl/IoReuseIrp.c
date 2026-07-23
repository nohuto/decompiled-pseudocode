/*
 * XREFs of IoReuseIrp @ 0x140267BC0
 * Callers:
 *     PopAllocateIrp @ 0x14026ED9C (PopAllocateIrp.c)
 *     PopThermalWorker @ 0x140AC58C0 (PopThermalWorker.c)
 *     PopPrepareIoctl @ 0x140AFD904 (PopPrepareIoctl.c)
 *     PopBatteryQueryStatus @ 0x140B00C30 (PopBatteryQueryStatus.c)
 *     PopBatteryQueryEstimatedTime @ 0x140B24440 (PopBatteryQueryEstimatedTime.c)
 *     PopFanWorker @ 0x140B36AD0 (PopFanWorker.c)
 *     PopBatteryReadTag @ 0x140B3F4F0 (PopBatteryReadTag.c)
 *     PopBatteryWaitTag @ 0x140B65670 (PopBatteryWaitTag.c)
 * Callees:
 *     EtwWriteEx @ 0x140213050 (EtwWriteEx.c)
 *     IopFreeIrpExtension @ 0x140267EA0 (IopFreeIrpExtension.c)
 *     EtwActivityIdControl @ 0x140460340 (EtwActivityIdControl.c)
 *     IoSetActivityIdIrp @ 0x14047BB00 (IoSetActivityIdIrp.c)
 *     IopIsActivityTracingEventEnabled @ 0x1404E5108 (IopIsActivityTracingEventEnabled.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     VfIoInitializeIrp @ 0x140C4B964 (VfIoInitializeIrp.c)
 *     IovpLogStackTrace @ 0x140C4BE04 (IovpLogStackTrace.c)
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
          EtwWriteEx(
            IopPerfIoTrackingLock.NpxState,
            &IoTrace_KernelIo_ReuseIrp,
            0LL,
            0,
            (LPCGUID)(v9 + 24),
            &ActivityId,
            0,
            0LL);
        IoSetActivityIdIrp(Irp, &ActivityId);
      }
    }
  }
}
