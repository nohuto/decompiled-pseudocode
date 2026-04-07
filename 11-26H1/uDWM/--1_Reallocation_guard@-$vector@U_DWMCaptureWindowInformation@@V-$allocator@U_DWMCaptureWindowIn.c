/*
 * XREFs of ??1_Reallocation_guard@?$vector@U_DWMCaptureWindowInformation@@V?$allocator@U_DWMCaptureWindowInformation@@@std@@@std@@QEAA@XZ @ 0x18009E5AC
 * Callers:
 *     ??$_Emplace_reallocate@AEBU_DWMCaptureWindowInformation@@@?$vector@U_DWMCaptureWindowInformation@@V?$allocator@U_DWMCaptureWindowInformation@@@std@@@std@@AEAAPEAU_DWMCaptureWindowInformation@@QEAU2@AEBU2@@Z @ 0x18009D250 (--$_Emplace_reallocate@AEBU_DWMCaptureWindowInformation@@@-$vector@U_DWMCaptureWindowInformation.c)
 * Callees:
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x18000CEFC (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall std::vector<_DWMCaptureWindowInformation>::_Reallocation_guard::~_Reallocation_guard(__int64 a1)
{
  if ( *(_QWORD *)(a1 + 8) )
    std::_Deallocate<16>(*(void **)(a1 + 8), 32LL * *(_QWORD *)(a1 + 16));
}
