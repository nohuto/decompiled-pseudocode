/*
 * XREFs of ?_OnTimerTick@CTimer@@AEAAXXZ @ 0x18006CA20
 * Callers:
 *     ?s_TimerTickProc@CTimer@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z @ 0x18006C9E0 (-s_TimerTickProc@CTimer@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z.c)
 * Callees:
 *     ?_OnTimerCallback@CTimer@@AEAAXXZ @ 0x18006CA84 (-_OnTimerCallback@CTimer@@AEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CTimer::_OnTimerTick(CTimer *this)
{
  struct _RTL_CRITICAL_SECTION *v2; // rdi

  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 16);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 16));
  *((_DWORD *)this + 18) = GetCurrentThreadId();
  CTimer::_OnTimerCallback(this);
  if ( v2 )
    LeaveCriticalSection(v2);
}
