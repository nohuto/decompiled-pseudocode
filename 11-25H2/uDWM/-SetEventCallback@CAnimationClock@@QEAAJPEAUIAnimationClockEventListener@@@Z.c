/*
 * XREFs of ?SetEventCallback@CAnimationClock@@QEAAJPEAUIAnimationClockEventListener@@@Z @ 0x180050820
 * Callers:
 *     ?OnCreateAnimationClock@CAnimationClockCoordinator@@QEAAJU_GUID@@K@Z @ 0x180050374 (-OnCreateAnimationClock@CAnimationClockCoordinator@@QEAAJU_GUID@@K@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CAnimationClock::SetEventCallback(CAnimationClock *this, struct IAnimationClockEventListener *a2)
{
  struct _RTL_CRITICAL_SECTION *v2; // rbx
  unsigned int v5; // edi

  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 24);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 24));
  v5 = -2147019873;
  if ( !*((_QWORD *)this + 9) || !a2 )
  {
    *((_QWORD *)this + 9) = a2;
    v5 = 0;
  }
  if ( v2 )
    LeaveCriticalSection(v2);
  return v5;
}
