/*
 * XREFs of ?UpdateDeviceDimensions@MultitaskingViewGestureHandler@@AEAAJI@Z @ 0x180132E6C
 * Callers:
 *     ?StartSwipe@MultitaskingViewGestureHandler@@UEAAJHHIUTOUCHPAD_GESTURE_CONTEXT@@@Z @ 0x180132B50 (-StartSwipe@MultitaskingViewGestureHandler@@UEAAJHHIUTOUCHPAD_GESTURE_CONTEXT@@@Z.c)
 *     ?StartTouchSwipe@MultitaskingViewGestureHandler@@UEAAJIAEBUTouchSwipeArgs@@@Z @ 0x18048C860 (-StartTouchSwipe@MultitaskingViewGestureHandler@@UEAAJIAEBUTouchSwipeArgs@@@Z.c)
 * Callees:
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180290FC8 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     memset_0 @ 0x1802D2FFC (memset_0.c)
 */

__int64 __fastcall MultitaskingViewGestureHandler::UpdateDeviceDimensions(
        MultitaskingViewGestureHandler *this,
        unsigned int a2)
{
  const char *v4; // r9
  __int64 v5; // rdx
  _BYTE v7[16]; // [rsp+20h] [rbp-39h] BYREF
  __int64 v8; // [rsp+30h] [rbp-29h]
  __int128 v9; // [rsp+80h] [rbp+27h] BYREF
  __int128 v10; // [rsp+90h] [rbp+37h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+5Fh]

  memset_0(v7, 0, 0x60uLL);
  if ( !(unsigned int)GetPointerInfo(a2, v7) )
  {
    v5 = 567LL;
    return wil::details::in1diag3::Return_GetLastError(
             retaddr,
             (void *)v5,
             (unsigned int)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewgesturehandler.cpp",
             v4);
  }
  v10 = 0LL;
  v9 = 0LL;
  if ( !(unsigned int)GetPointerDeviceRects(v8, &v9, &v10) )
  {
    v5 = 573LL;
    return wil::details::in1diag3::Return_GetLastError(
             retaddr,
             (void *)v5,
             (unsigned int)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewgesturehandler.cpp",
             v4);
  }
  LODWORD(v10) = DWORD2(v9) - v9;
  DWORD1(v10) = HIDWORD(v9) - DWORD1(v9);
  *((_QWORD *)this + 17) = v10;
  return 0LL;
}
