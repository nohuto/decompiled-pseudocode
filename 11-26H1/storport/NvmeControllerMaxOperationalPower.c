/*
 * XREFs of NvmeControllerMaxOperationalPower @ 0x14012705C
 * Callers:
 *     NvmeAdapterSetMaxOperationalPower @ 0x1401264A8 (NvmeAdapterSetMaxOperationalPower.c)
 * Callees:
 *     NvmeControllerPerfStateTransition @ 0x14003BB08 (NvmeControllerPerfStateTransition.c)
 *     NvmeControllerGetPowerState @ 0x1400443D0 (NvmeControllerGetPowerState.c)
 *     NvmeControllerPowerStateGetMaxPower @ 0x1401273E0 (NvmeControllerPowerStateGetMaxPower.c)
 */

char __fastcall NvmeControllerMaxOperationalPower(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  unsigned __int8 v3; // r9
  unsigned __int64 v6; // rbp
  __int64 PowerState; // rax
  unsigned __int64 v8; // rsi
  __int64 v9; // r10
  unsigned __int8 v10; // r11

  v2 = *(_QWORD *)(a1 + 128);
  v3 = 0;
  if ( *(_DWORD *)a2 && *(_DWORD *)(a2 + 4) >= 0x10u )
  {
    v6 = *(_QWORD *)(a2 + 8);
    do
    {
      PowerState = NvmeControllerGetPowerState(a1, v3);
      v8 = (unsigned int)NvmeControllerPowerStateGetMaxPower(PowerState) / 0x3E8;
      if ( v8 <= v6 )
        break;
      ++v3;
    }
    while ( v3 <= v10 );
    *(_BYTE *)(v9 + 183) = v3;
    if ( v3 > v10 )
      *(_BYTE *)(v9 + 183) = v10;
    v2 = *(_QWORD *)(v9 + 8);
    if ( *(_BYTE *)(v2 + 64) && *(_BYTE *)(v9 + 182) != v3 )
      LOBYTE(v2) = NvmeControllerPerfStateTransition(a1);
    *(_QWORD *)(a2 + 8) = v8;
  }
  return v2;
}
