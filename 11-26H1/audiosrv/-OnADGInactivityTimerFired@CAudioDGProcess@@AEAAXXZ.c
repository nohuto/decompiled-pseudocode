/*
 * XREFs of ?OnADGInactivityTimerFired@CAudioDGProcess@@AEAAXXZ @ 0x180080A30
 * Callers:
 *     ?OnADGInactivityTimerFiredHandler@CAudioDGProcess@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z @ 0x180080A20 (-OnADGInactivityTimerFiredHandler@CAudioDGProcess@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIM.c)
 * Callees:
 *     ?DoTerminateADG@CAudioDGProcess@@AEAAJXZ @ 0x1800AF45C (-DoTerminateADG@CAudioDGProcess@@AEAAJXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CAudioDGProcess::OnADGInactivityTimerFired(CAudioDGProcess *this)
{
  struct _RTL_CRITICAL_SECTION *v2; // rbx
  void (__fastcall ***v3)(_QWORD, _QWORD); // rcx

  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 48);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 48));
  if ( *((_QWORD *)this + 11) )
  {
    if ( *((_QWORD *)this + 11) != -1LL )
    {
      CAudioDGProcess::DoTerminateADG(this);
      v3 = (void (__fastcall ***)(_QWORD, _QWORD))*((_QWORD *)this + 19);
      if ( v3 )
        (**v3)(v3, 0LL);
    }
  }
  if ( v2 )
    LeaveCriticalSection(v2);
}
