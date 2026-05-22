/*
 * XREFs of ?RegisterCursor@DWMCursorBroker@@QEAAJPEAVDWMCursor@@@Z @ 0x1801CC600
 * Callers:
 *     ?Initialize@DWMCursor@@QEAAJXZ @ 0x1801CD08C (-Initialize@DWMCursor@@QEAAJXZ.c)
 * Callees:
 *     ?ArbitrateCursor@DWMCursorBroker@@QEAAJPEAVDWMCursor@@@Z @ 0x18007B31C (-ArbitrateCursor@DWMCursorBroker@@QEAAJPEAVDWMCursor@@@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180089534 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$_Insert_or_assign@AEBUCursorId@@AEAPEAVDWMCursor@@@?$unordered_map@UCursorId@@PEAVDWMCursor@@UCursorIdHash@@U?$equal_to@UCursorId@@@std@@V?$allocator@U?$pair@$$CBUCursorId@@PEAVDWMCursor@@@std@@@5@@std@@AEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUCursorId@@PEAVDWMCursor@@@std@@@std@@@std@@@std@@_N@1@AEBUCursorId@@AEAPEAVDWMCursor@@@Z @ 0x1801CB75C (--$_Insert_or_assign@AEBUCursorId@@AEAPEAVDWMCursor@@@-$unordered_map@UCursorId@@PEAVDWMCursor@@.c)
 *     ?CreateMotionTransformAndVerifySend@DWMCursorBroker@@AEAAJPEAVDWMCursor@@I@Z @ 0x1801CBC08 (-CreateMotionTransformAndVerifySend@DWMCursorBroker@@AEAAJPEAVDWMCursor@@I@Z.c)
 *     ?count@?$_Hash@V?$_Umap_traits@UCursorId@@PEAVDWMCursor@@V?$_Uhash_compare@UCursorId@@UCursorIdHash@@U?$equal_to@UCursorId@@@std@@@std@@V?$allocator@U?$pair@$$CBUCursorId@@PEAVDWMCursor@@@std@@@4@$0A@@std@@@std@@QEBA_KAEBUCursorId@@@Z @ 0x1801CCAC8 (-count@-$_Hash@V-$_Umap_traits@UCursorId@@PEAVDWMCursor@@V-$_Uhash_compare@UCursorId@@UCursorIdH.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall DWMCursorBroker::RegisterCursor(DWMCursorBroker *this, struct DWMCursor *a2)
{
  unsigned int v3; // ebx
  _QWORD *v4; // rdi
  int v6[6]; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  int v8; // [rsp+40h] [rbp+8h] BYREF
  struct DWMCursor *v9; // [rsp+48h] [rbp+10h] BYREF

  v9 = a2;
  (*(void (__fastcall **)(struct DWMCursor *, int *))(*(_QWORD *)a2 + 48LL))(a2, &v8);
  if ( std::_Hash<std::_Umap_traits<CursorId,DWMCursor *,std::_Uhash_compare<CursorId,CursorIdHash,std::equal_to<CursorId>>,std::allocator<std::pair<CursorId const,DWMCursor *>>,0>>::count(
         (char *)this + 48,
         &v8) )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x269,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\lib\\dwmcursorbroker.cpp",
      (const char *)0x8000FFFFLL,
      v6[0]);
  }
  std::unordered_map<CursorId,DWMCursor *,CursorIdHash,std::equal_to<CursorId>,std::allocator<std::pair<CursorId const,DWMCursor *>>>::_Insert_or_assign<CursorId const &,DWMCursor * &>(
    (float *)this + 12,
    (__int64)v6,
    (unsigned __int8 *)&v8,
    &v9);
  v3 = 0;
  v4 = (_QWORD *)((char *)this + 216);
  do
  {
    if ( *v4 )
      DWMCursorBroker::CreateMotionTransformAndVerifySend(this, v9, v3);
    ++v3;
    v4 += 3;
  }
  while ( v3 < 0xA );
  if ( (unsigned int)(v8 - 1) <= 1 )
    DWMCursorBroker::ArbitrateCursor(this, v9);
  return 0LL;
}
