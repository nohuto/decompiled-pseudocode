/*
 * XREFs of ?RemoveSessionIdleTaskCompletion@WindowWrapperBase@@UEAAXXZ @ 0x18043D940
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall WindowWrapperBase::RemoveSessionIdleTaskCompletion(WindowWrapperBase *this)
{
  (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 33) + 216LL))(*((_QWORD *)this + 33));
  *((_DWORD *)this + 41) &= ~1u;
  WindowWrapperBase::ReconcileSessionIdleTaskCompletion((WindowWrapperBase *)((char *)this - 16));
}
