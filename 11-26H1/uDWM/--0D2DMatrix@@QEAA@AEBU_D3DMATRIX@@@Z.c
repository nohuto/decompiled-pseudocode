/*
 * XREFs of ??0D2DMatrix@@QEAA@AEBU_D3DMATRIX@@@Z @ 0x1800E5AAC
 * Callers:
 *     ?_Update3DResources@CAnimatedTransitionVisual@@IEAAJXZ @ 0x1800974E4 (-_Update3DResources@CAnimatedTransitionVisual@@IEAAJXZ.c)
 * Callees:
 *     <none>
 */

D2DMatrix *__fastcall D2DMatrix::D2DMatrix(D2DMatrix *this, const struct _D3DMATRIX *a2)
{
  D2DMatrix *result; // rax
  __int128 v3; // xmm1
  __int128 v4; // xmm0
  __int128 v5; // xmm1

  result = this;
  v3 = *(_OWORD *)&a2->_21;
  *(_OWORD *)this = *(_OWORD *)&a2->_11;
  v4 = *(_OWORD *)&a2->_31;
  *((_OWORD *)this + 1) = v3;
  v5 = *(_OWORD *)&a2->_41;
  *((_OWORD *)this + 2) = v4;
  *((_OWORD *)this + 3) = v5;
  return result;
}
