/*
 * XREFs of ?DemoteToBoundTracker@CInteractionTracker@@EEAAX_N@Z @ 0x18021FE70
 * Callers:
 *     <none>
 * Callees:
 *     ?StopCustomAnimation@CInteractionTracker@@AEAAXH_N@Z @ 0x18013D238 (-StopCustomAnimation@CInteractionTracker@@AEAAXH_N@Z.c)
 *     ?DestroyDefaultAnimations@CInteractionTracker@@AEAAX_N@Z @ 0x18013D338 (-DestroyDefaultAnimations@CInteractionTracker@@AEAAX_N@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CInteractionTracker::DemoteToBoundTracker(CInteractionTracker *this, char a2)
{
  char v2; // al

  v2 = *((_BYTE *)this + 596);
  if ( v2 < 0 )
  {
    *((_BYTE *)this + 596) = v2 & 0x7F;
    (*(void (__fastcall **)(CInteractionTracker *))(*(_QWORD *)this + 440LL))(this);
    CInteractionTracker::DestroyDefaultAnimations(this, 0);
    CInteractionTracker::StopCustomAnimation(this, 0, a2);
    if ( *((_QWORD *)this + 56) )
    {
      if ( (*((_BYTE *)this + 597) & 1) == 0 )
        CInteractionTracker::StopCustomAnimation(this, 1u, a2);
    }
  }
}
