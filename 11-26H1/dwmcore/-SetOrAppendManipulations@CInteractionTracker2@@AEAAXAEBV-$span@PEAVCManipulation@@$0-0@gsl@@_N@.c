/*
 * XREFs of ?SetOrAppendManipulations@CInteractionTracker2@@AEAAXAEBV?$span@PEAVCManipulation@@$0?0@gsl@@_N@Z @ 0x1802179F0
 * Callers:
 *     ?SetManipulations@CInteractionTracker2@@QEAAJAEBV?$span@PEAVCManipulation@@$0?0@gsl@@@Z @ 0x1802179D4 (-SetManipulations@CInteractionTracker2@@QEAAJAEBV-$span@PEAVCManipulation@@$0-0@gsl@@@Z.c)
 * Callees:
 *     ?clear@?$vector@V?$ComPtr@VCManipulation@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VCManipulation@@@WRL@Microsoft@@@std@@@std@@QEAAXXZ @ 0x18024F0A0 (-clear@-$vector@V-$ComPtr@VCManipulation@@@WRL@Microsoft@@V-$allocator@V-$ComPtr@VCManipulation@.c)
 */

void __fastcall CInteractionTracker2::SetOrAppendManipulations(__int64 a1, _QWORD *a2, char a3)
{
  __int64 *v3; // rbx

  v3 = (__int64 *)(a1 + 976);
  if ( !a3 )
    std::vector<Microsoft::WRL::ComPtr<CManipulation>>::clear(a1 + 976);
  std::vector<Microsoft::WRL::ComPtr<CManipulation>>::_Insert_counted_range<CManipulation * *>(
    v3,
    v3[1],
    a2[1],
    (8LL * *a2) >> 3);
}
