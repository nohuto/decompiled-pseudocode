/*
 * XREFs of ?HandleActivationRequested@UwpWindowWrapperBase@@UEAAXXZ @ 0x180206CD0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall UwpWindowWrapperBase::HandleActivationRequested(UwpWindowWrapperBase *this)
{
  char *v1; // rbx

  v1 = (char *)this - 16;
  (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 33) + 224LL))(*((_QWORD *)this + 33));
  (*(void (__fastcall **)(char *))(*(_QWORD *)v1 + 256LL))(v1);
}
