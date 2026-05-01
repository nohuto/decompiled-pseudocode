/*
 * XREFs of ?GetWindowRole@CWin32ApplicationView@@UEAAJPEAW4APPLICATION_VIEW_ROLE@@@Z @ 0x18028DB60
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CWin32ApplicationView::GetWindowRole(CWin32ApplicationView *this, enum APPLICATION_VIEW_ROLE *a2)
{
  *(_DWORD *)a2 = 0;
  if ( ((*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 8) + 80LL))(*((_QWORD *)this + 8)) & 1) != 0 )
    *(_DWORD *)a2 = 1;
  return 0LL;
}
