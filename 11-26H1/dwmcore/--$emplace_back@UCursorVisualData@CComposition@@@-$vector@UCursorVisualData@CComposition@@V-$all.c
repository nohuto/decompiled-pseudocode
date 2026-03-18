/*
 * XREFs of ??$emplace_back@UCursorVisualData@CComposition@@@?$vector@UCursorVisualData@CComposition@@V?$allocator@UCursorVisualData@CComposition@@@std@@@std@@QEAAAEAUCursorVisualData@CComposition@@$$QEAU23@@Z @ 0x1802295D4
 * Callers:
 *     ?AddCursorVisual@CComposition@@QEAAXPEAVCVisual@@@Z @ 0x18022A5AC (-AddCursorVisual@CComposition@@QEAAXPEAVCVisual@@@Z.c)
 * Callees:
 *     ??$_Emplace_reallocate@UCursorVisualData@CComposition@@@?$vector@UCursorVisualData@CComposition@@V?$allocator@UCursorVisualData@CComposition@@@std@@@std@@AEAAPEAUCursorVisualData@CComposition@@QEAU23@$$QEAU23@@Z @ 0x18022925C (--$_Emplace_reallocate@UCursorVisualData@CComposition@@@-$vector@UCursorVisualData@CComposition@.c)
 *     ??0CursorVisualData@CComposition@@QEAA@$$QEAU01@@Z @ 0x1802298A0 (--0CursorVisualData@CComposition@@QEAA@$$QEAU01@@Z.c)
 */

char *__fastcall std::vector<CComposition::CursorVisualData>::emplace_back<CComposition::CursorVisualData>(
        __int64 *a1,
        __int64 a2)
{
  __int64 v3; // rcx

  if ( a1[1] == a1[2] )
    return std::vector<CComposition::CursorVisualData>::_Emplace_reallocate<CComposition::CursorVisualData>(
             a1,
             a1[1],
             a2);
  CComposition::CursorVisualData::CursorVisualData(a1[1], a2);
  v3 = a1[1];
  a1[1] = v3 + 32;
  return (char *)v3;
}
