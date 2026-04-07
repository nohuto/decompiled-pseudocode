/*
 * XREFs of ?SetTrigger@CAnimationProxy@@QEAAJPEAVCAnimationTriggerProxy@@@Z @ 0x1800A734C
 * Callers:
 *     ?_EnsureResources@CAnimationResource@@IEAAJXZ @ 0x180035C94 (-_EnsureResources@CAnimationResource@@IEAAJXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CAnimationProxy::SetTrigger(CAnimationProxy *this, struct CAnimationTriggerProxy *a2)
{
  return (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(**(_QWORD **)(*((_QWORD *)this + 2) + 16LL) + 480LL))(
           *(_QWORD *)(*((_QWORD *)this + 2) + 16LL),
           *(unsigned int *)(*((_QWORD *)this + 2) + 24LL),
           *(unsigned int *)(*((_QWORD *)a2 + 2) + 24LL));
}
