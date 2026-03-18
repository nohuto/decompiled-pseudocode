/*
 * XREFs of ?HasImpulse@CInteractionTracker2@@QEBA_NXZ @ 0x1801D95BC
 * Callers:
 *     ?CalculateInertiaCallbackValues@CInteractionTracker2@@EEAA?AUInertiaCallbackValues@@XZ @ 0x180272030 (-CalculateInertiaCallbackValues@CInteractionTracker2@@EEAA-AUInertiaCallbackValues@@XZ.c)
 *     ?GetProperty@CInteractionTracker2@@MEAAJUDCOMPOSITION_PROPERTY_ID@@PEAVCExpressionValue@@@Z @ 0x180273960 (-GetProperty@CInteractionTracker2@@MEAAJUDCOMPOSITION_PROPERTY_ID@@PEAVCExpressionValue@@@Z.c)
 *     ?TransitionToInertia@CInteractionTracker2@@AEAA_NW4InertiaReason@1@@Z @ 0x180277668 (-TransitionToInertia@CInteractionTracker2@@AEAA_NW4InertiaReason@1@@Z.c)
 * Callees:
 *     ?HasImpulse@CScrollAnimation@@QEBA_NXZ @ 0x1801391E8 (-HasImpulse@CScrollAnimation@@QEBA_NXZ.c)
 */

char __fastcall CInteractionTracker2::HasImpulse(CInteractionTracker2 *this)
{
  CScrollAnimation *v2; // rcx
  char v3; // bl
  CScrollAnimation *v4; // rcx
  CScrollAnimation *v5; // rcx

  if ( (*((_BYTE *)this + 828) & 0x10) != 0 )
    return 1;
  v2 = (CScrollAnimation *)*((_QWORD *)this + 82);
  v3 = 0;
  if ( v2 )
  {
    if ( CScrollAnimation::HasImpulse(v2) )
      return 1;
  }
  v4 = (CScrollAnimation *)*((_QWORD *)this + 83);
  if ( v4 )
  {
    if ( CScrollAnimation::HasImpulse(v4) )
      return 1;
  }
  v5 = (CScrollAnimation *)*((_QWORD *)this + 81);
  if ( v5 )
  {
    if ( CScrollAnimation::HasImpulse(v5) )
      return 1;
  }
  return v3;
}
