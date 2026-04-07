/*
 * XREFs of ?Trigger@CAnimationTriggerProxy@@QEAAJ_K@Z @ 0x18008A698
 * Callers:
 *     ?_TriggerAnimation@CAnimationClock@@AEAAJXZ @ 0x180040EC8 (-_TriggerAnimation@CAnimationClock@@AEAAJXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CAnimationTriggerProxy::Trigger(CAnimationTriggerProxy *this, __int64 a2)
{
  return (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(**((_QWORD **)this + 2) + 416LL))(
           *((_QWORD *)this + 2),
           *((unsigned int *)this + 6),
           a2);
}
