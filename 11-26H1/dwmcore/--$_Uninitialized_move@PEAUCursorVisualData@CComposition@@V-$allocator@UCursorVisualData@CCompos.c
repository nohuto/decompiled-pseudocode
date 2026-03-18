/*
 * XREFs of ??$_Uninitialized_move@PEAUCursorVisualData@CComposition@@V?$allocator@UCursorVisualData@CComposition@@@std@@@std@@YAPEAUCursorVisualData@CComposition@@QEAU12@0PEAU12@AEAV?$allocator@UCursorVisualData@CComposition@@@0@@Z @ 0x1802294E0
 * Callers:
 *     ??$_Emplace_reallocate@UCursorVisualData@CComposition@@@?$vector@UCursorVisualData@CComposition@@V?$allocator@UCursorVisualData@CComposition@@@std@@@std@@AEAAPEAUCursorVisualData@CComposition@@QEAU23@$$QEAU23@@Z @ 0x18022925C (--$_Emplace_reallocate@UCursorVisualData@CComposition@@@-$vector@UCursorVisualData@CComposition@.c)
 * Callees:
 *     ??$_Destroy_range@V?$allocator@UCursorVisualData@CComposition@@@std@@@std@@YAXPEAUCursorVisualData@CComposition@@QEAU12@AEAV?$allocator@UCursorVisualData@CComposition@@@0@@Z @ 0x1802291E8 (--$_Destroy_range@V-$allocator@UCursorVisualData@CComposition@@@std@@@std@@YAXPEAUCursorVisualDa.c)
 *     ??0CursorVisualData@CComposition@@QEAA@$$QEAU01@@Z @ 0x1802298A0 (--0CursorVisualData@CComposition@@QEAA@$$QEAU01@@Z.c)
 */

CComposition::CursorVisualData *__fastcall std::_Uninitialized_move<CComposition::CursorVisualData *>(
        __int64 a1,
        __int64 a2,
        CComposition::CursorVisualData *a3)
{
  __int64 i; // rdi

  for ( i = a1; i != a2; i += 32LL )
  {
    CComposition::CursorVisualData::CursorVisualData(a3, i);
    a3 = (CComposition::CursorVisualData *)((char *)a3 + 32);
  }
  std::_Destroy_range<std::allocator<CComposition::CursorVisualData>>(a3, a3);
  return a3;
}
