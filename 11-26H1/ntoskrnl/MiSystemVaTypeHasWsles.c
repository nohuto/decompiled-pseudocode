/*
 * XREFs of MiSystemVaTypeHasWsles @ 0x1403A67E0
 * Callers:
 *     MiSystemFault @ 0x1403A4508 (MiSystemFault.c)
 *     MiTrimViewLockSystemPte @ 0x1403A6720 (MiTrimViewLockSystemPte.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MiSystemVaTypeHasWsles(int a1)
{
  return ((a1 - 5) & 0xFFFFFFF9) == 0 && a1 != 9 || a1 == 17;
}
