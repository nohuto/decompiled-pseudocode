/*
 * XREFs of MiGetPdeAddress @ 0x14044AE60
 * Callers:
 *     MiEliminateZeroPages @ 0x1409C9F7C (MiEliminateZeroPages.c)
 *     MiReleaseDriverPtes @ 0x140A80038 (MiReleaseDriverPtes.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiGetPdeAddress(unsigned __int64 a1)
{
  return ((a1 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
}
