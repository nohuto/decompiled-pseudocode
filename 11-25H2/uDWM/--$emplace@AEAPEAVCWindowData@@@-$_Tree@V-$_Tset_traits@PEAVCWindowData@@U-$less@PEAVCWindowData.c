/*
 * XREFs of ??$emplace@AEAPEAVCWindowData@@@?$_Tree@V?$_Tset_traits@PEAVCWindowData@@U?$less@PEAVCWindowData@@@std@@V?$allocator@PEAVCWindowData@@@3@$0A@@std@@@std@@QEAA?AU?$pair@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@PEAVCWindowData@@@std@@@std@@@std@@_N@1@AEAPEAVCWindowData@@@Z @ 0x180085E4C
 * Callers:
 *     ?EnsureMinimizedWindowListUpdated@CDisplayAnimatedVisual@@QEAAXPEAVCWindowData@@_N@Z @ 0x180064078 (-EnsureMinimizedWindowListUpdated@CDisplayAnimatedVisual@@QEAAXPEAVCWindowData@@_N@Z.c)
 *     ?AddWindowMovedAcrossDisplays@CDisplayAnimatedVisual@@QEAAXPEAVCWindowData@@@Z @ 0x1800AF174 (-AddWindowMovedAcrossDisplays@CDisplayAnimatedVisual@@QEAAXPEAVCWindowData@@@Z.c)
 * Callees:
 *     ??$_Emplace@AEAPEAVCWindowData@@@?$_Tree@V?$_Tset_traits@PEAVCWindowData@@U?$less@PEAVCWindowData@@@std@@V?$allocator@PEAVCWindowData@@@3@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_Tree_node@PEAVCWindowData@@PEAX@std@@_N@1@AEAPEAVCWindowData@@@Z @ 0x180085E80 (--$_Emplace@AEAPEAVCWindowData@@@-$_Tree@V-$_Tset_traits@PEAVCWindowData@@U-$less@PEAVCWindowDat.c)
 */

__int64 __fastcall std::_Tree<std::_Tset_traits<CWindowData *,std::less<CWindowData *>,std::allocator<CWindowData *>,0>>::emplace<CWindowData * &>(
        __int64 a1,
        __int64 a2)
{
  __int64 v4; // [rsp+20h] [rbp-18h] BYREF
  char v5; // [rsp+28h] [rbp-10h]

  std::_Tree<std::_Tset_traits<CWindowData *,std::less<CWindowData *>,std::allocator<CWindowData *>,0>>::_Emplace<CWindowData * &>(
    a1,
    &v4);
  *(_QWORD *)a2 = v4;
  *(_BYTE *)(a2 + 8) = v5;
  return a2;
}
