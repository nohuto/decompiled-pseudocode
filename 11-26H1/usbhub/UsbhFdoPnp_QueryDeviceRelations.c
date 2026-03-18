/*
 * XREFs of UsbhFdoPnp_QueryDeviceRelations @ 0x14003A640
 * Callers:
 *     <none>
 * Callees:
 *     Log @ 0x140009B80 (Log.c)
 *     FdoExt @ 0x1400196E0 (FdoExt.c)
 *     UsbhQueryBusRelations @ 0x140034C9C (UsbhQueryBusRelations.c)
 *     UsbhFdoChainIrp @ 0x14003B12C (UsbhFdoChainIrp.c)
 */

__int64 __fastcall UsbhFdoPnp_QueryDeviceRelations(__int64 a1, IRP *a2)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // rbx
  __int64 v5; // r9
  __int64 v6; // r10
  int v7; // r11d
  unsigned int Length; // r8d
  bool v9; // zf
  int v10; // r8d

  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  FdoExt(a1);
  Log(a1, 2, 1750156370, (__int64)a2, 0LL);
  Length = CurrentStackLocation->Parameters.Read.Length;
  if ( !Length )
    return UsbhQueryBusRelations(a1, a2);
  v9 = Length == 4;
  v10 = 1363431999;
  if ( v9 )
    v10 = 1363432052;
  Log(a1, v7, v10, v5, v6);
  return UsbhFdoChainIrp(a1, a2);
}
