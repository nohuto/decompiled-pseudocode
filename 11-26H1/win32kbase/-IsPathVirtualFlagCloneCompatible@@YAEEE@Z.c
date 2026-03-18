/*
 * XREFs of ?IsPathVirtualFlagCloneCompatible@@YAEEE@Z @ 0x1401C6D3C
 * Callers:
 *     DrvSetDisplayConfigValidateParams @ 0x1401F81D4 (DrvSetDisplayConfigValidateParams.c)
 * Callees:
 *     <none>
 */

bool __fastcall IsPathVirtualFlagCloneCompatible(unsigned __int8 a1, unsigned __int8 a2)
{
  return ((a2 ^ a1) & 3) == 0;
}
