/*
 * XREFs of ?OnTimerTick@CAnimationClock@@EEAAXXZ @ 0x18007CF50
 * Callers:
 *     <none>
 * Callees:
 *     ?AddRef@CMILRefCountBase@@UEAAKXZ @ 0x180008530 (-AddRef@CMILRefCountBase@@UEAAKXZ.c)
 *     ?_OnTimerCallback@CAnimationClock@@AEAAXXZ @ 0x18007CFB4 (-_OnTimerCallback@CAnimationClock@@AEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CAnimationClock::OnTimerTick(CAnimationClock *this)
{
  struct _RTL_CRITICAL_SECTION *v1; // rbx
  CAnimationClock *v2; // rdi

  v1 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 8);
  v2 = (CAnimationClock *)((char *)this - 16);
  CMILRefCountBase::AddRef((CAnimationClock *)((char *)this - 16));
  EnterCriticalSection(v1);
  CAnimationClock::_OnTimerCallback(v2);
  if ( v1 )
    LeaveCriticalSection(v1);
  CBaseObject::Release(v2);
}
