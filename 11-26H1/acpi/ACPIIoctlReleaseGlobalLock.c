/*
 * XREFs of ACPIIoctlReleaseGlobalLock @ 0x140049658
 * Callers:
 *     ACPIIrpDispatchDeviceControl @ 0x140021AD0 (ACPIIrpDispatchDeviceControl.c)
 * Callees:
 *     ACPIReleaseGlobalLock @ 0x14002E900 (ACPIReleaseGlobalLock.c)
 */

__int64 __fastcall ACPIIoctlReleaseGlobalLock(__int64 a1, IRP *a2, __int64 a3)
{
  unsigned int v3; // eax
  unsigned int v5; // edi
  _IRP *MasterIrp; // rbx
  _MDL *MdlAddress; // rbx

  v3 = *(_DWORD *)(a3 + 16);
  a2->IoStatus.Information = 0LL;
  if ( v3 >= 0x10 )
  {
    MasterIrp = a2->AssociatedIrp.MasterIrp;
    if ( *(_DWORD *)&MasterIrp->Type == 1281847873 )
    {
      MdlAddress = MasterIrp->MdlAddress;
      v5 = ACPIReleaseGlobalLock((__int64)MdlAddress, (__int64)a2, a3);
      ExFreePoolWithTag(MdlAddress, 0x4C706341u);
    }
    else
    {
      v5 = -1073741585;
    }
  }
  else
  {
    v5 = -1073741820;
  }
  a2->IoStatus.Status = v5;
  IofCompleteRequest(a2, 0);
  return v5;
}
