/*
 * XREFs of HalpInterruptPowerComponentActiveCallback @ 0x140593830
 * Callers:
 *     <none>
 * Callees:
 *     HalpInterruptPowerChange @ 0x14059379C (HalpInterruptPowerChange.c)
 */

__int64 __fastcall HalpInterruptPowerComponentActiveCallback(ULONG_PTR a1, __int64 a2)
{
  LOBYTE(a2) = 1;
  return HalpInterruptPowerChange(a1, a2);
}
