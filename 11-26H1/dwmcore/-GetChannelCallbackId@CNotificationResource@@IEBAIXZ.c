/*
 * XREFs of ?GetChannelCallbackId@CNotificationResource@@IEBAIXZ @ 0x18004AFB0
 * Callers:
 *     ?SampleStartingValue@CKeyframeAnimation@@AEAAJXZ @ 0x180046058 (-SampleStartingValue@CKeyframeAnimation@@AEAAJXZ.c)
 *     ?NotifyAnimationStateChanged@CBaseExpression@@AEAAJW4AnimationEventType@@@Z @ 0x18004B094 (-NotifyAnimationStateChanged@CBaseExpression@@AEAAJW4AnimationEventType@@@Z.c)
 *     ?ResolveReferenceWithCache@CExpression@@AEBAJPEBUExpressionReferenceNode@@PEAVCExpressionValue@@@Z @ 0x18004B7D0 (-ResolveReferenceWithCache@CExpression@@AEBAJPEBUExpressionReferenceNode@@PEAVCExpressionValue@@.c)
 *     ?OnCompilationCompleted@CCompiledEffectTemplate@@QEAAJXZ @ 0x18010B8AC (-OnCompilationCompleted@CCompiledEffectTemplate@@QEAAJXZ.c)
 *     ?SendPendingCallbacks@CInteractionTracker@@AEAAXXZ @ 0x18013BA80 (-SendPendingCallbacks@CInteractionTracker@@AEAAXXZ.c)
 *     ?SendPendingStateChangeCallbacks@CInteractionTracker@@AEAAX_N@Z @ 0x18013BE80 (-SendPendingStateChangeCallbacks@CInteractionTracker@@AEAAX_N@Z.c)
 *     ?SendValuesChangedCallbackIfNecessary@CInteractionTracker@@AEAA_NUD2DVector3@@M_N@Z @ 0x18013C4E8 (-SendValuesChangedCallbackIfNecessary@CInteractionTracker@@AEAA_NUD2DVector3@@M_N@Z.c)
 *     ?ProcessUpdate@CCompiledEffectTemplate@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_COMPILEDEFFECTTEMPLATE@@@Z @ 0x18014CE4C (-ProcessUpdate@CCompiledEffectTemplate@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_COMPILEDEFFECTTEM.c)
 *     ?BeginCompile@CEffectCompilationService@@QEAAJPEAVCCompiledEffectTemplate@@PEAUIEffectDescription@Composition@UI@Windows@@PEAPEAVCEffectCompilationTask@@@Z @ 0x18014D028 (-BeginCompile@CEffectCompilationService@@QEAAJPEAVCCompiledEffectTemplate@@PEAUIEffectDescriptio.c)
 *     ?IssueContextUpdateNotification@CVisual@@IEAAXMAEBUD2D_VECTOR_2F@@@Z @ 0x180177DE4 (-IssueContextUpdateNotification@CVisual@@IEAAXMAEBUD2D_VECTOR_2F@@@Z.c)
 *     ?ShrinkQueuedStateChanges@CExpressionManager@@AEAAXXZ @ 0x180180600 (-ShrinkQueuedStateChanges@CExpressionManager@@AEAAXXZ.c)
 *     ?NotifyMatrix3x2PropertyChanged@CPropertyChangeResource@@IEBAJUDCOMPOSITION_PROPERTY_ID@@AEBUD2D_MATRIX_3X2_F@@@Z @ 0x180183FD0 (-NotifyMatrix3x2PropertyChanged@CPropertyChangeResource@@IEBAJUDCOMPOSITION_PROPERTY_ID@@AEBUD2D.c)
 *     ?NotifyVector4PropertyChanged@CPropertyChangeResource@@IEBAJUDCOMPOSITION_PROPERTY_ID@@AEBUD2DVector4@@@Z @ 0x180190108 (-NotifyVector4PropertyChanged@CPropertyChangeResource@@IEBAJUDCOMPOSITION_PROPERTY_ID@@AEBUD2DVe.c)
 *     ?TransitionTrue@CAnimationTrigger@@AEAAXXZ @ 0x1801D5634 (-TransitionTrue@CAnimationTrigger@@AEAAXXZ.c)
 *     ?SendPendingCallbacks@CInteractionTracker2@@AEAAXXZ @ 0x1801E0DB0 (-SendPendingCallbacks@CInteractionTracker2@@AEAAXXZ.c)
 *     ?NotifyRequestIgnored@CInteractionTracker@@AEAAXH@Z @ 0x1802058EC (-NotifyRequestIgnored@CInteractionTracker@@AEAAXH@Z.c)
 *     ?OnEdgyDetected@CManipulation@@QEAAXPEBUEdgyDetectedParams@@@Z @ 0x18025FA28 (-OnEdgyDetected@CManipulation@@QEAAXPEBUEdgyDetectedParams@@@Z.c)
 *     ?NotifyBooleanPropertyChanged@CPropertyChangeResource@@IEBAJUDCOMPOSITION_PROPERTY_ID@@_N@Z @ 0x180267DD4 (-NotifyBooleanPropertyChanged@CPropertyChangeResource@@IEBAJUDCOMPOSITION_PROPERTY_ID@@_N@Z.c)
 *     ?NotifyColorPropertyChanged@CPropertyChangeResource@@IEBAJUDCOMPOSITION_PROPERTY_ID@@AEBU_D3DCOLORVALUE@@@Z @ 0x180267ECC (-NotifyColorPropertyChanged@CPropertyChangeResource@@IEBAJUDCOMPOSITION_PROPERTY_ID@@AEBU_D3DCOL.c)
 *     ?NotifyQuaternionPropertyChanged@CPropertyChangeResource@@IEBAJUDCOMPOSITION_PROPERTY_ID@@AEBUD2DQuaternion@@@Z @ 0x180267FD4 (-NotifyQuaternionPropertyChanged@CPropertyChangeResource@@IEBAJUDCOMPOSITION_PROPERTY_ID@@AEBUD2.c)
 *     ?NotifyRequestIgnored@CInteractionTracker2@@AEAAXH@Z @ 0x180274550 (-NotifyRequestIgnored@CInteractionTracker2@@AEAAXH@Z.c)
 *     ?SendPendingStateChangeCallbacks@CInteractionTracker2@@AEAAX_N@Z @ 0x180275CAC (-SendPendingStateChangeCallbacks@CInteractionTracker2@@AEAAX_N@Z.c)
 *     ?SendValuesChangedCallbackIfNecessary@CInteractionTracker2@@AEAA_NAEBUD2DVector3@@M_N@Z @ 0x1802760A8 (-SendValuesChangedCallbackIfNecessary@CInteractionTracker2@@AEAA_NAEBUD2DVector3@@M_N@Z.c)
 *     ?SendCaptureCompleted@CVisualCapture@@IEAAXXZ @ 0x180286888 (-SendCaptureCompleted@CVisualCapture@@IEAAXXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CNotificationResource::GetChannelCallbackId(CNotificationResource *this)
{
  __int64 result; // rax

  result = *((_QWORD *)this + 7);
  if ( result )
    return *(unsigned int *)(result + 116);
  return result;
}
