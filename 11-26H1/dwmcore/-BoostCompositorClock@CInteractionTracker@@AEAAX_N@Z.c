/*
 * XREFs of ?BoostCompositorClock@CInteractionTracker@@AEAAX_N@Z @ 0x18013CF74
 * Callers:
 *     ?TransitionToIdle@CInteractionTracker@@AEAAXXZ @ 0x18013C7BC (-TransitionToIdle@CInteractionTracker@@AEAAXXZ.c)
 *     ??1CInteractionTracker@@UEAA@XZ @ 0x18013CCDC (--1CInteractionTracker@@UEAA@XZ.c)
 *     ?TransitionToInContact@CInteractionTracker@@AEAAXXZ @ 0x18013CF10 (-TransitionToInContact@CInteractionTracker@@AEAAXXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall CInteractionTracker::BoostCompositorClock(CInteractionTracker *this, bool a2)
{
  __int64 v2; // r8
  int v3; // eax
  int v4; // eax

  if ( ((*((_BYTE *)this + 597) & 2) != 0) != a2 )
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
        goto LABEL_5;
      v4 = v3 - 1;
    }
    *(_DWORD *)(v2 + 6372) = v4;
LABEL_5:
    *((_BYTE *)this + 597) &= ~2u;
    *((_BYTE *)this + 597) |= 2 * a2;
    CInteractionTracker::LogBoostCompositorClock(this, a2);
  }
}
