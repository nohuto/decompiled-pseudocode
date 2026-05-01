/*
 * XREFs of __Platform_AcquireSRWLockShared @ 0x1802D3528
 * Callers:
 *     ?UpdateVisibility@MultitaskingViewVisibilityService@@AEAAXW4MULTITASKING_VIEW_TYPES@@0@Z @ 0x18008B5A8 (-UpdateVisibility@MultitaskingViewVisibilityService@@AEAAXW4MULTITASKING_VIEW_TYPES@@0@Z.c)
 *     ?GetCallbackArray@CGITRegistrationList@@QEAAJPEAPEAUIObjectArray@@@Z @ 0x18008BF68 (-GetCallbackArray@CGITRegistrationList@@QEAAJPEAPEAUIObjectArray@@@Z.c)
 *     ??$DoInvokeVoid@V?$VectorChangedEventHandler@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@@Collections@Foundation@Windows@@V_lambda_0185f2fcaf29182e01e5e20f55c595fb_@@@EventSource@Platform@@AEAAXPEAUEventLock@Details@1@V_lambda_0185f2fcaf29182e01e5e20f55c595fb_@@@Z @ 0x18068A4FC (--$DoInvokeVoid@V-$VectorChangedEventHandler@PE$AAUISwitchItemContextMenuMetadata@Switcher@Exper.c)
 *     ??$DoInvokeVoid@VBindableVectorChangedEventHandler@Interop@Xaml@UI@Windows@@V_lambda_fa30a613036bcec23797998bf71b5136_@@@EventSource@Platform@@AEAAXPEAUEventLock@Details@1@V_lambda_fa30a613036bcec23797998bf71b5136_@@@Z @ 0x18068A648 (--$DoInvokeVoid@VBindableVectorChangedEventHandler@Interop@Xaml@UI@Windows@@V_lambda_fa30a613036.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __stdcall _Platform_AcquireSRWLockShared(PSRWLOCK SRWLock)
{
  AcquireSRWLockShared(SRWLock);
}
