/*
 * XREFs of ?_Change_array@?$vector@UPositionShift@@V?$allocator@UPositionShift@@@std@@@std@@AEAAXQEAUPositionShift@@_K1@Z @ 0x1801C51F0
 * Callers:
 *     ??$_Insert_counted_range@PEBUPositionShift@@@?$vector@UPositionShift@@V?$allocator@UPositionShift@@@std@@@std@@AEAAXV?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@UPositionShift@@@std@@@std@@@1@PEBUPositionShift@@_K@Z @ 0x1801C460C (--$_Insert_counted_range@PEBUPositionShift@@@-$vector@UPositionShift@@V-$allocator@UPositionShif.c)
 * Callees:
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x1800C44D0 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 */

__int64 __fastcall std::vector<PositionShift>::_Change_array(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  void *v6; // rcx
  __int64 result; // rax

  v6 = *(void **)a1;
  if ( v6 )
    std::_Deallocate<16>(v6, 4 * ((__int64)(*(_QWORD *)(a1 + 16) - (_QWORD)v6) >> 2));
  *(_QWORD *)a1 = a2;
  *(_QWORD *)(a1 + 8) = a2 + 12 * a3;
  result = 3 * a4;
  *(_QWORD *)(a1 + 16) = a2 + 12 * a4;
  return result;
}
