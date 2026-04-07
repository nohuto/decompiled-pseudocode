/*
 * XREFs of ?Update@CScaleTransformProxy@@QEAAJNNNN@Z @ 0x18006D520
 * Callers:
 *     ?EmitBindingCommands@CAnimatedTransitionVisual@@UEAAJXZ @ 0x18004F520 (-EmitBindingCommands@CAnimatedTransitionVisual@@UEAAJXZ.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CScaleTransformProxy::Update(CScaleTransformProxy *this, double a2, double a3, double a4)
{
  return (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 2) + 456LL))(
           *((_QWORD *)this + 2),
           *((unsigned int *)this + 6));
}
