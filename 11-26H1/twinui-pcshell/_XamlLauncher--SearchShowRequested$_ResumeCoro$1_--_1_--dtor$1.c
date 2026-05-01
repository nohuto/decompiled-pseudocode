/*
 * XREFs of _XamlLauncher::SearchShowRequested$_ResumeCoro$1_::_1_::dtor$1 @ 0x1806EE312
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr@VXamlLauncher@@@winrt@@QEAA@XZ @ 0x18018F33C (--1-$com_ptr@VXamlLauncher@@@winrt@@QEAA@XZ.c)
 */

__int64 __fastcall XamlLauncher::SearchShowRequested__ResumeCoro_1_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  *(_QWORD *)(a2 + 120) = *(_QWORD *)(a2 + 40) + 24LL;
  return winrt::com_ptr<XamlLauncher>::~com_ptr<XamlLauncher>(*(_QWORD **)(a2 + 120));
}
