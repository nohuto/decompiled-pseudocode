/*
 * XREFs of ACPIIoctlTranslateBiosResources @ 0x1400B1798
 * Callers:
 *     ACPIIrpDispatchDeviceControl @ 0x140021AD0 (ACPIIrpDispatchDeviceControl.c)
 * Callees:
 *     memmove @ 0x140072440 (memmove.c)
 *     PnpBiosResourcesToNtResources @ 0x1400CE578 (PnpBiosResourcesToNtResources.c)
 */

__int64 __fastcall ACPIIoctlTranslateBiosResources(__int64 a1, IRP *a2, __int64 a3)
{
  unsigned int v4; // edi

  if ( *(_DWORD *)(a3 + 16) )
  {
    if ( *(_DWORD *)(a3 + 8) >= 8u )
    {
      a2->IoStatus.Information = 0LL;
      v4 = PnpBiosResourcesToNtResources(a1, a2->AssociatedIrp.MasterIrp, 4LL);
    }
    else
    {
      v4 = -1073741789;
    }
  }
  else
  {
    v4 = -1073741811;
  }
  a2->IoStatus.Status = v4;
  IofCompleteRequest(a2, 0);
  return v4;
}
