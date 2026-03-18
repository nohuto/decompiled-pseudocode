/*
 * XREFs of ?Invalidate@CExpressionManager@@QEAAXXZ @ 0x18010E50C
 * Callers:
 *     ?InvalidateConsumingAnimationsInternal@CResource@@AEAAXUDCOMPOSITION_PROPERTY_ID@@@Z @ 0x180022E18 (-InvalidateConsumingAnimationsInternal@CResource@@AEAAXUDCOMPOSITION_PROPERTY_ID@@@Z.c)
 *     ?PreRender@CComposition@@IEAAJPEA_N@Z @ 0x18002D828 (-PreRender@CComposition@@IEAAJPEA_N@Z.c)
 *     ?ProcessSetSeekState@CKeyframeAnimation@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_KEYFRAMEANIMATION_SETSEEKSTATE@@@Z @ 0x180045738 (-ProcessSetSeekState@CKeyframeAnimation@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_KEYFRAMEANIMATIO.c)
 *     ?RegisterExpression@CExpressionManager@@QEAAJPEAVCBaseExpression@@@Z @ 0x18010E310 (-RegisterExpression@CExpressionManager@@QEAAJPEAVCBaseExpression@@@Z.c)
 *     ?BigHammerInvalidateConsumingAnimations@CInteractionTracker2@@IEAAXW4Enum@InteractionTracker2Property@@@Z @ 0x1801396E4 (-BigHammerInvalidateConsumingAnimations@CInteractionTracker2@@IEAAXW4Enum@InteractionTracker2Pro.c)
 *     ?BigHammerInvalidateConsumingAnimations@CInteractionTracker@@IEAAXW4Enum@InteractionTrackerProperty@@@Z @ 0x1801398A0 (-BigHammerInvalidateConsumingAnimations@CInteractionTracker@@IEAAXW4Enum@InteractionTrackerPrope.c)
 *     ?OnChanged@CInteractionTracker@@MEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x18013D8D0 (-OnChanged@CInteractionTracker@@MEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?OnManipulationChanged@InteractionSourceManager@@QEAAXW4Flags@NotificationEventArgs@@PEAVCManipulation@@@Z @ 0x18013D9E8 (-OnManipulationChanged@InteractionSourceManager@@QEAAXW4Flags@NotificationEventArgs@@PEAVCManipu.c)
 *     ?SuspendAnimations@CExpressionManager@@QEAAXI_N0@Z @ 0x18016D708 (-SuspendAnimations@CExpressionManager@@QEAAXI_N0@Z.c)
 *     ?RegisterIndirectTarget@CBaseExpression@@QEAAXPEAVCResource@@@Z @ 0x180191BA4 (-RegisterIndirectTarget@CBaseExpression@@QEAAXPEAVCResource@@@Z.c)
 *     ?ProcessSetTracingCookie@CBaseExpression@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_BASEEXPRESSION_SETTRACINGCOOKIE@@@Z @ 0x1801A9D90 (-ProcessSetTracingCookie@CBaseExpression@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_BASEEXPRESSION_.c)
 *     ?OnPlaybackRateChanged@CAnimationController@@QEAAXXZ @ 0x1801DB7C0 (-OnPlaybackRateChanged@CAnimationController@@QEAAXXZ.c)
 *     ?ProcessSetInjectionData@CInjectionAnimation@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_INJECTIONANIMATION_SETINJECTIONDATA@@@Z @ 0x180216974 (-ProcessSetInjectionData@CInjectionAnimation@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_INJECTIONAN.c)
 *     ?ProcessSetInertiaCenterpointY@CInteractionTracker@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_INTERACTIONTRACKER_SETINERTIACENTERPOINTY@@@Z @ 0x180218A0C (-ProcessSetInertiaCenterpointY@CInteractionTracker@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_INTER.c)
 *     ?ProcessSetInertiaCenterpointX@CInteractionTracker@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_INTERACTIONTRACKER_SETINERTIACENTERPOINTX@@@Z @ 0x180218AE4 (-ProcessSetInertiaCenterpointX@CInteractionTracker@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_INTER.c)
 *     ?ProcessSetInertiaModifierAnimations@CInteractionTracker@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_INTERACTIONTRACKER_SETINERTIAMODIFIERANIMATIONS@@PEBXI@Z @ 0x180270ED8 (-ProcessSetInertiaModifierAnimations@CInteractionTracker@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD.c)
 *     ?OnChanged@CInteractionTracker2@@MEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180274600 (-OnChanged@CInteractionTracker2@@MEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?ProcessSetInertiaCenterpointX@CInteractionTracker2@@AEAAXXZ @ 0x180274D58 (-ProcessSetInertiaCenterpointX@CInteractionTracker2@@AEAAXXZ.c)
 *     ?ProcessSetInertiaCenterpointY@CInteractionTracker2@@AEAAXXZ @ 0x180274DC0 (-ProcessSetInertiaCenterpointY@CInteractionTracker2@@AEAAXXZ.c)
 *     ?ProcessSetInertiaModifierAnimations@CInteractionTracker2@@AEAAXHPEAVCConditionalExpression@@AEBV?$vector@IV?$allocator@I@std@@@std@@@Z @ 0x180274EB0 (-ProcessSetInertiaModifierAnimations@CInteractionTracker2@@AEAAXHPEAVCConditionalExpression@@AEB.c)
 *     ?UpdateAnimateValues@CScalar@@UEAA_NXZ @ 0x18027F4F0 (-UpdateAnimateValues@CScalar@@UEAA_NXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall CExpressionManager::Invalidate(CExpressionManager *this)
{
  CComposition *v1; // rax
  __int64 v2; // rdx
  __int64 v3; // rcx

  v1 = g_pComposition;
  v2 = 1LL;
  *((_BYTE *)this + 417) = 1;
  v3 = *((_QWORD *)v1 + 110);
  if ( v3 == *((_QWORD *)v1 + 111) )
  {
    if ( v3 != -1 )
      v2 = v3 + 1;
    if ( v2 != v3 )
      ScheduleCompositionPass(0, 8u);
  }
}
