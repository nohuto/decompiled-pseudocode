/*
 * XREFs of ?VerifyMagInputDimensions@@YAHPEAU_MAGN_INPUT_TRANSFORM@@@Z @ 0x140265F38
 * Callers:
 *     _SetMagnificationInputTransform @ 0x14023BFDC (_SetMagnificationInputTransform.c)
 * Callees:
 *     UserSetLastError @ 0x140022F00 (UserSetLastError.c)
 *     ?IsRectEmptyInl@@YAHPEBUtagRECT@@@Z @ 0x14011F33C (-IsRectEmptyInl@@YAHPEBUtagRECT@@@Z.c)
 */

__int64 __fastcall VerifyMagInputDimensions(const struct tagRECT *a1)
{
  const struct tagRECT *v1; // rcx

  if ( !IsRectEmptyInl(a1) && !IsRectEmptyInl(v1 + 1) )
    return 1LL;
  UserSetLastError(87);
  return 0LL;
}
