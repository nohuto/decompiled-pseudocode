/*
 * XREFs of ??1?$com_ptr_t@V?$CTimeline@M@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800B009C
 * Callers:
 *     ??1CDisplayDisconnectAnimatedVisual@@MEAA@XZ @ 0x1800B00BC (--1CDisplayDisconnectAnimatedVisual@@MEAA@XZ.c)
 *     ??1CDisplayDuplicateAnimatedVisual@@MEAA@XZ @ 0x1800B0200 (--1CDisplayDuplicateAnimatedVisual@@MEAA@XZ.c)
 *     ??1CDisplayDuplicateToExtendAnimatedVisual@@MEAA@XZ @ 0x1800B07CC (--1CDisplayDuplicateToExtendAnimatedVisual@@MEAA@XZ.c)
 *     ??1CDisplayExtendAnimatedVisual@@MEAA@XZ @ 0x1800B1560 (--1CDisplayExtendAnimatedVisual@@MEAA@XZ.c)
 *     ??1CDisplayExtendToDuplicateAnimatedVisual@@MEAA@XZ @ 0x1800B1E5C (--1CDisplayExtendToDuplicateAnimatedVisual@@MEAA@XZ.c)
 *     ??1CDisplayMixedModeAnimatedVisual@@MEAA@XZ @ 0x1800B26B0 (--1CDisplayMixedModeAnimatedVisual@@MEAA@XZ.c)
 *     ??1CDisplayBlackCurtainAnimatedVisual@@MEAA@XZ @ 0x1800B3968 (--1CDisplayBlackCurtainAnimatedVisual@@MEAA@XZ.c)
 *     ??1CDisplaySecondaryOnlyAnimatedVisual@@MEAA@XZ @ 0x1800B3C04 (--1CDisplaySecondaryOnlyAnimatedVisual@@MEAA@XZ.c)
 *     ??1CDisplaySecondaryOnlyToDuplicateAnimatedVisual@@MEAA@XZ @ 0x1800B4018 (--1CDisplaySecondaryOnlyToDuplicateAnimatedVisual@@MEAA@XZ.c)
 *     ??1CDisplaySecondaryOnlyToExtendAnimatedVisual@@MEAA@XZ @ 0x1800B4658 (--1CDisplaySecondaryOnlyToExtendAnimatedVisual@@MEAA@XZ.c)
 *     ??1ScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt@@UEAA@XZ @ 0x1800D56A8 (--1ScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt@@UEAA@XZ.c)
 * Callees:
 *     ?Release@CTimelineBase@@QEAAKXZ @ 0x180030810 (-Release@CTimelineBase@@QEAAKXZ.c)
 */

void __fastcall wil::com_ptr_t<CTimeline<float>,wil::err_returncode_policy>::~com_ptr_t<CTimeline<float>,wil::err_returncode_policy>(
        CTimelineBase **a1)
{
  CTimelineBase *v1; // rcx

  v1 = *a1;
  if ( v1 )
    CTimelineBase::Release(v1);
}
