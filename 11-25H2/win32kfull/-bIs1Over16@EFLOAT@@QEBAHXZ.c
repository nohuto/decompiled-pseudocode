/*
 * XREFs of ?bIs1Over16@EFLOAT@@QEBAHXZ @ 0x1400BFEEC
 * Callers:
 *     ?bTextExtent@RFONTOBJ@@QEAAHAEAVUDCOBJ@@PEAGHJJJJIPEAUtagSIZE@@@Z @ 0x1400BF550 (-bTextExtent@RFONTOBJ@@QEAAHAEAVUDCOBJ@@PEAGHJJJJIPEAUtagSIZE@@@Z.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall EFLOAT::bIs1Over16(EFLOAT *this)
{
  return *(float *)this == 0.0625;
}
