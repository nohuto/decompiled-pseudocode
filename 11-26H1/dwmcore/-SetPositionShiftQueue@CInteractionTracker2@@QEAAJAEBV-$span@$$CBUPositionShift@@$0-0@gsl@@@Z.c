/*
 * XREFs of ?SetPositionShiftQueue@CInteractionTracker2@@QEAAJAEBV?$span@$$CBUPositionShift@@$0?0@gsl@@@Z @ 0x18021AED0
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1801E7E80 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     ??$insert@PEBUPositionShift@@$0A@@?$vector@UPositionShift@@V?$allocator@UPositionShift@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@UPositionShift@@@std@@@std@@@1@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@UPositionShift@@@std@@@std@@@1@PEBUPositionShift@@1@Z @ 0x1801C4590 (--$insert@PEBUPositionShift@@$0A@@-$vector@UPositionShift@@V-$allocator@UPositionShift@@@std@@@s.c)
 */

__int64 __fastcall CInteractionTracker2::SetPositionShiftQueue(__int64 a1, _QWORD *a2)
{
  __int64 *v2; // rcx
  __int64 v3; // r8
  __int64 v4; // rax
  __int64 v6; // [rsp+40h] [rbp+8h] BYREF

  v2 = (__int64 *)(a1 + 1024);
  v3 = v2[1];
  v4 = *v2;
  if ( *v2 != v3 )
  {
    v2[1] = v4;
    v3 = v4;
  }
  std::vector<PositionShift>::insert<PositionShift const *,0>(v2, &v6, v3, a2[1], a2[1] + 12LL * *a2);
  return 0LL;
}
