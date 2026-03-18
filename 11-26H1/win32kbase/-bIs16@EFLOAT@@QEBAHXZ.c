/*
 * XREFs of ?bIs16@EFLOAT@@QEBAHXZ @ 0x140038C88
 * Callers:
 *     ?vComputeAccelFlags@EXFORMOBJ@@QEAAXK@Z @ 0x140011570 (-vComputeAccelFlags@EXFORMOBJ@@QEAAXK@Z.c)
 *     ?vUpdateWtoDXform@DC@@QEAAXXZ @ 0x140039A40 (-vUpdateWtoDXform@DC@@QEAAXXZ.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall EFLOAT::bIs16(EFLOAT *this)
{
  return *(float *)this == 16.0;
}
