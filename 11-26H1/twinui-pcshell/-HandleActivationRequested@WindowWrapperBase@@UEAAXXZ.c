/*
 * XREFs of ?HandleActivationRequested@WindowWrapperBase@@UEAAXXZ @ 0x18043C820
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall WindowWrapperBase::HandleActivationRequested(WindowWrapperBase *this)
{
  char *v1; // rbx

  v1 = (char *)this - 16;
  (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 33) + 216LL))(*((_QWORD *)this + 33));
  (*(void (__fastcall **)(char *))(*(_QWORD *)v1 + 240LL))(v1);
}
