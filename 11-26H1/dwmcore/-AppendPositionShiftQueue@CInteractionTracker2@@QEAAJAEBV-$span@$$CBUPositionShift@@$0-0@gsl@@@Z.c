/*
 * XREFs of ?AppendPositionShiftQueue@CInteractionTracker2@@QEAAJAEBV?$span@$$CBUPositionShift@@$0?0@gsl@@@Z @ 0x18021C710
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1801E7E80 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     ??$insert@PEBUPositionShift@@$0A@@?$vector@UPositionShift@@V?$allocator@UPositionShift@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@UPositionShift@@@std@@@std@@@1@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@UPositionShift@@@std@@@std@@@1@PEBUPositionShift@@1@Z @ 0x1801C4590 (--$insert@PEBUPositionShift@@$0A@@-$vector@UPositionShift@@V-$allocator@UPositionShift@@@std@@@s.c)
 */

__int64 __fastcall CInteractionTracker2::AppendPositionShiftQueue(__int64 a1, _QWORD *a2)
{
  __int64 v3; // [rsp+40h] [rbp+8h] BYREF

  std::vector<PositionShift>::insert<PositionShift const *,0>(
    (_QWORD *)(a1 + 1024),
    &v3,
    *(_QWORD *)(a1 + 1032),
    a2[1],
    a2[1] + 12LL * *a2);
  return 0LL;
}
