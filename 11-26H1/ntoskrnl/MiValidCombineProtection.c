/*
 * XREFs of MiValidCombineProtection @ 0x14044FFA0
 * Callers:
 *     MiProcessCrcList @ 0x140A5ACD0 (MiProcessCrcList.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MiValidCombineProtection(unsigned int a1)
{
  return a1 != 31 && a1 != 24 && (a1 & 0xFFFFFFF8) != 0x10 && a1 < 0x1E;
}
