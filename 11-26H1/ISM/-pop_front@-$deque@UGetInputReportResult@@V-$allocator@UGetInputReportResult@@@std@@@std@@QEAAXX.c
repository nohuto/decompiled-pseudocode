/*
 * XREFs of ?pop_front@?$deque@UGetInputReportResult@@V?$allocator@UGetInputReportResult@@@std@@@std@@QEAAXXZ @ 0x1800DD6C8
 * Callers:
 *     ?OnReportQueryCallback@DockDeviceCollection@@AEAAJXZ @ 0x1800DD330 (-OnReportQueryCallback@DockDeviceCollection@@AEAAJXZ.c)
 * Callees:
 *     ??1?$VariableSizedPayloadStorage@UInputInfo@@@@QEAA@XZ @ 0x180011B4C (--1-$VariableSizedPayloadStorage@UInputInfo@@@@QEAA@XZ.c)
 */

void __fastcall std::deque<GetInputReportResult>::pop_front(_QWORD *a1, const struct std::nothrow_t *a2)
{
  VariableSizedPayloadStorage<InputInfo>::~VariableSizedPayloadStorage<InputInfo>(
    (void **)(*(_QWORD *)(a1[1] + 8 * (a1[3] & (a1[2] - 1LL))) + 8LL),
    a2);
  if ( a1[4]-- == 1LL )
    a1[3] = 0LL;
  else
    ++a1[3];
}
