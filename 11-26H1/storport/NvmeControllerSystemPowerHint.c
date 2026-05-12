/*
 * XREFs of NvmeControllerSystemPowerHint @ 0x14012754C
 * Callers:
 *     NvmeAdapterStartDevice @ 0x1400DDCA8 (NvmeAdapterStartDevice.c)
 *     NvmePowerSettingCallback @ 0x14012A580 (NvmePowerSettingCallback.c)
 * Callees:
 *     NvmeControllerUpdateResumeLatencyTolerance @ 0x14003BCE8 (NvmeControllerUpdateResumeLatencyTolerance.c)
 *     NvmeAdapterPoFxSetDeviceIdleTimeout @ 0x140124014 (NvmeAdapterPoFxSetDeviceIdleTimeout.c)
 */

void __fastcall NvmeControllerSystemPowerHint(__int64 a1, _DWORD *a2)
{
  __int64 v3; // rdi
  int v4; // esi
  int v5; // eax
  __int64 v6; // r8
  __int64 v7; // r10
  __int64 v8; // r11
  __int64 v9; // rdx
  unsigned int v10; // edx

  v3 = *(_QWORD *)(*(_QWORD *)(a1 + 128) + 160LL);
  if ( *(_BYTE *)v3 == 1 && *a2 && a2[1] >= 0x10u )
  {
    v4 = a2[2];
    v5 = a2[3];
    *(_DWORD *)(v3 + 136) = v4;
    *(_DWORD *)(v3 + 192) = v5;
    NvmeControllerUpdateResumeLatencyTolerance(a1);
    v8 = *(_QWORD *)(v7 + 1048);
    if ( *(_DWORD *)(v8 + 48) == 5 )
    {
      v9 = 64LL;
      if ( v4 != 1 )
        v9 = 60LL;
      NvmeAdapterPoFxSetDeviceIdleTimeout(*(_QWORD **)(v7 + 128), *(_DWORD *)(v9 + v8), v6, 0);
    }
    else if ( (*(_DWORD *)(v3 + 176) & 2) != 0 )
    {
      v10 = v4 == 1 ? *(_DWORD *)(v8 + 64) : -1;
      NvmeAdapterPoFxSetDeviceIdleTimeout(*(_QWORD **)(v7 + 128), v10, v6, 0);
      if ( v4 == 1 )
        PoFxSetComponentLatency(**(_QWORD **)(v3 + 8), 0LL, 10000LL * (unsigned int)a2[3]);
    }
  }
}
