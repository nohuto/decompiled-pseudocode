/*
 * XREFs of UsbhFdoPnp_QueryDeviceRelations @ 0x14003ABD0
 * Callers:
 *     <none>
 * Callees:
 *     FdoExt @ 0x140009560 (FdoExt.c)
 *     Log @ 0x14001C5D0 (Log.c)
 *     UsbhQueryBusRelations @ 0x14002D43C (UsbhQueryBusRelations.c)
 *     UsbhFdoChainIrp @ 0x14003B6CC (UsbhFdoChainIrp.c)
 */

__int64 __fastcall UsbhFdoPnp_QueryDeviceRelations(struct _DEVICE_OBJECT *a1, IRP *a2)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // rbx
  __int64 v5; // r9
  __int64 v6; // r10
  int v7; // r11d
  unsigned int Length; // r8d
  bool v9; // zf
  int v10; // r8d

  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  FdoExt((__int64)a1);
  Log((__int64)a1, 2, 1750156370, (__int64)a2, 0LL);
  Length = CurrentStackLocation->Parameters.Read.Length;
  if ( !Length )
    return UsbhQueryBusRelations(a1, a2);
  v9 = Length == 4;
  v10 = 1363431999;
  if ( v9 )
    v10 = 1363432052;
  Log((__int64)a1, v7, v10, v5, v6);
  return UsbhFdoChainIrp(a1, a2);
}
