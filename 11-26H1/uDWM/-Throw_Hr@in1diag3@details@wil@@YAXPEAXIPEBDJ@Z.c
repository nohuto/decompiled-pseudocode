/*
 * XREFs of ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800D13DC
 * Callers:
 *     ??0AnimatedTransitionVisualWrapper@implementation@Transitions@Udwm@winrt@@QEAA@PEAVCTopLevelWindow3D@@@Z @ 0x18002F98C (--0AnimatedTransitionVisualWrapper@implementation@Transitions@Udwm@winrt@@QEAA@PEAVCTopLevelWind.c)
 *     ?ConvertShellTransitionToAnimationType@TopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@CA?AW4WindowAnimationType@CTopLevelWindow3D@@W4ShellTransitionType@345@@Z @ 0x18003FCEC (-ConvertShellTransitionToAnimationType@TopLevelWindow3DWrapper@implementation@Transitions@Udwm@w.c)
 *     ?StartAnimation@TopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@QEAAXAEBW4ShellTransitionType@345@AEBURect@Foundation@Windows@5@@Z @ 0x18003FE24 (-StartAnimation@TopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@QEAAXAEBW4ShellTr.c)
 *     ?TransferTransitionVisualAndAnimationEngine@TransitionState@implementation@Transitions@Udwm@winrt@@QEAA?AUTopLevelWindow3DWrapper@345@XZ @ 0x180041750 (-TransferTransitionVisualAndAnimationEngine@TransitionState@implementation@Transitions@Udwm@winr.c)
 *     ?UpdateScene@ScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt@@QEAAXXZ @ 0x180042130 (-UpdateScene@ScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt@@QEAAXXZ.c)
 *     ?StartCrossfadeAnimation@WindowMoveResizeCrossfadeTransition@implementation@Private@Transitions@Udwm@winrt@@AEAAXXZ @ 0x180050CAC (-StartCrossfadeAnimation@WindowMoveResizeCrossfadeTransition@implementation@Private@Transitions@.c)
 *     ?RemoveFromTree@AnimatedTransitionVisualWrapper@implementation@Transitions@Udwm@winrt@@AEAAXXZ @ 0x18006EFD0 (-RemoveFromTree@AnimatedTransitionVisualWrapper@implementation@Transitions@Udwm@winrt@@AEAAXXZ.c)
 *     ?EnsureSnapshotVisualIsAlive@AnimatedTransitionVisualWrapper@implementation@Transitions@Udwm@winrt@@AEAAXXZ @ 0x18006F030 (-EnsureSnapshotVisualIsAlive@AnimatedTransitionVisualWrapper@implementation@Transitions@Udwm@win.c)
 *     ?StartAnimation@AnimatedTransitionVisualWrapper@implementation@Transitions@Udwm@winrt@@QEAAXHH@Z @ 0x180084960 (-StartAnimation@AnimatedTransitionVisualWrapper@implementation@Transitions@Udwm@winrt@@QEAAXHH@Z.c)
 *     ?Complete@TransitionState@implementation@Transitions@Udwm@winrt@@QEAAXXZ @ 0x180087E70 (-Complete@TransitionState@implementation@Transitions@Udwm@winrt@@QEAAXXZ.c)
 *     ?CapturePreRotationVisuals@ScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt@@AEAAXXZ @ 0x1800D2AE8 (-CapturePreRotationVisuals@ScreenRotationTransition@implementation@Private@Transitions@Udwm@winr.c)
 *     ?DelayNextAnimation@ScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt@@AEAAXAEBW4RotationTimelineReason@23456@@Z @ 0x1800D2C08 (-DelayNextAnimation@ScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt@@AEAA.c)
 *     ?DrawBackground@ScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt@@AEAAXXZ @ 0x1800D2D38 (-DrawBackground@ScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt@@AEAAXXZ.c)
 *     ?StartFirstAnimation@ScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt@@AEAAXXZ @ 0x1800D38AC (-StartFirstAnimation@ScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt@@AEA.c)
 *     ?StartSecondAnimation@ScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt@@AEAAXXZ @ 0x1800D3D34 (-StartSecondAnimation@ScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt@@AE.c)
 *     ?StopAnimation@TopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@QEAAXXZ @ 0x1800D858C (-StopAnimation@TopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@QEAAXXZ.c)
 *     ?TransferJointResizeVisuals@TransitionState@implementation@Transitions@Udwm@winrt@@QEAA?AU?$IVector@UUserResizeVisual@Transitions@Udwm@winrt@@@Collections@Foundation@Windows@5@XZ @ 0x1800DBF48 (-TransferJointResizeVisuals@TransitionState@implementation@Transitions@Udwm@winrt@@QEAA-AU-$IVec.c)
 *     ??0UserResizeVisual@implementation@Transitions@Udwm@winrt@@QEAA@PEAVCTopLevelWindow3D@@_N@Z @ 0x1800DD118 (--0UserResizeVisual@implementation@Transitions@Udwm@winrt@@QEAA@PEAVCTopLevelWindow3D@@_N@Z.c)
 *     ?AddIconPlate@UserResizeVisual@implementation@Transitions@Udwm@winrt@@AEAAXXZ @ 0x1800DD3F4 (-AddIconPlate@UserResizeVisual@implementation@Transitions@Udwm@winrt@@AEAAXXZ.c)
 * Callees:
 *     ??$ReportFailure_Hr@$0A@@details@wil@@YAXPEAXIPEBD110JW4FailureFlags@1@@Z @ 0x1800D07DC (--$ReportFailure_Hr@$0A@@details@wil@@YAXPEAXIPEBD110JW4FailureFlags@1@@Z.c)
 */

void __fastcall __noreturn wil::details::in1diag3::Throw_Hr(
        wil::details::in1diag3 *this,
        __int64 a2,
        __int64 a3,
        const char *a4,
        int a5)
{
  int v5; // [rsp+20h] [rbp-28h]
  wil::details *v6; // [rsp+30h] [rbp-18h]
  __int64 retaddr; // [rsp+48h] [rbp+0h]

  LODWORD(v6) = (_DWORD)a4;
  wil::details::ReportFailure_Hr<0>((__int64)this, a2, a3, (__int64)a4, v5, retaddr, v6);
}
