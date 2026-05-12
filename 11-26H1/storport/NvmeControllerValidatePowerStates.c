/*
 * XREFs of NvmeControllerValidatePowerStates @ 0x140127640
 * Callers:
 *     NvmeControllerPowerInitialize @ 0x1400F81E4 (NvmeControllerPowerInitialize.c)
 * Callees:
 *     NvmeControllerGetPowerState @ 0x1400443D0 (NvmeControllerGetPowerState.c)
 *     NvmeControllerPowerStateGetMaxPower @ 0x1401273E0 (NvmeControllerPowerStateGetMaxPower.c)
 */

char __fastcall NvmeControllerValidatePowerStates(__int64 a1)
{
  __int64 v1; // rdx
  __int64 v3; // r9
  unsigned int v4; // r11d
  unsigned int v5; // ebx
  __int64 v6; // rdi
  unsigned __int16 *v7; // r9
  unsigned int MaxPower; // eax
  int v9; // r10d
  int v10; // r11d
  unsigned int v11; // r8d

  v1 = *(_QWORD *)(a1 + 592);
  v3 = v1 + 2048;
  if ( v1 == -2048 || (*(_BYTE *)(v1 + 2051) & 2) != 0 )
    return 0;
  v4 = 1;
  v5 = *(unsigned __int8 *)(v1 + 263) + 1;
  while ( v4 < v5 )
  {
    v6 = v3;
    if ( !NvmeControllerGetPowerState(a1, v4) )
      return 0;
    NvmeControllerPowerStateGetMaxPower((unsigned __int16 *)v6);
    MaxPower = NvmeControllerPowerStateGetMaxPower(v7);
    if ( MaxPower > v11 )
      return 0;
    if ( (*(_BYTE *)(v3 + 3) & 2) != 0 )
    {
      if ( v9 )
      {
        if ( (*(_BYTE *)(v6 + 3) & 2) == 0 )
          return 0;
      }
      else if ( (*(_BYTE *)(v6 + 3) & 2) != 0 )
      {
        return 0;
      }
    }
    else if ( v9 )
    {
      return 0;
    }
    v4 = v10 + 1;
  }
  return 1;
}
