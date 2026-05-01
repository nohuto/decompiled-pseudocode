/*
 * XREFs of CAppThumbnailWindow::StartSwitchGestureOperationAsync$_InitCoro$2 @ 0x180498240
 * Callers:
 *     ?StartSwitchGestureOperationAsync@CAppThumbnailWindow@@QEAA?AUfire_and_forget@winrt@@UInputGestureOperation@Input@Internal@UI@Windows@3@AEBUInputGestureOperationEventArgs@56783@W4GestureDirection@MultitaskingViewGestureHandlerHelpers@@@Z @ 0x180498910 (-StartSwitchGestureOperationAsync@CAppThumbnailWindow@@QEAA-AUfire_and_forget@winrt@@UInputGestu.c)
 * Callees:
 *     CAppThumbnailWindow::StartSwitchGestureOperationAsync$_ResumeCoro$1 @ 0x1804982C0 (CAppThumbnailWindow--StartSwitchGestureOperationAsync$_ResumeCoro$1.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CAppThumbnailWindow::StartSwitchGestureOperationAsync__InitCoro_2(
        _DWORD *a1,
        char *a2,
        _BYTE *a3,
        __int64 *a4,
        __int64 a5,
        int *a6,
        __int64 a7)
{
  int v7; // r10d
  __int64 v8; // rax

  v7 = *a6;
  *(_QWORD *)(a2 + 449) = a7;
  v8 = *a4;
  *a4 = 0LL;
  *(_QWORD *)(a2 + 457) = v8;
  *(_QWORD *)(a2 + 465) = a5;
  *(_DWORD *)(a2 + 473) = v7;
  *(_QWORD *)a2 = CAppThumbnailWindow::StartSwitchGestureOperationAsync__ResumeCoro_1;
  *((_DWORD *)a2 + 2) = *a1 != 0 ? 2 : 65538;
  *a3 = 0;
  a2[448] = 0;
  return CAppThumbnailWindow::StartSwitchGestureOperationAsync__ResumeCoro_1(a2);
}
