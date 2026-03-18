/*
 * XREFs of ?_Calculate_growth@?$vector@UBinding@CInteractionTrackerBindingManager@@V?$allocator@UBinding@CInteractionTrackerBindingManager@@@std@@@std@@AEBA_K_K@Z @ 0x18027949C
 * Callers:
 *     ??$_Emplace_reallocate@AEAPEAVCInteractionTracker2@@AEAPEAV1@AEAW4InteractionTrackerBindingModeFlags@@@?$vector@UBinding@CInteractionTrackerBindingManager@@V?$allocator@UBinding@CInteractionTrackerBindingManager@@@std@@@std@@AEAAPEAUBinding@CInteractionTrackerBindingManager@@QEAU23@AEAPEAVCInteractionTracker2@@1AEAW4InteractionTrackerBindingModeFlags@@@Z @ 0x180277B50 (--$_Emplace_reallocate@AEAPEAVCInteractionTracker2@@AEAPEAV1@AEAW4InteractionTrackerBindingModeF.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall std::vector<CInteractionTrackerBindingManager::Binding>::_Calculate_growth(
        _QWORD *a1,
        unsigned __int64 a2)
{
  unsigned __int64 result; // rax
  unsigned __int64 v3; // r9

  result = 0xAAAAAAAAAAAAAAALL;
  v3 = (0xAAAAAAAAAAAAAAABuLL * ((__int64)(a1[2] - *a1) >> 3)) >> 1;
  if ( 0xAAAAAAAAAAAAAAABuLL * ((__int64)(a1[2] - *a1) >> 3) <= 0xAAAAAAAAAAAAAAALL - v3 )
  {
    result = v3 - 0x5555555555555555LL * ((__int64)(a1[2] - *a1) >> 3);
    if ( result < a2 )
      return a2;
  }
  return result;
}
