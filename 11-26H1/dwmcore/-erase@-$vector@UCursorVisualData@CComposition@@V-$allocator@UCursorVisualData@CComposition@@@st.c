/*
 * XREFs of ?erase@?$vector@UCursorVisualData@CComposition@@V?$allocator@UCursorVisualData@CComposition@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@UCursorVisualData@CComposition@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@UCursorVisualData@CComposition@@@std@@@std@@@2@@Z @ 0x18022B8E4
 * Callers:
 *     ?Render@CDDARenderTarget@@IEAAJPEAVCDrawingContext@@@Z @ 0x18005714C (-Render@CDDARenderTarget@@IEAAJPEAVCDrawingContext@@@Z.c)
 *     ?RenderForCapture@CaptureBitsResponse@@IEAAJXZ @ 0x180128124 (-RenderForCapture@CaptureBitsResponse@@IEAAJXZ.c)
 *     ?HideVisuals@COffScreenRenderTarget@@MEAAXXZ @ 0x1801AF1A0 (-HideVisuals@COffScreenRenderTarget@@MEAAXXZ.c)
 *     ?ForEachCursorVisual@CComposition@@QEAAJV?$function@$$A6AJPEAVCVisual@@PEAVCVisualTree@@@Z@std@@@Z @ 0x18020899C (-ForEachCursorVisual@CComposition@@QEAAJV-$function@$$A6AJPEAVCVisual@@PEAVCVisualTree@@@Z@std@@.c)
 *     ?RestoreCursors@CComposition@@QEAAXXZ @ 0x18021D20C (-RestoreCursors@CComposition@@QEAAXXZ.c)
 *     ?AddCursorVisual@CComposition@@QEAAXPEAVCVisual@@@Z @ 0x18022A5AC (-AddCursorVisual@CComposition@@QEAAXPEAVCVisual@@@Z.c)
 *     ?RemoveCursorVisual@CComposition@@QEAAXPEAVCVisual@@@Z @ 0x18022B0E0 (-RemoveCursorVisual@CComposition@@QEAAXPEAVCVisual@@@Z.c)
 * Callees:
 *     ??$_Move_unchecked@PEAUCursorVisualData@CComposition@@PEAU12@@std@@YAPEAUCursorVisualData@CComposition@@PEAU12@00@Z @ 0x180229444 (--$_Move_unchecked@PEAUCursorVisualData@CComposition@@PEAU12@@std@@YAPEAUCursorVisualData@CCompo.c)
 *     ??1CursorVisualData@CComposition@@QEAA@XZ @ 0x18022A2B8 (--1CursorVisualData@CComposition@@QEAA@XZ.c)
 */

__int64 *__fastcall std::vector<CComposition::CursorVisualData>::erase(__int64 a1, __int64 *a2, __int64 a3)
{
  __int64 *result; // rax

  std::_Move_unchecked<CComposition::CursorVisualData *,CComposition::CursorVisualData *>(
    a3 + 32,
    *(_QWORD *)(a1 + 8),
    a3);
  CComposition::CursorVisualData::~CursorVisualData((CComposition::CursorVisualData *)(*(_QWORD *)(a1 + 8) - 32LL));
  *(_QWORD *)(a1 + 8) -= 32LL;
  result = a2;
  *a2 = a3;
  return result;
}
