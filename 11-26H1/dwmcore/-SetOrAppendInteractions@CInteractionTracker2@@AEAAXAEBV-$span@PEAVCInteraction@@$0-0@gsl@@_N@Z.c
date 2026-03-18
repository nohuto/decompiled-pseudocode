/*
 * XREFs of ?SetOrAppendInteractions@CInteractionTracker2@@AEAAXAEBV?$span@PEAVCInteraction@@$0?0@gsl@@_N@Z @ 0x180217C30
 * Callers:
 *     ?SetInteractions@CInteractionTracker2@@QEAAJAEBV?$span@PEAVCInteraction@@$0?0@gsl@@@Z @ 0x180217C14 (-SetInteractions@CInteractionTracker2@@QEAAJAEBV-$span@PEAVCInteraction@@$0-0@gsl@@@Z.c)
 * Callees:
 *     ?clear@?$vector@V?$ComPtr@VCInteraction@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VCInteraction@@@WRL@Microsoft@@@std@@@std@@QEAAXXZ @ 0x18024F070 (-clear@-$vector@V-$ComPtr@VCInteraction@@@WRL@Microsoft@@V-$allocator@V-$ComPtr@VCInteraction@@@.c)
 */

void __fastcall CInteractionTracker2::SetOrAppendInteractions(__int64 a1, _QWORD *a2, char a3)
{
  __int64 *v3; // rbx

  v3 = (__int64 *)(a1 + 1000);
  if ( !a3 )
    std::vector<Microsoft::WRL::ComPtr<CInteraction>>::clear(a1 + 1000);
  std::vector<Microsoft::WRL::ComPtr<CInteraction>>::_Insert_counted_range<CInteraction * *>(
    v3,
    v3[1],
    a2[1],
    (8LL * *a2) >> 3);
}
