/*
 * XREFs of ?_Tidy@?$deque@UApplicationViewHistory@SnapEducationHandler@@V?$allocator@UApplicationViewHistory@SnapEducationHandler@@@std@@@std@@AEAAXXZ @ 0x1805A4320
 * Callers:
 *     ??1?$deque@UApplicationViewHistory@SnapEducationHandler@@V?$allocator@UApplicationViewHistory@SnapEducationHandler@@@std@@@std@@QEAA@XZ @ 0x18059D770 (--1-$deque@UApplicationViewHistory@SnapEducationHandler@@V-$allocator@UApplicationViewHistory@Sn.c)
 * Callees:
 *     ?pop_back@?$deque@UApplicationViewHistory@SnapEducationHandler@@V?$allocator@UApplicationViewHistory@SnapEducationHandler@@@std@@@std@@QEAAXXZ @ 0x180269580 (-pop_back@-$deque@UApplicationViewHistory@SnapEducationHandler@@V-$allocator@UApplicationViewHis.c)
 *     ?_Reset_map@?$deque@UApplicationViewHistory@SnapEducationHandler@@V?$allocator@UApplicationViewHistory@SnapEducationHandler@@@std@@@std@@AEAAXXZ @ 0x1805A4298 (-_Reset_map@-$deque@UApplicationViewHistory@SnapEducationHandler@@V-$allocator@UApplicationViewH.c)
 */

void __fastcall std::deque<SnapEducationHandler::ApplicationViewHistory>::_Tidy(_QWORD *a1)
{
  while ( a1[4] )
    std::deque<SnapEducationHandler::ApplicationViewHistory>::pop_back(a1);
  if ( a1[1] )
    std::deque<SnapEducationHandler::ApplicationViewHistory>::_Reset_map((__int64)a1);
}
