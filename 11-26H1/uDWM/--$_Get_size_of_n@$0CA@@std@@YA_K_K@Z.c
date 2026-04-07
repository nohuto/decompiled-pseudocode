/*
 * XREFs of ??$_Get_size_of_n@$0CA@@std@@YA_K_K@Z @ 0x180087240
 * Callers:
 *     ??$_Emplace_reallocate@AEBU_DWMCaptureWindowInformation@@@?$vector@U_DWMCaptureWindowInformation@@V?$allocator@U_DWMCaptureWindowInformation@@@std@@@std@@AEAAPEAU_DWMCaptureWindowInformation@@QEAU2@AEBU2@@Z @ 0x18009D250 (--$_Emplace_reallocate@AEBU_DWMCaptureWindowInformation@@@-$vector@U_DWMCaptureWindowInformation.c)
 *     ?allocate@?$allocator@UTrailPoint@CTouchDragVisual@@@std@@QEAAPEAUTrailPoint@CTouchDragVisual@@_K@Z @ 0x1800CCF48 (-allocate@-$allocator@UTrailPoint@CTouchDragVisual@@@std@@QEAAPEAUTrailPoint@CTouchDragVisual@@_.c)
 * Callees:
 *     ?_Throw_bad_array_new_length@std@@YAXXZ @ 0x18008726C (-_Throw_bad_array_new_length@std@@YAXXZ.c)
 */

__int64 __fastcall std::_Get_size_of_n<32>(unsigned __int64 a1)
{
  if ( a1 > 0x7FFFFFFFFFFFFFFLL )
    std::_Throw_bad_array_new_length();
  return 32 * a1;
}
