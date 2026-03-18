/*
 * XREFs of ?BigHammerInvalidateConsumingAnimations@CInteractionTracker2@@IEAAXW4Enum@InteractionTracker2Property@@@Z @ 0x1801396E4
 * Callers:
 *     ?UpdatePositionRoundingSuggestion@CInteractionTracker2@@AEAAXXZ @ 0x18021B0C0 (-UpdatePositionRoundingSuggestion@CInteractionTracker2@@AEAAXXZ.c)
 *     ?AddOrUpdatePendingInertiaStateChange@CInteractionTracker2@@UEAAXW4ScrollAxis@@MW4TrackerUpdateType@CInteractionTrackerBase@@@Z @ 0x1802717D0 (-AddOrUpdatePendingInertiaStateChange@CInteractionTracker2@@UEAAXW4ScrollAxis@@MW4TrackerUpdateT.c)
 *     ?SetMaxPositionInternal@CInteractionTracker2@@AEAAXAEBUD2DVector3@@@Z @ 0x180276274 (-SetMaxPositionInternal@CInteractionTracker2@@AEAAXAEBUD2DVector3@@@Z.c)
 *     ?SetMaxScaleInternal@CInteractionTracker2@@AEAAXM@Z @ 0x1802763A4 (-SetMaxScaleInternal@CInteractionTracker2@@AEAAXM@Z.c)
 *     ?SetMinPositionInternal@CInteractionTracker2@@AEAAXAEBUD2DVector3@@@Z @ 0x180276448 (-SetMinPositionInternal@CInteractionTracker2@@AEAAXAEBUD2DVector3@@@Z.c)
 *     ?SetMinScaleInternal@CInteractionTracker2@@AEAAXM@Z @ 0x18027655C (-SetMinScaleInternal@CInteractionTracker2@@AEAAXM@Z.c)
 *     ?SetPositionInertiaDecayRateInternal@CInteractionTracker2@@AEAAXAEBUD2DVector3@@@Z @ 0x180276600 (-SetPositionInertiaDecayRateInternal@CInteractionTracker2@@AEAAXAEBUD2DVector3@@@Z.c)
 *     ?SetPositionInternal@CInteractionTracker2@@EEAAXAEBUD2DVector3@@W4TrackerUpdateType@CInteractionTrackerBase@@@Z @ 0x1802766B0 (-SetPositionInternal@CInteractionTracker2@@EEAAXAEBUD2DVector3@@W4TrackerUpdateType@CInteraction.c)
 *     ?SetScaleInertiaDecayRateInternal@CInteractionTracker2@@AEAAXM@Z @ 0x180276E2C (-SetScaleInertiaDecayRateInternal@CInteractionTracker2@@AEAAXM@Z.c)
 *     ?SetScaleInternal@CInteractionTracker2@@EEAAXMW4TrackerUpdateType@CInteractionTrackerBase@@@Z @ 0x180276E70 (-SetScaleInternal@CInteractionTracker2@@EEAAXMW4TrackerUpdateType@CInteractionTrackerBase@@@Z.c)
 * Callees:
 *     ?first@?$pointer_buffer_impl@PEAVCBaseExpression@@$0A@@detail@@QEBAPEAPEAVCBaseExpression@@XZ @ 0x18004D640 (-first@-$pointer_buffer_impl@PEAVCBaseExpression@@$0A@@detail@@QEBAPEAPEAVCBaseExpression@@XZ.c)
 *     ?end@?$vector_facade@PEAVCBaseExpression@@V?$pointer_buffer_impl@PEAVCBaseExpression@@$0A@@detail@@@detail@@QEBA?AV?$basic_iterator@QEAVCBaseExpression@@@2@XZ @ 0x18004DDD4 (-end@-$vector_facade@PEAVCBaseExpression@@V-$pointer_buffer_impl@PEAVCBaseExpression@@$0A@@detai.c)
 *     ?empty@?$vector_facade@PEAVCBaseExpression@@V?$pointer_buffer_impl@PEAVCBaseExpression@@$0A@@detail@@@detail@@QEBA_NXZ @ 0x18004DFD4 (-empty@-$vector_facade@PEAVCBaseExpression@@V-$pointer_buffer_impl@PEAVCBaseExpression@@$0A@@det.c)
 *     ?Invalidate@CExpressionManager@@QEAAXXZ @ 0x18010E50C (-Invalidate@CExpressionManager@@QEAAXXZ.c)
 *     ?GetAnimationConsumersForProperty@CResource@@QEBAAEBV?$vector_facade@PEAVCBaseExpression@@V?$pointer_buffer_impl@PEAVCBaseExpression@@$0A@@detail@@@detail@@UDCOMPOSITION_PROPERTY_ID@@@Z @ 0x180139BA0 (-GetAnimationConsumersForProperty@CResource@@QEBAAEBV-$vector_facade@PEAVCBaseExpression@@V-$poi.c)
 */

void __fastcall CInteractionTracker2::BigHammerInvalidateConsumingAnimations(__int64 a1, __int64 a2)
{
  _QWORD *AnimationConsumersForProperty; // rdi
  __int64 *v4; // rbx
  CExpressionManager *v5; // rbx
  __int64 v6; // rax
  __int64 *v7; // [rsp+40h] [rbp+18h] BYREF

  AnimationConsumersForProperty = (_QWORD *)CResource::GetAnimationConsumersForProperty(a1, a2);
  if ( !detail::vector_facade<CBaseExpression *,detail::pointer_buffer_impl<CBaseExpression *,0>>::empty(AnimationConsumersForProperty) )
  {
    v4 = (__int64 *)detail::pointer_buffer_impl<CBaseExpression *,0>::first(AnimationConsumersForProperty);
    detail::vector_facade<CBaseExpression *,detail::pointer_buffer_impl<CBaseExpression *,0>>::end(
      AnimationConsumersForProperty,
      &v7);
    while ( v4 != v7 )
    {
      v6 = *v4++;
      *(_QWORD *)(v6 + 168) = 0LL;
    }
    v5 = *(CExpressionManager **)(*(_QWORD *)(a1 + 24) + 816LL);
    CExpressionManager::Invalidate(v5);
    *((_BYTE *)v5 + 419) = 1;
  }
}
