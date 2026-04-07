/*
 * XREFs of ??$_Destroy_range@V?$allocator@UCAPTURE_FILTERED_WINDOW@CCaptureManager@@@std@@@std@@YAXPEAUCAPTURE_FILTERED_WINDOW@CCaptureManager@@QEAU12@AEAV?$allocator@UCAPTURE_FILTERED_WINDOW@CCaptureManager@@@0@@Z @ 0x18009D060
 * Callers:
 *     ??$_Uninitialized_move@PEAUCAPTURE_FILTERED_WINDOW@CCaptureManager@@V?$allocator@UCAPTURE_FILTERED_WINDOW@CCaptureManager@@@std@@@std@@YAPEAUCAPTURE_FILTERED_WINDOW@CCaptureManager@@QEAU12@0PEAU12@AEAV?$allocator@UCAPTURE_FILTERED_WINDOW@CCaptureManager@@@0@@Z @ 0x18009D7C0 (--$_Uninitialized_move@PEAUCAPTURE_FILTERED_WINDOW@CCaptureManager@@V-$allocator@UCAPTURE_FILTER.c)
 *     ??1CAPTURE_FILTERED_DISPLAY_MAP_ENTRY@CCaptureManager@@QEAA@XZ @ 0x18009E390 (--1CAPTURE_FILTERED_DISPLAY_MAP_ENTRY@CCaptureManager@@QEAA@XZ.c)
 *     ??1_Reallocation_guard@?$vector@UCAPTURE_FILTERED_WINDOW@CCaptureManager@@V?$allocator@UCAPTURE_FILTERED_WINDOW@CCaptureManager@@@std@@@std@@QEAA@XZ @ 0x18009E570 (--1_Reallocation_guard@-$vector@UCAPTURE_FILTERED_WINDOW@CCaptureManager@@V-$allocator@UCAPTURE_.c)
 *     ?StopFilteredDisplayCapture@CCaptureManager@@UEAAJAEBUDWM_CAPTURE_TOKEN@@@Z @ 0x1800A2E90 (-StopFilteredDisplayCapture@CCaptureManager@@UEAAJAEBUDWM_CAPTURE_TOKEN@@@Z.c)
 *     ?_Change_array@?$vector@UCAPTURE_FILTERED_WINDOW@CCaptureManager@@V?$allocator@UCAPTURE_FILTERED_WINDOW@CCaptureManager@@@std@@@std@@AEAAXQEAUCAPTURE_FILTERED_WINDOW@CCaptureManager@@_K1@Z @ 0x1800A4A74 (-_Change_array@-$vector@UCAPTURE_FILTERED_WINDOW@CCaptureManager@@V-$allocator@UCAPTURE_FILTERED.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCSpriteVisual@@@WRL@Microsoft@@IEAAKXZ @ 0x18001727C (-InternalRelease@-$ComPtr@VCSpriteVisual@@@WRL@Microsoft@@IEAAKXZ.c)
 */

unsigned int __fastcall std::_Destroy_range<std::allocator<CCaptureManager::CAPTURE_FILTERED_WINDOW>>(
        __int64 a1,
        __int64 a2)
{
  __int64 v3; // rbx
  unsigned int result; // eax

  if ( a1 != a2 )
  {
    v3 = a1;
    do
    {
      result = Microsoft::WRL::ComPtr<CSpriteVisual>::InternalRelease((CBaseObject **)(v3 + 8));
      v3 += 16LL;
    }
    while ( v3 != a2 );
  }
  return result;
}
