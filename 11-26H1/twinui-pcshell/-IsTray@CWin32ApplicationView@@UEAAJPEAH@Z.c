/*
 * XREFs of ?IsTray@CWin32ApplicationView@@UEAAJPEAH@Z @ 0x18030B860
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CWin32ApplicationView::IsTray(CWin32ApplicationView *this, int *a2)
{
  *a2 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 27) + 56LL))(*((_QWORD *)this + 27));
  return 0LL;
}
