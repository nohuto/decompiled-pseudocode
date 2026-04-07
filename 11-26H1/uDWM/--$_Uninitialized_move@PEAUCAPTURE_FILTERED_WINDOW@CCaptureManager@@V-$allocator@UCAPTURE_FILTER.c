/*
 * XREFs of ??$_Uninitialized_move@PEAUCAPTURE_FILTERED_WINDOW@CCaptureManager@@V?$allocator@UCAPTURE_FILTERED_WINDOW@CCaptureManager@@@std@@@std@@YAPEAUCAPTURE_FILTERED_WINDOW@CCaptureManager@@QEAU12@0PEAU12@AEAV?$allocator@UCAPTURE_FILTERED_WINDOW@CCaptureManager@@@0@@Z @ 0x18009D7C0
 * Callers:
 *     ??$_Emplace_reallocate@UCAPTURE_FILTERED_WINDOW@CCaptureManager@@@?$vector@UCAPTURE_FILTERED_WINDOW@CCaptureManager@@V?$allocator@UCAPTURE_FILTERED_WINDOW@CCaptureManager@@@std@@@std@@AEAAPEAUCAPTURE_FILTERED_WINDOW@CCaptureManager@@QEAU23@$$QEAU23@@Z @ 0x18009D4C0 (--$_Emplace_reallocate@UCAPTURE_FILTERED_WINDOW@CCaptureManager@@@-$vector@UCAPTURE_FILTERED_WIN.c)
 * Callees:
 *     ??$_Destroy_range@V?$allocator@UCAPTURE_FILTERED_WINDOW@CCaptureManager@@@std@@@std@@YAXPEAUCAPTURE_FILTERED_WINDOW@CCaptureManager@@QEAU12@AEAV?$allocator@UCAPTURE_FILTERED_WINDOW@CCaptureManager@@@0@@Z @ 0x18009D060 (--$_Destroy_range@V-$allocator@UCAPTURE_FILTERED_WINDOW@CCaptureManager@@@std@@@std@@YAXPEAUCAPT.c)
 *     ??$construct_at@UCAPTURE_FILTERED_WINDOW@CCaptureManager@@U12@@std@@YAPEAUCAPTURE_FILTERED_WINDOW@CCaptureManager@@QEAU12@$$QEAU12@@Z @ 0x18009D974 (--$construct_at@UCAPTURE_FILTERED_WINDOW@CCaptureManager@@U12@@std@@YAPEAUCAPTURE_FILTERED_WINDO.c)
 */

__int64 __fastcall std::_Uninitialized_move<CCaptureManager::CAPTURE_FILTERED_WINDOW *>(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v4; // r9
  __int64 v5; // r9
  __int64 v6; // r10

  v4 = a1;
  if ( a1 != a2 )
  {
    do
    {
      std::construct_at<CCaptureManager::CAPTURE_FILTERED_WINDOW,CCaptureManager::CAPTURE_FILTERED_WINDOW>(a3, v4);
      a3 += 16LL;
      v4 = v5 + 16;
    }
    while ( v4 != v6 );
  }
  std::_Destroy_range<std::allocator<CCaptureManager::CAPTURE_FILTERED_WINDOW>>(a3, a3);
  return a3;
}
