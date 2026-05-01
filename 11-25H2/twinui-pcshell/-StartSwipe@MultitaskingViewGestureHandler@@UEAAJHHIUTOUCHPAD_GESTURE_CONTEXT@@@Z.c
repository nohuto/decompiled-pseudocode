/*
 * XREFs of ?StartSwipe@MultitaskingViewGestureHandler@@UEAAJHHIUTOUCHPAD_GESTURE_CONTEXT@@@Z @ 0x180132B50
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180039744 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ProcessTouchpadGestureInput@MultitaskingViewGestureHandler@@AEAAJW4GestureState@@AEBUMultitaskingViewState@1@I@Z @ 0x180132CC4 (-ProcessTouchpadGestureInput@MultitaskingViewGestureHandler@@AEAAJW4GestureState@@AEBUMultitaski.c)
 *     ?UpdateDeviceDimensions@MultitaskingViewGestureHandler@@AEAAJI@Z @ 0x180132E6C (-UpdateDeviceDimensions@MultitaskingViewGestureHandler@@AEAAJI@Z.c)
 *     ?GetMultitaskingViewState@MultitaskingViewGestureHandler@@AEBAJPEAUMultitaskingViewState@1@@Z @ 0x18013301C (-GetMultitaskingViewState@MultitaskingViewGestureHandler@@AEBAJPEAUMultitaskingViewState@1@@Z.c)
 *     ?ShouldProcessHorizontalGestureInput@MultitaskingViewGestureHandler@@AEBA_NXZ @ 0x1801330D8 (-ShouldProcessHorizontalGestureInput@MultitaskingViewGestureHandler@@AEBA_NXZ.c)
 *     ?GetTimestampForPointerInput@MultitaskingViewGestureHandler@@AEBA_KI@Z @ 0x1802B8D24 (-GetTimestampForPointerInput@MultitaskingViewGestureHandler@@AEBA_KI@Z.c)
 *     ?ShouldProcessVerticalGestureInput@MultitaskingViewGestureHandler@@AEBA_NXZ @ 0x18048C710 (-ShouldProcessVerticalGestureInput@MultitaskingViewGestureHandler@@AEBA_NXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall MultitaskingViewGestureHandler::StartSwipe(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        unsigned int a4,
        __int64 a5)
{
  int updated; // edi
  int v10; // eax
  unsigned int v11; // ebx
  MultitaskingViewGestureHandler *v13; // rcx
  __int64 v14; // rcx
  int v15; // eax
  __int64 v16; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 72) + 24LL))(*(_QWORD *)(a1 + 72), 1LL);
  *(_QWORD *)(a1 + 168) = MultitaskingViewGestureHandler::GetTimestampForPointerInput(
                            (MultitaskingViewGestureHandler *)(a1 - 8),
                            a4);
  *(_QWORD *)(a1 + 156) = a5;
  updated = MultitaskingViewGestureHandler::UpdateDeviceDimensions((MultitaskingViewGestureHandler *)(a1 - 8), a4);
  if ( updated < 0 )
  {
    v16 = 86LL;
LABEL_14:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v16,
      (int)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewgesturehandler.cpp",
      (const char *)(unsigned int)updated);
    return (unsigned int)updated;
  }
  a5 = a2;
  *(_QWORD *)(a1 + 120) = __PAIR64__(a3, a2);
  LOBYTE(a5) = 0;
  updated = MultitaskingViewGestureHandler::GetMultitaskingViewState(
              (MultitaskingViewGestureHandler *)(a1 - 8),
              (struct MultitaskingViewGestureHandler::MultitaskingViewState *)&a5);
  if ( updated < 0 )
  {
    v16 = 90LL;
    goto LABEL_14;
  }
  if ( ((a5 & 0x100000000LL) != 0
     || MultitaskingViewGestureHandler::ShouldProcessHorizontalGestureInput((MultitaskingViewGestureHandler *)(a1 - 8))
     || MultitaskingViewGestureHandler::ShouldProcessVerticalGestureInput(v13))
    && (v10 = MultitaskingViewGestureHandler::ProcessTouchpadGestureInput(a1 - 8, 1LL, &a5, a4), v11 = v10, v10 < 0) )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x5E,
      (int)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewgesturehandler.cpp",
      (const char *)(unsigned int)v10);
    return v11;
  }
  else
  {
    v14 = *(_QWORD *)(a1 + 40);
    if ( v14 )
    {
      v15 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v14 + 32LL))(v14);
      if ( v15 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x63,
          (int)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewgesturehandler.cpp",
          (const char *)(unsigned int)v15);
    }
    return 0LL;
  }
}
