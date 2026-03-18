/*
 * XREFs of ??1_Reallocation_guard@?$vector@UKernelTap@@V?$allocator@UKernelTap@@@std@@@std@@QEAA@XZ @ 0x1802461C8
 * Callers:
 *     ??$_Reallocate@$0A@@?$vector@UKernelTap@@V?$allocator@UKernelTap@@@std@@@std@@AEAAXAEA_K@Z @ 0x18015C340 (--$_Reallocate@$0A@@-$vector@UKernelTap@@V-$allocator@UKernelTap@@@std@@@std@@AEAAXAEA_K@Z.c)
 *     ??$_Insert_counted_range@PEBUPositionShift@@@?$vector@UPositionShift@@V?$allocator@UPositionShift@@@std@@@std@@AEAAXV?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@UPositionShift@@@std@@@std@@@1@PEBUPositionShift@@_K@Z @ 0x1801C460C (--$_Insert_counted_range@PEBUPositionShift@@@-$vector@UPositionShift@@V-$allocator@UPositionShif.c)
 *     ??$_Emplace_reallocate@AEAMMAEAM@?$vector@UKernelTap@@V?$allocator@UKernelTap@@@std@@@std@@AEAAPEAUKernelTap@@QEAU2@AEAM$$QEAM1@Z @ 0x1802B6E4C (--$_Emplace_reallocate@AEAMMAEAM@-$vector@UKernelTap@@V-$allocator@UKernelTap@@@std@@@std@@AEAAP.c)
 *     ??$_Emplace_reallocate@MAEAMAEAM@?$vector@UKernelTap@@V?$allocator@UKernelTap@@@std@@@std@@AEAAPEAUKernelTap@@QEAU2@$$QEAMAEAM2@Z @ 0x1802B6FAC (--$_Emplace_reallocate@MAEAMAEAM@-$vector@UKernelTap@@V-$allocator@UKernelTap@@@std@@@std@@AEAAP.c)
 * Callees:
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x1800C44D0 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall std::vector<KernelTap>::_Reallocation_guard::~_Reallocation_guard(__int64 a1)
{
  if ( *(_QWORD *)(a1 + 8) )
    std::_Deallocate<16>(*(void **)(a1 + 8), 12LL * *(_QWORD *)(a1 + 16));
}
