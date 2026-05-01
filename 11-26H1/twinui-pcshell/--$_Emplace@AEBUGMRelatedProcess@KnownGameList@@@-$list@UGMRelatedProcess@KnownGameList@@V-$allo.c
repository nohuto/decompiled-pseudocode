/*
 * XREFs of ??$_Emplace@AEBUGMRelatedProcess@KnownGameList@@@?$list@UGMRelatedProcess@KnownGameList@@V?$allocator@UGMRelatedProcess@KnownGameList@@@std@@@std@@QEAAPEAU?$_List_node@UGMRelatedProcess@KnownGameList@@PEAX@1@QEAU21@AEBUGMRelatedProcess@KnownGameList@@@Z @ 0x18067B624
 * Callers:
 *     ?GetGameRelatedFromGcsData@AutoGameProfile@@YAJPEBGKPEAKPEAPEAUGMRelatedProcess@KnownGameList@@@Z @ 0x18067BCAC (-GetGameRelatedFromGcsData@AutoGameProfile@@YAJPEBGKPEAKPEAPEAUGMRelatedProcess@KnownGameList@@@.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x180285C68 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 *     ??1?$_Alloc_construct_ptr@V?$allocator@U?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@VWin32AppInfo@@@2@@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x1805727EC (--1-$_Alloc_construct_ptr@V-$allocator@U-$_Tree_node@U-$pair@$$CBV-$basic_string@GU_ea_1805727EC.c)
 */

// Hidden C++ exception states: #wind=1
_OWORD *__fastcall std::list<KnownGameList::GMRelatedProcess>::_Emplace<KnownGameList::GMRelatedProcess const &>(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  _OWORD *v6; // rbx
  _QWORD *v7; // rax
  __int64 v9; // [rsp+20h] [rbp-18h] BYREF
  __int64 v10; // [rsp+28h] [rbp-10h]

  if ( *(_QWORD *)(a1 + 8) == 0x333333333333333LL )
    std::_Xlength_error("list too long");
  v9 = a1;
  v10 = 0LL;
  v6 = std::_Allocate<16,std::_Default_allocate_traits>(0x50uLL);
  v6[1] = *(_OWORD *)a3;
  v6[2] = *(_OWORD *)(a3 + 16);
  v6[3] = *(_OWORD *)(a3 + 32);
  *((_QWORD *)v6 + 8) = *(_QWORD *)(a3 + 48);
  *((_DWORD *)v6 + 18) = *(_DWORD *)(a3 + 56);
  *((_WORD *)v6 + 38) = *(_WORD *)(a3 + 60);
  ++*(_QWORD *)(a1 + 8);
  v7 = *(_QWORD **)(a2 + 8);
  *(_QWORD *)v6 = a2;
  *((_QWORD *)v6 + 1) = v7;
  v10 = 0LL;
  *(_QWORD *)(a2 + 8) = v6;
  *v7 = v6;
  std::_Alloc_construct_ptr<std::allocator<std::_Tree_node<std::pair<std::wstring const,std::shared_ptr<Win32AppInfo>>,void *>>>::~_Alloc_construct_ptr<std::allocator<std::_Tree_node<std::pair<std::wstring const,std::shared_ptr<Win32AppInfo>>,void *>>>((__int64)&v9);
  return v6;
}
