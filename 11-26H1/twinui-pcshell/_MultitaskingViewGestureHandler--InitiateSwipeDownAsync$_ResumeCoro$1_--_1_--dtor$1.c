/*
 * XREFs of _MultitaskingViewGestureHandler::InitiateSwipeDownAsync$_ResumeCoro$1_::_1_::dtor$1 @ 0x1806EFDB8
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr@UISnapComponent@@@winrt@@QEAA@XZ @ 0x1800252D4 (--1-$com_ptr@UISnapComponent@@@winrt@@QEAA@XZ.c)
 */

__int64 __fastcall MultitaskingViewGestureHandler::InitiateSwipeDownAsync__ResumeCoro_1_::_1_::dtor_1(
        __int64 a1,
        __int64 a2)
{
  *(_QWORD *)(a2 + 112) = *(_QWORD *)(a2 + 80) + 24LL;
  return winrt::com_ptr<ISnapComponent>::~com_ptr<ISnapComponent>(*(_QWORD **)(a2 + 112));
}
