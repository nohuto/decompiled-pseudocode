/*
 * XREFs of ?Update@CMatrixTransform3dProxy@@QEAAJAEBU_D3DMATRIX@@@Z @ 0x1800BB9FC
 * Callers:
 *     ?_Update3DResources@CAnimatedTransitionVisual@@IEAAJXZ @ 0x1800974E4 (-_Update3DResources@CAnimatedTransitionVisual@@IEAAJXZ.c)
 *     ?_UpdateAnimated3DResources@CAnimatedTransitionVisual@@IEAAJXZ @ 0x180097910 (-_UpdateAnimated3DResources@CAnimatedTransitionVisual@@IEAAJXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CMatrixTransform3dProxy::Update(CMatrixTransform3dProxy *this, const struct _D3DMATRIX *a2)
{
  return (*(__int64 (__fastcall **)(_QWORD, _QWORD, const struct _D3DMATRIX *))(**((_QWORD **)this + 2) + 424LL))(
           *((_QWORD *)this + 2),
           *((unsigned int *)this + 6),
           a2);
}
