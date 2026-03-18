/*
 * XREFs of ?bIs16@EFLOAT@@QEBAHXZ @ 0x1400E4F44
 * Callers:
 *     ?vUpdateWtoDXform@DC@@QEAAXXZ @ 0x14008F4E0 (-vUpdateWtoDXform@DC@@QEAAXXZ.c)
 *     ?vComputeAccelFlags@EXFORMOBJ@@QEAAXK@Z @ 0x1400983B0 (-vComputeAccelFlags@EXFORMOBJ@@QEAAXK@Z.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall EFLOAT::bIs16(EFLOAT *this)
{
  return *(float *)this == 16.0;
}
