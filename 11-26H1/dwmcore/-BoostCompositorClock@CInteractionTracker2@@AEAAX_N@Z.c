/*
 * XREFs of ?BoostCompositorClock@CInteractionTracker2@@AEAAX_N@Z @ 0x180271DFC
 * Callers:
 *     ??1CInteractionTracker2@@UEAA@XZ @ 0x180271474 (--1CInteractionTracker2@@UEAA@XZ.c)
 *     ?TransitionToCustomAnimation@CInteractionTracker2@@AEAA_NPEAVCBaseExpression@@W4CustomAnimationTarget@@@Z @ 0x18027740C (-TransitionToCustomAnimation@CInteractionTracker2@@AEAA_NPEAVCBaseExpression@@W4CustomAnimationT.c)
 *     ?TransitionToIdle@CInteractionTracker2@@AEAAXXZ @ 0x180277528 (-TransitionToIdle@CInteractionTracker2@@AEAAXXZ.c)
 *     ?TransitionToInContact@CInteractionTracker2@@AEAAXXZ @ 0x180277604 (-TransitionToInContact@CInteractionTracker2@@AEAAXXZ.c)
 *     ?TransitionToInertia@CInteractionTracker2@@AEAA_NW4InertiaReason@1@@Z @ 0x180277668 (-TransitionToInertia@CInteractionTracker2@@AEAA_NW4InertiaReason@1@@Z.c)
 * Callees:
 *     ?LogBoostCompositorClock@CInteractionTracker2@@AEAAX_N@Z @ 0x1802743D8 (-LogBoostCompositorClock@CInteractionTracker2@@AEAAX_N@Z.c)
 */

void __fastcall CInteractionTracker2::BoostCompositorClock(CInteractionTracker2 *this, bool a2)
{
  __int64 v2; // r8
  int v3; // eax
  int v4; // eax

  if ( ((*((_BYTE *)this + 829) & 4) != 0) != a2 )
  {
    v2 = *((_QWORD *)this + 3);
    v3 = *(_DWORD *)(v2 + 6372);
    if ( a2 )
    {
      v4 = v3 + 1;
    }
    else
    {
      if ( !v3 )
      {
LABEL_7:
        *((_BYTE *)this + 829) &= ~4u;
        *((_BYTE *)this + 829) |= 4 * a2;
        CInteractionTracker2::LogBoostCompositorClock(this, a2);
        return;
      }
      v4 = v3 - 1;
    }
    *(_DWORD *)(v2 + 6372) = v4;
    goto LABEL_7;
  }
}
