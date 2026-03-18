/*
 * XREFs of ??1_Reallocation_guard@?$vector@UPlane@CDDisplayCachedScanout@@V?$allocator@UPlane@CDDisplayCachedScanout@@@std@@@std@@QEAA@XZ @ 0x1802AA598
 * Callers:
 *     ??$_Emplace_reallocate@AEBUDWM_PRESENT_MULTIPLANE_OVERLAY@@@?$vector@UPlane@CDDisplayCachedScanout@@V?$allocator@UPlane@CDDisplayCachedScanout@@@std@@@std@@AEAAPEAUPlane@CDDisplayCachedScanout@@QEAU23@AEBUDWM_PRESENT_MULTIPLANE_OVERLAY@@@Z @ 0x1801C3964 (--$_Emplace_reallocate@AEBUDWM_PRESENT_MULTIPLANE_OVERLAY@@@-$vector@UPlane@CDDisplayCachedScano.c)
 * Callees:
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x1800C44D0 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 *     ??$_Destroy_range@V?$allocator@UPlane@CDDisplayCachedScanout@@@std@@@std@@YAXPEAUPlane@CDDisplayCachedScanout@@QEAU12@AEAV?$allocator@UPlane@CDDisplayCachedScanout@@@0@@Z @ 0x1800FAF30 (--$_Destroy_range@V-$allocator@UPlane@CDDisplayCachedScanout@@@std@@@std@@YAXPEAUPlane@CDDisplay.c)
 */

void __fastcall std::vector<CDDisplayCachedScanout::Plane>::_Reallocation_guard::~_Reallocation_guard(__int64 a1)
{
  if ( *(_QWORD *)(a1 + 8) )
  {
    std::_Destroy_range<std::allocator<CDDisplayCachedScanout::Plane>>(*(_QWORD *)(a1 + 24), *(_QWORD *)(a1 + 32));
    std::_Deallocate<16>(*(void **)(a1 + 8), 88LL * *(_QWORD *)(a1 + 16));
  }
}
