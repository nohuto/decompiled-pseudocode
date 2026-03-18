/*
 * XREFs of ACPIIoctlRegisterDeviceFirmwareLock @ 0x140062F70
 * Callers:
 *     ACPIIrpDispatchDeviceControl @ 0x140021AD0 (ACPIIrpDispatchDeviceControl.c)
 * Callees:
 *     AcpiRegisterDeviceFirmwareLockHandler @ 0x1400AE81C (AcpiRegisterDeviceFirmwareLockHandler.c)
 */

__int64 __fastcall ACPIIoctlRegisterDeviceFirmwareLock(void *a1, IRP *a2, __int64 a3)
{
  unsigned int v3; // eax
  unsigned int v5; // ebx
  _IRP *MasterIrp; // rdx

  v3 = *(_DWORD *)(a3 + 16);
  a2->IoStatus.Information = 32LL;
  if ( v3 >= 0x20 )
  {
    MasterIrp = a2->AssociatedIrp.MasterIrp;
    if ( *(_DWORD *)&MasterIrp->Type == 1382433857 && MasterIrp->AllocationProcessorNumber )
      v5 = AcpiRegisterDeviceFirmwareLockHandler(a1);
    else
      v5 = -1072431089;
  }
  else
  {
    v5 = -1073741820;
  }
  a2->IoStatus.Status = v5;
  a2->IoStatus.Information = 0LL;
  IofCompleteRequest(a2, 0);
  return v5;
}
