/*
 * XREFs of ??1_Reallocation_guard@?$vector@ULivePreviewResource@@V?$allocator@ULivePreviewResource@@@std@@@std@@QEAA@XZ @ 0x1800B9268
 * Callers:
 *     ??$_Emplace_reallocate@ULivePreviewResource@@@?$vector@ULivePreviewResource@@V?$allocator@ULivePreviewResource@@@std@@@std@@AEAAPEAULivePreviewResource@@QEAU2@$$QEAU2@@Z @ 0x1800B8D88 (--$_Emplace_reallocate@ULivePreviewResource@@@-$vector@ULivePreviewResource@@V-$allocator@ULiveP.c)
 * Callees:
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x18000CEFC (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 *     ??$_Destroy_range@V?$allocator@ULivePreviewResource@@@std@@@std@@YAXPEAULivePreviewResource@@QEAU1@AEAV?$allocator@ULivePreviewResource@@@0@@Z @ 0x1800B8D50 (--$_Destroy_range@V-$allocator@ULivePreviewResource@@@std@@@std@@YAXPEAULivePreviewResource@@QEA.c)
 */

void __fastcall std::vector<LivePreviewResource>::_Reallocation_guard::~_Reallocation_guard(__int64 a1)
{
  if ( *(_QWORD *)(a1 + 8) )
  {
    std::_Destroy_range<std::allocator<LivePreviewResource>>(
      *(LivePreviewResource **)(a1 + 24),
      *(LivePreviewResource **)(a1 + 32));
    std::_Deallocate<16>(*(void **)(a1 + 8), 96LL * *(_QWORD *)(a1 + 16));
  }
}
