/*
 * XREFs of ?UpdatePrimitives@CAnimationProxy@@QEAAJPEBUDwmAnimationPrimitive@@I@Z @ 0x1800891C4
 * Callers:
 *     ?_EnsureResources@CAnimationResource@@IEAAJXZ @ 0x1800506C0 (-_EnsureResources@CAnimationResource@@IEAAJXZ.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CAnimationProxy::UpdatePrimitives(
        CAnimationProxy *this,
        const struct DwmAnimationPrimitive *a2,
        unsigned int a3)
{
  return (*(__int64 (__fastcall **)(_QWORD, _QWORD, const struct DwmAnimationPrimitive *, _QWORD))(**((_QWORD **)this + 2)
                                                                                                 + 392LL))(
           *((_QWORD *)this + 2),
           *((unsigned int *)this + 6),
           a2,
           a3);
}
