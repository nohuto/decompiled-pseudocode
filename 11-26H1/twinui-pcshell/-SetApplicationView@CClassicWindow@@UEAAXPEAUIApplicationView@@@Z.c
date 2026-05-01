/*
 * XREFs of ?SetApplicationView@CClassicWindow@@UEAAXPEAUIApplicationView@@@Z @ 0x180190960
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CClassicWindow::SetApplicationView(CClassicWindow *this, struct IApplicationView *a2)
{
  __int64 v4; // rcx

  if ( *((struct IApplicationView **)this + 10) != a2 )
  {
    if ( a2 )
      (*(void (__fastcall **)(struct IApplicationView *))(*(_QWORD *)a2 + 8LL))(a2);
    v4 = *((_QWORD *)this + 10);
    *((_QWORD *)this + 10) = a2;
    if ( v4 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
}
