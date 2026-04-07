/*
 * XREFs of _winrt::Udwm::Transitions::Private::implementation::WindowMoveResizeCrossfadeTransition::PostTransition_::_1_::dtor$5 @ 0x1800EBEC6
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr@UIUserResizeVisualNative@@@winrt@@QEAA@XZ @ 0x1800617C0 (--1-$com_ptr@UIUserResizeVisualNative@@@winrt@@QEAA@XZ.c)
 */

__int64 __fastcall winrt::Udwm::Transitions::Private::implementation::WindowMoveResizeCrossfadeTransition::PostTransition_::_1_::dtor_5(
        __int64 a1,
        __int64 a2)
{
  __int64 result; // rax

  result = *(_DWORD *)(a2 + 176) & 4;
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 176) &= ~4u;
    return winrt::com_ptr<IUserResizeVisualNative>::~com_ptr<IUserResizeVisualNative>((__int64 *)(a2 + 184));
  }
  return result;
}
