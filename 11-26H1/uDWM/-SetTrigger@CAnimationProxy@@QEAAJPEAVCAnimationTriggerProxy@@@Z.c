/*
 * XREFs of ?SetTrigger@CAnimationProxy@@QEAAJPEAVCAnimationTriggerProxy@@@Z @ 0x180099CF4
 * Callers:
 *     ?_EnsureResources@CAnimationResource@@IEAAJXZ @ 0x1800506C0 (-_EnsureResources@CAnimationResource@@IEAAJXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CAnimationProxy::SetTrigger(CAnimationProxy *this, struct CAnimationTriggerProxy *a2)
{
  return (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(**((_QWORD **)this + 2) + 400LL))(
           *((_QWORD *)this + 2),
           *((unsigned int *)this + 6),
           *((unsigned int *)a2 + 6));
}
