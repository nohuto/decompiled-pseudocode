/*
 * XREFs of ?IsSet@CTimer@@QEAA_NXZ @ 0x18004D328
 * Callers:
 *     ?_SetTimer@CAnimationClock@@AEAAJK@Z @ 0x18004D214 (-_SetTimer@CAnimationClock@@AEAAJK@Z.c)
 *     ?Reset@CAnimationClock@@QEAAJK@Z @ 0x180098B18 (-Reset@CAnimationClock@@QEAAJK@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall CTimer::IsSet(CTimer *this)
{
  struct _RTL_CRITICAL_SECTION *v1; // rdi
  BOOL v3; // eax
  char v4; // bl

  v1 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 16);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 16));
  if ( !*((_QWORD *)this + 7) || (v3 = IsThreadpoolTimerSet(*((PTP_TIMER *)this + 7)), v4 = 1, !v3) )
    v4 = 0;
  if ( v1 )
    LeaveCriticalSection(v1);
  return v4;
}
