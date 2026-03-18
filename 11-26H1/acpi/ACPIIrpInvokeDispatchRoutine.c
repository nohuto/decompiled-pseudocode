/*
 * XREFs of ACPIIrpInvokeDispatchRoutine @ 0x1400C8F04
 * Callers:
 *     ACPIBusIrpEject @ 0x1400ADAB0 (ACPIBusIrpEject.c)
 *     ACPIBusIrpSetLock @ 0x1400ADD60 (ACPIBusIrpSetLock.c)
 *     ACPIBusIrpQueryPnpDeviceState @ 0x1400C8EB0 (ACPIBusIrpQueryPnpDeviceState.c)
 *     ACPIBusIrpQueryCapabilities @ 0x1400C8EE0 (ACPIBusIrpQueryCapabilities.c)
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x140024510 (ACPIInternalGetDeviceExtension.c)
 *     _guard_dispatch_icall @ 0x140072370 (_guard_dispatch_icall.c)
 */

__int64 __fastcall ACPIIrpInvokeDispatchRoutine(
        ULONG_PTR a1,
        IRP *a2,
        __int64 a3,
        __int64 (__fastcall *a4)(ULONG_PTR, IRP *, _QWORD, _QWORD),
        char a5)
{
  __int64 DeviceExtension; // rsi
  int Status; // eax
  int v10; // ebx

  DeviceExtension = ACPIInternalGetDeviceExtension(a1);
  Status = a2->IoStatus.Status;
  v10 = -1073741637;
  if ( Status >= 0 )
  {
    if ( !a5 )
      goto LABEL_3;
  }
  else if ( Status != -1073741637 )
  {
    goto LABEL_3;
  }
  v10 = a4(a1, a2, 0LL, 0LL);
LABEL_3:
  if ( v10 != 259 )
  {
    if ( (*(_DWORD *)(DeviceExtension + 8) & 0x20) != 0 )
    {
      if ( v10 == -1073741637 )
        v10 = a2->IoStatus.Status;
      else
        a2->IoStatus.Status = v10;
    }
    else
    {
      if ( v10 == -1073741637 )
        return (unsigned int)IofCallDriver(*(PDEVICE_OBJECT *)(DeviceExtension + 776), a2);
      a2->IoStatus.Status = v10;
      if ( v10 >= 0 )
        return (unsigned int)IofCallDriver(*(PDEVICE_OBJECT *)(DeviceExtension + 776), a2);
    }
    IofCompleteRequest(a2, 0);
  }
  return (unsigned int)v10;
}
