/*
 * XREFs of ?OnTimerTick@CAnimationClock@@EEAAXXZ @ 0x18006E5C0
 * Callers:
 *     <none>
 * Callees:
 *     ?AddRef@CBaseObject@@QEAAKXZ @ 0x18001C65C (-AddRef@CBaseObject@@QEAAKXZ.c)
 *     ?_OnTimerCallback@CAnimationClock@@AEAAXXZ @ 0x18006E624 (-_OnTimerCallback@CAnimationClock@@AEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CAnimationClock::OnTimerTick(CAnimationClock *this)
{
  struct _RTL_CRITICAL_SECTION *v1; // rbx
  CAnimationClock *v2; // rdi

  v1 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 8);
  v2 = (CAnimationClock *)((char *)this - 16);
  CBaseObject::AddRef((CAnimationClock *)((char *)this - 16));
  EnterCriticalSection(v1);
  CAnimationClock::_OnTimerCallback(v2);
  if ( v1 )
    LeaveCriticalSection(v1);
  CBaseObject::Release(v2);
}
