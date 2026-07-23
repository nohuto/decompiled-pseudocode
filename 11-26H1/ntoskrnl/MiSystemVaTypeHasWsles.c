/*
 * XREFs of MiSystemVaTypeHasWsles @ 0x1403A8540
 * Callers:
 *     MiSystemFault @ 0x1403A6268 (MiSystemFault.c)
 *     MiTrimViewLockSystemPte @ 0x1403A8480 (MiTrimViewLockSystemPte.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MiSystemVaTypeHasWsles(int a1)
{
  return ((a1 - 5) & 0xFFFFFFF9) == 0 && a1 != 9 || a1 == 17;
}
