/*
 * XREFs of RaIsDeviceDFxPoweredDown @ 0x14001E5D8
 * Callers:
 *     RaidAdapterDeviceControlIrp @ 0x14001D0E0 (RaidAdapterDeviceControlIrp.c)
 *     RaUnitDeviceControlIrp @ 0x14001D890 (RaUnitDeviceControlIrp.c)
 *     NvmeAdapterSetTemperatureThresholdIoctl @ 0x1400DD020 (NvmeAdapterSetTemperatureThresholdIoctl.c)
 *     RaDriverSystemControlIrp @ 0x1401B7620 (RaDriverSystemControlIrp.c)
 *     NvmeNamespaceDeviceControlIrp @ 0x1401BBC8C (NvmeNamespaceDeviceControlIrp.c)
 *     NvmeAdapterDeviceControlIrp @ 0x1401BE838 (NvmeAdapterDeviceControlIrp.c)
 * Callees:
 *     GetNvmeAdapter @ 0x140072360 (GetNvmeAdapter.c)
 */

bool __fastcall RaIsDeviceDFxPoweredDown(__int64 a1)
{
  int *v1; // rdx
  int v2; // eax
  __int64 v3; // rax
  __int64 v4; // rax
  bool v6; // zf
  __int64 v7; // rax
  __int64 v8; // rax

  v1 = *(int **)(a1 + 64);
  v2 = *v1;
  if ( *v1 == 1094997074 )
  {
    v6 = (*((_BYTE *)v1 + 109) & 0x40) == 0;
    return !v6;
  }
  if ( v2 == 1431193940 )
  {
    v6 = (*((_BYTE *)v1 + 507) & 2) == 0;
    return !v6;
  }
  if ( v2 != 1314275652 )
  {
    if ( v2 == 1314278989 )
    {
      v3 = *((_QWORD *)v1 + 16);
      if ( v3 )
      {
        v4 = *(_QWORD *)(v3 + 8);
        if ( v4 )
          return *(_BYTE *)(v4 + 41) != 0;
      }
    }
    return 0;
  }
  v7 = *(_QWORD *)(GetNvmeAdapter() + 160);
  if ( !v7 )
    return 0;
  v8 = *(_QWORD *)(v7 + 8);
  return v8 && *(_BYTE *)(v8 + 65);
}
