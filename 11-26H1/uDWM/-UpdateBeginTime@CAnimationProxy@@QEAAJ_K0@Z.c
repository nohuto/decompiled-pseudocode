/*
 * XREFs of ?UpdateBeginTime@CAnimationProxy@@QEAAJ_K0@Z @ 0x180099D18
 * Callers:
 *     ?_EnsureResources@CAnimationResource@@IEAAJXZ @ 0x1800506C0 (-_EnsureResources@CAnimationResource@@IEAAJXZ.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CAnimationProxy::UpdateBeginTime(CAnimationProxy *this, __int64 a2)
{
  return (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, _QWORD))(**((_QWORD **)this + 2) + 384LL))(
           *((_QWORD *)this + 2),
           *((unsigned int *)this + 6),
           a2,
           0LL);
}
