/*
 * XREFs of NVMePerfStateTransition @ 0x1400086C0
 * Callers:
 *     NVMeHwAdapterControl @ 0x140007FB0 (NVMeHwAdapterControl.c)
 *     NVMeMaxOperationalPower @ 0x1400187EC (NVMeMaxOperationalPower.c)
 *     NVMePowerSetPerfState @ 0x140018F58 (NVMePowerSetPerfState.c)
 * Callees:
 *     <none>
 */

bool __fastcall NVMePerfStateTransition(__int64 a1)
{
  return (*(_DWORD *)(a1 + 1600) & 2) != 0
      && *(_BYTE *)(a1 + 1607) != *(_BYTE *)(a1 + 1608)
      && (unsigned int)StorPortExtendedFunction(66LL, a1, 0LL, 0LL) == 0;
}
