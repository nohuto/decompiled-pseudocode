/*
 * XREFs of ?Update@CTranslateTransformProxy@@QEAAJNN@Z @ 0x18007C52C
 * Callers:
 *     ?EmitBindingCommands@CAnimatedTransitionVisual@@UEAAJXZ @ 0x18004F520 (-EmitBindingCommands@CAnimatedTransitionVisual@@UEAAJXZ.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CTranslateTransformProxy::Update(CTranslateTransformProxy *this, double a2, double a3)
{
  return (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 2) + 448LL))(
           *((_QWORD *)this + 2),
           *((unsigned int *)this + 6));
}
