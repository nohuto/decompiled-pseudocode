/*
 * XREFs of _winrt::Windows::Internal::Shell::implementation::TabProxyWindow::SetWindowIconAsync$_ResumeCoro$1_::_1_::dtor$12 @ 0x1806CDDF6
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr@UISnapComponent@@@winrt@@QEAA@XZ @ 0x180066C0C (--1-$com_ptr@UISnapComponent@@@winrt@@QEAA@XZ.c)
 */

__int64 __fastcall winrt::Windows::Internal::Shell::implementation::TabProxyWindow::SetWindowIconAsync__ResumeCoro_1_::_1_::dtor_12(
        __int64 a1,
        __int64 a2)
{
  *(_QWORD *)(a2 + 192) = *(_QWORD *)(a2 + 304) + 256LL;
  return winrt::com_ptr<ISnapComponent>::~com_ptr<ISnapComponent>(*(__int64 **)(a2 + 192));
}
