/*
 * XREFs of NVMePowerSetPerfState @ 0x140018F58
 * Callers:
 *     NVMeHwAdapterControl @ 0x140007FB0 (NVMeHwAdapterControl.c)
 * Callees:
 *     NVMePerfStateTransition @ 0x1400086C0 (NVMePerfStateTransition.c)
 *     NVMeSetPowerState @ 0x140008720 (NVMeSetPowerState.c)
 */

char __fastcall NVMePowerSetPerfState(__int64 a1, __int64 a2)
{
  unsigned __int8 v3; // di
  int v4; // eax

  if ( *(_DWORD *)(a2 + 4) >= 0x18u )
  {
    if ( *(_DWORD *)a2 )
    {
      if ( *(_BYTE *)(a2 + 12) )
      {
        v3 = *(_BYTE *)(a2 + 16);
        if ( v3 <= *(_BYTE *)(a1 + 1605) && v3 <= 0x1Fu )
        {
          NVMeSetPowerState(a1, *(_BYTE *)(a2 + 16));
          *(_BYTE *)(a1 + 1607) = v3;
          *(_BYTE *)(a1 + 1604) = v3;
        }
      }
    }
  }
  v4 = *(_DWORD *)(a1 + 1600);
  if ( (v4 & 0x80u) == 0
    || (*(_DWORD *)(a1 + 1600) = v4 & 0xFFFFFF7F, LOBYTE(v4) = NVMePerfStateTransition(a1), !(_BYTE)v4) )
  {
    *(_DWORD *)(a1 + 1648) &= ~1u;
  }
  return v4;
}
