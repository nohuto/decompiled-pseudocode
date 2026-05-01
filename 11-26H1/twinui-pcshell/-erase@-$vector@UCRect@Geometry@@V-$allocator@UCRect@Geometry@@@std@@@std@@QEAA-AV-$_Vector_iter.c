/*
 * XREFs of ?erase@?$vector@UCRect@Geometry@@V?$allocator@UCRect@Geometry@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@UCRect@Geometry@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@UCRect@Geometry@@@std@@@std@@@2@0@Z @ 0x1805A9300
 * Callers:
 *     ?TriggerSnapAssistFromApplicationArrangedNotification@CSnapAssistControllerBase@@UEAAJPEAUIApplicationView@@W4WINDOW_SNAPPING_MODE@@W4SNAP_ASSIST_VIEW_FLAGS@@@Z @ 0x18022B940 (-TriggerSnapAssistFromApplicationArrangedNotification@CSnapAssistControllerBase@@UEAAJPEAUIAppli.c)
 *     ??$AdjustRegionsForInitialSnapPosition@V?$vector@UCRect@Geometry@@V?$allocator@UCRect@Geometry@@@std@@@std@@@CSnapAssistControllerBase@@IEAAXPEAUHWND__@@AEAV?$vector@UCRect@Geometry@@V?$allocator@UCRect@Geometry@@@std@@@std@@PEAUIImmersiveMonitor@@@Z @ 0x1805A5328 (--$AdjustRegionsForInitialSnapPosition@V-$vector@UCRect@Geometry@@V-$allocator@UCRect@Geometry@@.c)
 *     ?TriggerSnapAssistWithRegions@CSnapAssistControllerBase@@UEAAJPEAUIApplicationView@@W4SNAP_ASSIST_VIEW_FLAGS@@PEBUtagRECT@@I@Z @ 0x1805A8550 (-TriggerSnapAssistWithRegions@CSnapAssistControllerBase@@UEAAJPEAUIApplicationView@@W4SNAP_ASSIS.c)
 * Callees:
 *     ??$_Copy_memmove@PEAW4CollectionOfficeSKU@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@PEAW412345@@std@@YAPEAW4CollectionOfficeSKU@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@PEAW412345@00@Z @ 0x18012DED8 (--$_Copy_memmove@PEAW4CollectionOfficeSKU@CuratedTileCollections@UnifiedTile@Shell@WindowsIntern.c)
 */

_QWORD *__fastcall std::vector<Geometry::CRect>::erase(__int64 a1, _QWORD *a2, void *a3, void *a4)
{
  _QWORD *result; // rax

  if ( a3 != a4 )
    *(_QWORD *)(a1 + 8) = std::_Copy_memmove<enum WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::CollectionOfficeSKU *,enum WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::CollectionOfficeSKU *>(
                            a4,
                            *(_QWORD *)(a1 + 8),
                            a3);
  result = a2;
  *a2 = a3;
  return result;
}
