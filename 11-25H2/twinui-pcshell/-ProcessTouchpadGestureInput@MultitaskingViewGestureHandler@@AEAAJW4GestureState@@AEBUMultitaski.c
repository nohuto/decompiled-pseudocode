/*
 * XREFs of ?ProcessTouchpadGestureInput@MultitaskingViewGestureHandler@@AEAAJW4GestureState@@AEBUMultitaskingViewState@1@I@Z @ 0x180132CC4
 * Callers:
 *     ?FinishSwipe@MultitaskingViewGestureHandler@@UEAAJHHHHI@Z @ 0x180132A70 (-FinishSwipe@MultitaskingViewGestureHandler@@UEAAJHHHHI@Z.c)
 *     ?StartSwipe@MultitaskingViewGestureHandler@@UEAAJHHIUTOUCHPAD_GESTURE_CONTEXT@@@Z @ 0x180132B50 (-StartSwipe@MultitaskingViewGestureHandler@@UEAAJHHIUTOUCHPAD_GESTURE_CONTEXT@@@Z.c)
 *     ?ContinueSwipe@MultitaskingViewGestureHandler@@UEAAJHHHHI@Z @ 0x180132F50 (-ContinueSwipe@MultitaskingViewGestureHandler@@UEAAJHHHHI@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ActivateGestureAction@MultitaskingViewGestureHandler@@AEAAJW4GestureAction@MultitaskingViewGestureHandlerHelpers@@PEBQEAUHWND__@@@Z @ 0x1801331E4 (-ActivateGestureAction@MultitaskingViewGestureHandler@@AEAAJW4GestureAction@MultitaskingViewGest.c)
 *     ?GetTimestampForPointerInput@MultitaskingViewGestureHandler@@AEBA_KI@Z @ 0x1802B8D24 (-GetTimestampForPointerInput@MultitaskingViewGestureHandler@@AEBA_KI@Z.c)
 *     ?DetermineTouchpadGestureAction@MultitaskingViewGestureHandlerHelpers@@YA?AW4GestureAction@1@W4GestureDirection@1@_NW4MULTITASKING_VIEW_TYPES@@@Z @ 0x1802CC194 (-DetermineTouchpadGestureAction@MultitaskingViewGestureHandlerHelpers@@YA-AW4GestureAction@1@W4G.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall MultitaskingViewGestureHandler::ProcessTouchpadGestureInput(
        __int64 a1,
        int a2,
        __int64 a3,
        unsigned int a4)
{
  unsigned int v4; // ebx
  int v6; // ecx
  int v10; // r10d
  int v11; // eax
  __int64 v12; // rcx
  __int64 v13; // rdx
  int v14; // esi
  __int64 v15; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  unsigned int v19; // ebx
  _DWORD *v20; // rax
  _DWORD v21[10]; // [rsp+30h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  int v23; // [rsp+60h] [rbp+8h] BYREF

  v4 = 0;
  v6 = *(_DWORD *)(a1 + 132);
  v10 = -*(_DWORD *)(a1 + 128);
  if ( *(int *)(a1 + 128) > 0 )
    v10 = *(_DWORD *)(a1 + 128);
  v11 = -v6;
  if ( v6 > 0 )
    v11 = v6;
  if ( v10 <= v11 )
  {
    if ( v6 )
    {
      LOBYTE(v4) = v6 > 0;
      ++v4;
    }
  }
  else
  {
    LOBYTE(v4) = *(_DWORD *)(a1 + 128) > 0;
    v4 += 3;
  }
  v12 = *(_QWORD *)(a1 + 88);
  v23 = 0;
  v14 = (*(__int64 (__fastcall **)(__int64, _QWORD, int *))(*(_QWORD *)v12 + 24LL))(
          v12,
          *(unsigned int *)(a1 + 164),
          &v23);
  if ( v14 < 0 )
  {
    v15 = 837LL;
LABEL_11:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v15,
      (int)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewgesturehandler.cpp",
      (const char *)(unsigned int)v14);
    return (unsigned int)v14;
  }
  if ( v23 == 0xFFFF )
  {
    v17 = *(_QWORD *)(a1 + 88);
    v21[0] = 0;
    v14 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, _DWORD *))(*(_QWORD *)v17 + 48LL))(
            v17,
            *(unsigned int *)(a1 + 164),
            *(unsigned int *)(a1 + 168),
            v21);
    if ( v14 < 0 )
    {
      v15 = 842LL;
      goto LABEL_11;
    }
    switch ( v21[0] )
    {
      case 1:
        v4 = 3;
        break;
      case 2:
        v4 = 1;
        break;
      case 3:
        v4 = 2;
        break;
    }
  }
  v18 = *(unsigned int *)(a3 + 4);
  if ( a2 == 3 )
  {
    v19 = 0;
    v20 = (_DWORD *)(a1 + 160);
    if ( (v18 & 1) != 0 || *v20 == 5 )
      v19 = 7;
  }
  else
  {
    LOBYTE(v13) = *(_BYTE *)a3;
    v19 = MultitaskingViewGestureHandlerHelpers::DetermineTouchpadGestureAction(v4, v13, v18);
    v20 = (_DWORD *)(a1 + 160);
  }
  if ( v19 == 6 )
  {
    if ( MultitaskingViewGestureHandler::GetTimestampForPointerInput((MultitaskingViewGestureHandler *)a1, a4)
       - *(_QWORD *)(a1 + 176) < *(_QWORD *)(a1 + 192) )
      goto LABEL_34;
  }
  else
  {
    if ( v19 != 3 )
    {
      if ( v19 != 1 || *v20 != 4 )
        return MultitaskingViewGestureHandler::ActivateGestureAction(a1, v19, 0LL);
      goto LABEL_34;
    }
    if ( *(_DWORD *)(a1 + 160) == 2 )
LABEL_34:
      v19 = 0;
  }
  return MultitaskingViewGestureHandler::ActivateGestureAction(a1, v19, 0LL);
}
