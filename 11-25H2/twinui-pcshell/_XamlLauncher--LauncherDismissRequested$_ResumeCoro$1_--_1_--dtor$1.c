/*
 * XREFs of _XamlLauncher::LauncherDismissRequested$_ResumeCoro$1_::_1_::dtor$1 @ 0x1806C5DB3
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr@VXamlLauncher@@@winrt@@QEAA@XZ @ 0x1801E72F8 (--1-$com_ptr@VXamlLauncher@@@winrt@@QEAA@XZ.c)
 */

__int64 __fastcall XamlLauncher::LauncherDismissRequested__ResumeCoro_1_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  *(_QWORD *)(a2 + 80) = *(_QWORD *)(a2 + 240) + 24LL;
  return winrt::com_ptr<XamlLauncher>::~com_ptr<XamlLauncher>(*(_QWORD **)(a2 + 80));
}
