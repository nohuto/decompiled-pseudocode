/*
 * XREFs of ?AppendManipulations@CInteractionTracker2@@QEAAJAEBV?$span@PEAVCManipulation@@$0?0@gsl@@@Z @ 0x18021D524
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1801E7E80 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     ??$_Insert_counted_range@PEAPEAVCManipulation@@@?$vector@V?$ComPtr@VCManipulation@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VCManipulation@@@WRL@Microsoft@@@std@@@std@@AEAAXV?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@V?$ComPtr@VCManipulation@@@WRL@Microsoft@@@std@@@std@@@1@PEAPEAVCManipulation@@_K@Z @ 0x1801E7744 (--$_Insert_counted_range@PEAPEAVCManipulation@@@-$vector@V-$ComPtr@VCManipulation@@@WRL@Microsof.c)
 */

__int64 __fastcall CInteractionTracker2::AppendManipulations(__int64 a1, _QWORD *a2)
{
  std::vector<Microsoft::WRL::ComPtr<CManipulation>>::_Insert_counted_range<CManipulation * *>(
    (__int64 *)(a1 + 976),
    *(_QWORD *)(a1 + 984),
    a2[1],
    (8LL * *a2) >> 3);
  return 0LL;
}
