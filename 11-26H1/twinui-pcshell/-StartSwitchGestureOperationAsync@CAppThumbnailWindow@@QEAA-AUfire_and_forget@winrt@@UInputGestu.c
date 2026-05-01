/*
 * XREFs of ?StartSwitchGestureOperationAsync@CAppThumbnailWindow@@QEAA?AUfire_and_forget@winrt@@UInputGestureOperation@Input@Internal@UI@Windows@3@AEBUInputGestureOperationEventArgs@56783@W4GestureDirection@MultitaskingViewGestureHandlerHelpers@@@Z @ 0x1804A95B8
 * Callers:
 *     ?InputGestureOperationStarted@MultitaskingViewGestureHandler@@AEAAXAEBUInputGestureOperation@Input@Internal@UI@Windows@winrt@@AEBUInputGestureOperationEventArgs@34567@@Z @ 0x18049C410 (-InputGestureOperationStarted@MultitaskingViewGestureHandler@@AEAAXAEBUInputGestureOperation@Inp.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18002633C (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ??2@YAPEAX_K@Z @ 0x1802C9924 (--2@YAPEAX_K@Z.c)
 *     CAppThumbnailWindow::StartSwitchGestureOperationAsync$_ResumeCoro$1 @ 0x1804A8F80 (CAppThumbnailWindow--StartSwitchGestureOperationAsync$_ResumeCoro$1.c)
 */

// Hidden C++ exception states: #wind=3
_BYTE *__fastcall CAppThumbnailWindow::StartSwitchGestureOperationAsync(
        void (__fastcall *a1)(char *a1),
        _BYTE *a2,
        winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *a3,
        void (__fastcall *a4)(char *a1),
        int a5)
{
  void (__fastcall *v9)(char *); // rax
  void (__fastcall **v11)(char *); // [rsp+50h] [rbp+8h]

  v11 = (void (__fastcall **)(char *))operator new(0x1F0uLL);
  v11[57] = a1;
  v9 = *(void (__fastcall **)(char *))a3;
  *(_QWORD *)a3 = 0LL;
  v11[58] = v9;
  v11[59] = a4;
  *((_DWORD *)v11 + 120) = a5;
  *v11 = CAppThumbnailWindow::StartSwitchGestureOperationAsync__ResumeCoro_1;
  *((_DWORD *)v11 + 2) = 65538;
  *a2 = 0;
  *((_BYTE *)v11 + 448) = 0;
  CAppThumbnailWindow::StartSwitchGestureOperationAsync__ResumeCoro_1((char *)v11);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension(a3);
  return a2;
}
