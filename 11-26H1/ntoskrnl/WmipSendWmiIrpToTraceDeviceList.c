/*
 * XREFs of WmipSendWmiIrpToTraceDeviceList @ 0x140B0BA58
 * Callers:
 *     WmiSetNetworkNotify @ 0x140823BCC (WmiSetNetworkNotify.c)
 *     WmiTraceRundownNotify @ 0x140B0B964 (WmiTraceRundownNotify.c)
 * Callees:
 *     IoFreeIrp @ 0x140268860 (IoFreeIrp.c)
 *     IoAllocateIrp @ 0x14026C4D0 (IoAllocateIrp.c)
 *     KeWaitForSingleObject @ 0x140278560 (KeWaitForSingleObject.c)
 *     KeReleaseMutex @ 0x1403DD0F0 (KeReleaseMutex.c)
 *     IoInitializeIrp @ 0x1404766A0 (IoInitializeIrp.c)
 *     WmipForwardWmiIrp @ 0x140A0F03C (WmipForwardWmiIrp.c)
 */

__int64 __fastcall WmipSendWmiIrpToTraceDeviceList(
        __int64 a1,
        unsigned int a2,
        unsigned __int8 a3,
        unsigned int a4,
        __int64 a5)
{
  __int64 v6; // rbp
  unsigned int v8; // ebx
  __int16 v9; // r14
  PIRP Irp; // rsi

  v6 = a2;
  v8 = 0;
  KeWaitForSingleObject(&EtwpSecurityLock.IoSelfBoostsEntry, Executive, 0, 0, 0LL);
  v9 = (char)(*(_BYTE *)(*(_QWORD *)&EtwpSecurityLock.ForegroundLossTime + 76LL) + 1);
  KeReleaseMutex((PRKMUTEX)&EtwpSecurityLock.IoSelfBoostsEntry, 0);
  Irp = IoAllocateIrp(v9, 0);
  if ( Irp )
  {
    if ( (_DWORD)v6 )
    {
      do
      {
        IoInitializeIrp(Irp, 72 * v9 + 208, v9);
        --Irp->Tail.Overlay.CurrentStackLocation;
        --Irp->CurrentLocation;
        Irp->Tail.Overlay.CurrentStackLocation->DeviceObject = *(PDEVICE_OBJECT *)&EtwpSecurityLock.ForegroundLossTime;
        Irp->Tail.Overlay.Thread = KeGetCurrentThread();
        WmipForwardWmiIrp(Irp, a3, *(_DWORD *)(*(_QWORD *)a1 + 56LL), 0LL, a4, a5);
        a1 += 16LL;
        --v6;
      }
      while ( v6 );
      v8 = 0;
    }
    IoFreeIrp(Irp);
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v8;
}
