/*
 * XREFs of ??$insert@PEBUPositionShift@@$0A@@?$vector@UPositionShift@@V?$allocator@UPositionShift@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@UPositionShift@@@std@@@std@@@1@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@UPositionShift@@@std@@@std@@@1@PEBUPositionShift@@1@Z @ 0x1801C4590
 * Callers:
 *     ?SetPositionShiftQueue@CInteractionTracker2@@QEAAJAEBV?$span@$$CBUPositionShift@@$0?0@gsl@@@Z @ 0x18021AED0 (-SetPositionShiftQueue@CInteractionTracker2@@QEAAJAEBV-$span@$$CBUPositionShift@@$0-0@gsl@@@Z.c)
 *     ?AppendPositionShiftQueue@CInteractionTracker2@@QEAAJAEBV?$span@$$CBUPositionShift@@$0?0@gsl@@@Z @ 0x18021C710 (-AppendPositionShiftQueue@CInteractionTracker2@@QEAAJAEBV-$span@$$CBUPositionShift@@$0-0@gsl@@@Z.c)
 * Callees:
 *     ??$_Insert_counted_range@PEBUPositionShift@@@?$vector@UPositionShift@@V?$allocator@UPositionShift@@@std@@@std@@AEAAXV?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@UPositionShift@@@std@@@std@@@1@PEBUPositionShift@@_K@Z @ 0x1801C460C (--$_Insert_counted_range@PEBUPositionShift@@@-$vector@UPositionShift@@V-$allocator@UPositionShif.c)
 */

_QWORD *__fastcall std::vector<PositionShift>::insert<PositionShift const *,0>(
        _QWORD *a1,
        _QWORD *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5)
{
  unsigned __int64 v6; // rbx
  _QWORD *result; // rax

  v6 = 0xAAAAAAAAAAAAAAABuLL * ((a3 - *a1) >> 2);
  std::vector<PositionShift>::_Insert_counted_range<PositionShift const *>(
    a1,
    a3,
    a4,
    0xAAAAAAAAAAAAAAABuLL * ((a5 - a4) >> 2));
  result = a2;
  *a2 = *a1 + 12 * v6;
  return result;
}
