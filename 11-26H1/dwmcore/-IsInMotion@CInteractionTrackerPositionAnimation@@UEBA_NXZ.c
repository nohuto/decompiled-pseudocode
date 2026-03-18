/*
 * XREFs of ?IsInMotion@CInteractionTrackerPositionAnimation@@UEBA_NXZ @ 0x180139F50
 * Callers:
 *     <none>
 * Callees:
 *     ?IsInMotion@CScrollAnimation@@UEBA_NXZ @ 0x180139FC0 (-IsInMotion@CScrollAnimation@@UEBA_NXZ.c)
 *     ?GetInteractionTracker@CScrollAnimation@@IEBAPEAVCInteractionTrackerBase@@XZ @ 0x18013A96C (-GetInteractionTracker@CScrollAnimation@@IEBAPEAVCInteractionTrackerBase@@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

char __fastcall CInteractionTrackerPositionAnimation::IsInMotion(CInteractionTrackerPositionAnimation *this)
{
  char v2; // di
  struct CInteractionTrackerBase *InteractionTracker; // rax
  unsigned __int64 v5; // rbx

  v2 = 0;
  if ( CScrollAnimation::IsInMotion(this) )
    return 1;
  InteractionTracker = CScrollAnimation::GetInteractionTracker(this);
  v5 = *((_QWORD *)this + 41);
  if ( (*(__int64 (__fastcall **)(struct CInteractionTrackerBase *, __int64))(*(_QWORD *)InteractionTracker + 408LL))(
         InteractionTracker,
         2LL) > v5 )
    return 1;
  return v2;
}
