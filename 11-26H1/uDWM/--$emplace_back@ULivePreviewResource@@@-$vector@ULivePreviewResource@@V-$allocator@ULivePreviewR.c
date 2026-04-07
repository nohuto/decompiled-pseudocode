/*
 * XREFs of ??$emplace_back@ULivePreviewResource@@@?$vector@ULivePreviewResource@@V?$allocator@ULivePreviewResource@@@std@@@std@@QEAAAEAULivePreviewResource@@$$QEAU2@@Z @ 0x1800B8F68
 * Callers:
 *     ?s_UpdateResourcesForMonitor@CLivePreview@@CAHPEAUHMONITOR__@@PEAUHDC__@@PEAUtagRECT@@_J@Z @ 0x1800B9C60 (-s_UpdateResourcesForMonitor@CLivePreview@@CAHPEAUHMONITOR__@@PEAUHDC__@@PEAUtagRECT@@_J@Z.c)
 * Callees:
 *     ??$_Emplace_reallocate@ULivePreviewResource@@@?$vector@ULivePreviewResource@@V?$allocator@ULivePreviewResource@@@std@@@std@@AEAAPEAULivePreviewResource@@QEAU2@$$QEAU2@@Z @ 0x1800B8D88 (--$_Emplace_reallocate@ULivePreviewResource@@@-$vector@ULivePreviewResource@@V-$allocator@ULiveP.c)
 *     ??0LivePreviewResource@@QEAA@AEBU0@@Z @ 0x1800B8FB0 (--0LivePreviewResource@@QEAA@AEBU0@@Z.c)
 */

LivePreviewResource *__fastcall std::vector<LivePreviewResource>::emplace_back<LivePreviewResource>(
        __int64 a1,
        const struct LivePreviewResource *a2)
{
  __int64 v3; // rcx

  if ( *(_QWORD *)(a1 + 8) == *(_QWORD *)(a1 + 16) )
    return std::vector<LivePreviewResource>::_Emplace_reallocate<LivePreviewResource>(
             a1,
             *(struct LivePreviewResource **)(a1 + 8),
             a2);
  LivePreviewResource::LivePreviewResource(*(LivePreviewResource **)(a1 + 8), a2);
  v3 = *(_QWORD *)(a1 + 8);
  *(_QWORD *)(a1 + 8) = v3 + 96;
  return (LivePreviewResource *)v3;
}
