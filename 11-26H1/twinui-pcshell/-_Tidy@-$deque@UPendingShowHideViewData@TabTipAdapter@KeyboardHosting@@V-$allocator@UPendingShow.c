/*
 * XREFs of ?_Tidy@?$deque@UPendingShowHideViewData@TabTipAdapter@KeyboardHosting@@V?$allocator@UPendingShowHideViewData@TabTipAdapter@KeyboardHosting@@@std@@@std@@AEAAXXZ @ 0x180285FFC
 * Callers:
 *     ??1?$deque@UPendingShowHideViewData@TabTipAdapter@KeyboardHosting@@V?$allocator@UPendingShowHideViewData@TabTipAdapter@KeyboardHosting@@@std@@@std@@QEAA@XZ @ 0x180285FCC (--1-$deque@UPendingShowHideViewData@TabTipAdapter@KeyboardHosting@@V-$allocator@UPendingShowHide.c)
 * Callees:
 *     ?_Tidy@?$vector@UCRect@Geometry@@V?$allocator@UCRect@Geometry@@@std@@@std@@AEAAXXZ @ 0x180028798 (-_Tidy@-$vector@UCRect@Geometry@@V-$allocator@UCRect@Geometry@@@std@@@std@@AEAAXXZ.c)
 *     ?_Reset_map@?$deque@UPendingShowHideViewData@TabTipAdapter@KeyboardHosting@@V?$allocator@UPendingShowHideViewData@TabTipAdapter@KeyboardHosting@@@std@@@std@@AEAAXXZ @ 0x180480650 (-_Reset_map@-$deque@UPendingShowHideViewData@TabTipAdapter@KeyboardHosting@@V-$allocator@UPendin.c)
 */

__int64 __fastcall std::deque<KeyboardHosting::TabTipAdapter::PendingShowHideViewData>::_Tidy(_QWORD *a1)
{
  __int64 v2; // rcx
  __int64 result; // rax

  while ( 1 )
  {
    v2 = a1[4];
    if ( !v2 )
      break;
    result = std::vector<Geometry::CRect>::_Tidy((__int64 *)(*(_QWORD *)(a1[1] + 8
                                                                               * ((a1[2] - 1LL) & (a1[3] - 1LL + v2)))
                                                           + 104LL));
    if ( a1[4]-- == 1LL )
      a1[3] = 0LL;
  }
  if ( a1[1] )
    return std::deque<KeyboardHosting::TabTipAdapter::PendingShowHideViewData>::_Reset_map(a1);
  return result;
}
