/*
 * XREFs of ?_Tidy@?$deque@UGetInputReportResult@@V?$allocator@UGetInputReportResult@@@std@@@std@@AEAAXXZ @ 0x1800DD658
 * Callers:
 *     ??1?$deque@UGetInputReportResult@@V?$allocator@UGetInputReportResult@@@std@@@std@@QEAA@XZ @ 0x1800DCAA0 (--1-$deque@UGetInputReportResult@@V-$allocator@UGetInputReportResult@@@std@@@std@@QEAA@XZ.c)
 * Callees:
 *     ??1?$VariableSizedPayloadStorage@UInputInfo@@@@QEAA@XZ @ 0x180011B4C (--1-$VariableSizedPayloadStorage@UInputInfo@@@@QEAA@XZ.c)
 *     ?_Reset_map@?$deque@UGetInputReportResult@@V?$allocator@UGetInputReportResult@@@std@@@std@@AEAAXXZ @ 0x1800DD5D0 (-_Reset_map@-$deque@UGetInputReportResult@@V-$allocator@UGetInputReportResult@@@std@@@std@@AEAAX.c)
 */

void __fastcall std::deque<GetInputReportResult>::_Tidy(_QWORD *a1, const struct std::nothrow_t *a2)
{
  __int64 v3; // rcx

  while ( 1 )
  {
    v3 = a1[4];
    if ( !v3 )
      break;
    VariableSizedPayloadStorage<InputInfo>::~VariableSizedPayloadStorage<InputInfo>(
      (void **)(*(_QWORD *)(a1[1] + 8 * ((a1[2] - 1LL) & (a1[3] - 1LL + v3))) + 8LL),
      a2);
    if ( a1[4]-- == 1LL )
      a1[3] = 0LL;
  }
  if ( a1[1] )
    std::deque<GetInputReportResult>::_Reset_map((__int64)a1);
}
