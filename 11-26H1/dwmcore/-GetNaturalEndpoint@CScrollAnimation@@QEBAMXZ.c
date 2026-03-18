/*
 * XREFs of ?GetNaturalEndpoint@CScrollAnimation@@QEBAMXZ @ 0x1801C0E10
 * Callers:
 *     ?CalculateInertiaCallbackValues@CInteractionTracker@@EEAA?AUInertiaCallbackValues@@XZ @ 0x1801C0BF0 (-CalculateInertiaCallbackValues@CInteractionTracker@@EEAA-AUInertiaCallbackValues@@XZ.c)
 *     ?GetProperty@CInteractionTracker@@MEAAJUDCOMPOSITION_PROPERTY_ID@@PEAVCExpressionValue@@@Z @ 0x1801CF9F0 (-GetProperty@CInteractionTracker@@MEAAJUDCOMPOSITION_PROPERTY_ID@@PEAVCExpressionValue@@@Z.c)
 *     ?CalculateInertiaCallbackValues@CInteractionTracker2@@EEAA?AUInertiaCallbackValues@@XZ @ 0x180272030 (-CalculateInertiaCallbackValues@CInteractionTracker2@@EEAA-AUInertiaCallbackValues@@XZ.c)
 *     ?GetProperty@CInteractionTracker2@@MEAAJUDCOMPOSITION_PROPERTY_ID@@PEAVCExpressionValue@@@Z @ 0x180273960 (-GetProperty@CInteractionTracker2@@MEAAJUDCOMPOSITION_PROPERTY_ID@@PEAVCExpressionValue@@@Z.c)
 * Callees:
 *     ?GetInteractionTracker@CScrollAnimation@@IEBAPEAVCInteractionTrackerBase@@XZ @ 0x18013A96C (-GetInteractionTracker@CScrollAnimation@@IEBAPEAVCInteractionTrackerBase@@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

float __fastcall CScrollAnimation::GetNaturalEndpoint(CScrollAnimation *this)
{
  __int64 v2; // rax
  float result; // xmm0_4
  struct CInteractionTrackerBase *InteractionTracker; // rax

  v2 = (*(__int64 (__fastcall **)(CScrollAnimation *))(*(_QWORD *)this + 264LL))(this);
  if ( *(_DWORD *)(v2 + 40) == 2 )
    return *(float *)(v2 + 84);
  InteractionTracker = CScrollAnimation::GetInteractionTracker(this);
  (*(void (__fastcall **)(struct CInteractionTrackerBase *, _QWORD))(*(_QWORD *)InteractionTracker + 232LL))(
    InteractionTracker,
    *((unsigned int *)this + 71));
  return result;
}
