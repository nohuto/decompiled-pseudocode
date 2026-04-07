/*
 * XREFs of ??$_Uninitialized_move@PEAULivePreviewResource@@V?$allocator@ULivePreviewResource@@@std@@@std@@YAPEAULivePreviewResource@@QEAU1@0PEAU1@AEAV?$allocator@ULivePreviewResource@@@0@@Z @ 0x1800B8F00
 * Callers:
 *     ??$_Emplace_reallocate@ULivePreviewResource@@@?$vector@ULivePreviewResource@@V?$allocator@ULivePreviewResource@@@std@@@std@@AEAAPEAULivePreviewResource@@QEAU2@$$QEAU2@@Z @ 0x1800B8D88 (--$_Emplace_reallocate@ULivePreviewResource@@@-$vector@ULivePreviewResource@@V-$allocator@ULiveP.c)
 * Callees:
 *     ??$_Destroy_range@V?$allocator@ULivePreviewResource@@@std@@@std@@YAXPEAULivePreviewResource@@QEAU1@AEAV?$allocator@ULivePreviewResource@@@0@@Z @ 0x1800B8D50 (--$_Destroy_range@V-$allocator@ULivePreviewResource@@@std@@@std@@YAXPEAULivePreviewResource@@QEA.c)
 *     ??0LivePreviewResource@@QEAA@AEBU0@@Z @ 0x1800B8FB0 (--0LivePreviewResource@@QEAA@AEBU0@@Z.c)
 */

LivePreviewResource *__fastcall std::_Uninitialized_move<LivePreviewResource *>(
        struct LivePreviewResource *a1,
        const struct LivePreviewResource *a2,
        LivePreviewResource *a3)
{
  const struct LivePreviewResource *i; // rdi

  for ( i = a1; i != a2; i = (const struct LivePreviewResource *)((char *)i + 96) )
  {
    LivePreviewResource::LivePreviewResource(a3, i);
    a3 = (LivePreviewResource *)((char *)a3 + 96);
  }
  std::_Destroy_range<std::allocator<LivePreviewResource>>(a3, a3);
  return a3;
}
