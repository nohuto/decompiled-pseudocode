/*
 * XREFs of ?HideVisuals@COffScreenRenderTarget@@MEAAXXZ @ 0x1801AF1A0
 * Callers:
 *     ?HideVisuals@CMagnifierRenderTarget@@MEAAXXZ @ 0x1801AF150 (-HideVisuals@CMagnifierRenderTarget@@MEAAXXZ.c)
 *     ?HideVisuals@CCaptureRenderTarget@@MEAAXXZ @ 0x180257830 (-HideVisuals@CCaptureRenderTarget@@MEAAXXZ.c)
 * Callees:
 *     ?Hide@CExcludeVisualReference@@QEAAJXZ @ 0x180194FAC (-Hide@CExcludeVisualReference@@QEAAJXZ.c)
 *     ?erase@?$vector@UCursorVisualData@CComposition@@V?$allocator@UCursorVisualData@CComposition@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@UCursorVisualData@CComposition@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@UCursorVisualData@CComposition@@@std@@@std@@@2@@Z @ 0x18022B8E4 (-erase@-$vector@UCursorVisualData@CComposition@@V-$allocator@UCursorVisualData@CComposition@@@st.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall COffScreenRenderTarget::HideVisuals(COffScreenRenderTarget *this)
{
  __int64 v1; // rax
  int (__fastcall ***v2)(_QWORD); // rbx
  _QWORD *v3; // rdi
  __int64 v4; // rax
  CExcludeVisualReference *v5; // rbx
  CExcludeVisualReference **v6; // rdi
  char v7; // [rsp+30h] [rbp+8h] BYREF

  if ( *((_DWORD *)this + 46) == 1 )
  {
    v1 = *((_QWORD *)this + 3);
    v2 = *(int (__fastcall ****)(_QWORD))(v1 + 6136);
    v3 = (_QWORD *)(v1 + 6128);
    while ( v2 != (int (__fastcall ***)(_QWORD))*v3 )
    {
      v2 -= 4;
      if ( (**v2)(v2) < 0 )
        std::vector<CComposition::CursorVisualData>::erase(v3, &v7, v2);
    }
  }
  else if ( *((_DWORD *)this + 46) == 2 )
  {
    v4 = *((_QWORD *)this + 3);
    v5 = *(CExcludeVisualReference **)(v4 + 6136);
    v6 = (CExcludeVisualReference **)(v4 + 6128);
    while ( v5 != *v6 )
    {
      v5 = (CExcludeVisualReference *)((char *)v5 - 32);
      if ( (int)CExcludeVisualReference::Hide(v5) < 0 )
        std::vector<CComposition::CursorVisualData>::erase(v6, &v7, v5);
    }
  }
}
