/*
 * XREFs of ??$emplace@AEAPEAVCWindowData@@@?$_Tree@V?$_Tset_traits@PEAVCWindowData@@U?$less@PEAVCWindowData@@@std@@V?$allocator@PEAVCWindowData@@@3@$0A@@std@@@std@@QEAA?AU?$pair@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@PEAVCWindowData@@@std@@@std@@@std@@_N@1@AEAPEAVCWindowData@@@Z @ 0x1800AE878
 * Callers:
 *     ?EnsureMinimizedWindowListUpdated@CDisplayAnimatedVisual@@QEAAXPEAVCWindowData@@_N@Z @ 0x18004E0B0 (-EnsureMinimizedWindowListUpdated@CDisplayAnimatedVisual@@QEAAXPEAVCWindowData@@_N@Z.c)
 *     ?AddWindowMovedAcrossDisplays@CDisplayAnimatedVisual@@QEAAXPEAVCWindowData@@@Z @ 0x1800AEB44 (-AddWindowMovedAcrossDisplays@CDisplayAnimatedVisual@@QEAAXPEAVCWindowData@@@Z.c)
 * Callees:
 *     ??$_Emplace@AEAPEAVCWindowData@@@?$_Tree@V?$_Tset_traits@PEAVCWindowData@@U?$less@PEAVCWindowData@@@std@@V?$allocator@PEAVCWindowData@@@3@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_Tree_node@PEAVCWindowData@@PEAX@std@@_N@1@AEAPEAVCWindowData@@@Z @ 0x1800AE5A4 (--$_Emplace@AEAPEAVCWindowData@@@-$_Tree@V-$_Tset_traits@PEAVCWindowData@@U-$less@PEAVCWindowDat.c)
 */

__int64 __fastcall std::_Tree<std::_Tset_traits<CWindowData *,std::less<CWindowData *>,std::allocator<CWindowData *>,0>>::emplace<CWindowData * &>(
        __int64 *a1,
        __int64 a2,
        __int64 *a3)
{
  __int64 v5; // [rsp+20h] [rbp-18h] BYREF
  char v6; // [rsp+28h] [rbp-10h]

  std::_Tree<std::_Tset_traits<CWindowData *,std::less<CWindowData *>,std::allocator<CWindowData *>,0>>::_Emplace<CWindowData * &>(
    a1,
    (__int64)&v5,
    a3);
  *(_QWORD *)a2 = v5;
  *(_BYTE *)(a2 + 8) = v6;
  return a2;
}
