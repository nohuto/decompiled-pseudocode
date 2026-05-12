/*
 * XREFs of NvmeNamespacePopulateLogSenseTemperature @ 0x140117990
 * Callers:
 *     NvmeNamespaceScsiLogSenseRequest @ 0x140117C60 (NvmeNamespaceScsiLogSenseRequest.c)
 * Callees:
 *     TemperatureFromKelvinToCelsius @ 0x1400E3084 (TemperatureFromKelvinToCelsius.c)
 *     NvmeAdapterGetControllerLogPageSync @ 0x1400E95A0 (NvmeAdapterGetControllerLogPageSync.c)
 *     SetSrbSenseData @ 0x140117078 (SetSrbSenseData.c)
 */

__int64 __fastcall NvmeNamespacePopulateLogSenseTemperature(__int64 a1, __int64 a2, int *a3, __int64 a4)
{
  unsigned int v4; // ebx
  unsigned int v6; // r8d
  int v9; // ebp
  __int64 *v10; // rdx
  char v11; // al
  char v12; // al
  char v13; // al
  __int64 v14; // r9
  PVOID v15; // r8
  __int64 v17; // [rsp+28h] [rbp-40h]
  __int64 v18; // [rsp+80h] [rbp+18h] BYREF

  v4 = 0;
  v6 = *a3;
  v18 = 0LL;
  v9 = 10;
  if ( v6 >= 0xA )
  {
    v10 = (__int64 *)(a1 + 16);
    v11 = *(_BYTE *)(a4 + 6) & 0x40;
    *(_DWORD *)a4 = 201326605;
    *(_WORD *)(a4 + 4) = 0;
    *(_BYTE *)(a4 + 6) = v11 | 3;
    *(_BYTE *)(a4 + 7) = 2;
    *(_BYTE *)(a4 + 9) = -1;
    if ( v6 > 0x10 )
    {
      *(_WORD *)(a4 + 10) = 256;
      v9 = 16;
      v12 = *(_BYTE *)(a4 + 12) & 0x40;
      *(_BYTE *)(a4 + 13) = 2;
      *(_BYTE *)(a4 + 12) = v12 | 3;
      v13 = TemperatureFromKelvinToCelsius(*(_WORD *)(*v10 + 56));
      *(_BYTE *)(v14 + 15) = v13;
    }
    NvmeAdapterGetControllerLogPageSync(*v10, (__int64)v10, 2u, 0x200u, 0LL, v17, 1, &v18, 0LL, 0LL);
    if ( v18 )
    {
      *(_BYTE *)(a4 + 9) = TemperatureFromKelvinToCelsius(*(unsigned __int8 *)(v18 + 1) | (*(unsigned __int8 *)(v18 + 2) << 8));
      ExFreePoolWithTag(v15, 0x52436152u);
    }
    *a3 = v9;
    *(_BYTE *)(a2 + 3) = 1;
  }
  else
  {
    SetSrbSenseData(a2, 6, 5, 36, 0);
    return (unsigned int)-1073741811;
  }
  return v4;
}
