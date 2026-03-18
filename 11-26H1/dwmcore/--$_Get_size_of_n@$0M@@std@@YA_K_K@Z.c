/*
 * XREFs of ??$_Get_size_of_n@$0M@@std@@YA_K_K@Z @ 0x1801C8640
 * Callers:
 *     ??$_Reallocate@$0A@@?$vector@UKernelTap@@V?$allocator@UKernelTap@@@std@@@std@@AEAAXAEA_K@Z @ 0x18015C340 (--$_Reallocate@$0A@@-$vector@UKernelTap@@V-$allocator@UKernelTap@@@std@@@std@@AEAAXAEA_K@Z.c)
 *     ??$_Insert_counted_range@PEBUPositionShift@@@?$vector@UPositionShift@@V?$allocator@UPositionShift@@@std@@@std@@AEAAXV?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@UPositionShift@@@std@@@std@@@1@PEBUPositionShift@@_K@Z @ 0x1801C460C (--$_Insert_counted_range@PEBUPositionShift@@@-$vector@UPositionShift@@V-$allocator@UPositionShif.c)
 *     ??$_Emplace_reallocate@AEAMMAEAM@?$vector@UKernelTap@@V?$allocator@UKernelTap@@@std@@@std@@AEAAPEAUKernelTap@@QEAU2@AEAM$$QEAM1@Z @ 0x1802B6E4C (--$_Emplace_reallocate@AEAMMAEAM@-$vector@UKernelTap@@V-$allocator@UKernelTap@@@std@@@std@@AEAAP.c)
 *     ??$_Emplace_reallocate@MAEAMAEAM@?$vector@UKernelTap@@V?$allocator@UKernelTap@@@std@@@std@@AEAAPEAUKernelTap@@QEAU2@$$QEAMAEAM2@Z @ 0x1802B6FAC (--$_Emplace_reallocate@MAEAMAEAM@-$vector@UKernelTap@@V-$allocator@UKernelTap@@@std@@@std@@AEAAP.c)
 * Callees:
 *     ?_Throw_bad_array_new_length@std@@YAXXZ @ 0x180209E38 (-_Throw_bad_array_new_length@std@@YAXXZ.c)
 */

__int64 __fastcall std::_Get_size_of_n<12>(unsigned __int64 a1)
{
  if ( a1 > 0x1555555555555555LL )
    std::_Throw_bad_array_new_length();
  return 12 * a1;
}
