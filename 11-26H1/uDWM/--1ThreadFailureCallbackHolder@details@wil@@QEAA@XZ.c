/*
 * XREFs of ??1ThreadFailureCallbackHolder@details@wil@@QEAA@XZ @ 0x180024438
 * Callers:
 *     ?CloneVisualTreeForLivePreview@CTopLevelWindow@@QEAAJ_NPEAPEAV1@@Z @ 0x180023D1C (-CloneVisualTreeForLivePreview@CTopLevelWindow@@QEAAJ_NPEAPEAV1@@Z.c)
 *     ?_SetState@CAnimationClock@@AEAAJW4AnimationClockState@@@Z @ 0x180024AB0 (-_SetState@CAnimationClock@@AEAAJW4AnimationClockState@@@Z.c)
 *     ?End@CAnimationClock@@QEAAJXZ @ 0x18003EAFC (-End@CAnimationClock@@QEAAJXZ.c)
 *     ?Create@CAnimationClockFactory@@SAJU_GUID@@PEAPEAVCAnimationClock@@@Z @ 0x18003F854 (-Create@CAnimationClockFactory@@SAJU_GUID@@PEAPEAVCAnimationClock@@@Z.c)
 *     ?Begin@CAnimationClock@@QEAAJK@Z @ 0x180040D60 (-Begin@CAnimationClock@@QEAAJK@Z.c)
 *     ?_TriggerAnimation@CAnimationClock@@AEAAJXZ @ 0x180040EC8 (-_TriggerAnimation@CAnimationClock@@AEAAJXZ.c)
 *     ?Cancel@ScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt@@QEAAXXZ @ 0x180041D0C (-Cancel@ScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt@@QEAAXXZ.c)
 *     ??1?$ActivityBase@VAnimationClockLogging@@$0A@$0A@$03$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x18006FD34 (--1-$ActivityBase@VAnimationClockLogging@@$0A@$0A@$03$0A@U_TlgReflectorTag_Param0IsProviderType@.c)
 *     ??1?$ActivityBase@VWindowFrameLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x180070AB0 (--1-$ActivityBase@VWindowFrameLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wi.c)
 *     ?StopDisplayCapture@CCaptureManager@@UEAAJAEBUDWM_CAPTURE_TOKEN@@@Z @ 0x1800763C0 (-StopDisplayCapture@CCaptureManager@@UEAAJAEBUDWM_CAPTURE_TOKEN@@@Z.c)
 *     ??1?$test_watcher@V?$merged_data@U_tip_ResponsiveScreenRotationAnimationTest@Tip@Private@Transitions@Udwm@@U12345@@details@tip2@@@tip2@@QEAA@XZ @ 0x180076880 (--1-$test_watcher@V-$merged_data@U_tip_ResponsiveScreenRotationAnimationTest@Tip@Private@Transit.c)
 *     ??1?$ActivityBase@VWindowFrameLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x180086DB8 (--1-$ActivityBase@VWindowFrameLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProvid.c)
 * Callees:
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x1800254F0 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 */

void __fastcall wil::details::ThreadFailureCallbackHolder::~ThreadFailureCallbackHolder(
        wil::details::ThreadFailureCallbackHolder *this)
{
  if ( *((_DWORD *)this + 6) )
    wil::details::ThreadFailureCallbackHolder::StopWatching(this);
}
