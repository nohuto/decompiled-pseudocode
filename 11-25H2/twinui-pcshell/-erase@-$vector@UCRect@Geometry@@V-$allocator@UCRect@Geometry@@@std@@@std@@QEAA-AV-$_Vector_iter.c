/*
 * XREFs of ?erase@?$vector@UCRect@Geometry@@V?$allocator@UCRect@Geometry@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@UCRect@Geometry@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@UCRect@Geometry@@@std@@@std@@@2@0@Z @ 0x18058540C
 * Callers:
 *     ?TriggerSnapAssistFromApplicationArrangedNotification@CSnapAssistControllerBase@@UEAAJPEAUIApplicationView@@W4WINDOW_SNAPPING_MODE@@W4SNAP_ASSIST_VIEW_FLAGS@@@Z @ 0x18023AE30 (-TriggerSnapAssistFromApplicationArrangedNotification@CSnapAssistControllerBase@@UEAAJPEAUIAppli.c)
 *     ??$AdjustRegionsForInitialSnapPosition@V?$vector@UCRect@Geometry@@V?$allocator@UCRect@Geometry@@@std@@@std@@@CSnapAssistControllerBase@@IEAAXPEAUHWND__@@AEAV?$vector@UCRect@Geometry@@V?$allocator@UCRect@Geometry@@@std@@@std@@PEAUIImmersiveMonitor@@@Z @ 0x180581648 (--$AdjustRegionsForInitialSnapPosition@V-$vector@UCRect@Geometry@@V-$allocator@UCRect@Geometry@@.c)
 *     ?TriggerSnapAssistWithRegions@CSnapAssistControllerBase@@UEAAJPEAUIApplicationView@@W4SNAP_ASSIST_VIEW_FLAGS@@PEBUtagRECT@@I@Z @ 0x1805846D0 (-TriggerSnapAssistWithRegions@CSnapAssistControllerBase@@UEAAJPEAUIApplicationView@@W4SNAP_ASSIS.c)
 * Callees:
 *     memmove_0 @ 0x1806A4B18 (memmove_0.c)
 */

_QWORD *__fastcall std::vector<Geometry::CRect>::erase(__int64 a1, _QWORD *a2, char *a3, char *a4)
{
  size_t v7; // rdi
  _QWORD *result; // rax

  if ( a3 != a4 )
  {
    v7 = *(_QWORD *)(a1 + 8) - (_QWORD)a4;
    memmove_0(a3, a4, v7);
    *(_QWORD *)(a1 + 8) = &a3[v7];
  }
  result = a2;
  *a2 = a3;
  return result;
}
