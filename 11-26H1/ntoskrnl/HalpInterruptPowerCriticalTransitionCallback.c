/*
 * XREFs of HalpInterruptPowerCriticalTransitionCallback @ 0x140593890
 * Callers:
 *     <none>
 * Callees:
 *     HalpInterruptPowerChange @ 0x14059379C (HalpInterruptPowerChange.c)
 */

__int64 __fastcall HalpInterruptPowerCriticalTransitionCallback(ULONG_PTR a1, __int64 a2, char a3)
{
  LOBYTE(a2) = a3;
  return HalpInterruptPowerChange(a1, a2);
}
