/*
 * XREFs of ?GetMultitaskingViewState@MultitaskingViewGestureHandler@@AEBAJPEAUMultitaskingViewState@1@@Z @ 0x18013301C
 * Callers:
 *     ?FinishSwipe@MultitaskingViewGestureHandler@@UEAAJHHHHI@Z @ 0x180132A70 (-FinishSwipe@MultitaskingViewGestureHandler@@UEAAJHHHHI@Z.c)
 *     ?StartSwipe@MultitaskingViewGestureHandler@@UEAAJHHIUTOUCHPAD_GESTURE_CONTEXT@@@Z @ 0x180132B50 (-StartSwipe@MultitaskingViewGestureHandler@@UEAAJHHIUTOUCHPAD_GESTURE_CONTEXT@@@Z.c)
 *     ?ContinueSwipe@MultitaskingViewGestureHandler@@UEAAJHHHHI@Z @ 0x180132F50 (-ContinueSwipe@MultitaskingViewGestureHandler@@UEAAJHHHHI@Z.c)
 *     ?CanBePreempted@MultitaskingViewGestureHandler@@UEAAHXZ @ 0x180489DD0 (-CanBePreempted@MultitaskingViewGestureHandler@@UEAAHXZ.c)
 *     ?ContinueTouchSwipe@MultitaskingViewGestureHandler@@UEAAJAEBUTouchSwipeArgs@@@Z @ 0x180489FC0 (-ContinueTouchSwipe@MultitaskingViewGestureHandler@@UEAAJAEBUTouchSwipeArgs@@@Z.c)
 *     ?FinishTouchSwipeInternal@MultitaskingViewGestureHandler@@AEAAJXZ @ 0x18048A79C (-FinishTouchSwipeInternal@MultitaskingViewGestureHandler@@AEAAJXZ.c)
 *     ?StartTouchSwipe@MultitaskingViewGestureHandler@@UEAAJIAEBUTouchSwipeArgs@@@Z @ 0x18048C860 (-StartTouchSwipe@MultitaskingViewGestureHandler@@UEAAJIAEBUTouchSwipeArgs@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall MultitaskingViewGestureHandler::GetMultitaskingViewState(
        MultitaskingViewGestureHandler *this,
        struct MultitaskingViewGestureHandler::MultitaskingViewState *a2)
{
  __int64 v3; // rax
  int v4; // eax
  unsigned int v5; // ebx
  int v6; // ebx
  HWND WindowW; // rax
  LRESULT v8; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v11; // [rsp+30h] [rbp+8h] BYREF

  LOBYTE(v11) = 0;
  v3 = (unsigned int)v11;
  v11 = 0LL;
  *(_QWORD *)a2 = v3;
  v4 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64 *))(**((_QWORD **)this + 9) + 24LL))(
         *((_QWORD *)this + 9),
         3LL,
         &v11);
  v5 = v4;
  if ( v4 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x375,
      (int)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewgesturehandler.cpp",
      (const char *)(unsigned int)v4);
    return v5;
  }
  else
  {
    v6 = v11;
    WindowW = FindWindowW(L"Shell_TrayWnd", 0LL);
    v8 = SendMessageW(WindowW, 0x5C6u, 0LL, 0LL);
    HIDWORD(v11) = v6;
    LOBYTE(v11) = v8 != 0;
    *(_QWORD *)a2 = v11;
    return 0LL;
  }
}
