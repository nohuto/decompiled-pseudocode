/*
 * XREFs of ?bIs1Over16@EFLOAT@@QEBAHXZ @ 0x1401C522C
 * Callers:
 *     ?bTextExtent@RFONTOBJ@@QEAAHAEAVDCOBJ@@PEAGHJJJJIPEAUtagSIZE@@@Z @ 0x1401C4E90 (-bTextExtent@RFONTOBJ@@QEAAHAEAVDCOBJ@@PEAGHJJJJIPEAUtagSIZE@@@Z.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall EFLOAT::bIs1Over16(EFLOAT *this)
{
  return *(float *)this == 0.0625;
}
