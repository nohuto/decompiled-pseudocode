/*
 * XREFs of ??1_Reallocation_guard@?$vector@UCAPTURE_FILTERED_WINDOW@CCaptureManager@@V?$allocator@UCAPTURE_FILTERED_WINDOW@CCaptureManager@@@std@@@std@@QEAA@XZ @ 0x18009E570
 * Callers:
 *     ??$_Emplace_reallocate@UCAPTURE_FILTERED_WINDOW@CCaptureManager@@@?$vector@UCAPTURE_FILTERED_WINDOW@CCaptureManager@@V?$allocator@UCAPTURE_FILTERED_WINDOW@CCaptureManager@@@std@@@std@@AEAAPEAUCAPTURE_FILTERED_WINDOW@CCaptureManager@@QEAU23@$$QEAU23@@Z @ 0x18009D4C0 (--$_Emplace_reallocate@UCAPTURE_FILTERED_WINDOW@CCaptureManager@@@-$vector@UCAPTURE_FILTERED_WIN.c)
 * Callees:
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x18000CEFC (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 *     ??$_Destroy_range@V?$allocator@UCAPTURE_FILTERED_WINDOW@CCaptureManager@@@std@@@std@@YAXPEAUCAPTURE_FILTERED_WINDOW@CCaptureManager@@QEAU12@AEAV?$allocator@UCAPTURE_FILTERED_WINDOW@CCaptureManager@@@0@@Z @ 0x18009D060 (--$_Destroy_range@V-$allocator@UCAPTURE_FILTERED_WINDOW@CCaptureManager@@@std@@@std@@YAXPEAUCAPT.c)
 */

void __fastcall std::vector<CCaptureManager::CAPTURE_FILTERED_WINDOW>::_Reallocation_guard::~_Reallocation_guard(
        __int64 a1)
{
  if ( *(_QWORD *)(a1 + 8) )
  {
    std::_Destroy_range<std::allocator<CCaptureManager::CAPTURE_FILTERED_WINDOW>>(
      *(_QWORD *)(a1 + 24),
      *(_QWORD *)(a1 + 32));
    std::_Deallocate<16>(*(void **)(a1 + 8), 16LL * *(_QWORD *)(a1 + 16));
  }
}
