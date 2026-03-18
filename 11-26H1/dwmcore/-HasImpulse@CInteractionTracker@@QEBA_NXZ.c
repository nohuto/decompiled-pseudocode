/*
 * XREFs of ?HasImpulse@CInteractionTracker@@QEBA_NXZ @ 0x1801C0F24
 * Callers:
 *     ?TransitionToInertia@CInteractionTracker@@AEAA_NW4InertiaReason@1@@Z @ 0x18013E0F4 (-TransitionToInertia@CInteractionTracker@@AEAA_NW4InertiaReason@1@@Z.c)
 *     ?CalculateInertiaCallbackValues@CInteractionTracker@@EEAA?AUInertiaCallbackValues@@XZ @ 0x1801C0BF0 (-CalculateInertiaCallbackValues@CInteractionTracker@@EEAA-AUInertiaCallbackValues@@XZ.c)
 *     ?GetProperty@CInteractionTracker@@MEAAJUDCOMPOSITION_PROPERTY_ID@@PEAVCExpressionValue@@@Z @ 0x1801CF9F0 (-GetProperty@CInteractionTracker@@MEAAJUDCOMPOSITION_PROPERTY_ID@@PEAVCExpressionValue@@@Z.c)
 * Callees:
 *     ?HasImpulse@CScrollAnimation@@QEBA_NXZ @ 0x1801391E8 (-HasImpulse@CScrollAnimation@@QEBA_NXZ.c)
 */

char __fastcall CInteractionTracker::HasImpulse(CInteractionTracker *this)
{
  char v2; // bl
  CScrollAnimation *v4; // rcx
  CScrollAnimation *v5; // rcx
  CScrollAnimation *v6; // rcx

  if ( (*((_BYTE *)this + 596) & 8) != 0 )
    return 1;
  v4 = (CScrollAnimation *)*((_QWORD *)this + 53);
  v2 = 0;
  if ( v4 )
  {
    if ( CScrollAnimation::HasImpulse(v4) )
      return 1;
  }
  v5 = (CScrollAnimation *)*((_QWORD *)this + 54);
  if ( v5 )
  {
    if ( CScrollAnimation::HasImpulse(v5) )
      return 1;
  }
  v6 = (CScrollAnimation *)*((_QWORD *)this + 52);
  if ( v6 )
  {
    if ( CScrollAnimation::HasImpulse(v6) )
      return 1;
  }
  return v2;
}
