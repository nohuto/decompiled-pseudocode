/*
 * XREFs of ?DoTerminateADG@CAudioDGProcess@@AEAAJXZ @ 0x1800AF45C
 * Callers:
 *     ?OnADGInactivityTimerFired@CAudioDGProcess@@AEAAXXZ @ 0x180080A30 (-OnADGInactivityTimerFired@CAudioDGProcess@@AEAAXXZ.c)
 *     ?Terminate@CAudioSrv@@UEAAXXZ @ 0x1800DAA10 (-Terminate@CAudioSrv@@UEAAXXZ.c)
 * Callees:
 *     ?DoShutdownADG@CAudioDGProcess@@AEAAJXZ @ 0x180067D0C (-DoShutdownADG@CAudioDGProcess@@AEAAJXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAudioDGProcess::DoTerminateADG(CAudioDGProcess *this)
{
  struct _RTL_CRITICAL_SECTION *v2; // rbx
  __int64 v3; // rcx
  unsigned int v4; // edi

  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 48);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 48));
  v3 = *((_QWORD *)this + 19);
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(v3);
  v4 = CAudioDGProcess::DoShutdownADG(this);
  if ( v2 )
    LeaveCriticalSection(v2);
  return v4;
}
