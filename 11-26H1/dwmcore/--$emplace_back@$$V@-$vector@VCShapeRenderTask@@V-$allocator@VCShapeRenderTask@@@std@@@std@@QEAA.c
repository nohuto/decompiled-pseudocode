/*
 * XREFs of ??$emplace_back@$$V@?$vector@VCShapeRenderTask@@V?$allocator@VCShapeRenderTask@@@std@@@std@@QEAAAEAVCShapeRenderTask@@XZ @ 0x1802AA6F8
 * Callers:
 *     ?CreateRenderTasks@CSpriteVectorShape@@QEAAJPEAVCShapeDrawingContext@@@Z @ 0x18003FCD0 (-CreateRenderTasks@CSpriteVectorShape@@QEAAJPEAVCShapeDrawingContext@@@Z.c)
 * Callees:
 *     ??$_Emplace_reallocate@$$V@?$vector@VCShapeRenderTask@@V?$allocator@VCShapeRenderTask@@@std@@@std@@AEAAPEAVCShapeRenderTask@@QEAV2@@Z @ 0x18019B2E0 (--$_Emplace_reallocate@$$V@-$vector@VCShapeRenderTask@@V-$allocator@VCShapeRenderTask@@@std@@@st.c)
 */

char *__fastcall std::vector<CShapeRenderTask>::emplace_back<>(__int64 a1)
{
  _BYTE *v1; // rdx
  __int64 v2; // rdx

  v1 = *(_BYTE **)(a1 + 8);
  if ( v1 == *(_BYTE **)(a1 + 16) )
    return std::vector<CShapeRenderTask>::_Emplace_reallocate<>((const void **)a1, v1);
  *(_DWORD *)v1 = 0;
  v2 = *(_QWORD *)(a1 + 8);
  *(_QWORD *)(a1 + 8) = v2 + 56;
  return (char *)v2;
}
