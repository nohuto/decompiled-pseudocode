/*
 * XREFs of ?SetTransform@CMagnifierRenderTargetProxy@@QEAAJPEBVCMatrixTransformProxy@@@Z @ 0x1800BB73C
 * Callers:
 *     ?Initialize@CMagnifier@@AEAAJXZ @ 0x1800B9FA4 (-Initialize@CMagnifier@@AEAAJXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CMagnifierRenderTargetProxy::SetTransform(
        CMagnifierRenderTargetProxy *this,
        const struct CMatrixTransformProxy *a2)
{
  __int64 v2; // r8

  v2 = 0LL;
  if ( a2 )
    v2 = *((unsigned int *)a2 + 6);
  return (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(**((_QWORD **)this + 2) + 312LL))(
           *((_QWORD *)this + 2),
           *((unsigned int *)this + 6),
           v2);
}
