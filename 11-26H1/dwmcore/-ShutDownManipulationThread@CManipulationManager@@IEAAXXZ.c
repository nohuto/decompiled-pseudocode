/*
 * XREFs of ?ShutDownManipulationThread@CManipulationManager@@IEAAXXZ @ 0x180226358
 * Callers:
 *     ??1CGlobalManipulationManager@@EEAA@XZ @ 0x180294708 (--1CGlobalManipulationManager@@EEAA@XZ.c)
 * Callees:
 *     ?ClearWaitHandles@CManipulationManager@@KAXXZ @ 0x180225824 (-ClearWaitHandles@CManipulationManager@@KAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CManipulationManager::ShutDownManipulationThread(CManipulationManager *this)
{
  void *v2; // rcx

  (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*((_QWORD *)this + 2) + 5680LL) + 168LL))(
    *(_QWORD *)(*((_QWORD *)this + 2) + 5680LL),
    *((_QWORD *)this + 7));
  (*(void (__fastcall **)(_QWORD, _QWORD, __int64))(**((_QWORD **)this + 3) + 160LL))(
    *((_QWORD *)this + 3),
    *((_QWORD *)this + 4),
    1LL);
  (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 3) + 240LL))(*((_QWORD *)this + 3));
  v2 = (void *)*((_QWORD *)this + 18);
  *((_BYTE *)this + 152) = 1;
  if ( v2 )
  {
    WaitForSingleObject(v2, 0xFFFFFFFF);
    CManipulationManager::ClearWaitHandles();
    CloseHandle(*((HANDLE *)this + 18));
    *((_QWORD *)this + 18) = 0LL;
    _InterlockedExchange(&CManipulationManager::s_bManipThreadInitialized, 0);
  }
  CManipulationManager::ReleasePendingReferences(this);
}
