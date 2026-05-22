/*
 * XREFs of ?find@?$_Hash@V?$_Umap_traits@UCursorId@@PEAVDWMCursor@@V?$_Uhash_compare@UCursorId@@UCursorIdHash@@U?$equal_to@UCursorId@@@std@@@std@@V?$allocator@U?$pair@$$CBUCursorId@@PEAVDWMCursor@@@std@@@4@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUCursorId@@PEAVDWMCursor@@@std@@@std@@@std@@@2@AEBUCursorId@@@Z @ 0x1801CCB08
 * Callers:
 *     ?GetCursor@DWMCursorBroker@@UEAAJKK_NPEAPEAUICursor@@@Z @ 0x18000FAB0 (-GetCursor@DWMCursorBroker@@UEAAJKK_NPEAPEAUICursor@@@Z.c)
 *     ?GetDefaultCursor@DWMCursorBroker@@UEAAJPEAPEAUICursor@@@Z @ 0x180066560 (-GetDefaultCursor@DWMCursorBroker@@UEAAJPEAPEAUICursor@@@Z.c)
 *     ?CreateCursor@DWMCursorBroker@@UEAAJPEAUDeviceInfo@@KPEAPEAUICursor@@@Z @ 0x180079870 (-CreateCursor@DWMCursorBroker@@UEAAJPEAUDeviceInfo@@KPEAPEAUICursor@@@Z.c)
 *     ?OnTargetChanged@DWMCursorBroker@@UEAAJPEAUCursorId@@@Z @ 0x1801CC3A0 (-OnTargetChanged@DWMCursorBroker@@UEAAJPEAUCursorId@@@Z.c)
 *     ?SetClosestInteractiveBounds@DWMCursorBroker@@UEAAJUCursorIdInfo@@UCursorClosestInteractiveBoundsRect@@@Z @ 0x1801CC6D0 (-SetClosestInteractiveBounds@DWMCursorBroker@@UEAAJUCursorIdInfo@@UCursorClosestInteractiveBound.c)
 *     ?SetLocked@DWMCursorBroker@@UEAAJUCursorIdInfo@@_N@Z @ 0x1801CC8C0 (-SetLocked@DWMCursorBroker@@UEAAJUCursorIdInfo@@_N@Z.c)
 * Callees:
 *     ?_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z @ 0x180031330 (-_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z.c)
 *     ??$_Find_last@UCursorId@@@?$_Hash@V?$_Umap_traits@UCursorId@@PEAVDWMCursor@@V?$_Uhash_compare@UCursorId@@UCursorIdHash@@U?$equal_to@UCursorId@@@std@@@std@@V?$allocator@U?$pair@$$CBUCursorId@@PEAVDWMCursor@@@std@@@4@$0A@@std@@@std@@IEBA?AU?$_Hash_find_last_result@PEAU?$_List_node@U?$pair@$$CBUCursorId@@PEAVDWMCursor@@@std@@PEAX@std@@@1@AEBUCursorId@@_K@Z @ 0x180069454 (--$_Find_last@UCursorId@@@-$_Hash@V-$_Umap_traits@UCursorId@@PEAVDWMCursor@@V-$_Uhash_compare@UC.c)
 */

_QWORD *__fastcall std::_Hash<std::_Umap_traits<CursorId,DWMCursor *,std::_Uhash_compare<CursorId,CursorIdHash,std::equal_to<CursorId>>,std::allocator<std::pair<CursorId const,DWMCursor *>>,0>>::find(
        _QWORD *a1,
        _QWORD *a2,
        const unsigned __int8 *a3)
{
  __int64 appended; // rax
  _DWORD *v6; // r11
  __int64 v7; // r8
  _QWORD v9[3]; // [rsp+20h] [rbp-18h] BYREF

  appended = std::_Fnv1a_append_bytes((__int64)a1, a3, 4uLL);
  v7 = std::_Hash<std::_Umap_traits<CursorId,DWMCursor *,std::_Uhash_compare<CursorId,CursorIdHash,std::equal_to<CursorId>>,std::allocator<std::pair<CursorId const,DWMCursor *>>,0>>::_Find_last<CursorId>(
         a1,
         v9,
         v6,
         appended)[1];
  if ( !v7 )
    v7 = a1[1];
  *a2 = v7;
  return a2;
}
