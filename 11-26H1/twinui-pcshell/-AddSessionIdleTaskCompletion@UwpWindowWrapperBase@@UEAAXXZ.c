/*
 * XREFs of ?AddSessionIdleTaskCompletion@UwpWindowWrapperBase@@UEAAXXZ @ 0x18020FB60
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall UwpWindowWrapperBase::AddSessionIdleTaskCompletion(UwpWindowWrapperBase *this)
{
  (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 33) + 224LL))(*((_QWORD *)this + 33));
  *((_DWORD *)this + 41) |= 1u;
  UwpWindowWrapperBase::ReconcileSessionIdleTaskCompletion((UwpWindowWrapperBase *)((char *)this - 16));
}
