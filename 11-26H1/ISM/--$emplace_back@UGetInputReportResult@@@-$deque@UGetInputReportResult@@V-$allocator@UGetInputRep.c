/*
 * XREFs of ??$emplace_back@UGetInputReportResult@@@?$deque@UGetInputReportResult@@V?$allocator@UGetInputReportResult@@@std@@@std@@QEAAAEAUGetInputReportResult@@$$QEAU2@@Z @ 0x1800DC9C0
 * Callers:
 *     ?OnDeviceAttach@DockDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z @ 0x1800DCFF0 (-OnDeviceAttach@DockDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z.c)
 * Callees:
 *     ??$_Emplace_back_internal@UGetInputReportResult@@@?$deque@UGetInputReportResult@@V?$allocator@UGetInputReportResult@@@std@@@std@@AEAAX$$QEAUGetInputReportResult@@@Z @ 0x1800DC908 (--$_Emplace_back_internal@UGetInputReportResult@@@-$deque@UGetInputReportResult@@V-$allocator@UG.c)
 */

__int64 __fastcall std::deque<GetInputReportResult>::emplace_back<GetInputReportResult>(_QWORD *a1, __int64 a2)
{
  std::deque<GetInputReportResult>::_Emplace_back_internal<GetInputReportResult>(a1, a2);
  return *(_QWORD *)(a1[1] + 8 * ((a1[2] - 1LL) & (a1[4] - 1LL + a1[3])));
}
