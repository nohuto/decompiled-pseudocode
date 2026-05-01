/*
 * XREFs of ??$_Find_lower_bound@I@?$_Tree@V?$_Tmap_traits@IIU?$less@I@std@@V?$allocator@U?$pair@$$CBII@std@@@2@$0A@@std@@@std@@IEBA?AU?$_Tree_find_result@PEAU?$_Tree_node@U?$pair@$$CBII@std@@PEAX@std@@@1@AEBI@Z @ 0x1805BE1F8
 * Callers:
 *     ??$_Emplace@U?$pair@IH@std@@@?$_Tree@V?$_Tmap_traits@IIU?$less@I@std@@V?$allocator@U?$pair@$$CBII@std@@@2@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CBII@std@@PEAX@std@@_N@1@$$QEAU?$pair@IH@1@@Z @ 0x1805BDEB4 (--$_Emplace@U-$pair@IH@std@@@-$_Tree@V-$_Tmap_traits@IIU-$less@I@std@@V-$allocator@U-$pair@$$CBI.c)
 *     ?BuildMonitorIndex@MonitorIDFinder@SnapAccessibilityHelpers@@QEAAXXZ @ 0x1805BE734 (-BuildMonitorIndex@MonitorIDFinder@SnapAccessibilityHelpers@@QEAAXXZ.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall std::_Tree<std::_Tmap_traits<unsigned int,unsigned int,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,unsigned int>>,0>>::_Find_lower_bound<unsigned int>(
        __int64 *a1,
        _QWORD *a2,
        _DWORD *a3)
{
  __int64 v3; // rax
  __int64 *v4; // rcx
  int v5; // eax

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
      v5 = 1;
    }
    else
    {
      v4 += 2;
      v5 = 0;
    }
    *((_DWORD *)a2 + 2) = v5;
    v4 = (__int64 *)*v4;
  }
  return a2;
}
