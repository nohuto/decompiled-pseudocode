/*
 * XREFs of ?ShowPlaceModeFeedback@WindowArrangementView@@UEAAJW4PlaceModeFeedbackType@@PEAUtagPOINT@@_N@Z @ 0x18052B380
 * Callers:
 *     ?ShowView@WindowArrangementView@@AEAAJPEAUtagRECT@@AEBUtagPOINT@@0@Z @ 0x18052B51C (-ShowView@WindowArrangementView@@AEAAJPEAUtagRECT@@AEBUtagPOINT@@0@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ?EnablePlaceModeDropFeedback@WindowArrangementView@@AEAAJW4EnablePlaceModeDropFeedbackMode@1@PEBUPlaceModeFeedbackTarget@@PEAUIDCompBatchAnimationCallback@@@Z @ 0x180528BD8 (-EnablePlaceModeDropFeedback@WindowArrangementView@@AEAAJW4EnablePlaceModeDropFeedbackMode@1@PEB.c)
 *     ?ResetPlaceModeIdleTimer@WindowArrangementView@@AEAAXXZ @ 0x18052AD70 (-ResetPlaceModeIdleTimer@WindowArrangementView@@AEAAXXZ.c)
 *     ?SetPlaceModeIdleAnimationEnabled@WindowArrangementView@@AEAAX_N@Z @ 0x18052AF18 (-SetPlaceModeIdleAnimationEnabled@WindowArrangementView@@AEAAX_N@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall WindowArrangementView::ShowPlaceModeFeedback(__int64 a1, unsigned int a2, __int64 *a3, char a4)
{
  WindowArrangementView *v4; // rsi
  __int64 *v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rax
  int v11; // edi
  volatile int *v12; // rdx
  __int64 v13; // rdx
  int v14; // eax
  unsigned int v15; // ebx
  char v17[16]; // [rsp+30h] [rbp-40h] BYREF
  __int128 v18; // [rsp+40h] [rbp-30h] BYREF
  __int128 v19; // [rsp+50h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+28h]

  v4 = (WindowArrangementView *)(a1 - 48);
  if ( *(_BYTE *)(a1 - 48 + 314) )
    return 0LL;
  v17[0] = 0;
  if ( a4 )
  {
    (*(void (__fastcall **)(_QWORD, __int128 *))(**(_QWORD **)(a1 + 32) + 120LL))(*(_QWORD *)(a1 + 32), &v19);
    v8 = *(__int64 **)(a1 + 56);
    v9 = *a3;
    v10 = *v8;
    v18 = v19;
    (*(void (__fastcall **)(__int64 *, __int64, __int128 *, _QWORD, char *))(v10 + 48))(v8, v9, &v18, a2, v17);
  }
  else
  {
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 56) + 56LL))(*(_QWORD *)(a1 + 56));
    v17[0] = 1;
  }
  v11 = 2;
  if ( a2 == 2 )
    WindowArrangementView::SetPlaceModeIdleAnimationEnabled(v4, 0LL);
  else
    WindowArrangementView::ResetPlaceModeIdleTimer(v4);
  if ( !v17[0] && *(_DWORD *)(a1 + 248) != 2 && !*(_DWORD *)(a1 + 260) && a2 != 4 )
    return 0LL;
  *(_DWORD *)(a1 + 260) = 0;
  if ( *(_DWORD *)(a1 + 248) )
  {
    LOBYTE(v12) = 1;
    WindowArrangementView::SetPlaceModeIdleAnimationEnabled(v4, v12);
  }
  (*(void (__fastcall **)(_QWORD, __int128 *))(**(_QWORD **)(a1 + 56) + 64LL))(*(_QWORD *)(a1 + 56), &v19);
  v13 = 0LL;
  if ( DWORD1(v19) == 5 )
    v13 = 4 - (unsigned int)((_DWORD)v19 != 2);
  (*(void (__fastcall **)(_QWORD, __int64, _QWORD, _QWORD))(**(_QWORD **)(a1 + 32) + 168LL))(
    *(_QWORD *)(a1 + 32),
    v13,
    0LL,
    0LL);
  if ( a2 != 4 )
    v11 = 0;
  v14 = WindowArrangementView::EnablePlaceModeDropFeedback((__int64)v4, v11, (int *)&v19, 0LL);
  v15 = v14;
  if ( v14 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x39E,
    (int)"pcshell\\twinui\\tabletmode\\lib\\windowarrangementview.cpp",
    (const char *)(unsigned int)v14);
  return v15;
}
