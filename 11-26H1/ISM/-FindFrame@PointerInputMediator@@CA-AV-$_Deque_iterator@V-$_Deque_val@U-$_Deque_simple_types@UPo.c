/*
 * XREFs of ?FindFrame@PointerInputMediator@@CA?AV?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@UPointerFrame@PointerInputMediator@@@std@@@std@@@std@@I@Z @ 0x180062858
 * Callers:
 *     ?OnForwardedToGestureTargeting@PointerInputMediator@@SAXPEBU_MIT_INPUT_INTEROP_MESSAGE@@@Z @ 0x180011888 (-OnForwardedToGestureTargeting@PointerInputMediator@@SAXPEBU_MIT_INPUT_INTEROP_MESSAGE@@@Z.c)
 * Callees:
 *     ??D?$_Deque_unchecked_iterator@V?$_Deque_val@U?$_Deque_simple_types@UPointerFrame@PointerInputMediator@@@std@@@std@@@std@@QEBAAEAUPointerFrame@PointerInputMediator@@XZ @ 0x1800628F0 (--D-$_Deque_unchecked_iterator@V-$_Deque_val@U-$_Deque_simple_types@UPointerFrame@PointerInputMe.c)
 *     MicrosoftTelemetryAssertTriggeredArgs @ 0x18008B328 (MicrosoftTelemetryAssertTriggeredArgs.c)
 */

__int64 *__fastcall PointerInputMediator::FindFrame(__int64 *a1, int a2)
{
  __int64 v2; // r9
  __int64 v5; // r10
  __int64 v6; // r11
  __int64 v7; // rax
  _QWORD v9[3]; // [rsp+20h] [rbp-18h] BYREF

  v2 = qword_180253F40;
  v5 = PointerInputMediator::s_frameQueue;
  v6 = qword_180253F40 + qword_180253F48;
  if ( PointerInputMediator::s_frameQueue )
    v7 = *(_QWORD *)PointerInputMediator::s_frameQueue;
  else
    v7 = 0LL;
  v9[0] = v7;
  while ( 1 )
  {
    v9[1] = v2;
    if ( v2 == v6
      || *(_DWORD *)std::_Deque_unchecked_iterator<std::_Deque_val<std::_Deque_simple_types<PointerInputMediator::PointerFrame>>>::operator*(v9) == a2 )
    {
      break;
    }
    ++v2;
  }
  a1[1] = 0LL;
  *a1 = v5;
  a1[2] = v2;
  if ( v2 == v6 )
    MicrosoftTelemetryAssertTriggeredArgs(a1, 131076LL, 100LL);
  return a1;
}
