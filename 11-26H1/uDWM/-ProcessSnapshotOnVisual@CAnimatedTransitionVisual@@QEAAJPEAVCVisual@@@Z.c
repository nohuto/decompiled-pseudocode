/*
 * XREFs of ?ProcessSnapshotOnVisual@CAnimatedTransitionVisual@@QEAAJPEAVCVisual@@@Z @ 0x1800824B8
 * Callers:
 *     ??0AnimatedTransitionVisualWrapper@implementation@Transitions@Udwm@winrt@@QEAA@PEAVCTopLevelWindow3D@@@Z @ 0x18002F98C (--0AnimatedTransitionVisualWrapper@implementation@Transitions@Udwm@winrt@@QEAA@PEAVCTopLevelWind.c)
 *     ?StartAnimation@CLoginTransition@@QEAAJHPEAVCVisual@@0_K@Z @ 0x1800373A0 (-StartAnimation@CLoginTransition@@QEAAJHPEAVCVisual@@0_K@Z.c)
 *     ?CaptureAndScheduleExitAnimation@CDisplayMixedModeAnimatedVisual@@AEAAJXZ @ 0x1800B222C (-CaptureAndScheduleExitAnimation@CDisplayMixedModeAnimatedVisual@@AEAAJXZ.c)
 *     ?OnTransitionWindow@CAppArrangementDelayed@@UEAAJPEAVCWindowData@@W4DWMTRANSITION_TARGET@@@Z @ 0x1800C25C0 (-OnTransitionWindow@CAppArrangementDelayed@@UEAAJPEAVCWindowData@@W4DWMTRANSITION_TARGET@@@Z.c)
 *     ?_CreateMonitorSnapshot@CVirtualDesktopSwitch@@AEAAJPEAVCWindowData@@UtagRECT@@_NPEAPEAVCAnimationComponent@@@Z @ 0x1800C3A7C (-_CreateMonitorSnapshot@CVirtualDesktopSwitch@@AEAAJPEAVCWindowData@@UtagRECT@@_NPEAPEAVCAnimati.c)
 *     ?CreateDesktopSnapshotComponent@CTransitionVisualController@@QEAAJW4DWMTRANSITION_TARGET@@AEBUtagRECT@@PEAVCStoryboard@@PEAPEAVCAnimationComponent@@@Z @ 0x1800CEF3C (-CreateDesktopSnapshotComponent@CTransitionVisualController@@QEAAJW4DWMTRANSITION_TARGET@@AEBUta.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18001E310 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     McGenEventWrite_EtwEventWriteTransfer @ 0x180078474 (McGenEventWrite_EtwEventWriteTransfer.c)
 *     ?EnsureResources@CAnimatedTransitionVisual@@IEAAJXZ @ 0x180082594 (-EnsureResources@CAnimatedTransitionVisual@@IEAAJXZ.c)
 *     __security_check_cookie @ 0x18008E1C0 (__security_check_cookie.c)
 *     ?FreezeImpl@CVisualBrush@@AEAAJW4VisualSurfaceFreezeBehavior@Internal@Composition@UI@Windows@@@Z @ 0x18009B51C (-FreezeImpl@CVisualBrush@@AEAAJW4VisualSurfaceFreezeBehavior@Internal@Composition@UI@Windows@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CAnimatedTransitionVisual::ProcessSnapshotOnVisual(
        CAnimatedTransitionVisual *this,
        struct CVisual *a2)
{
  int v4; // eax
  unsigned int v5; // ebx
  int v6; // eax
  int v7; // r8d
  _BYTE v9[16]; // [rsp+30h] [rbp-28h] BYREF

  v4 = CAnimatedTransitionVisual::EnsureResources(this);
  v5 = v4;
  if ( v4 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v4, 0x2E0u, 0LL);
  }
  else
  {
    (*(void (__fastcall **)(struct CVisual *))(*(_QWORD *)a2 + 48LL))(a2);
    v6 = CVisualBrush::FreezeImpl((char *)this + 520, 1LL);
    v5 = v6;
    if ( v6 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v6, 0x2E7u, 0LL);
    }
    else if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
    {
      McGenEventWrite_EtwEventWriteTransfer(
        (unsigned int)&Microsoft_Windows_Dwm_Udwm_Provider_Context,
        (unsigned int)&UdwmTransitionProcessSnapshotOnVisual_Info,
        v7,
        1,
        (__int64)v9);
    }
  }
  return v5;
}
