/*
 * XREFs of ??$_Find_lower_bound@I@?$_Tree@V?$_Tset_traits@IU?$less@I@std@@V?$allocator@I@2@$0A@@std@@@std@@IEBA?AU?$_Tree_find_result@PEAU?$_Tree_node@IPEAX@std@@@1@AEBI@Z @ 0x1801CE730
 * Callers:
 *     ??$_Emplace@AEBI@?$_Tree@V?$_Tset_traits@IU?$less@I@std@@V?$allocator@I@2@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_Tree_node@IPEAX@std@@_N@1@AEBI@Z @ 0x18020CDD4 (--$_Emplace@AEBI@-$_Tree@V-$_Tset_traits@IU-$less@I@std@@V-$allocator@I@2@$0A@@std@@@std@@IEAA-A.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall std::_Tree<std::_Tset_traits<unsigned int,std::less<unsigned int>,std::allocator<unsigned int>,0>>::_Find_lower_bound<unsigned int>(
        __int64 *a1,
        _QWORD *a2,
        _DWORD *a3)
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
    if ( *((_DWORD *)v4 + 7) >= *a3 )
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
