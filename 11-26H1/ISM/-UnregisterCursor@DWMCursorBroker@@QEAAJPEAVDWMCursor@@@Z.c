/*
 * XREFs of ?UnregisterCursor@DWMCursorBroker@@QEAAJPEAVDWMCursor@@@Z @ 0x1801CC964
 * Callers:
 *     ??1DWMCursor@@MEAA@XZ @ 0x1800920A4 (--1DWMCursor@@MEAA@XZ.c)
 * Callees:
 *     ??$_Erase@UCursorId@@@?$_Hash@V?$_Umap_traits@UCursorId@@PEAVDWMCursor@@V?$_Uhash_compare@UCursorId@@UCursorIdHash@@U?$equal_to@UCursorId@@@std@@@std@@V?$allocator@U?$pair@$$CBUCursorId@@PEAVDWMCursor@@@std@@@4@$0A@@std@@@std@@AEAA_KAEBUCursorId@@@Z @ 0x1800693A4 (--$_Erase@UCursorId@@@-$_Hash@V-$_Umap_traits@UCursorId@@PEAVDWMCursor@@V-$_Uhash_compare@UCurso.c)
 *     ?SendAndVerifyEndpoints@DWMCursorBroker@@AEAAJPEAUCursorMessage@@@Z @ 0x180078E6C (-SendAndVerifyEndpoints@DWMCursorBroker@@AEAAJPEAUCursorMessage@@@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180089534 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     memset_0 @ 0x18009AC08 (memset_0.c)
 *     ?_Unchecked_erase@?$_Hash@V?$_Umap_traits@UDWMPointerMapping@@UCursorId@@V?$_Uhash_compare@UDWMPointerMapping@@UDWMMappingHash@@U?$equal_to@UDWMPointerMapping@@@std@@@std@@V?$allocator@U?$pair@$$CBUDWMPointerMapping@@UCursorId@@@std@@@4@$0A@@std@@@std@@AEAAPEAU?$_List_node@U?$pair@$$CBUDWMPointerMapping@@UCursorId@@@std@@PEAX@2@PEAU32@@Z @ 0x1801CCA20 (-_Unchecked_erase@-$_Hash@V-$_Umap_traits@UDWMPointerMapping@@UCursorId@@V-$_Uhash_compare@UDWMP.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall DWMCursorBroker::UnregisterCursor(DWMCursorBroker *this, struct DWMCursor *a2)
{
  __int64 v3; // rax
  __int64 v4; // rbx
  int v6; // [rsp+20h] [rbp-48h] BYREF
  __int64 v7; // [rsp+24h] [rbp-44h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  __int64 v9; // [rsp+70h] [rbp+8h] BYREF

  (*(void (__fastcall **)(struct DWMCursor *, __int64 *))(*(_QWORD *)a2 + 48LL))(a2, &v9);
  if ( !std::_Hash<std::_Umap_traits<CursorId,DWMCursor *,std::_Uhash_compare<CursorId,CursorIdHash,std::equal_to<CursorId>>,std::allocator<std::pair<CursorId const,DWMCursor *>>,0>>::_Erase<CursorId>(
          (_QWORD *)this + 6,
          (unsigned __int8 *)&v9) )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x288,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\lib\\dwmcursorbroker.cpp",
      (const char *)0x8000FFFFLL,
      v6);
  v3 = **((_QWORD **)this + 15);
LABEL_4:
  v4 = v9;
  while ( v3 != *((_QWORD *)this + 15) )
  {
    if ( *(_DWORD *)(v3 + 24) == (_DWORD)v9 )
    {
      v3 = std::_Hash<std::_Umap_traits<DWMPointerMapping,CursorId,std::_Uhash_compare<DWMPointerMapping,DWMMappingHash,std::equal_to<DWMPointerMapping>>,std::allocator<std::pair<DWMPointerMapping const,CursorId>>,0>>::_Unchecked_erase(
             (char *)this + 112,
             v3);
      goto LABEL_4;
    }
    v3 = *(_QWORD *)v3;
  }
  memset_0(&v6, 0, 0x40uLL);
  LOBYTE(v6) = 1;
  v7 = v4;
  DWMCursorBroker::SendAndVerifyEndpoints(this, (struct CursorMessage *)&v6);
  return 0LL;
}
