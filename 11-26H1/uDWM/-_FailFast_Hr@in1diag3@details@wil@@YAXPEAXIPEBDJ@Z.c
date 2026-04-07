/*
 * XREFs of ?_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800A7030
 * Callers:
 *     ?RemoveAll@VisualCollection@@QEAAXXZ @ 0x18001BB00 (-RemoveAll@VisualCollection@@QEAAXXZ.c)
 *     ?EnsureCrossFadeEffectInitialized@CCompositionEffectCache@@AEAAXXZ @ 0x180042E78 (-EnsureCrossFadeEffectInitialized@CCompositionEffectCache@@AEAAXXZ.c)
 *     ?EnsureEffectsInitialized@CCompositionEffectCache@@AEAAXXZ @ 0x180064ACC (-EnsureEffectsInitialized@CCompositionEffectCache@@AEAAXXZ.c)
 *     ?OnGlobalTimeUpdated@CDisplayAnimatedVisual@@UEAAJXZ @ 0x18006A740 (-OnGlobalTimeUpdated@CDisplayAnimatedVisual@@UEAAJXZ.c)
 *     ?CreateSolidColorBrush@CCompositionEffectCache@@CAJUColor@UI@Windows@@PEAPEAUICompositionBrush@Composition@34@@Z @ 0x180075450 (-CreateSolidColorBrush@CCompositionEffectCache@@CAJUColor@UI@Windows@@PEAPEAUICompositionBrush@C.c)
 *     ?CreateMonitorRenderTargets@CDesktopManager@@AEAAJXZ @ 0x18007EE08 (-CreateMonitorRenderTargets@CDesktopManager@@AEAAJXZ.c)
 *     ??1CDisplayDisconnectAnimatedVisual@@MEAA@XZ @ 0x1800AF94C (--1CDisplayDisconnectAnimatedVisual@@MEAA@XZ.c)
 *     ??1CDisplayDuplicateAnimatedVisual@@MEAA@XZ @ 0x1800AFA94 (--1CDisplayDuplicateAnimatedVisual@@MEAA@XZ.c)
 *     ??1CDisplayDuplicateToExtendAnimatedVisual@@MEAA@XZ @ 0x1800B0074 (--1CDisplayDuplicateToExtendAnimatedVisual@@MEAA@XZ.c)
 *     ??1CDisplayExtendAnimatedVisual@@MEAA@XZ @ 0x1800B0EB8 (--1CDisplayExtendAnimatedVisual@@MEAA@XZ.c)
 *     ??1CDisplayExtendToDuplicateAnimatedVisual@@MEAA@XZ @ 0x1800B17B8 (--1CDisplayExtendToDuplicateAnimatedVisual@@MEAA@XZ.c)
 *     ??1CDisplayMixedModeAnimatedVisual@@MEAA@XZ @ 0x1800B206C (--1CDisplayMixedModeAnimatedVisual@@MEAA@XZ.c)
 *     ??1CDisplayBlackCurtainAnimatedVisual@@MEAA@XZ @ 0x1800B3448 (--1CDisplayBlackCurtainAnimatedVisual@@MEAA@XZ.c)
 *     ??1CDisplaySecondaryOnlyAnimatedVisual@@MEAA@XZ @ 0x1800B36F4 (--1CDisplaySecondaryOnlyAnimatedVisual@@MEAA@XZ.c)
 *     ??1CDisplaySecondaryOnlyToDuplicateAnimatedVisual@@MEAA@XZ @ 0x1800B3B20 (--1CDisplaySecondaryOnlyToDuplicateAnimatedVisual@@MEAA@XZ.c)
 *     ??1CDisplaySecondaryOnlyToExtendAnimatedVisual@@MEAA@XZ @ 0x1800B416C (--1CDisplaySecondaryOnlyToExtendAnimatedVisual@@MEAA@XZ.c)
 *     ?RemoveInteropVisualFromTree@CGlobalLightSet@@AEAAXXZ @ 0x1800B5C84 (-RemoveInteropVisualFromTree@CGlobalLightSet@@AEAAXXZ.c)
 *     ??0CSpriteVisualProxy@@QEAA@PEAUIDwmChannel@@I@Z @ 0x1800BFBEC (--0CSpriteVisualProxy@@QEAA@PEAUIDwmChannel@@I@Z.c)
 *     ??0CVisualProxy@@QEAA@PEAUIDwmChannel@@IW4Enum@DwmResourceType@@@Z @ 0x1800DE4B8 (--0CVisualProxy@@QEAA@PEAUIDwmChannel@@IW4Enum@DwmResourceType@@@Z.c)
 * Callees:
 *     ??$ReportFailure_Hr@$02@details@wil@@YAXPEAXIPEBD110JW4FailureFlags@1@@Z @ 0x180088778 (--$ReportFailure_Hr@$02@details@wil@@YAXPEAXIPEBD110JW4FailureFlags@1@@Z.c)
 */

void __fastcall __noreturn wil::details::in1diag3::_FailFast_Hr(
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
  wil::details::ReportFailure_Hr<3>((__int64)this, a2, a3, (__int64)a4, v5, retaddr, v6);
}
