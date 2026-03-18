/*
 * XREFs of ??0CursorVisualData@CComposition@@QEAA@$$QEAU01@@Z @ 0x1802298A0
 * Callers:
 *     ??$_Emplace_reallocate@UCursorVisualData@CComposition@@@?$vector@UCursorVisualData@CComposition@@V?$allocator@UCursorVisualData@CComposition@@@std@@@std@@AEAAPEAUCursorVisualData@CComposition@@QEAU23@$$QEAU23@@Z @ 0x18022925C (--$_Emplace_reallocate@UCursorVisualData@CComposition@@@-$vector@UCursorVisualData@CComposition@.c)
 *     ??$_Uninitialized_move@PEAUCursorVisualData@CComposition@@V?$allocator@UCursorVisualData@CComposition@@@std@@@std@@YAPEAUCursorVisualData@CComposition@@QEAU12@0PEAU12@AEAV?$allocator@UCursorVisualData@CComposition@@@0@@Z @ 0x1802294E0 (--$_Uninitialized_move@PEAUCursorVisualData@CComposition@@V-$allocator@UCursorVisualData@CCompos.c)
 *     ??$emplace_back@UCursorVisualData@CComposition@@@?$vector@UCursorVisualData@CComposition@@V?$allocator@UCursorVisualData@CComposition@@@std@@@std@@QEAAAEAUCursorVisualData@CComposition@@$$QEAU23@@Z @ 0x1802295D4 (--$emplace_back@UCursorVisualData@CComposition@@@-$vector@UCursorVisualData@CComposition@@V-$all.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CComposition::CursorVisualData::CursorVisualData(__int64 a1, __int64 a2)
{
  __int64 v4; // rcx
  __int64 v5; // rax

  *(_QWORD *)a1 = &CExcludeVisualReference::`vftable';
  v4 = *(_QWORD *)(a2 + 8);
  *(_QWORD *)(a1 + 8) = v4;
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
  *(_DWORD *)(a1 + 16) = *(_DWORD *)(a2 + 16);
  *(_BYTE *)(a1 + 20) = *(_BYTE *)(a2 + 20);
  v5 = *(_QWORD *)(a2 + 24);
  *(_QWORD *)(a2 + 24) = 0LL;
  *(_QWORD *)(a1 + 24) = v5;
  return a1;
}
