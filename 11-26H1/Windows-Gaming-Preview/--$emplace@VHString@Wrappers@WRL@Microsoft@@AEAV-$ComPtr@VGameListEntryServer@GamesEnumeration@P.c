/*
 * XREFs of ??$emplace@VHString@Wrappers@WRL@Microsoft@@AEAV?$ComPtr@VGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@@34@@?$_Tree@V?$_Tmap_traits@VHString@Wrappers@WRL@Microsoft@@V?$ComPtr@VGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@@34@UstringLessIgnoreCase@FindAllOperation@GamesEnumeration@Preview@Gaming@Windows@@V?$allocator@U?$pair@$$CBVHString@Wrappers@WRL@Microsoft@@V?$ComPtr@VGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@@34@@std@@@std@@$0A@@std@@@std@@QEAA?AU?$pair@V?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBVHString@Wrappers@WRL@Microsoft@@V?$ComPtr@VGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@@34@@std@@@std@@@std@@@std@@_N@1@$$QEAVHString@Wrappers@WRL@Microsoft@@AEAV?$ComPtr@VGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@@56@@Z @ 0x18000CA8C
 * Callers:
 *     ?_FilterGameConfig@FindAllOperation@GamesEnumeration@Preview@Gaming@Windows@@AEAAJU_GUID@@$$QEAV?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@@Z @ 0x18000F69C (-_FilterGameConfig@FindAllOperation@GamesEnumeration@Preview@Gaming@Windows@@AEAAJU_GUID@@$$QEAV.c)
 *     ?_FilterTile@FindAllOperation@GamesEnumeration@Preview@Gaming@Windows@@AEAAJPEAUIUnifiedTile@Shim@UnifiedTile@Shell@WindowsInternal@@@Z @ 0x18000FD58 (-_FilterTile@FindAllOperation@GamesEnumeration@Preview@Gaming@Windows@@AEAAJPEAUIUnifiedTile@Shi.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180002250 (--2@YAPEAX_K@Z.c)
 *     ??$_Find_lower_bound@VHString@Wrappers@WRL@Microsoft@@@?$_Tree@V?$_Tmap_traits@VHString@Wrappers@WRL@Microsoft@@V?$ComPtr@VGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@@34@UstringLessIgnoreCase@FindAllOperation@GamesEnumeration@Preview@Gaming@Windows@@V?$allocator@U?$pair@$$CBVHString@Wrappers@WRL@Microsoft@@V?$ComPtr@VGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@@34@@std@@@std@@$0A@@std@@@std@@IEBA?AU?$_Tree_find_result@PEAU?$_Tree_node@U?$pair@$$CBVHString@Wrappers@WRL@Microsoft@@V?$ComPtr@VGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@@34@@std@@PEAX@std@@@1@AEBVHString@Wrappers@WRL@Microsoft@@@Z @ 0x18000C9C0 (--$_Find_lower_bound@VHString@Wrappers@WRL@Microsoft@@@-$_Tree@V-$_Tmap_traits@VHString@Wrappers.c)
 *     ??1?$_Tree_temp_node@V?$allocator@U?$_Tree_node@U?$pair@$$CBVHString@Wrappers@WRL@Microsoft@@V?$ComPtr@VGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@@34@@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x18000D2B0 (--1-$_Tree_temp_node@V-$allocator@U-$_Tree_node@U-$pair@$$CBVHString@Wrappers@WRL@Microsoft@@V-$.c)
 *     ?_Insert_node@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBVHString@Wrappers@WRL@Microsoft@@V?$ComPtr@VGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@@34@@std@@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBVHString@Wrappers@WRL@Microsoft@@V?$ComPtr@VGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@@34@@std@@PEAX@2@U?$_Tree_id@PEAU?$_Tree_node@U?$pair@$$CBVHString@Wrappers@WRL@Microsoft@@V?$ComPtr@VGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@@34@@std@@PEAX@std@@@2@QEAU32@@Z @ 0x1800107AC (-_Insert_node@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBVHString@Wrappers@WRL@Microsoft@@V-$.c)
 *     ?_Throw_tree_length_error@std@@YAXXZ @ 0x180011128 (-_Throw_tree_length_error@std@@YAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall std::_Tree<std::_Tmap_traits<Microsoft::WRL::Wrappers::HString,Microsoft::WRL::ComPtr<Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer>,Windows::Gaming::Preview::GamesEnumeration::FindAllOperation::stringLessIgnoreCase,std::allocator<std::pair<Microsoft::WRL::Wrappers::HString const,Microsoft::WRL::ComPtr<Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer>>>,0>>::emplace<Microsoft::WRL::Wrappers::HString,Microsoft::WRL::ComPtr<Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer> &>(
        __int64 *a1,
        __int64 a2,
        HSTRING *a3,
        __int64 *a4)
{
  _QWORD *v8; // rax
  __int128 v9; // xmm6
  char v10; // di
  __int64 inserted; // rbp
  const WCHAR *StringRawBuffer; // rbx
  const WCHAR *v13; // rax
  __int64 v14; // rbp
  _QWORD *v15; // rbx
  __int64 v16; // r8
  signed __int64 v17; // rcx
  bool v18; // zf
  signed __int64 v19; // rax
  signed __int32 v20; // eax
  __int128 v22; // [rsp+30h] [rbp-48h] BYREF
  __int64 v23; // [rsp+40h] [rbp-38h]

  v8 = std::_Tree<std::_Tmap_traits<Microsoft::WRL::Wrappers::HString,Microsoft::WRL::ComPtr<Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer>,Windows::Gaming::Preview::GamesEnumeration::FindAllOperation::stringLessIgnoreCase,std::allocator<std::pair<Microsoft::WRL::Wrappers::HString const,Microsoft::WRL::ComPtr<Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer>>>,0>>::_Find_lower_bound<Microsoft::WRL::Wrappers::HString>(
         (__int64)a1,
         &v22,
         a3);
  v9 = *(_OWORD *)v8;
  v23 = v8[2];
  v10 = 0;
  inserted = v23;
  if ( *(_BYTE *)(v23 + 25)
    || (StringRawBuffer = WindowsGetStringRawBuffer(*(HSTRING *)(v23 + 32), 0LL),
        v13 = WindowsGetStringRawBuffer(*a3, 0LL),
        CompareStringOrdinal(v13, -1, StringRawBuffer, -1, 1) == 1) )
  {
    if ( a1[1] == 0x555555555555555LL )
      std::_Throw_tree_length_error();
    v14 = *a1;
    v22 = (unsigned __int64)a1;
    v15 = operator new(0x30uLL);
    v15[4] = *a3;
    *a3 = 0LL;
    v16 = *a4;
    v15[5] = *a4;
    if ( v16 )
    {
      v17 = *(_QWORD *)(v16 + 136);
      while ( v17 >= 0 )
      {
        if ( (_DWORD)v17 != 0x7FFFFFFF )
        {
          v19 = _InterlockedCompareExchange64((volatile signed __int64 *)(v16 + 136), v17 + 1, v17);
          v18 = v17 == v19;
          v17 = v19;
          if ( !v18 )
            continue;
        }
        goto LABEL_12;
      }
      do
        v20 = *(_DWORD *)(2 * v17 + 0x10);
      while ( v20 != 0x7FFFFFFF
           && v20 != _InterlockedCompareExchange((volatile signed __int32 *)(2 * v17 + 16), v20 + 1, v20) );
    }
LABEL_12:
    *v15 = v14;
    v15[1] = v14;
    v15[2] = v14;
    *((_WORD *)v15 + 12) = 0;
    *((_QWORD *)&v22 + 1) = 0LL;
    std::_Tree_temp_node<std::allocator<std::_Tree_node<std::pair<Microsoft::WRL::Wrappers::HString const,Microsoft::WRL::ComPtr<Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer>>,void *>>>::~_Tree_temp_node<std::allocator<std::_Tree_node<std::pair<Microsoft::WRL::Wrappers::HString const,Microsoft::WRL::ComPtr<Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer>>,void *>>>(&v22);
    v22 = v9;
    inserted = std::_Tree_val<std::_Tree_simple_types<std::pair<Microsoft::WRL::Wrappers::HString const,Microsoft::WRL::ComPtr<Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer>>>>::_Insert_node(
                 a1,
                 &v22,
                 v15);
    v10 = 1;
  }
  *(_QWORD *)a2 = inserted;
  *(_BYTE *)(a2 + 8) = v10;
  return a2;
}
