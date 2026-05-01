/*
 * XREFs of ??1CClassicWindow@@MEAA@XZ @ 0x1801A7C3C
 * Callers:
 *     ??_GCClassicWindow@@MEAAPEAXI@Z @ 0x1801A7C00 (--_GCClassicWindow@@MEAAPEAXI@Z.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CClassicWindow::~CClassicWindow(CClassicWindow *this)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  void *v4; // rcx
  __int64 v5; // rcx

  *(_QWORD *)this = &CClassicWindow::`vftable';
  v2 = *((_QWORD *)this + 10);
  if ( v2 )
  {
    *((_QWORD *)this + 10) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
  v3 = *((_QWORD *)this + 8);
  if ( v3 )
  {
    *((_QWORD *)this + 8) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  }
  v4 = (void *)*((_QWORD *)this + 5);
  if ( v4 )
  {
    CoTaskMemFree(v4);
    *((_QWORD *)this + 5) = 0LL;
  }
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  v5 = *((_QWORD *)this + 3);
  if ( v5 )
  {
    *((_QWORD *)this + 3) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  *((_DWORD *)this + 3) = -1073741823;
}
