/*
 * XREFs of NVMeMaxOperationalPower @ 0x1400187EC
 * Callers:
 *     NVMeHwAdapterControl @ 0x140007FB0 (NVMeHwAdapterControl.c)
 * Callees:
 *     NVMePerfStateTransition @ 0x1400086C0 (NVMePerfStateTransition.c)
 *     NVMeGetPowerState @ 0x14000F320 (NVMeGetPowerState.c)
 *     NVMePowerStateGetMaxPower @ 0x140010190 (NVMePowerStateGetMaxPower.c)
 */

void __fastcall NVMeMaxOperationalPower(__int64 a1, __int64 a2)
{
  signed __int8 v4; // r9
  unsigned __int16 *PowerState; // rax
  unsigned __int64 v6; // rsi
  int v7; // r10d
  unsigned __int64 v8; // r11

  if ( *(_DWORD *)(a2 + 4) >= 0x10u && *(_DWORD *)a2 )
  {
    v4 = 0;
    do
    {
      PowerState = (unsigned __int16 *)NVMeGetPowerState(a1, v4);
      v6 = (unsigned int)NVMePowerStateGetMaxPower(PowerState) / 0x3E8;
      if ( v6 <= v8 )
        break;
      ++v4;
    }
    while ( v4 <= v7 );
    *(_BYTE *)(a1 + 1608) = v4;
    if ( (unsigned __int8)v4 > (unsigned __int8)v7 )
      *(_BYTE *)(a1 + 1608) = v7;
    if ( (*(_DWORD *)(a1 + 1600) & 4) != 0 && *(unsigned __int8 *)(a1 + 1607) != v4 )
    {
      if ( _interlockedbittestandset((volatile signed __int32 *)(a1 + 1648), 0) )
      {
        *(_DWORD *)(a1 + 1600) |= 0x80u;
      }
      else if ( !NVMePerfStateTransition(a1) )
      {
        *(_DWORD *)(a1 + 1648) &= ~1u;
      }
    }
    *(_QWORD *)(a2 + 8) = v6;
  }
}
