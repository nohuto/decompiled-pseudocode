/*
 * XREFs of ?SetPositionInternal@CInteractionTracker2@@EEAAXAEBUD2DVector3@@W4TrackerUpdateType@CInteractionTrackerBase@@@Z @ 0x1802766B0
 * Callers:
 *     <none>
 * Callees:
 *     _tlgKeywordOn @ 0x1800982C0 (_tlgKeywordOn.c)
 *     ?UpdateBoundTrackerPosition@CInteractionTrackerBindingManager@@QEAAXPEAVCInteractionTrackerBase@@AEBUD2DVector3@@_N@Z @ 0x180137C78 (-UpdateBoundTrackerPosition@CInteractionTrackerBindingManager@@QEAAXPEAVCInteractionTrackerBase@.c)
 *     ?BigHammerInvalidateConsumingAnimations@CInteractionTracker2@@IEAAXW4Enum@InteractionTracker2Property@@@Z @ 0x1801396E4 (-BigHammerInvalidateConsumingAnimations@CInteractionTracker2@@IEAAXW4Enum@InteractionTracker2Pro.c)
 *     ?TelemetrySetPosition@InteractionSourceManager@@QEAAX_K@Z @ 0x18013AE78 (-TelemetrySetPosition@InteractionSourceManager@@QEAAX_K@Z.c)
 *     ?UpdatePositionRoundingSuggestion@CInteractionTracker2@@AEAAXXZ @ 0x18021B0C0 (-UpdatePositionRoundingSuggestion@CInteractionTracker2@@AEAAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CInteractionTracker2::SetPositionInternal(__int64 a1, __int64 a2, int a3)
{
  unsigned __int64 v6; // rcx
  int v7; // eax
  __int64 v8; // rsi
  CInteractionTrackerBindingManager *v9; // rcx

  v6 = *(_QWORD *)(a1 + 424) - *(_QWORD *)a2;
  if ( !v6 )
    v6 = *(unsigned int *)(a1 + 432) - (unsigned __int64)*(unsigned int *)(a2 + 8);
  if ( v6 )
  {
    *(_QWORD *)(a1 + 424) = *(_QWORD *)a2;
    v7 = *(_DWORD *)(a2 + 8);
    *(_BYTE *)(a1 + 828) |= 4u;
    *(_DWORD *)(a1 + 432) = v7;
    CInteractionTracker2::BigHammerInvalidateConsumingAnimations(a1, 66LL);
    CInteractionTracker2::BigHammerInvalidateConsumingAnimations(a1, 68LL);
    if ( *(_DWORD *)(a1 + 88) == 1 )
      CInteractionTracker2::UpdatePositionRoundingSuggestion((CInteractionTracker2 *)a1);
    if ( dword_1803DC848 && tlgKeywordOn((__int64)&dword_1803DC848, 0x400000000002LL) )
    {
      v8 = 0LL;
      if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)a1 + 272LL))(a1) )
        v8 = *(_QWORD *)(*(_QWORD *)(a1 + 648) + 528LL);
      InteractionSourceManager::TelemetrySetPosition((InteractionSourceManager *)(a1 + 528), v8);
      if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)a1 + 272LL))(a1) && v8 )
        *(_QWORD *)(*(_QWORD *)(a1 + 648) + 528LL) = 0LL;
    }
    v9 = *(CInteractionTrackerBindingManager **)(a1 + 1048);
    if ( v9 )
    {
      if ( !a3 )
        CInteractionTrackerBindingManager::UpdateBoundTrackerPosition(
          v9,
          (struct CInteractionTrackerBase *)a1,
          (const struct D2DVector3 *)a2,
          0);
    }
  }
}
