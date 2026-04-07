/*
 * XREFs of ?OnAnimationClockChanged@CAnimationClockCoordinator@@EEAAXU_GUID@@W4AnimationClockState@@@Z @ 0x18004FEB0
 * Callers:
 *     <none>
 * Callees:
 *     ?_ClearExpiredAnimationClocks@CAnimationClockCoordinator@@AEAAJXZ @ 0x1800508EC (-_ClearExpiredAnimationClocks@CAnimationClockCoordinator@@AEAAJXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CAnimationClockCoordinator::OnAnimationClockChanged(__int64 a1, __int128 *a2, unsigned int a3)
{
  struct _RTL_CRITICAL_SECTION *v3; // rbx
  void (__fastcall ***v7)(_QWORD, __int128 *, _QWORD); // r14
  void (__fastcall *v8)(_QWORD, __int128 *, _QWORD); // rax
  __int128 v9; // [rsp+20h] [rbp-18h] BYREF

  v3 = (struct _RTL_CRITICAL_SECTION *)(a1 + 8);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 8));
  v7 = *(void (__fastcall ****)(_QWORD, __int128 *, _QWORD))(a1 + 48);
  if ( v3 )
    LeaveCriticalSection(v3);
  v8 = **v7;
  v9 = *a2;
  v8(v7, &v9, a3);
  if ( a3 == 7 )
  {
    EnterCriticalSection(v3);
    CAnimationClockCoordinator::_ClearExpiredAnimationClocks((CAnimationClockCoordinator *)a1);
    if ( v3 )
      LeaveCriticalSection(v3);
  }
}
