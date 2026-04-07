/*
 * XREFs of ?reset@?$com_ptr_t@VCSolidRectangleInstruction@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18004EA64
 * Callers:
 *     ?SetBorderColor@CLegacyNonClientBackground@@QEAAJAEBU_D3DCOLORVALUE@@@Z @ 0x1800112BC (-SetBorderColor@CLegacyNonClientBackground@@QEAAJAEBU_D3DCOLORVALUE@@@Z.c)
 *     ?ReleaseAcrylicSheetAndOwnerIfNotUsed@CWindowList@@QEAAJ_N@Z @ 0x180037A44 (-ReleaseAcrylicSheetAndOwnerIfNotUsed@CWindowList@@QEAAJ_N@Z.c)
 *     ?ReleaseCaptureVisual@ScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt@@AEAAXXZ @ 0x18004E660 (-ReleaseCaptureVisual@ScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt@@AE.c)
 *     ?SetCaptionColor@CLegacyNonClientBackground@@QEAAJAEBU_D3DCOLORVALUE@@@Z @ 0x18006AC9C (-SetCaptionColor@CLegacyNonClientBackground@@QEAAJAEBU_D3DCOLORVALUE@@@Z.c)
 *     ?SetLinearGradientFill@CRectangleInstruction@@QEAAJ_NAEBU_D3DCOLORVALUE@@1N@Z @ 0x18006ADC8 (-SetLinearGradientFill@CRectangleInstruction@@QEAAJ_NAEBU_D3DCOLORVALUE@@1N@Z.c)
 *     ?EnsureBackgroundEffects@CAcrylicSheet@@AEAAJXZ @ 0x18006CE4C (-EnsureBackgroundEffects@CAcrylicSheet@@AEAAJXZ.c)
 *     ?CreateMonitorRenderTargets@CDesktopManager@@AEAAJXZ @ 0x180077088 (-CreateMonitorRenderTargets@CDesktopManager@@AEAAJXZ.c)
 *     ?EnsureAcrylicSheet@CWindowList@@AEAAJXZ @ 0x18007DFFC (-EnsureAcrylicSheet@CWindowList@@AEAAJXZ.c)
 *     ?Complete@TransitionState@implementation@Transitions@Udwm@winrt@@QEAAXXZ @ 0x180086E2C (-Complete@TransitionState@implementation@Transitions@Udwm@winrt@@QEAAXXZ.c)
 *     ?StopAndSetDisplayAnimatedVisual@CWindowList@@QEAAJPEAVCDisplayAnimatedVisual@@@Z @ 0x18008E154 (-StopAndSetDisplayAnimatedVisual@CWindowList@@QEAAJPEAVCDisplayAnimatedVisual@@@Z.c)
 *     ?Stop@CDisplayAnimatedVisual@@QEAAJW4StopOption@1@@Z @ 0x180099384 (-Stop@CDisplayAnimatedVisual@@QEAAJW4StopOption@1@@Z.c)
 *     ?AddSolidBrushInstruction@CThumbnailAnimatedVisual@@QEAAJPEAVCRectangleGeometryProxy@@KM@Z @ 0x1800CEFFC (-AddSolidBrushInstruction@CThumbnailAnimatedVisual@@QEAAJPEAVCRectangleGeometryProxy@@KM@Z.c)
 *     ?CapturePreRotationVisuals@ScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt@@AEAAXXZ @ 0x1800D57F8 (-CapturePreRotationVisuals@ScreenRotationTransition@implementation@Private@Transitions@Udwm@winr.c)
 *     ?DrawBackground@ScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt@@AEAAXXZ @ 0x1800D5A44 (-DrawBackground@ScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt@@AEAAXXZ.c)
 *     ?StartSecondAnimation@ScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt@@AEAAXXZ @ 0x1800D6BA0 (-StartSecondAnimation@ScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt@@AE.c)
 *     ?GetRootRenderDataVisual@TransitionState@implementation@Transitions@Udwm@winrt@@AEAAJAEAV?$com_ptr_t@VCGlobalTimeTrackVisual@@Uerr_returncode_policy@wil@@@wil@@@Z @ 0x1800DE394 (-GetRootRenderDataVisual@TransitionState@implementation@Transitions@Udwm@winrt@@AEAAJAEAV-$com_p.c)
 *     ?SetBitmap@UserResizeVisual@implementation@Transitions@Udwm@winrt@@UEAAXPEAVCBitmapSource@@@Z @ 0x1800E0830 (-SetBitmap@UserResizeVisual@implementation@Transitions@Udwm@winrt@@UEAAXPEAVCBitmapSource@@@Z.c)
 *     ?Unload@UserResizeVisual@implementation@Transitions@Udwm@winrt@@AEAAXXZ @ 0x1800E0AB0 (-Unload@UserResizeVisual@implementation@Transitions@Udwm@winrt@@AEAAXXZ.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800086B0 (-Release@CBaseObject@@QEAAKXZ.c)
 */

CBaseObject *__fastcall wil::com_ptr_t<CSolidRectangleInstruction,wil::err_returncode_policy>::reset(CBaseObject **a1)
{
  CBaseObject *result; // rax

  result = *a1;
  *a1 = 0LL;
  if ( result )
    return (CBaseObject *)CBaseObject::Release(result);
  return result;
}
