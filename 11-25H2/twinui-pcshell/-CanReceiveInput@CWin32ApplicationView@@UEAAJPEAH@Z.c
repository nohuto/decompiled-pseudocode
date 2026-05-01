/*
 * XREFs of ?CanReceiveInput@CWin32ApplicationView@@UEAAJPEAH@Z @ 0x1801F3220
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CWin32ApplicationView::CanReceiveInput(CWin32ApplicationView *this, int *a2)
{
  HWND v3; // rax

  v3 = (HWND)(*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 27) + 24LL))(*((_QWORD *)this + 27));
  *a2 = IsWindowEnabled(v3);
  return 0LL;
}
