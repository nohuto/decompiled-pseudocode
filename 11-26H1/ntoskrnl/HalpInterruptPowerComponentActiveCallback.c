/*
 * XREFs of HalpInterruptPowerComponentActiveCallback @ 0x1405910B0
 * Callers:
 *     <none>
 * Callees:
 *     HalpInterruptPowerChange @ 0x14059101C (HalpInterruptPowerChange.c)
 */

__int64 __fastcall HalpInterruptPowerComponentActiveCallback(ULONG_PTR a1, __int64 a2)
{
  LOBYTE(a2) = 1;
  return HalpInterruptPowerChange(a1, a2);
}
