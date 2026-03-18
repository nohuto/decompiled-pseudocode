/*
 * XREFs of ??$_Uninitialized_move@PEAV?$ComPtr@VCInteractionTracker2@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VCInteractionTracker2@@@WRL@Microsoft@@@std@@@std@@YAPEAV?$ComPtr@VCInteractionTracker2@@@WRL@Microsoft@@QEAV123@0PEAV123@AEAV?$allocator@V?$ComPtr@VCInteractionTracker2@@@WRL@Microsoft@@@0@@Z @ 0x180277E78
 * Callers:
 *     ??$_Emplace_reallocate@V?$ComPtr@VCInteractionTracker2@@@WRL@Microsoft@@@?$vector@V?$ComPtr@VCInteractionTracker2@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VCInteractionTracker2@@@WRL@Microsoft@@@std@@@std@@AEAAPEAV?$ComPtr@VCInteractionTracker2@@@WRL@Microsoft@@QEAV234@$$QEAV234@@Z @ 0x180277CB0 (--$_Emplace_reallocate@V-$ComPtr@VCInteractionTracker2@@@WRL@Microsoft@@@-$vector@V-$ComPtr@VCIn.c)
 * Callees:
 *     ??$_Destroy_range@V?$allocator@V?$ComPtr@VCInteractionTracker2@@@WRL@Microsoft@@@std@@@std@@YAXPEAV?$ComPtr@VCInteractionTracker2@@@WRL@Microsoft@@QEAV123@AEAV?$allocator@V?$ComPtr@VCInteractionTracker2@@@WRL@Microsoft@@@0@@Z @ 0x1802452E0 (--$_Destroy_range@V-$allocator@V-$ComPtr@VCInteractionTracker2@@@WRL@Microsoft@@@std@@@std@@YAXP.c)
 *     ??0?$ComPtr@VCInteractionTracker2@@@WRL@Microsoft@@QEAA@$$QEAV012@@Z @ 0x1802782E0 (--0-$ComPtr@VCInteractionTracker2@@@WRL@Microsoft@@QEAA@$$QEAV012@@Z.c)
 */

__int64 *__fastcall std::_Uninitialized_move<Microsoft::WRL::ComPtr<CInteractionTracker2> *,std::allocator<Microsoft::WRL::ComPtr<CInteractionTracker2>>>(
        __int64 a1,
        __int64 a2,
        __int64 *a3)
{
  __int64 v5; // rdx
  __int64 v6; // rdx
  __int64 v7; // r8

  v5 = a1;
  if ( a1 != a2 )
  {
    do
    {
      Microsoft::WRL::ComPtr<CInteractionTracker2>::ComPtr<CInteractionTracker2>(a3++, v5);
      v5 = v6 + 8;
    }
    while ( v5 != v7 );
  }
  std::_Destroy_range<std::allocator<Microsoft::WRL::ComPtr<CInteractionTracker2>>>(a3, a3);
  return a3;
}
