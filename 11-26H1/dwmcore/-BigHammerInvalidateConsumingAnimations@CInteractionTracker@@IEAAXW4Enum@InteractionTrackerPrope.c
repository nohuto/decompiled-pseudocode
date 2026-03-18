/*
 * XREFs of ?BigHammerInvalidateConsumingAnimations@CInteractionTracker@@IEAAXW4Enum@InteractionTrackerProperty@@@Z @ 0x1801398A0
 * Callers:
 *     ?SetMaxScale@CInteractionTracker@@AEAAXM@Z @ 0x180138ECC (-SetMaxScale@CInteractionTracker@@AEAAXM@Z.c)
 *     ?SetMinScale@CInteractionTracker@@AEAAXM@Z @ 0x180138FA4 (-SetMinScale@CInteractionTracker@@AEAAXM@Z.c)
 *     ?SetScaleInertiaDecayRate@CInteractionTracker@@AEAAXM@Z @ 0x1801390FC (-SetScaleInertiaDecayRate@CInteractionTracker@@AEAAXM@Z.c)
 *     ?SetPositionInertiaDecayRate@CInteractionTracker@@AEAAXAEBUD2DVector3@@@Z @ 0x180139140 (-SetPositionInertiaDecayRate@CInteractionTracker@@AEAAXAEBUD2DVector3@@@Z.c)
 *     ?SetPositionInternal@CInteractionTracker@@EEAAXAEBUD2DVector3@@W4TrackerUpdateType@CInteractionTrackerBase@@@Z @ 0x180139520 (-SetPositionInternal@CInteractionTracker@@EEAAXAEBUD2DVector3@@W4TrackerUpdateType@CInteractionT.c)
 *     ?UpdatePositionRoundingSuggestion@CInteractionTracker@@AEAAXXZ @ 0x18013967C (-UpdatePositionRoundingSuggestion@CInteractionTracker@@AEAAXXZ.c)
 *     ?SetMaxPosition@CInteractionTracker@@AEAAXAEBUD2DVector3@@@Z @ 0x180139770 (-SetMaxPosition@CInteractionTracker@@AEAAXAEBUD2DVector3@@@Z.c)
 *     ?SetMinPosition@CInteractionTracker@@AEAAXAEBUD2DVector3@@@Z @ 0x18013992C (-SetMinPosition@CInteractionTracker@@AEAAXAEBUD2DVector3@@@Z.c)
 *     ?SetScaleInternal@CInteractionTracker@@EEAAXMW4TrackerUpdateType@CInteractionTrackerBase@@@Z @ 0x18013B4E0 (-SetScaleInternal@CInteractionTracker@@EEAAXMW4TrackerUpdateType@CInteractionTrackerBase@@@Z.c)
 *     ?AddOrUpdatePendingInertiaStateChange@CInteractionTracker@@UEAAXW4ScrollAxis@@MW4TrackerUpdateType@CInteractionTrackerBase@@@Z @ 0x1801C4B20 (-AddOrUpdatePendingInertiaStateChange@CInteractionTracker@@UEAAXW4ScrollAxis@@MW4TrackerUpdateTy.c)
 * Callees:
 *     ?first@?$pointer_buffer_impl@PEAVCBaseExpression@@$0A@@detail@@QEBAPEAPEAVCBaseExpression@@XZ @ 0x18004D640 (-first@-$pointer_buffer_impl@PEAVCBaseExpression@@$0A@@detail@@QEBAPEAPEAVCBaseExpression@@XZ.c)
 *     ?end@?$vector_facade@PEAVCBaseExpression@@V?$pointer_buffer_impl@PEAVCBaseExpression@@$0A@@detail@@@detail@@QEBA?AV?$basic_iterator@QEAVCBaseExpression@@@2@XZ @ 0x18004DDD4 (-end@-$vector_facade@PEAVCBaseExpression@@V-$pointer_buffer_impl@PEAVCBaseExpression@@$0A@@detai.c)
 *     ?empty@?$vector_facade@PEAVCBaseExpression@@V?$pointer_buffer_impl@PEAVCBaseExpression@@$0A@@detail@@@detail@@QEBA_NXZ @ 0x18004DFD4 (-empty@-$vector_facade@PEAVCBaseExpression@@V-$pointer_buffer_impl@PEAVCBaseExpression@@$0A@@det.c)
 *     ?Invalidate@CExpressionManager@@QEAAXXZ @ 0x18010E50C (-Invalidate@CExpressionManager@@QEAAXXZ.c)
 *     ?GetAnimationConsumersForProperty@CResource@@QEBAAEBV?$vector_facade@PEAVCBaseExpression@@V?$pointer_buffer_impl@PEAVCBaseExpression@@$0A@@detail@@@detail@@UDCOMPOSITION_PROPERTY_ID@@@Z @ 0x180139BA0 (-GetAnimationConsumersForProperty@CResource@@QEBAAEBV-$vector_facade@PEAVCBaseExpression@@V-$poi.c)
 */

void __fastcall CInteractionTracker::BigHammerInvalidateConsumingAnimations(__int64 a1, __int64 a2)
{
  _QWORD *AnimationConsumersForProperty; // rdi
  __int64 *v4; // rbx
  __int64 v5; // rax
  CExpressionManager *v6; // rbx
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
      v5 = *v4++;
      *(_QWORD *)(v5 + 168) = 0LL;
    }
    v6 = *(CExpressionManager **)(*(_QWORD *)(a1 + 24) + 816LL);
    CExpressionManager::Invalidate(v6);
    *((_BYTE *)v6 + 419) = 1;
  }
}
