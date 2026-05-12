/*
 * XREFs of NvmeNamespacePopulateLogSenseInformationalExceptions @ 0x140117898
 * Callers:
 *     NvmeNamespaceScsiLogSenseRequest @ 0x140117C60 (NvmeNamespaceScsiLogSenseRequest.c)
 * Callees:
 *     TemperatureFromKelvinToCelsius @ 0x1400E3084 (TemperatureFromKelvinToCelsius.c)
 *     NvmeAdapterGetControllerLogPageSync @ 0x1400E95A0 (NvmeAdapterGetControllerLogPageSync.c)
 *     SetSrbSenseData @ 0x140117078 (SetSrbSenseData.c)
 */

__int64 __fastcall NvmeNamespacePopulateLogSenseInformationalExceptions(__int64 a1, __int64 a2, _DWORD *a3, __int64 a4)
{
  unsigned int v4; // ebx
  bool v6; // cf
  PVOID v9; // r8
  __int64 v11; // [rsp+28h] [rbp-30h]
  __int64 v12; // [rsp+70h] [rbp+18h] BYREF

  v4 = 0;
  v6 = *a3 < 0xCu;
  v12 = 0LL;
  if ( v6 )
  {
    SetSrbSenseData(a2, 6, 5, 36, 0);
    return (unsigned int)-1073741811;
  }
  else
  {
    *(_BYTE *)(a4 + 6) = *(_BYTE *)(a4 + 6) & 0x40 | 0x23;
    *(_DWORD *)a4 = 134217775;
    *(_WORD *)(a4 + 4) = 0;
    *(_DWORD *)(a4 + 7) = -16777212;
    NvmeAdapterGetControllerLogPageSync(*(_QWORD *)(a1 + 16), a2, 2u, 0x200u, 0LL, v11, 1, &v12, 0LL, 0LL);
    if ( v12 )
    {
      *(_BYTE *)(a4 + 10) = TemperatureFromKelvinToCelsius(*(unsigned __int8 *)(v12 + 1) | (*(unsigned __int8 *)(v12 + 2) << 8));
      ExFreePoolWithTag(v9, 0x52436152u);
    }
    *a3 = 12;
    *(_BYTE *)(a2 + 3) = 1;
  }
  return v4;
}
