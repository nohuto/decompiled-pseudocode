/*
 * XREFs of ??$_Emplace@AEAPEAVCWindowData@@@?$_Tree@V?$_Tset_traits@PEAVCWindowData@@U?$less@PEAVCWindowData@@@std@@V?$allocator@PEAVCWindowData@@@3@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_Tree_node@PEAVCWindowData@@PEAX@std@@_N@1@AEAPEAVCWindowData@@@Z @ 0x1800AE5A4
 * Callers:
 *     ??$emplace@AEAPEAVCWindowData@@@?$_Tree@V?$_Tset_traits@PEAVCWindowData@@U?$less@PEAVCWindowData@@@std@@V?$allocator@PEAVCWindowData@@@3@$0A@@std@@@std@@QEAA?AU?$pair@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@PEAVCWindowData@@@std@@@std@@@std@@_N@1@AEAPEAVCWindowData@@@Z @ 0x1800AE878 (--$emplace@AEAPEAVCWindowData@@@-$_Tree@V-$_Tset_traits@PEAVCWindowData@@U-$less@PEAVCWindowData.c)
 * Callees:
 *     ??$_Find_lower_bound@PEAVCWindowData@@@?$_Tree@V?$_Tset_traits@PEAVCWindowData@@U?$less@PEAVCWindowData@@@std@@V?$allocator@PEAVCWindowData@@@3@$0A@@std@@@std@@IEBA?AU?$_Tree_find_result@PEAU?$_Tree_node@PEAVCWindowData@@PEAX@std@@@1@AEBQEAVCWindowData@@@Z @ 0x180075F5C (--$_Find_lower_bound@PEAVCWindowData@@@-$_Tree@V-$_Tset_traits@PEAVCWindowData@@U-$less@PEAVCWin.c)
 *     ??2@YAPEAX_K@Z @ 0x180085BEC (--2@YAPEAX_K@Z.c)
 *     ?_Dwm_Xlength_error@std@@YAXPEBD@Z @ 0x180085D6C (-_Dwm_Xlength_error@std@@YAXPEBD@Z.c)
 *     ??1?$_Alloc_construct_ptr@V?$allocator@U?$_Tree_node@PEAVCWindowData@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x1800AE8AC (--1-$_Alloc_construct_ptr@V-$allocator@U-$_Tree_node@PEAVCWindowData@@PEAX@std@@@std@@@std@@QEAA.c)
 *     ?_Insert_node@?$_Tree_val@U?$_Tree_simple_types@PEAVCWindowData@@@std@@@std@@QEAAPEAU?$_Tree_node@PEAVCWindowData@@PEAX@2@U?$_Tree_id@PEAU?$_Tree_node@PEAVCWindowData@@PEAX@std@@@2@QEAU32@@Z @ 0x1800AF640 (-_Insert_node@-$_Tree_val@U-$_Tree_simple_types@PEAVCWindowData@@@std@@@std@@QEAAPEAU-$_Tree_nod.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall std::_Tree<std::_Tset_traits<CWindowData *,std::less<CWindowData *>,std::allocator<CWindowData *>,0>>::_Emplace<CWindowData * &>(
        __int64 *a1,
        __int64 a2,
        __int64 *a3)
{
  _QWORD *lower; // rax
  const char *v7; // rcx
  _QWORD *v8; // r8
  __int128 v9; // xmm6
  __int64 v10; // rbx
  __int64 *v11; // rdi
  __int128 v13; // [rsp+20h] [rbp-38h] BYREF
  __int64 v14; // [rsp+30h] [rbp-28h]

  lower = std::_Tree<std::_Tset_traits<CWindowData *,std::less<CWindowData *>,std::allocator<CWindowData *>,0>>::_Find_lower_bound<CWindowData *>(
            a1,
            &v13,
            a3);
  v9 = *(_OWORD *)lower;
  v14 = lower[2];
  if ( *(_BYTE *)(v14 + 25) || *v8 < *(_QWORD *)(v14 + 32) )
  {
    if ( a1[1] == 0x666666666666666LL )
      std::_Dwm_Xlength_error(v7);
    v10 = *a1;
    *(_QWORD *)&v13 = a1;
    v11 = (__int64 *)operator new(0x28uLL);
    v11[4] = *a3;
    *v11 = v10;
    v11[1] = v10;
    v11[2] = v10;
    *((_WORD *)v11 + 12) = 0;
    *((_QWORD *)&v13 + 1) = 0LL;
    std::_Alloc_construct_ptr<std::allocator<std::_Tree_node<CWindowData *,void *>>>::~_Alloc_construct_ptr<std::allocator<std::_Tree_node<CWindowData *,void *>>>(&v13);
    v13 = v9;
    *(_QWORD *)a2 = std::_Tree_val<std::_Tree_simple_types<CWindowData *>>::_Insert_node(a1, &v13, v11);
    *(_BYTE *)(a2 + 8) = 1;
  }
  else
  {
    *(_QWORD *)a2 = v14;
    *(_BYTE *)(a2 + 8) = 0;
  }
  return a2;
}
