/*
 * XREFs of ?NotifyRaiseDesktopCompleted@MultitaskingViewGestureHandler@@UEAAXXZ @ 0x18048BDA0
 * Callers:
 *     <none>
 * Callees:
 *     ?NotifyRaiseDesktopCompleted@MultitaskingViewTelemetry@@SAXXZ @ 0x1802AAF9C (-NotifyRaiseDesktopCompleted@MultitaskingViewTelemetry@@SAXXZ.c)
 *     ??R?$default_delete@VMinimizeAnimationSystemStateOverride@@@std@@QEBAXPEAVMinimizeAnimationSystemStateOverride@@@Z @ 0x180489BE4 (--R-$default_delete@VMinimizeAnimationSystemStateOverride@@@std@@QEBAXPEAVMinimizeAnimationSyste.c)
 *     ?AnimationComplete@MultitaskingViewGestureHandler@@AEAAXW4AnimationType@CAppThumbnailWindow@@@Z @ 0x180489CB0 (-AnimationComplete@MultitaskingViewGestureHandler@@AEAAXW4AnimationType@CAppThumbnailWindow@@@Z.c)
 *     ?FinishTouchSwipeInternal@MultitaskingViewGestureHandler@@AEAAJXZ @ 0x18048A79C (-FinishTouchSwipeInternal@MultitaskingViewGestureHandler@@AEAAJXZ.c)
 *     ?StartTaskbarBounceAnimation@CAppThumbnailWindow@@QEAAXXZ @ 0x1804989A8 (-StartTaskbarBounceAnimation@CAppThumbnailWindow@@QEAAXXZ.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgs @ 0x18065EE5C (MicrosoftTelemetryAssertTriggeredNoArgs.c)
 */

void __fastcall MultitaskingViewGestureHandler::NotifyRaiseDesktopCompleted(MultitaskingViewGestureHandler *this)
{
  __int64 v2; // rcx
  __int64 v3; // r8
  __int64 v4; // r9
  MinimizeAnimationSystemStateOverride *v5; // rdx
  CAppThumbnailWindow **v6; // rsi
  CAppThumbnailWindow **i; // rdi

  MultitaskingViewTelemetry::NotifyRaiseDesktopCompleted();
  v5 = (MinimizeAnimationSystemStateOverride *)*((_QWORD *)this + 33);
  *((_QWORD *)this + 33) = 0LL;
  if ( v5 )
    std::default_delete<MinimizeAnimationSystemStateOverride>::operator()(v2, v5);
  if ( *((_BYTE *)this + 248) )
  {
    if ( !*((_QWORD *)this + 10) )
      MicrosoftTelemetryAssertTriggeredNoArgs(v2, v5, v3, v4);
    v6 = (CAppThumbnailWindow **)*((_QWORD *)this + 13);
    for ( i = (CAppThumbnailWindow **)*((_QWORD *)this + 12); i != v6; i += 2 )
      CAppThumbnailWindow::StartTaskbarBounceAnimation(*i);
    MultitaskingViewGestureHandler::AnimationComplete((__int64)this, 0);
    if ( *((_QWORD *)this + 12) == *((_QWORD *)this + 13) )
      MultitaskingViewGestureHandler::FinishTouchSwipeInternal(this);
  }
}
