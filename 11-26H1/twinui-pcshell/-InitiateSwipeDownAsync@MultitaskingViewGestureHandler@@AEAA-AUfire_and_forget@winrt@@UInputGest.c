/*
 * XREFs of ?InitiateSwipeDownAsync@MultitaskingViewGestureHandler@@AEAA?AUfire_and_forget@winrt@@UInputGestureOperation@Input@Internal@UI@Windows@3@AEBUInputGestureOperationEventArgs@56783@@Z @ 0x18049C310
 * Callers:
 *     ?InputGestureOperationStarted@MultitaskingViewGestureHandler@@AEAAXAEBUInputGestureOperation@Input@Internal@UI@Windows@winrt@@AEBUInputGestureOperationEventArgs@34567@@Z @ 0x18049C410 (-InputGestureOperationStarted@MultitaskingViewGestureHandler@@AEAAXAEBUInputGestureOperation@Inp.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18002633C (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ??2@YAPEAX_K@Z @ 0x1802C9924 (--2@YAPEAX_K@Z.c)
 *     MultitaskingViewGestureHandler::InitiateSwipeDownAsync$_ResumeCoro$1 @ 0x18049BF70 (MultitaskingViewGestureHandler--InitiateSwipeDownAsync$_ResumeCoro$1.c)
 */

// Hidden C++ exception states: #wind=3
_BYTE *__fastcall MultitaskingViewGestureHandler::InitiateSwipeDownAsync(
        void (__fastcall *a1)(char *a1),
        _BYTE *a2,
        winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *a3,
        void (__fastcall *a4)(char *a1))
{
  void (__fastcall *v8)(char *); // rax
  void (__fastcall **v10)(char *); // [rsp+20h] [rbp-38h]

  v10 = (void (__fastcall **)(char *))operator new(0xF0uLL);
  v10[27] = a1;
  v8 = *(void (__fastcall **)(char *))a3;
  *(_QWORD *)a3 = 0LL;
  v10[28] = v8;
  v10[29] = a4;
  *v10 = MultitaskingViewGestureHandler::InitiateSwipeDownAsync__ResumeCoro_1;
  *((_DWORD *)v10 + 2) = 65538;
  *a2 = 0;
  *((_BYTE *)v10 + 208) = 0;
  MultitaskingViewGestureHandler::InitiateSwipeDownAsync__ResumeCoro_1((char *)v10);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension(a3);
  return a2;
}
