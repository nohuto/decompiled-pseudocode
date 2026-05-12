/*
 * XREFs of NvmeAdapterGetSystemPowerResumeLatency @ 0x1400D8F00
 * Callers:
 *     NvmeAdapterStartDevice @ 0x1400DDCA8 (NvmeAdapterStartDevice.c)
 *     NvmePowerSettingCallback @ 0x14012A580 (NvmePowerSettingCallback.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall NvmeAdapterGetSystemPowerResumeLatency(int a1)
{
  int v1; // ecx

  v1 = a1 - 1;
  if ( !v1 )
    return 500LL;
  if ( v1 == 1 )
    return 100LL;
  return 50LL;
}
