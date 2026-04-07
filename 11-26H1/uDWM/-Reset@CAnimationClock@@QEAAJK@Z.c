/*
 * XREFs of ?Reset@CAnimationClock@@QEAAJK@Z @ 0x18008C1EC
 * Callers:
 *     ?OnCreateAnimationClock@CAnimationClockCoordinator@@QEAAJU_GUID@@K@Z @ 0x18003F510 (-OnCreateAnimationClock@CAnimationClockCoordinator@@QEAAJU_GUID@@K@Z.c)
 * Callees:
 *     ?_SetState@CAnimationClock@@AEAAJW4AnimationClockState@@@Z @ 0x180024AB0 (-_SetState@CAnimationClock@@AEAAJW4AnimationClockState@@@Z.c)
 *     ?_SetTimer@CAnimationClock@@AEAAJK@Z @ 0x180026998 (-_SetTimer@CAnimationClock@@AEAAJK@Z.c)
 *     ?IsSet@CTimer@@QEAA_NXZ @ 0x180026A68 (-IsSet@CTimer@@QEAA_NXZ.c)
 *     ?Cancel@CTimer@@QEAAJXZ @ 0x180026AD8 (-Cancel@CTimer@@QEAAJXZ.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x18004ABD0 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAnimationClock::Reset(CAnimationClock *this, unsigned int a2)
{
  int v4; // edi
  int v5; // eax
  __int64 v6; // rcx
  struct _RTL_CRITICAL_SECTION *v8; // [rsp+40h] [rbp+18h] BYREF

  v4 = -2147024809;
  if ( a2 - 10001 > 0xFFFFD8ED )
  {
    v8 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 24);
    EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 24));
    if ( *((_DWORD *)this + 20) == 5 || *((_DWORD *)this + 20) == 6 )
    {
      v6 = *((_QWORD *)this + 13);
      if ( v6 )
      {
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
        *((_QWORD *)this + 13) = 0LL;
      }
      *((_DWORD *)this + 34) = a2;
      *(_QWORD *)((char *)this + 140) = 0LL;
      *((_QWORD *)this + 11) = 0LL;
      *((_QWORD *)this + 12) = 0LL;
      if ( CTimer::IsSet(*((CTimer **)this + 8)) )
      {
        v4 = CTimer::Cancel(*((CTimer **)this + 8));
        if ( v4 < 0 )
          goto LABEL_15;
      }
      v5 = CAnimationClock::_SetState((__int64)this, 1u);
    }
    else
    {
      if ( *((_DWORD *)this + 20) != 1 || a2 == -1 || *((_DWORD *)this + 34) != -1 )
      {
        v4 = -2147019873;
LABEL_15:
        CGuard<CDwmCS>::~CGuard<CDwmCS>(&v8);
        return (unsigned int)v4;
      }
      *((_DWORD *)this + 34) = a2;
      v5 = CAnimationClock::_SetTimer(this, a2);
    }
    v4 = v5;
    goto LABEL_15;
  }
  return (unsigned int)v4;
}
