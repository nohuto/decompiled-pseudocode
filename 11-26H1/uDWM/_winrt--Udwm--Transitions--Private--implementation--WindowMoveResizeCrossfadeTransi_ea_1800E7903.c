/*
 * XREFs of _winrt::Udwm::Transitions::Private::implementation::WindowMoveResizeCrossfadeTransition::PostTransition_::_1_::dtor$5 @ 0x1800E7903
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr@UIUserResizeVisualNative@@@winrt@@QEAA@XZ @ 0x1800305C8 (--1-$com_ptr@UIUserResizeVisualNative@@@winrt@@QEAA@XZ.c)
 */

__int64 __fastcall winrt::Udwm::Transitions::Private::implementation::WindowMoveResizeCrossfadeTransition::PostTransition_::_1_::dtor_5(
        __int64 a1,
        __int64 a2)
{
  __int64 result; // rax

  result = *(_DWORD *)(a2 + 208) & 4;
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 208) &= ~4u;
    return winrt::com_ptr<IUserResizeVisualNative>::~com_ptr<IUserResizeVisualNative>((_QWORD *)(a2 + 216));
  }
  return result;
}
