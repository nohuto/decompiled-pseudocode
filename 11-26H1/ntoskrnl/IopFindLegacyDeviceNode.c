/*
 * XREFs of IopFindLegacyDeviceNode @ 0x1409B8598
 * Callers:
 *     IopLegacyResourceAllocation @ 0x1409B81D4 (IopLegacyResourceAllocation.c)
 * Callees:
 *     IoDeleteDevice @ 0x140426AC0 (IoDeleteDevice.c)
 *     PipSetDevNodeState @ 0x1404CC0D0 (PipSetDevNodeState.c)
 *     IopCreateRootEnumeratedDeviceObject @ 0x1407B06DC (IopCreateRootEnumeratedDeviceObject.c)
 *     PipSetDevNodeFlags @ 0x1409AFE90 (PipSetDevNodeFlags.c)
 *     IopDestroyDeviceNode @ 0x1409B0BD8 (IopDestroyDeviceNode.c)
 *     PipAllocateDeviceNode @ 0x140B15754 (PipAllocateDeviceNode.c)
 */

__int64 __fastcall IopFindLegacyDeviceNode(
        struct _DRIVER_OBJECT *a1,
        struct _DEVICE_OBJECT *a2,
        __int64 **a3,
        PDEVICE_OBJECT *a4)
{
  unsigned int v8; // ebx
  PVOID DeviceNode; // rcx
  unsigned int v10; // eax
  __int64 *v11; // rsi
  __int64 *v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  PDEVICE_OBJECT v17; // rsi
  PDEVICE_OBJECT v18; // rcx
  __int64 *v19; // rdi
  __int64 v20; // rax
  PDEVICE_OBJECT DeviceObject; // [rsp+20h] [rbp-28h] BYREF
  PVOID P; // [rsp+58h] [rbp+10h] BYREF

  v8 = -1073741823;
  if ( !a2 )
  {
    v12 = (__int64 *)IopLegacyDeviceNode;
    P = (PVOID)IopLegacyDeviceNode;
    v13 = IopLegacyDeviceNode;
    v14 = IopLegacyDeviceNode;
    if ( IopLegacyDeviceNode )
    {
      v15 = IopLegacyDeviceNode;
      v16 = IopLegacyDeviceNode;
      do
      {
        v14 = v16;
        if ( *(struct _DRIVER_OBJECT **)(v15 + 432) == a1 )
          break;
        v13 = *v12;
        v12 = (__int64 *)v13;
        v15 = v13;
        v16 = v13;
        v14 = v13;
      }
      while ( v13 );
      P = v12;
    }
    if ( v13 )
    {
      *a4 = *(PDEVICE_OBJECT *)(v14 + 32);
      *a3 = v12;
      return 0;
    }
    DeviceObject = 0LL;
    v8 = IopCreateRootEnumeratedDeviceObject(&DeviceObject);
    if ( (v8 & 0x80000000) != 0 )
      return v8;
    v17 = DeviceObject;
    v18 = DeviceObject;
    DeviceObject->Flags |= 0x1000u;
    v8 = PipAllocateDeviceNode(v18, &P);
    if ( v8 != -1073740946 )
    {
      v19 = (__int64 *)P;
      if ( P )
      {
        v17->DriverObject = a1;
        PipSetDevNodeFlags((__int64)v19, 0x20001u);
        PipSetDevNodeState((__int64)v19, 772);
        v20 = IopLegacyDeviceNode;
        v19[54] = (__int64)a1;
        *v19 = v20;
        if ( v20 )
          *(_QWORD *)(v20 + 8) = v19;
        IopLegacyDeviceNode = (__int64)v19;
        *a4 = v17;
        *a3 = v19;
        return v8;
      }
    }
    IoDeleteDevice(v17);
    return (unsigned int)-1073741670;
  }
  DeviceNode = a2->DeviceObjectExtension->DeviceNode;
  P = DeviceNode;
  if ( DeviceNode )
  {
    *a4 = a2;
    *a3 = (__int64 *)DeviceNode;
    return 0;
  }
  if ( (a2->Flags & 0x1000) == 0 )
  {
    v10 = PipAllocateDeviceNode(a2, &P);
    v11 = (__int64 *)P;
    v8 = v10;
    if ( P )
    {
      if ( v10 != -1073740946 )
      {
        PipSetDevNodeFlags((__int64)P, 0x20000u);
        *a4 = a2;
        *a3 = v11;
        return 0;
      }
      IopDestroyDeviceNode((char *)P);
      return v8;
    }
    return (unsigned int)-1073741670;
  }
  return v8;
}
