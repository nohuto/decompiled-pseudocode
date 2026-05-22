/*
 * XREFs of ??1_Reallocation_guard@?$vector@UTraceSessionProviderConfig@@V?$allocator@UTraceSessionProviderConfig@@@std@@@std@@QEAA@XZ @ 0x1800D4B70
 * Callers:
 *     ??$_Emplace_reallocate@AEAY0CH@$$CBGHHH@?$vector@UTraceSessionProviderConfig@@V?$allocator@UTraceSessionProviderConfig@@@std@@@std@@AEAAPEAUTraceSessionProviderConfig@@QEAU2@AEAY0CH@$$CBG$$QEAH22@Z @ 0x1800D3BF4 (--$_Emplace_reallocate@AEAY0CH@$$CBGHHH@-$vector@UTraceSessionProviderConfig@@V-$allocator@UTrac.c)
 *     ??$_Reallocate@$0A@@?$vector@UInputSpacePayload@@V?$allocator@UInputSpacePayload@@@std@@@std@@AEAAXAEA_K@Z @ 0x180196840 (--$_Reallocate@$0A@@-$vector@UInputSpacePayload@@V-$allocator@UInputSpacePayload@@@std@@@std@@AE.c)
 * Callees:
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x18008A790 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall std::vector<TraceSessionProviderConfig>::_Reallocation_guard::~_Reallocation_guard(__int64 a1)
{
  if ( *(_QWORD *)(a1 + 8) )
    std::_Deallocate<16>(*(void **)(a1 + 8), (struct std::nothrow_t *)(40LL * *(_QWORD *)(a1 + 16)));
}
