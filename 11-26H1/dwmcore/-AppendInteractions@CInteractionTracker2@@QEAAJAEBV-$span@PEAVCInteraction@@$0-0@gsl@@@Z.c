/*
 * XREFs of ?AppendInteractions@CInteractionTracker2@@QEAAJAEBV?$span@PEAVCInteraction@@$0?0@gsl@@@Z @ 0x18021D41C
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1801E7E80 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     ??$_Insert_counted_range@PEAPEAVCInteraction@@@?$vector@V?$ComPtr@VCInteraction@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VCInteraction@@@WRL@Microsoft@@@std@@@std@@AEAAXV?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@V?$ComPtr@VCInteraction@@@WRL@Microsoft@@@std@@@std@@@1@PEAPEAVCInteraction@@_K@Z @ 0x1801E7550 (--$_Insert_counted_range@PEAPEAVCInteraction@@@-$vector@V-$ComPtr@VCInteraction@@@WRL@Microsoft@.c)
 */

__int64 __fastcall CInteractionTracker2::AppendInteractions(__int64 a1, _QWORD *a2)
{
  std::vector<Microsoft::WRL::ComPtr<CInteraction>>::_Insert_counted_range<CInteraction * *>(
    (__int64 *)(a1 + 1000),
    *(_QWORD *)(a1 + 1008),
    a2[1],
    (8LL * *a2) >> 3);
  return 0LL;
}
