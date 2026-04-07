/*
 * XREFs of ??$_Emplace_back_with_unused_capacity@UCAPTURE_FILTERED_WINDOW@CCaptureManager@@@?$vector@UCAPTURE_FILTERED_WINDOW@CCaptureManager@@V?$allocator@UCAPTURE_FILTERED_WINDOW@CCaptureManager@@@std@@@std@@AEAAAEAUCAPTURE_FILTERED_WINDOW@CCaptureManager@@$$QEAU23@@Z @ 0x18009D0E0
 * Callers:
 *     ??$emplace@UCAPTURE_FILTERED_WINDOW@CCaptureManager@@@?$vector@UCAPTURE_FILTERED_WINDOW@CCaptureManager@@V?$allocator@UCAPTURE_FILTERED_WINDOW@CCaptureManager@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@UCAPTURE_FILTERED_WINDOW@CCaptureManager@@@std@@@std@@@1@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@UCAPTURE_FILTERED_WINDOW@CCaptureManager@@@std@@@std@@@1@$$QEAUCAPTURE_FILTERED_WINDOW@CCaptureManager@@@Z @ 0x18009DE14 (--$emplace@UCAPTURE_FILTERED_WINDOW@CCaptureManager@@@-$vector@UCAPTURE_FILTERED_WINDOW@CCapture.c)
 *     ?_AddWindowToFilteredCapture@CCaptureManager@@AEAAJPEAUCAPTURE_FILTERED_DISPLAY_MAP_ENTRY@1@$$QEAUCAPTURE_FILTERED_WINDOW@1@PEAVCWindowData@@@Z @ 0x1800A466C (-_AddWindowToFilteredCapture@CCaptureManager@@AEAAJPEAUCAPTURE_FILTERED_DISPLAY_MAP_ENTRY@1@$$QE.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::vector<CCaptureManager::CAPTURE_FILTERED_WINDOW>::_Emplace_back_with_unused_capacity<CCaptureManager::CAPTURE_FILTERED_WINDOW>(
        __int64 a1,
        __int64 *a2)
{
  _QWORD *v2; // r8
  __int64 v3; // rax
  _QWORD *v4; // rdx
  _QWORD *v5; // r8
  __int64 result; // rax

  v2 = *(_QWORD **)(a1 + 8);
  v3 = *a2;
  v4 = a2 + 1;
  *v2 = v3;
  v5 = v2 + 1;
  *v5 = 0LL;
  if ( v5 != v4 )
  {
    *v5 = *v4;
    *v4 = 0LL;
  }
  result = *(_QWORD *)(a1 + 8);
  *(_QWORD *)(a1 + 8) = result + 16;
  return result;
}
