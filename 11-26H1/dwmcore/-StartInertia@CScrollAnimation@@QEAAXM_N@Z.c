/*
 * XREFs of ?StartInertia@CScrollAnimation@@QEAAXM_N@Z @ 0x18013E42C
 * Callers:
 *     ?CalculateInertiaValue@CScrollAnimation@@AEAAJPEAVCExpressionValueStack@@PEAM@Z @ 0x180138D94 (-CalculateInertiaValue@CScrollAnimation@@AEAAJPEAVCExpressionValueStack@@PEAM@Z.c)
 *     ?TransitionToInertia@CInteractionTracker@@AEAA_NW4InertiaReason@1@@Z @ 0x18013E0F4 (-TransitionToInertia@CInteractionTracker@@AEAA_NW4InertiaReason@1@@Z.c)
 *     ?TransitionToInertia@CInteractionTracker2@@AEAA_NW4InertiaReason@1@@Z @ 0x180277668 (-TransitionToInertia@CInteractionTracker2@@AEAA_NW4InertiaReason@1@@Z.c)
 * Callees:
 *     ?GetFrameTargetTime@CComposition@@QEBA_KXZ @ 0x180046630 (-GetFrameTargetTime@CComposition@@QEBA_KXZ.c)
 *     ?GetInteractionTracker@CScrollAnimation@@IEBAPEAVCInteractionTrackerBase@@XZ @ 0x18013A96C (-GetInteractionTracker@CScrollAnimation@@IEBAPEAVCInteractionTrackerBase@@XZ.c)
 *     ?TryGetChainingHelper@CScrollAnimation@@AEBAPEAVCChainingHelper@@XZ @ 0x18013A9FC (-TryGetChainingHelper@CScrollAnimation@@AEBAPEAVCChainingHelper@@XZ.c)
 *     ?StartInertia@CChainingHelper@@QEAAXW4ScrollAxis@@@Z @ 0x1802049B8 (-StartInertia@CChainingHelper@@QEAAXW4ScrollAxis@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CScrollAnimation::StartInertia(CScrollAnimation *this, float a2, char a3)
{
  struct CInteractionTrackerBase *InteractionTracker; // rbx
  __int64 v6; // r8
  __int64 v7; // r8
  __int64 v8; // rdx
  struct CChainingHelper *ChainingHelper; // rax

  InteractionTracker = CScrollAnimation::GetInteractionTracker(this);
  *((_QWORD *)this + 38) = CComposition::GetFrameTargetTime(*((CComposition **)this + 3));
  *((_DWORD *)this + 70) = 2;
  (*(void (__fastcall **)(struct CInteractionTrackerBase *, _QWORD, __int64, _QWORD))(*(_QWORD *)InteractionTracker
                                                                                    + 456LL))(
    InteractionTracker,
    *((unsigned int *)this + 71),
    v6,
    0LL);
  LOBYTE(v7) = a3;
  (*(void (__fastcall **)(CScrollAnimation *, __int64, __int64))(*(_QWORD *)this + 280LL))(this, v8, v7);
  ChainingHelper = CScrollAnimation::TryGetChainingHelper(this);
  if ( !a3 && ChainingHelper )
    CChainingHelper::StartInertia(ChainingHelper, *((unsigned int *)this + 71));
  *((_BYTE *)this + 312) &= ~4u;
  *(_OWORD *)((char *)this + 376) = 0LL;
  *((_QWORD *)this + 49) = 0LL;
}
