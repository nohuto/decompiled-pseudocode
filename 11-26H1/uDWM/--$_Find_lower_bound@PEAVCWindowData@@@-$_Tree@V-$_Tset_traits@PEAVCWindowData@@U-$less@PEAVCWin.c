/*
 * XREFs of ??$_Find_lower_bound@PEAVCWindowData@@@?$_Tree@V?$_Tset_traits@PEAVCWindowData@@U?$less@PEAVCWindowData@@@std@@V?$allocator@PEAVCWindowData@@@3@$0A@@std@@@std@@IEBA?AU?$_Tree_find_result@PEAU?$_Tree_node@PEAVCWindowData@@PEAX@std@@@1@AEBQEAVCWindowData@@@Z @ 0x180075F5C
 * Callers:
 *     ?find@?$_Tree@V?$_Tset_traits@PEAVCWindowData@@U?$less@PEAVCWindowData@@@std@@V?$allocator@PEAVCWindowData@@@3@$0A@@std@@@std@@QEAA?AV?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@PEAVCWindowData@@@std@@@std@@@2@AEBQEAVCWindowData@@@Z @ 0x180075F18 (-find@-$_Tree@V-$_Tset_traits@PEAVCWindowData@@U-$less@PEAVCWindowData@@@std@@V-$allocator@PEAVC.c)
 *     ??$_Emplace@AEAPEAVCWindowData@@@?$_Tree@V?$_Tset_traits@PEAVCWindowData@@U?$less@PEAVCWindowData@@@std@@V?$allocator@PEAVCWindowData@@@3@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_Tree_node@PEAVCWindowData@@PEAX@std@@_N@1@AEAPEAVCWindowData@@@Z @ 0x1800AE5A4 (--$_Emplace@AEAPEAVCWindowData@@@-$_Tree@V-$_Tset_traits@PEAVCWindowData@@U-$less@PEAVCWindowDat.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall std::_Tree<std::_Tset_traits<CWindowData *,std::less<CWindowData *>,std::allocator<CWindowData *>,0>>::_Find_lower_bound<CWindowData *>(
        __int64 *a1,
        _QWORD *a2,
        _QWORD *a3)
{
  __int64 v3; // rax
  __int64 *v4; // rcx
  int v6; // eax

  *a2 = *(_QWORD *)(*a1 + 8);
  a2[1] = 0LL;
  v3 = *a1;
  v4 = (__int64 *)*a2;
  a2[2] = v3;
  while ( !*((_BYTE *)v4 + 25) )
  {
    *a2 = v4;
    if ( (unsigned __int64)v4[4] >= *a3 )
    {
      a2[2] = v4;
      v6 = 1;
    }
    else
    {
      v4 += 2;
      v6 = 0;
    }
    *((_DWORD *)a2 + 2) = v6;
    v4 = (__int64 *)*v4;
  }
  return a2;
}
