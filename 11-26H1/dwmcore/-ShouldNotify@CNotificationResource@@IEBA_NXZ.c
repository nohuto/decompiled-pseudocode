/*
 * XREFs of ?ShouldNotify@CNotificationResource@@IEBA_NXZ @ 0x18010BE20
 * Callers:
 *     ?SampleStartingValue@CKeyframeAnimation@@AEAAJXZ @ 0x180046058 (-SampleStartingValue@CKeyframeAnimation@@AEAAJXZ.c)
 *     ?ResolveReferenceWithCache@CExpression@@AEBAJPEBUExpressionReferenceNode@@PEAVCExpressionValue@@@Z @ 0x18004B7D0 (-ResolveReferenceWithCache@CExpression@@AEBAJPEBUExpressionReferenceNode@@PEAVCExpressionValue@@.c)
 *     ?OnCompilationCompleted@CCompiledEffectTemplate@@QEAAJXZ @ 0x18010B8AC (-OnCompilationCompleted@CCompiledEffectTemplate@@QEAAJXZ.c)
 *     ?DetachFromChannel@CVisual@@UEAAXPEAVCChannelContext@@_N@Z @ 0x18010BD40 (-DetachFromChannel@CVisual@@UEAAXPEAVCChannelContext@@_N@Z.c)
 *     ?NotifyAnimationStopped@CBaseExpression@@IEAAJXZ @ 0x18010D45C (-NotifyAnimationStopped@CBaseExpression@@IEAAJXZ.c)
 *     ?ProcessUpdate@CCompiledEffectTemplate@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_COMPILEDEFFECTTEMPLATE@@@Z @ 0x18014CE4C (-ProcessUpdate@CCompiledEffectTemplate@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_COMPILEDEFFECTTEM.c)
 *     ?TransitionTrue@CAnimationTrigger@@AEAAXXZ @ 0x1801D5634 (-TransitionTrue@CAnimationTrigger@@AEAAXXZ.c)
 *     ?ShouldNotify@CInteractionTracker2@@AEAA_NUDCOMPOSITION_PROPERTY_ID@@@Z @ 0x18021EBC4 (-ShouldNotify@CInteractionTracker2@@AEAA_NUDCOMPOSITION_PROPERTY_ID@@@Z.c)
 *     ?OnEdgyDetected@CManipulation@@QEAAXPEBUEdgyDetectedParams@@@Z @ 0x18025FA28 (-OnEdgyDetected@CManipulation@@QEAAXPEBUEdgyDetectedParams@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall CNotificationResource::ShouldNotify(CNotificationResource *this)
{
  __int64 v1; // rax

  v1 = *((_QWORD *)this + 7);
  return v1 && *(_DWORD *)(v1 + 116) && *((_DWORD *)this + 18);
}
