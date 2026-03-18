/*
 * XREFs of WmipSendWmiIrpToTraceDeviceList @ 0x140A121BC
 * Callers:
 *     WmiSetNetworkNotify @ 0x140796234 (WmiSetNetworkNotify.c)
 *     WmiTraceRundownNotify @ 0x140A120C8 (WmiTraceRundownNotify.c)
 * Callees:
 *     IoFreeIrp @ 0x1402508A0 (IoFreeIrp.c)
 *     KeWaitForSingleObject @ 0x14029C6A0 (KeWaitForSingleObject.c)
 *     KeReleaseMutex @ 0x1402F0970 (KeReleaseMutex.c)
 *     IoAllocateIrp @ 0x14035B6A0 (IoAllocateIrp.c)
 *     IoInitializeIrp @ 0x14043ECB0 (IoInitializeIrp.c)
 *     WmipForwardWmiIrp @ 0x1409B5F64 (WmipForwardWmiIrp.c)
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
  __int16 StackSize; // di
  CCHAR v10; // r14
  PIRP Irp; // rsi
  USHORT v12; // di

  v6 = a2;
  v8 = 0;
  KeWaitForSingleObject(&WmipSMMutex, Executive, 0, 0, 0LL);
  StackSize = WmipServiceDeviceObject->StackSize;
  v10 = StackSize + 1;
  KeReleaseMutex((PRKMUTEX)&WmipSMMutex, 0);
  Irp = IoAllocateIrp((unsigned __int8)StackSize + 1, 0);
  if ( Irp )
  {
    if ( (_DWORD)v6 )
    {
      v12 = 72 * StackSize + 280;
      do
      {
        IoInitializeIrp(Irp, v12, v10);
        --Irp->Tail.Overlay.CurrentStackLocation;
        --Irp->CurrentLocation;
        Irp->Tail.Overlay.CurrentStackLocation->DeviceObject = WmipServiceDeviceObject;
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
