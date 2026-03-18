/*
 * XREFs of ?RestoreCursors@CComposition@@QEAAXXZ @ 0x18021D20C
 * Callers:
 *     ?RenderTargetDirty@COffScreenRenderTarget@@MEAAJPEAVCDrawingContext@@PEA_N@Z @ 0x180056BA0 (-RenderTargetDirty@COffScreenRenderTarget@@MEAAJPEAVCDrawingContext@@PEA_N@Z.c)
 *     ?Render@CDDARenderTarget@@IEAAJPEAVCDrawingContext@@@Z @ 0x18005714C (-Render@CDDARenderTarget@@IEAAJPEAVCDrawingContext@@@Z.c)
 *     ?RenderForCapture@CaptureBitsResponse@@IEAAJXZ @ 0x180128124 (-RenderForCapture@CaptureBitsResponse@@IEAAJXZ.c)
 *     ?RestoreVisuals@COffScreenRenderTarget@@MEAAXXZ @ 0x1801BDCA0 (-RestoreVisuals@COffScreenRenderTarget@@MEAAXXZ.c)
 * Callees:
 *     ?erase@?$vector@UCursorVisualData@CComposition@@V?$allocator@UCursorVisualData@CComposition@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@UCursorVisualData@CComposition@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@UCursorVisualData@CComposition@@@std@@@std@@@2@@Z @ 0x18022B8E4 (-erase@-$vector@UCursorVisualData@CComposition@@V-$allocator@UCursorVisualData@CComposition@@@st.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CComposition::RestoreCursors(CComposition *this)
{
  __int64 v1; // rbx
  _QWORD *v2; // rdi
  char v3; // [rsp+30h] [rbp+8h] BYREF

  v1 = *((_QWORD *)this + 767);
  v2 = (_QWORD *)((char *)this + 6128);
  while ( v1 != *v2 )
  {
    v1 -= 32LL;
    if ( (*(int (__fastcall **)(__int64))(*(_QWORD *)v1 + 8LL))(v1) < 0 )
      std::vector<CComposition::CursorVisualData>::erase(v2, &v3, v1);
  }
}
