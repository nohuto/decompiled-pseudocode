/*
 * XREFs of _XamlLauncher::SearchDismissRequested$_ResumeCoro$1_::_1_::dtor$1 @ 0x1806EE17D
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr@VXamlLauncher@@@winrt@@QEAA@XZ @ 0x18018F33C (--1-$com_ptr@VXamlLauncher@@@winrt@@QEAA@XZ.c)
 */

__int64 __fastcall XamlLauncher::SearchDismissRequested__ResumeCoro_1_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  *(_QWORD *)(a2 + 64) = *(_QWORD *)(a2 + 40) + 24LL;
  return winrt::com_ptr<XamlLauncher>::~com_ptr<XamlLauncher>(*(_QWORD **)(a2 + 64));
}
