/*
 * XREFs of ??1_Reallocation_guard@?$vector@UDWM_CAPTURE_TOKEN@@V?$allocator@UDWM_CAPTURE_TOKEN@@@std@@@std@@QEAA@XZ @ 0x18009E548
 * Callers:
 *     ??$_Emplace_reallocate@AEBQEAVCWindowData@@@?$vector@PEAVCWindowData@@V?$allocator@PEAVCWindowData@@@std@@@std@@AEAAPEAPEAVCWindowData@@QEAPEAV2@AEBQEAV2@@Z @ 0x18009D124 (--$_Emplace_reallocate@AEBQEAVCWindowData@@@-$vector@PEAVCWindowData@@V-$allocator@PEAVCWindowDa.c)
 *     ??$_Emplace_reallocate@AEBQEBVCDWMDisplay@@@?$vector@PEBVCDWMDisplay@@V?$allocator@PEBVCDWMDisplay@@@std@@@std@@AEAAPEAPEBVCDWMDisplay@@QEAPEBV2@AEBQEBV2@@Z @ 0x1800B2990 (--$_Emplace_reallocate@AEBQEBVCDWMDisplay@@@-$vector@PEBVCDWMDisplay@@V-$allocator@PEBVCDWMDispl.c)
 * Callees:
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x18000CEFC (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall std::vector<DWM_CAPTURE_TOKEN>::_Reallocation_guard::~_Reallocation_guard(__int64 a1)
{
  if ( *(_QWORD *)(a1 + 8) )
    std::_Deallocate<16>(*(void **)(a1 + 8), 8LL * *(_QWORD *)(a1 + 16));
}
