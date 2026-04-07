/*
 * XREFs of ?Initialize@CAnimationClock@@QEAAJU_GUID@@K@Z @ 0x18003F77C
 * Callers:
 *     ?OnCreateAnimationClock@CAnimationClockCoordinator@@QEAAJU_GUID@@K@Z @ 0x18003F510 (-OnCreateAnimationClock@CAnimationClockCoordinator@@QEAAJU_GUID@@K@Z.c)
 * Callees:
 *     ?_SetState@CAnimationClock@@AEAAJW4AnimationClockState@@@Z @ 0x180024AB0 (-_SetState@CAnimationClock@@AEAAJW4AnimationClockState@@@Z.c)
 *     memcmp_0 @ 0x18008EF18 (memcmp_0.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAnimationClock::Initialize(CAnimationClock *this, struct _GUID *a2, int a3)
{
  struct _RTL_CRITICAL_SECTION *v6; // rdi
  __int64 v7; // rax
  unsigned int v8; // ebx

  v6 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 24);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 24));
  v7 = *((_QWORD *)this + 15) - *(_QWORD *)&GUID_NULL.Data1;
  if ( !v7 )
    v7 = *((_QWORD *)this + 16) - *(_QWORD *)GUID_NULL.Data4;
  if ( v7 )
  {
    v8 = -2147023649;
  }
  else if ( !memcmp_0(a2, &GUID_NULL, 0x10uLL) || (unsigned int)(a3 - 10001) <= 0xFFFFD8ED )
  {
    v8 = -2147024809;
  }
  else
  {
    *(struct _GUID *)((char *)this + 120) = *a2;
    *((_DWORD *)this + 34) = a3;
    v8 = CAnimationClock::_SetState((__int64)this, 1u);
  }
  if ( v6 )
    LeaveCriticalSection(v6);
  return v8;
}
