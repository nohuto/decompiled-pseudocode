/*
 * XREFs of ?DemoteToBoundTracker@CInteractionTracker2@@EEAAX_N@Z @ 0x180272F40
 * Callers:
 *     <none>
 * Callees:
 *     ?DestroyDefaultAnimations@CInteractionTracker2@@AEAAX_N@Z @ 0x180272FC0 (-DestroyDefaultAnimations@CInteractionTracker2@@AEAAX_N@Z.c)
 *     ?StopCustomAnimation@CInteractionTracker2@@AEAAXH_N@Z @ 0x180277314 (-StopCustomAnimation@CInteractionTracker2@@AEAAXH_N@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CInteractionTracker2::DemoteToBoundTracker(CInteractionTracker2 *this, bool a2)
{
  char v2; // al

  v2 = *((_BYTE *)this + 829);
  if ( (v2 & 1) != 0 )
  {
    *((_BYTE *)this + 829) = v2 & 0xFE;
    (*(void (__fastcall **)(CInteractionTracker2 *))(*(_QWORD *)this + 440LL))(this);
    CInteractionTracker2::DestroyDefaultAnimations(this, 0);
    CInteractionTracker2::StopCustomAnimation(this, 0, a2);
    if ( *((_QWORD *)this + 85) )
    {
      if ( (*((_BYTE *)this + 829) & 2) == 0 )
        CInteractionTracker2::StopCustomAnimation(this, 1, a2);
    }
  }
}
