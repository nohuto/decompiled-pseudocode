/*
 * XREFs of ?flComputeWtoDAccelFlags@EXFORMOBJ@@SAKPEBUMATRIX@@@Z @ 0x1401108D8
 * Callers:
 *     ?vInitPageToDevice@DC@@QEAAXPEAUMATRIX@@@Z @ 0x140110EB0 (-vInitPageToDevice@DC@@QEAAXPEAUMATRIX@@@Z.c)
 * Callees:
 *     ?bIsZero@EFLOAT@@QEBAHXZ @ 0x140108968 (-bIsZero@EFLOAT@@QEBAHXZ.c)
 *     ?bIs16@EFLOAT@@QEBAHXZ @ 0x1401102D8 (-bIs16@EFLOAT@@QEBAHXZ.c)
 */

__int64 __fastcall EXFORMOBJ::flComputeWtoDAccelFlags(const struct MATRIX *a1)
{
  unsigned int v1; // edx
  __int64 v2; // r8
  EFLOAT *v3; // r8
  __int64 v4; // r8

  if ( EFLOAT::bIsZero((const struct MATRIX *)((char *)a1 + 4))
    && EFLOAT::bIsZero((EFLOAT *)(v2 + 8))
    && EFLOAT::bIs16(v3)
    && EFLOAT::bIs16((EFLOAT *)(v4 + 12)) )
  {
    v1 |= 2u;
  }
  return v1;
}
