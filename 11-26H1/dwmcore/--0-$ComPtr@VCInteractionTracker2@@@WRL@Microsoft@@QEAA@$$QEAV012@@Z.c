/*
 * XREFs of ??0?$ComPtr@VCInteractionTracker2@@@WRL@Microsoft@@QEAA@$$QEAV012@@Z @ 0x1802782E0
 * Callers:
 *     ??$_Emplace_reallocate@V?$ComPtr@VCInteractionTracker2@@@WRL@Microsoft@@@?$vector@V?$ComPtr@VCInteractionTracker2@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VCInteractionTracker2@@@WRL@Microsoft@@@std@@@std@@AEAAPEAV?$ComPtr@VCInteractionTracker2@@@WRL@Microsoft@@QEAV234@$$QEAV234@@Z @ 0x180277CB0 (--$_Emplace_reallocate@V-$ComPtr@VCInteractionTracker2@@@WRL@Microsoft@@@-$vector@V-$ComPtr@VCIn.c)
 *     ??$_Uninitialized_move@PEAUBinding@CInteractionTrackerBindingManager@@V?$allocator@UBinding@CInteractionTrackerBindingManager@@@std@@@std@@YAPEAUBinding@CInteractionTrackerBindingManager@@QEAU12@0PEAU12@AEAV?$allocator@UBinding@CInteractionTrackerBindingManager@@@0@@Z @ 0x180277E0C (--$_Uninitialized_move@PEAUBinding@CInteractionTrackerBindingManager@@V-$allocator@UBinding@CInt.c)
 *     ??$_Uninitialized_move@PEAV?$ComPtr@VCInteractionTracker2@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VCInteractionTracker2@@@WRL@Microsoft@@@std@@@std@@YAPEAV?$ComPtr@VCInteractionTracker2@@@WRL@Microsoft@@QEAV123@0PEAV123@AEAV?$allocator@V?$ComPtr@VCInteractionTracker2@@@WRL@Microsoft@@@0@@Z @ 0x180277E78 (--$_Uninitialized_move@PEAV-$ComPtr@VCInteractionTracker2@@@WRL@Microsoft@@V-$allocator@V-$ComPt.c)
 *     ??4?$ComPtr@VCInteractionTracker2@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z @ 0x18027857C (--4-$ComPtr@VCInteractionTracker2@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z.c)
 *     ?ScheduleCleanup@CInteractionTrackerBindingManager@@QEAAXPEAVCInteractionTracker2@@@Z @ 0x180278B68 (-ScheduleCleanup@CInteractionTrackerBindingManager@@QEAAXPEAVCInteractionTracker2@@@Z.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall Microsoft::WRL::ComPtr<CInteractionTracker2>::ComPtr<CInteractionTracker2>(_QWORD *a1, _QWORD *a2)
{
  *a1 = 0LL;
  if ( a1 != a2 )
  {
    *a1 = *a2;
    *a2 = 0LL;
  }
  return a1;
}
