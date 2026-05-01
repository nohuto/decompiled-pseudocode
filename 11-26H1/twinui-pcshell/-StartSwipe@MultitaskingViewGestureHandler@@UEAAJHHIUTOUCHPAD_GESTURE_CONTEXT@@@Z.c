/*
 * XREFs of ?StartSwipe@MultitaskingViewGestureHandler@@UEAAJHHIUTOUCHPAD_GESTURE_CONTEXT@@@Z @ 0x1801B4410
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048294 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ProcessTouchpadGestureInput@MultitaskingViewGestureHandler@@AEAAJW4GestureState@@AEBUMultitaskingViewState@1@I@Z @ 0x1801B4584 (-ProcessTouchpadGestureInput@MultitaskingViewGestureHandler@@AEAAJW4GestureState@@AEBUMultitaski.c)
 *     ?UpdateDeviceDimensions@MultitaskingViewGestureHandler@@AEAAJI@Z @ 0x1801B4734 (-UpdateDeviceDimensions@MultitaskingViewGestureHandler@@AEAAJI@Z.c)
 *     ?GetMultitaskingViewState@MultitaskingViewGestureHandler@@AEBAJPEAUMultitaskingViewState@1@@Z @ 0x1801B48F8 (-GetMultitaskingViewState@MultitaskingViewGestureHandler@@AEBAJPEAUMultitaskingViewState@1@@Z.c)
 *     ?ShouldProcessHorizontalGestureInput@MultitaskingViewGestureHandler@@AEBA_NXZ @ 0x1801B49BC (-ShouldProcessHorizontalGestureInput@MultitaskingViewGestureHandler@@AEBA_NXZ.c)
 *     ?GetTimestampForPointerInput@MultitaskingViewGestureHandler@@AEBA_KI@Z @ 0x1802AF7A0 (-GetTimestampForPointerInput@MultitaskingViewGestureHandler@@AEBA_KI@Z.c)
 *     ?ShouldProcessVerticalGestureInput@MultitaskingViewGestureHandler@@AEBA_NXZ @ 0x18049D300 (-ShouldProcessVerticalGestureInput@MultitaskingViewGestureHandler@@AEBA_NXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall MultitaskingViewGestureHandler::StartSwipe(
        _QWORD *a1,
        unsigned int a2,
        unsigned int a3,
        unsigned int a4,
        __int64 a5)
{
  MultitaskingViewGestureHandler *v5; // rbx
  int updated; // edi
  int v11; // eax
  unsigned int v12; // ebx
  MultitaskingViewGestureHandler *v14; // rcx
  __int64 v15; // rcx
  int v16; // eax
  __int64 v17; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v5 = (MultitaskingViewGestureHandler *)(a1 - 1);
  (*(void (__fastcall **)(_QWORD, __int64))(*(_QWORD *)a1[9] + 24LL))(a1[9], 1LL);
  a1[21] = MultitaskingViewGestureHandler::GetTimestampForPointerInput(v5, a4);
  *(_QWORD *)((char *)a1 + 156) = a5;
  updated = MultitaskingViewGestureHandler::UpdateDeviceDimensions(v5, a4);
  if ( updated < 0 )
  {
    v17 = 86LL;
LABEL_14:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v17,
      (int)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewgesturehandler.cpp",
      (const char *)(unsigned int)updated);
    return (unsigned int)updated;
  }
  LODWORD(a5) = a2;
  a1[15] = __PAIR64__(a3, a2);
  LOBYTE(a5) = 0;
  HIDWORD(a5) = 0;
  updated = MultitaskingViewGestureHandler::GetMultitaskingViewState(
              v5,
              (struct MultitaskingViewGestureHandler::MultitaskingViewState *)&a5);
  if ( updated < 0 )
  {
    v17 = 90LL;
    goto LABEL_14;
  }
  if ( ((a5 & 0x100000000LL) != 0
     || MultitaskingViewGestureHandler::ShouldProcessHorizontalGestureInput(v5)
     || MultitaskingViewGestureHandler::ShouldProcessVerticalGestureInput(v14))
    && (v11 = MultitaskingViewGestureHandler::ProcessTouchpadGestureInput(v5, 1LL, &a5, a4), v12 = v11, v11 < 0) )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x5E,
      (int)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewgesturehandler.cpp",
      (const char *)(unsigned int)v11);
    return v12;
  }
  else
  {
    v15 = a1[5];
    if ( v15 )
    {
      v16 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v15 + 32LL))(v15);
      if ( v16 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x63,
          (int)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewgesturehandler.cpp",
          (const char *)(unsigned int)v16);
    }
    return 0LL;
  }
}
