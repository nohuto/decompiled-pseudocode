/*
 * XREFs of NvmeAdapterGetSystemPowerHint @ 0x1400D8ED0
 * Callers:
 *     NvmeAdapterStartDevice @ 0x1400DDCA8 (NvmeAdapterStartDevice.c)
 *     NvmePowerSettingCallback @ 0x14012A580 (NvmePowerSettingCallback.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall NvmeAdapterGetSystemPowerHint(__int64 a1)
{
  if ( (*(_DWORD *)(*(_QWORD *)(a1 + 160) + 176LL) & 0x8000) != 0 )
    return 1LL;
  else
    return ((*(_DWORD *)(*(_QWORD *)(a1 + 160) + 176LL) & 0x2000) == 0) | 2u;
}
