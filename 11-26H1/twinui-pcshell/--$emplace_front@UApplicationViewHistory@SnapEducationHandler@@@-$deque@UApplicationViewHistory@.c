/*
 * XREFs of ??$emplace_front@UApplicationViewHistory@SnapEducationHandler@@@?$deque@UApplicationViewHistory@SnapEducationHandler@@V?$allocator@UApplicationViewHistory@SnapEducationHandler@@@std@@@std@@QEAAAEAUApplicationViewHistory@SnapEducationHandler@@$$QEAU23@@Z @ 0x1805B7528
 * Callers:
 *     ?WindowFocusChanged@SnapEducationHandler@@AEAAXPEAUHWND__@@@Z @ 0x180162E20 (-WindowFocusChanged@SnapEducationHandler@@AEAAXPEAUHWND__@@@Z.c)
 * Callees:
 *     ??$_Emplace_front_internal@UApplicationViewHistory@SnapEducationHandler@@@?$deque@UApplicationViewHistory@SnapEducationHandler@@V?$allocator@UApplicationViewHistory@SnapEducationHandler@@@std@@@std@@AEAAX$$QEAUApplicationViewHistory@SnapEducationHandler@@@Z @ 0x1801B6C70 (--$_Emplace_front_internal@UApplicationViewHistory@SnapEducationHandler@@@-$deque@UApplicationVi.c)
 */

__int64 __fastcall std::deque<SnapEducationHandler::ApplicationViewHistory>::emplace_front<SnapEducationHandler::ApplicationViewHistory>(
        _QWORD *a1,
        _QWORD *a2)
{
  std::deque<SnapEducationHandler::ApplicationViewHistory>::_Emplace_front_internal<SnapEducationHandler::ApplicationViewHistory>(
    a1,
    a2);
  return *(_QWORD *)(a1[1] + 8 * (a1[3] & (a1[2] - 1LL)));
}
