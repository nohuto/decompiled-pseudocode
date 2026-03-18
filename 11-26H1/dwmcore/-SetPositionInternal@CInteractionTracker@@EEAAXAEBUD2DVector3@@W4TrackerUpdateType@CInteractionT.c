/*
 * XREFs of ?SetPositionInternal@CInteractionTracker@@EEAAXAEBUD2DVector3@@W4TrackerUpdateType@CInteractionTrackerBase@@@Z @ 0x180139520
 * Callers:
 *     <none>
 * Callees:
 *     ?UpdateBoundTrackerPosition@CInteractionTrackerBindingManager@@QEAAXPEAVCInteractionTrackerBase@@AEBUD2DVector3@@_N@Z @ 0x180137C78 (-UpdateBoundTrackerPosition@CInteractionTrackerBindingManager@@QEAAXPEAVCInteractionTrackerBase@.c)
 *     ?UpdatePositionRoundingSuggestion@CInteractionTracker@@AEAAXXZ @ 0x18013967C (-UpdatePositionRoundingSuggestion@CInteractionTracker@@AEAAXXZ.c)
 *     ?BigHammerInvalidateConsumingAnimations@CInteractionTracker@@IEAAXW4Enum@InteractionTrackerProperty@@@Z @ 0x1801398A0 (-BigHammerInvalidateConsumingAnimations@CInteractionTracker@@IEAAXW4Enum@InteractionTrackerPrope.c)
 *     ?TelemetrySetPosition@InteractionSourceManager@@QEAAX_K@Z @ 0x18013AE78 (-TelemetrySetPosition@InteractionSourceManager@@QEAAX_K@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CInteractionTracker::SetPositionInternal(__int64 a1, __int64 a2, int a3)
{
  unsigned __int64 v6; // rcx
  int v7; // eax
  CInteractionTrackerBindingManager *v8; // rcx
  unsigned __int64 v9; // rdi

  v6 = *(_QWORD *)(a1 + 184) - *(_QWORD *)a2;
  if ( !v6 )
    v6 = *(unsigned int *)(a1 + 192) - (unsigned __int64)*(unsigned int *)(a2 + 8);
  if ( v6 )
  {
    *(_QWORD *)(a1 + 184) = *(_QWORD *)a2;
    v7 = *(_DWORD *)(a2 + 8);
    *(_BYTE *)(a1 + 596) |= 2u;
    *(_DWORD *)(a1 + 192) = v7;
    CInteractionTracker::BigHammerInvalidateConsumingAnimations(a1, 1LL);
    CInteractionTracker::BigHammerInvalidateConsumingAnimations(a1, 58LL);
    if ( *(_DWORD *)(a1 + 88) == 1 )
      CInteractionTracker::UpdatePositionRoundingSuggestion((CInteractionTracker *)a1);
    if ( dword_1803DC848
      && (qword_1803DC858 & 0x400000000002LL) != 0
      && (qword_1803DC860 & 0x400000000002LL) == qword_1803DC860 )
    {
      v9 = 0LL;
      if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)a1 + 272LL))(a1) )
        v9 = *(_QWORD *)(*(_QWORD *)(a1 + 416) + 528LL);
      InteractionSourceManager::TelemetrySetPosition((InteractionSourceManager *)(a1 + 296), v9);
      if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)a1 + 272LL))(a1) && v9 )
        *(_QWORD *)(*(_QWORD *)(a1 + 416) + 528LL) = 0LL;
    }
    v8 = *(CInteractionTrackerBindingManager **)(a1 + 600);
    if ( v8 )
    {
      if ( !a3 )
        CInteractionTrackerBindingManager::UpdateBoundTrackerPosition(
          v8,
          (struct CInteractionTrackerBase *)a1,
          (const struct D2DVector3 *)a2,
          0);
    }
  }
}
