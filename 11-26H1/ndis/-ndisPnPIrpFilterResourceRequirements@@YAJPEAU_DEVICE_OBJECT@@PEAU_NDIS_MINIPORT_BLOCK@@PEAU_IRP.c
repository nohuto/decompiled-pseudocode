/*
 * XREFs of ?ndisPnPIrpFilterResourceRequirements@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@PEAE3@Z @ 0x14008C350
 * Callers:
 *     ?ndisPnPDispatch@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z @ 0x14000A2D0 (-ndisPnPDispatch@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z.c)
 * Callees:
 *     ?ndisMInvokeFilterResourceRequirements@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@@Z @ 0x1400A0060 (-ndisMInvokeFilterResourceRequirements@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@@Z.c)
 */

__int64 __fastcall ndisPnPIrpFilterResourceRequirements(
        struct _DEVICE_OBJECT *a1,
        struct _NDIS_MINIPORT_BLOCK *a2,
        struct _IRP *a3,
        unsigned __int8 *a4,
        unsigned __int8 *a5)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // rax
  __int64 result; // rax
  unsigned int v9; // eax
  unsigned int v10; // ecx

  CurrentStackLocation = a3->Tail.Overlay.CurrentStackLocation;
  *(_OWORD *)&CurrentStackLocation[-1].MajorFunction = *(_OWORD *)&CurrentStackLocation->MajorFunction;
  *(_OWORD *)&CurrentStackLocation[-1].Parameters.NotifyDirectoryEx.CompletionFilter = *(_OWORD *)&CurrentStackLocation->Parameters.NotifyDirectoryEx.CompletionFilter;
  *(_OWORD *)&CurrentStackLocation[-1].Parameters.ReadWriteConfig.Length = *(_OWORD *)&CurrentStackLocation->Parameters.ReadWriteConfig.Length;
  CurrentStackLocation[-1].FileObject = CurrentStackLocation->FileObject;
  CurrentStackLocation[-1].Control = 0;
  result = IoSynchronousCallDriver(a2->NextDeviceObject, a3);
  if ( (int)result >= 0 )
  {
    v9 = ndisMInvokeFilterResourceRequirements(a2, a3);
    v10 = v9;
    if ( !v9
      || v9 == 259
      || v9 == -2147483643
      || (result = 3221225473LL, v10 == -1073741823)
      || v10 == -1073741670
      || v10 == -1073741637 )
    {
      result = v10;
    }
    else
    {
      switch ( v10 )
      {
        case 0xC0010016:
          result = 3221225507LL;
          break;
        case 0xC0010014:
          result = 3221225990LL;
          break;
        case 0xC0010015:
          result = 3221225485LL;
          break;
      }
    }
  }
  a3->IoStatus.Status = result;
  *a5 = 0;
  return result;
}
