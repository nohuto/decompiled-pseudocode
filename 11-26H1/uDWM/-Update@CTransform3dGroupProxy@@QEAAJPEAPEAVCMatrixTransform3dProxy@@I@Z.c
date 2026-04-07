/*
 * XREFs of ?Update@CTransform3dGroupProxy@@QEAAJPEAPEAVCMatrixTransform3dProxy@@I@Z @ 0x1800CE024
 * Callers:
 *     ?_Update3DResources@CAnimatedTransitionVisual@@IEAAJXZ @ 0x1800974E4 (-_Update3DResources@CAnimatedTransitionVisual@@IEAAJXZ.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CTransform3dGroupProxy::Update(CTransform3dGroupProxy *this, struct CMatrixTransform3dProxy **a2)
{
  __int64 v2; // r11
  __int64 *v3; // r10
  __int64 v4; // rax
  __int64 v6; // [rsp+58h] [rbp+20h] BYREF

  v6 = 0LL;
  v2 = 2LL;
  v3 = &v6;
  do
  {
    v4 = (__int64)*a2++;
    *(_DWORD *)v3 = *(_DWORD *)(v4 + 24);
    v3 = (__int64 *)((char *)v3 + 4);
    --v2;
  }
  while ( v2 );
  return (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64 *))(**((_QWORD **)this + 2) + 432LL))(
           *((_QWORD *)this + 2),
           *((unsigned int *)this + 6),
           &v6);
}
