/*
 * XREFs of ?Update@CEffectGroupProxy@@QEAAJNIPEBVCTransform3dGroupProxy@@@Z @ 0x1800056D8
 * Callers:
 *     ?SendSetOpacity@CVisual@@IEAAJN@Z @ 0x1800054B8 (-SendSetOpacity@CVisual@@IEAAJN@Z.c)
 *     ?EmitBindingCommands@CAnimatedTransitionVisual@@UEAAJXZ @ 0x18004F520 (-EmitBindingCommands@CAnimatedTransitionVisual@@UEAAJXZ.c)
 *     ?_Update3DResources@CAnimatedTransitionVisual@@IEAAJXZ @ 0x1800974E4 (-_Update3DResources@CAnimatedTransitionVisual@@IEAAJXZ.c)
 *     ?_UpdateAnimated3DResources@CAnimatedTransitionVisual@@IEAAJXZ @ 0x180097910 (-_UpdateAnimated3DResources@CAnimatedTransitionVisual@@IEAAJXZ.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CEffectGroupProxy::Update(
        CEffectGroupProxy *this,
        double a2,
        __int64 a3,
        const struct CTransform3dGroupProxy *a4)
{
  int v4; // eax

  v4 = 0;
  if ( a4 )
    v4 = *((_DWORD *)a4 + 6);
  return (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, int))(**((_QWORD **)this + 2) + 408LL))(
           *((_QWORD *)this + 2),
           *((unsigned int *)this + 6),
           *((_QWORD *)this + 2),
           0LL,
           v4);
}
