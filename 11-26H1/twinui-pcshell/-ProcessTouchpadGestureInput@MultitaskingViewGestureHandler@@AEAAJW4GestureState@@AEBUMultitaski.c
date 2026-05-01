/*
 * XREFs of ?ProcessTouchpadGestureInput@MultitaskingViewGestureHandler@@AEAAJW4GestureState@@AEBUMultitaskingViewState@1@I@Z @ 0x1801B4584
 * Callers:
 *     ?FinishSwipe@MultitaskingViewGestureHandler@@UEAAJHHHHI@Z @ 0x1801B4330 (-FinishSwipe@MultitaskingViewGestureHandler@@UEAAJHHHHI@Z.c)
 *     ?StartSwipe@MultitaskingViewGestureHandler@@UEAAJHHIUTOUCHPAD_GESTURE_CONTEXT@@@Z @ 0x1801B4410 (-StartSwipe@MultitaskingViewGestureHandler@@UEAAJHHIUTOUCHPAD_GESTURE_CONTEXT@@@Z.c)
 *     ?ContinueSwipe@MultitaskingViewGestureHandler@@UEAAJHHHHI@Z @ 0x1801B4820 (-ContinueSwipe@MultitaskingViewGestureHandler@@UEAAJHHHHI@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ActivateGestureAction@MultitaskingViewGestureHandler@@AEAAJW4GestureAction@MultitaskingViewGestureHandlerHelpers@@PEBQEAUHWND__@@@Z @ 0x180090BEC (-ActivateGestureAction@MultitaskingViewGestureHandler@@AEAAJW4GestureAction@MultitaskingViewGest.c)
 *     ?GetTimestampForPointerInput@MultitaskingViewGestureHandler@@AEBA_KI@Z @ 0x1802AF7A0 (-GetTimestampForPointerInput@MultitaskingViewGestureHandler@@AEBA_KI@Z.c)
 *     ?DetermineTouchpadGestureAction@MultitaskingViewGestureHandlerHelpers@@YA?AW4GestureAction@1@W4GestureDirection@1@_NW4MULTITASKING_VIEW_TYPES@@@Z @ 0x1802C37A4 (-DetermineTouchpadGestureAction@MultitaskingViewGestureHandlerHelpers@@YA-AW4GestureAction@1@W4G.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall MultitaskingViewGestureHandler::ProcessTouchpadGestureInput(
        __int64 a1,
        int a2,
        _BYTE *a3,
        unsigned int a4)
{
  unsigned int v4; // ebx
  int v6; // ecx
  int v10; // r10d
  int v11; // eax
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rdx
  int v15; // edi
  __int64 v16; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // rdx
  unsigned int v21; // edi
  _DWORD *v22; // rax
  __int64 v23; // rbx
  _DWORD v24[10]; // [rsp+30h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  int v26; // [rsp+60h] [rbp+8h] BYREF

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
  v13 = *(unsigned int *)(a1 + 164);
  v26 = 0;
  v15 = (*(__int64 (__fastcall **)(__int64, __int64, int *))(*(_QWORD *)v12 + 24LL))(v12, v13, &v26);
  if ( v15 < 0 )
  {
    v16 = 837LL;
LABEL_11:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v16,
      (int)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewgesturehandler.cpp",
      (const char *)(unsigned int)v15);
    return (unsigned int)v15;
  }
  if ( v26 == 0xFFFF )
  {
    v18 = *(_QWORD *)(a1 + 88);
    v19 = *(unsigned int *)(a1 + 168);
    v20 = *(unsigned int *)(a1 + 164);
    v24[0] = 0;
    v15 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, _DWORD *))(*(_QWORD *)v18 + 48LL))(v18, v20, v19, v24);
    if ( v15 < 0 )
    {
      v16 = 842LL;
      goto LABEL_11;
    }
    switch ( v24[0] )
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
  if ( a2 == 3 )
  {
    v21 = 0;
    v22 = (_DWORD *)(a1 + 160);
    if ( (a3[4] & 1) != 0 || *v22 == 5 )
      v21 = 7;
  }
  else
  {
    LOBYTE(v14) = *a3;
    v21 = MultitaskingViewGestureHandlerHelpers::DetermineTouchpadGestureAction(v4, v14, *((unsigned int *)a3 + 1));
    v22 = (_DWORD *)(a1 + 160);
  }
  if ( v21 == 6 )
  {
    v23 = *(_QWORD *)(a1 + 176);
    if ( MultitaskingViewGestureHandler::GetTimestampForPointerInput((MultitaskingViewGestureHandler *)a1, a4) - v23 < *(_QWORD *)(a1 + 192) )
      goto LABEL_34;
  }
  else
  {
    if ( v21 != 3 )
    {
      if ( v21 != 1 || *v22 != 4 )
        return MultitaskingViewGestureHandler::ActivateGestureAction(a1, v21, 0LL);
      goto LABEL_34;
    }
    if ( *(_DWORD *)(a1 + 160) == 2 )
LABEL_34:
      v21 = 0;
  }
  return MultitaskingViewGestureHandler::ActivateGestureAction(a1, v21, 0LL);
}
