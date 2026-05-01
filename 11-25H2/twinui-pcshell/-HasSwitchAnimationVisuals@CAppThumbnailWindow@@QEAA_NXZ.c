/*
 * XREFs of ?HasSwitchAnimationVisuals@CAppThumbnailWindow@@QEAA_NXZ @ 0x1804951C0
 * Callers:
 *     ?InputGestureOperationStarted@MultitaskingViewGestureHandler@@AEAAXAEBUInputGestureOperation@Input@Internal@UI@Windows@winrt@@AEBUInputGestureOperationEventArgs@34567@@Z @ 0x18048B830 (-InputGestureOperationStarted@MultitaskingViewGestureHandler@@AEAAXAEBUInputGestureOperation@Inp.c)
 *     ?PlayThreeFingerDownKeyframeAnimation@CAppThumbnailWindow@@IEAAJXZ @ 0x180495D80 (-PlayThreeFingerDownKeyframeAnimation@CAppThumbnailWindow@@IEAAJXZ.c)
 *     ?PlayThreeFingerUpKeyframeAnimation@CAppThumbnailWindow@@IEAAJXZ @ 0x180496238 (-PlayThreeFingerUpKeyframeAnimation@CAppThumbnailWindow@@IEAAJXZ.c)
 *     ?StartMinimizeGestureOperation@CAppThumbnailWindow@@QEAAXUInputGestureOperation@Input@Internal@UI@Windows@winrt@@AEBUInputGestureOperationEventArgs@34567@AEBUDisplayMonitorInfoCollection@Shell@5WindowsUdk@7@@Z @ 0x180497498 (-StartMinimizeGestureOperation@CAppThumbnailWindow@@QEAAXUInputGestureOperation@Input@Internal@U.c)
 *     CAppThumbnailWindow::StartSwitchGestureOperationAsync$_ResumeCoro$1 @ 0x1804982C0 (CAppThumbnailWindow--StartSwitchGestureOperationAsync$_ResumeCoro$1.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x180066570 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ??9Foundation@Windows@winrt@@YA_NAEBUIUnknown@012@0@Z @ 0x1800F5554 (--9Foundation@Windows@winrt@@YA_NAEBUIUnknown@012@0@Z.c)
 */

char __fastcall CAppThumbnailWindow::HasSwitchAnimationVisuals(CAppThumbnailWindow *this)
{
  char v2; // si
  char v3; // di
  void (__fastcall ***v4)(_QWORD, __int64 *, __int64 *); // rbx
  void (__fastcall ***v6)(_QWORD, __int64 *, __int64 *); // [rsp+40h] [rbp+8h] BYREF
  void (__fastcall ***v7)(_QWORD, __int64 *, __int64 *); // [rsp+48h] [rbp+10h] BYREF
  void (__fastcall ***v8)(_QWORD, __int64 *, __int64 *); // [rsp+50h] [rbp+18h] BYREF

  v6 = 0LL;
  v2 = 1;
  v3 = 1;
  if ( !winrt::Windows::Foundation::operator!=((void (__fastcall ****)(_QWORD, __int64 *, __int64 *))this + 53, &v6) )
  {
    v4 = v8;
    goto LABEL_6;
  }
  v4 = 0LL;
  v8 = 0LL;
  v3 = 3;
  if ( !winrt::Windows::Foundation::operator!=((void (__fastcall ****)(_QWORD, __int64 *, __int64 *))this + 57, &v8)
    || (v7 = 0LL,
        v3 = 7,
        !winrt::Windows::Foundation::operator!=((void (__fastcall ****)(_QWORD, __int64 *, __int64 *))this + 55, &v7)) )
  {
LABEL_6:
    v2 = 0;
    if ( (v3 & 4) == 0 )
      goto LABEL_9;
  }
  v3 &= ~4u;
  if ( v7 )
    winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref((__int64 *)&v7);
LABEL_9:
  if ( (v3 & 2) != 0 && v4 )
    winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref((__int64 *)&v8);
  return v2;
}
