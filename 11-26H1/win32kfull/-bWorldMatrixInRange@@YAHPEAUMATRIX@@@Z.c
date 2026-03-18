/*
 * XREFs of ?bWorldMatrixInRange@@YAHPEAUMATRIX@@@Z @ 0x140108730
 * Callers:
 *     ?bModifyWorldTransform@XDCOBJ@@QEAAHPEBU_XFORML@@K@Z @ 0x140108080 (-bModifyWorldTransform@XDCOBJ@@QEAAHPEBU_XFORML@@K@Z.c)
 * Callees:
 *     ?bIsZero@EFLOAT@@QEBAHXZ @ 0x140108968 (-bIsZero@EFLOAT@@QEBAHXZ.c)
 */

__int64 __fastcall bWorldMatrixInRange(struct MATRIX *a1)
{
  EFLOAT *v1; // rdx
  EFLOAT *v2; // r9
  __int64 v3; // rdx
  EFLOAT *v4; // rcx
  unsigned int v5; // r8d
  int IsZero; // eax
  float *v8; // rdx
  float *v9; // r9
  EFLOAT *v10; // r10
  EFLOAT *v11; // rcx
  EFLOAT *v12; // r9

  if ( (unsigned int)EFLOAT::bIsZero((struct MATRIX *)((char *)a1 + 4)) && (unsigned int)EFLOAT::bIsZero(v2) )
  {
    if ( !(unsigned int)EFLOAT::bIsZero(v1) )
    {
      v4 = (EFLOAT *)(v3 + 12);
      goto LABEL_5;
    }
    return 0;
  }
  IsZero = EFLOAT::bIsZero(v1);
  v11 = (EFLOAT *)(v8 + 3);
  if ( !IsZero || !(unsigned int)EFLOAT::bIsZero(v11) )
  {
    if ( (float)((float)(*v8 * *(float *)v11) - (float)(*(float *)v10 * *v9)) != 0.0 )
      return v5;
    return 0;
  }
  if ( (unsigned int)EFLOAT::bIsZero(v10) )
    return 0;
  v4 = v12;
LABEL_5:
  if ( (unsigned int)EFLOAT::bIsZero(v4) )
    return 0;
  return v5;
}
