/*
 * XREFs of IopSendMessageToTrackService @ 0x140B51334
 * Callers:
 *     IopTrackLink @ 0x140AD048C (IopTrackLink.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x140277AD0 (KeWaitForSingleObject.c)
 *     KeSetEvent @ 0x1402C0780 (KeSetEvent.c)
 *     ExQueueWorkItem @ 0x140383A20 (ExQueueWorkItem.c)
 *     KeResetEvent @ 0x140397930 (KeResetEvent.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     ZwClose @ 0x1407281A0 (ZwClose.c)
 *     ZwAlpcSendWaitReceivePort @ 0x140729180 (ZwAlpcSendWaitReceivePort.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

NTSTATUS __fastcall IopSendMessageToTrackService(__int64 a1, _OWORD *a2, __int64 a3)
{
  int v6; // ebp
  KPROCESSOR_MODE PreviousMode; // si
  NTSTATUS result; // eax
  NTSTATUS v9; // eax
  NTSTATUS ReadTransferCount; // ebx
  __int64 Pool2; // rax
  _PORT_MESSAGE *v12; // rbx
  unsigned int v13; // eax
  unsigned int v14; // eax
  size_t v15; // r8
  NTSTATUS v16; // eax
  ULONG_PTR BufferLength[2]; // [rsp+40h] [rbp-148h] BYREF
  _PORT_MESSAGE ReceiveMessage; // [rsp+50h] [rbp-138h] BYREF
  int v19; // [rsp+78h] [rbp-110h]

  BufferLength[0] = 0LL;
  v6 = 0;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  while ( 1 )
  {
    if ( !PspSiloMonitorLock.Queue )
    {
      if ( !*(_DWORD *)(PspSiloMonitorLock.ExtendedFeatureDisableMask + 4) )
        return -1073741153;
      result = KeWaitForSingleObject(&IopPerfIoTrackingLock.WriteTransferCount, Executive, PreviousMode, 0, 0LL);
      if ( result == 192 || result == 257 )
        return result;
      if ( PspSiloMonitorLock.Queue )
      {
        KeSetEvent((PRKEVENT)&IopPerfIoTrackingLock.WriteTransferCount, 0, 0);
      }
      else
      {
        IopPerfIoTrackingLock.InGlobalForegroundList = (unsigned __int64)&IopPerfIoTrackingLock.AbCompletedIoQoSBoostCount;
        IopPerfIoTrackingLock.GlobalForegroundListEntry.Flink = (struct _LIST_ENTRY *)IopConnectLinkTrackingPort;
        *(_QWORD *)&IopPerfIoTrackingLock.AbCompletedIoQoSBoostCount = 0LL;
        KeResetEvent((PRKEVENT)&IopPerfIoTrackingLock.ReadOperationCount);
        ExQueueWorkItem((PWORK_QUEUE_ITEM)&IopPerfIoTrackingLock.AbCompletedIoQoSBoostCount, DelayedWorkQueue);
        v9 = KeWaitForSingleObject(&IopPerfIoTrackingLock.ReadOperationCount, Executive, PreviousMode, 0, 0LL);
        ReadTransferCount = v9;
        if ( v9 != 192 && v9 != 257 && SLODWORD(IopPerfIoTrackingLock.ReadTransferCount) < 0 )
          ReadTransferCount = IopPerfIoTrackingLock.ReadTransferCount;
        KeSetEvent((PRKEVENT)&IopPerfIoTrackingLock.WriteTransferCount, 0, 0);
        if ( ReadTransferCount )
          return ReadTransferCount;
      }
    }
    Pool2 = ExAllocatePool2(0x100uLL);
    v12 = (_PORT_MESSAGE *)Pool2;
    if ( !Pool2 )
      break;
    *(_QWORD *)(Pool2 + 40) = 0LL;
    *(_OWORD *)(Pool2 + 48) = *(_OWORD *)a1;
    *(_DWORD *)(Pool2 + 64) = *(_DWORD *)(a1 + 16);
    *(_OWORD *)(Pool2 + 68) = *a2;
    *(_OWORD *)(Pool2 + 84) = a2[1];
    *(_OWORD *)(Pool2 + 100) = a2[2];
    *(_OWORD *)(Pool2 + 116) = a2[3];
    if ( *(_DWORD *)(a3 + 8) < 0x24u )
    {
      ExFreePoolWithTag((PVOID)Pool2, 0);
      return -2147483643;
    }
    *(_DWORD *)(Pool2 + 132) = *(_DWORD *)(a3 + 12);
    *(_OWORD *)(Pool2 + 136) = *(_OWORD *)(a3 + 16);
    *(_OWORD *)(Pool2 + 152) = *(_OWORD *)(a3 + 32);
    v13 = *(_DWORD *)(a3 + 8);
    if ( v13 > 0x24 )
    {
      v14 = v13 - 36;
      v15 = 16LL;
      if ( v14 <= 0x10 )
        v15 = v14;
      memmove(&v12[4].8, (const void *)(a3 + 48), v15);
    }
    *(_QWORD *)&v12->u1.s1.DataLength = 12058768LL;
    BufferLength[0] = 256LL;
    v16 = ZwAlpcSendWaitReceivePort(
            PspSiloMonitorLock.Queue,
            0x20000u,
            v12,
            0LL,
            &ReceiveMessage,
            BufferLength,
            0LL,
            0LL);
    ReadTransferCount = v16;
    if ( v16 != -1073741769 && v16 != -1073740029
      || (ReadTransferCount = KeWaitForSingleObject(
                                &IopPerfIoTrackingLock.WriteTransferCount,
                                Executive,
                                PreviousMode,
                                0,
                                0LL),
          ZwClose(PspSiloMonitorLock.Queue),
          PspSiloMonitorLock.Queue = 0LL,
          KeSetEvent((PRKEVENT)&IopPerfIoTrackingLock.WriteTransferCount, 0, 0),
          v6) )
    {
      if ( ReadTransferCount >= 0 )
        return v19;
      return ReadTransferCount;
    }
    v6 = 1;
  }
  return -1073741670;
}
