/*
 * XREFs of KeHaltOnAddress @ 0x1403E89C0
 * Callers:
 *     KiInitializeKernel @ 0x140BFC190 (KiInitializeKernel.c)
 * Callees:
 *     KiHaltOnAddress @ 0x1403E89D8 (KiHaltOnAddress.c)
 */

__int64 __fastcall KeHaltOnAddress(__int64 a1, __int64 a2, __int64 a3)
{
  return KiHaltOnAddress(a1, a2, a3);
}
