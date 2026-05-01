/*
 * XREFs of ?GetMultitaskingViewState@MultitaskingViewGestureHandler@@AEBAJPEAUMultitaskingViewState@1@@Z @ 0x1801B48F8
 * Callers:
 *     ?FinishSwipe@MultitaskingViewGestureHandler@@UEAAJHHHHI@Z @ 0x1801B4330 (-FinishSwipe@MultitaskingViewGestureHandler@@UEAAJHHHHI@Z.c)
 *     ?StartSwipe@MultitaskingViewGestureHandler@@UEAAJHHIUTOUCHPAD_GESTURE_CONTEXT@@@Z @ 0x1801B4410 (-StartSwipe@MultitaskingViewGestureHandler@@UEAAJHHIUTOUCHPAD_GESTURE_CONTEXT@@@Z.c)
 *     ?ContinueSwipe@MultitaskingViewGestureHandler@@UEAAJHHHHI@Z @ 0x1801B4820 (-ContinueSwipe@MultitaskingViewGestureHandler@@UEAAJHHHHI@Z.c)
 *     ?CanBePreempted@MultitaskingViewGestureHandler@@UEAAHXZ @ 0x18049AA40 (-CanBePreempted@MultitaskingViewGestureHandler@@UEAAHXZ.c)
 *     ?ContinueTouchSwipe@MultitaskingViewGestureHandler@@UEAAJAEBUTouchSwipeArgs@@@Z @ 0x18049AC40 (-ContinueTouchSwipe@MultitaskingViewGestureHandler@@UEAAJAEBUTouchSwipeArgs@@@Z.c)
 *     ?FinishTouchSwipeInternal@MultitaskingViewGestureHandler@@AEAAJXZ @ 0x18049B44C (-FinishTouchSwipeInternal@MultitaskingViewGestureHandler@@AEAAJXZ.c)
 *     ?StartTouchSwipe@MultitaskingViewGestureHandler@@UEAAJIAEBUTouchSwipeArgs@@@Z @ 0x18049D460 (-StartTouchSwipe@MultitaskingViewGestureHandler@@UEAAJIAEBUTouchSwipeArgs@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall MultitaskingViewGestureHandler::GetMultitaskingViewState(
        MultitaskingViewGestureHandler *this,
        struct MultitaskingViewGestureHandler::MultitaskingViewState *a2)
{
  __int64 v3; // rcx
  int v4; // eax
  unsigned int v5; // ebx
  int v6; // ebx
  HWND WindowW; // rax
  LRESULT v8; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v11; // [rsp+30h] [rbp+8h] BYREF

  LOBYTE(v11) = 0;
  HIDWORD(v11) = 0;
  *(_QWORD *)a2 = (unsigned int)v11;
  v3 = *((_QWORD *)this + 9);
  LODWORD(v11) = 0;
  v4 = (*(__int64 (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)v3 + 24LL))(v3, 3LL, &v11);
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
