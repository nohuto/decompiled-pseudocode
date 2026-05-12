/*
 * XREFs of BuildGetFeaturesTemperatureThresholdCommand @ 0x1400CE9B0
 * Callers:
 *     NvmeControllerGetTemperatureThreshold @ 0x1400CF5C0 (NvmeControllerGetTemperatureThreshold.c)
 *     NvmeControllerGetTemperatureThresholdWorkerCompletion @ 0x1400E0E40 (NvmeControllerGetTemperatureThresholdWorkerCompletion.c)
 *     NvmeGetStorageTemperaturePropertyComplete @ 0x1400E1690 (NvmeGetStorageTemperaturePropertyComplete.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall BuildGetFeaturesTemperatureThresholdCommand(__int64 a1, unsigned __int8 a2, char a3)
{
  __int64 result; // rax
  int v4; // r9d
  unsigned int v5; // r9d

  result = *(unsigned int *)(a1 + 44);
  *(_BYTE *)a1 = 10;
  *(_BYTE *)(a1 + 40) = 4;
  v4 = result ^ (result ^ (a2 << 16)) & 0xF0000;
  if ( a3 )
    v5 = v4 & 0xFFCFFFFF | 0x100000;
  else
    v5 = v4 & 0xFFCFFFFF;
  *(_DWORD *)(a1 + 44) = v5;
  return result;
}
