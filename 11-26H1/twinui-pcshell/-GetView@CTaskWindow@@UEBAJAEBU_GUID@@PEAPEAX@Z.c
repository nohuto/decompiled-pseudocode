/*
 * XREFs of ?GetView@CTaskWindow@@UEBAJAEBU_GUID@@PEAPEAX@Z @ 0x1801D9930
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CTaskWindow::GetView(CTaskWindow *this, const struct _GUID *a2, void **a3)
{
  __int64 (__fastcall ***v3)(_QWORD, const struct _GUID *, void **); // rcx

  v3 = (__int64 (__fastcall ***)(_QWORD, const struct _GUID *, void **))*((_QWORD *)this + 6);
  if ( v3 )
    return (**v3)(v3, a2, a3);
  else
    return 2147943568LL;
}
