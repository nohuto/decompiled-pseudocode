/*
 * XREFs of ?HandleActivationRequested@WindowWrapperBase@@UEAAXXZ @ 0x1804304E0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall WindowWrapperBase::HandleActivationRequested(WindowWrapperBase *this)
{
  (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 33) + 216LL))(*((_QWORD *)this + 33));
  (*(void (__fastcall **)(char *))(*((_QWORD *)this - 2) + 240LL))((char *)this - 16);
}
