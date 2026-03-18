/*
 * XREFs of ??1_Reallocation_guard@?$vector@UCursorVisualData@CComposition@@V?$allocator@UCursorVisualData@CComposition@@@std@@@std@@QEAA@XZ @ 0x18022A2E0
 * Callers:
 *     ??$_Emplace_reallocate@UCursorVisualData@CComposition@@@?$vector@UCursorVisualData@CComposition@@V?$allocator@UCursorVisualData@CComposition@@@std@@@std@@AEAAPEAUCursorVisualData@CComposition@@QEAU23@$$QEAU23@@Z @ 0x18022925C (--$_Emplace_reallocate@UCursorVisualData@CComposition@@@-$vector@UCursorVisualData@CComposition@.c)
 * Callees:
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x1800C44D0 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 *     ??$_Destroy_range@V?$allocator@UCursorVisualData@CComposition@@@std@@@std@@YAXPEAUCursorVisualData@CComposition@@QEAU12@AEAV?$allocator@UCursorVisualData@CComposition@@@0@@Z @ 0x1802291E8 (--$_Destroy_range@V-$allocator@UCursorVisualData@CComposition@@@std@@@std@@YAXPEAUCursorVisualDa.c)
 */

void __fastcall std::vector<CComposition::CursorVisualData>::_Reallocation_guard::~_Reallocation_guard(__int64 a1)
{
  if ( *(_QWORD *)(a1 + 8) )
  {
    std::_Destroy_range<std::allocator<CComposition::CursorVisualData>>(
      *(CComposition::CursorVisualData **)(a1 + 24),
      *(CComposition::CursorVisualData **)(a1 + 32));
    std::_Deallocate<16>(*(void **)(a1 + 8), 32LL * *(_QWORD *)(a1 + 16));
  }
}
