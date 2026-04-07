/*
 * XREFs of ?UpdatePrimitives@CAnimationProxy@@QEAAJPEBUDwmAnimationPrimitive@@I@Z @ 0x1800966B8
 * Callers:
 *     ?_EnsureResources@CAnimationResource@@IEAAJXZ @ 0x180035C94 (-_EnsureResources@CAnimationResource@@IEAAJXZ.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CAnimationProxy::UpdatePrimitives(
        CAnimationProxy *this,
        const struct DwmAnimationPrimitive *a2,
        unsigned int a3)
{
  return (*(__int64 (__fastcall **)(_QWORD, _QWORD, const struct DwmAnimationPrimitive *, _QWORD))(**(_QWORD **)(*((_QWORD *)this + 2) + 16LL)
                                                                                                 + 472LL))(
           *(_QWORD *)(*((_QWORD *)this + 2) + 16LL),
           *(unsigned int *)(*((_QWORD *)this + 2) + 24LL),
           a2,
           a3);
}
