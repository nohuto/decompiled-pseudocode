/*
 * XREFs of ?Cancel@CTimer@@QEAAJXZ @ 0x180026AD8
 * Callers:
 *     ?_SetTimer@CAnimationClock@@AEAAJK@Z @ 0x180026998 (-_SetTimer@CAnimationClock@@AEAAJK@Z.c)
 *     ?Reset@CAnimationClock@@QEAAJK@Z @ 0x18008C1EC (-Reset@CAnimationClock@@QEAAJK@Z.c)
 * Callees:
 *     ?_DestroyThreadPoolTimer@CTimer@@AEAAX_N@Z @ 0x18006CE2C (-_DestroyThreadPoolTimer@CTimer@@AEAAX_N@Z.c)
 */

__int64 __fastcall CTimer::Cancel(CTimer *this)
{
  struct _RTL_CRITICAL_SECTION *v1; // rbx
  unsigned int v3; // edi

  v1 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 16);
  v3 = 0;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 16));
  if ( *((_QWORD *)this + 7) )
    CTimer::_DestroyThreadPoolTimer(this, 0);
  else
    v3 = -2147019873;
  if ( v1 )
    LeaveCriticalSection(v1);
  return v3;
}
