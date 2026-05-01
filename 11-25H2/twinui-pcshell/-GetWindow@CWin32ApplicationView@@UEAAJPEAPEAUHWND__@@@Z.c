/*
 * XREFs of ?GetWindow@CWin32ApplicationView@@UEAAJPEAPEAUHWND__@@@Z @ 0x180082AA0
 * Callers:
 *     _lambda_f58beaf1c957ff853694186b2dae5080_::operator() @ 0x18030EAEC (_lambda_f58beaf1c957ff853694186b2dae5080_--operator().c)
 *     ShellPositionerHelpers::Details::ShellPositionerCallback__lambda_4cc743d1a7d2ab9cdba1fde245759aa2___::Invoke @ 0x18030F8F0 (ShellPositionerHelpers--Details--ShellPositionerCallback__lambda_4cc743d1a7d2ab9cdb_ea_18030F8F0.c)
 *     ?IsMirrored@CWin32ApplicationView@@UEAAJPEAH@Z @ 0x18030F9E0 (-IsMirrored@CWin32ApplicationView@@UEAAJPEAH@Z.c)
 *     ?SetViewState@CWin32ApplicationView@@UEAAJI@Z @ 0x180310160 (-SetViewState@CWin32ApplicationView@@UEAAJI@Z.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CWin32ApplicationView::GetWindow(CWin32ApplicationView *this, HWND *a2)
{
  *a2 = (HWND)(*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 8) + 24LL))(*((_QWORD *)this + 8));
  return 0LL;
}
