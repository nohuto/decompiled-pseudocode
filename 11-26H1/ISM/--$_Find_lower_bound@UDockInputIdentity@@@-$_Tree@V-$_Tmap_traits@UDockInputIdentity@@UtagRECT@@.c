/*
 * XREFs of ??$_Find_lower_bound@UDockInputIdentity@@@?$_Tree@V?$_Tmap_traits@UDockInputIdentity@@UtagRECT@@U?$less@UDockInputIdentity@@@std@@V?$allocator@U?$pair@$$CBUDockInputIdentity@@UtagRECT@@@std@@@4@$0A@@std@@@std@@IEBA?AU?$_Tree_find_result@PEAU?$_Tree_node@U?$pair@$$CBUDockInputIdentity@@UtagRECT@@@std@@PEAX@std@@@1@AEBUDockInputIdentity@@@Z @ 0x180182C40
 * Callers:
 *     ??$_Emplace@AEBUDockInputIdentity@@AEAUtagRECT@@@?$_Tree@V?$_Tmap_traits@UDockInputIdentity@@UtagRECT@@U?$less@UDockInputIdentity@@@std@@V?$allocator@U?$pair@$$CBUDockInputIdentity@@UtagRECT@@@std@@@4@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CBUDockInputIdentity@@UtagRECT@@@std@@PEAX@std@@_N@1@AEBUDockInputIdentity@@AEAUtagRECT@@@Z @ 0x180182914 (--$_Emplace@AEBUDockInputIdentity@@AEAUtagRECT@@@-$_Tree@V-$_Tmap_traits@UDockInputIdentity@@Uta.c)
 *     ?OnDockInput@DeviceDockServer@@QEAAJPEAUDockInputInfo@@@Z @ 0x180183E08 (-OnDockInput@DeviceDockServer@@QEAAJPEAUDockInputInfo@@@Z.c)
 *     ??$_Emplace@AEBUDockInputIdentity@@AEA_K@?$_Tree@V?$_Tmap_traits@UDockInputIdentity@@_KU?$less@UDockInputIdentity@@@std@@V?$allocator@U?$pair@$$CBUDockInputIdentity@@_K@std@@@3@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CBUDockInputIdentity@@_K@std@@PEAX@std@@_N@1@AEBUDockInputIdentity@@AEA_K@Z @ 0x1801961FC (--$_Emplace@AEBUDockInputIdentity@@AEA_K@-$_Tree@V-$_Tmap_traits@UDockInputIdentity@@_KU-$less@U.c)
 *     ?BroadcastContextMessage@ISMHeatFrameworkHost@@IEAAJPEAV?$variant@Umonostate@std@@UInputConfigContextMessage@@UDisplayOcclusionContextMessage@@UVirtualTouchpadContextMessage@@UMIT_WIN32K_INPUTDESKTOP_STATE_MESSAGE@@@std@@PEAUIHeatSystemContextClient@@@Z @ 0x180197658 (-BroadcastContextMessage@ISMHeatFrameworkHost@@IEAAJPEAV-$variant@Umonostate@std@@UInputConfigCo.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall std::_Tree<std::_Tmap_traits<DockInputIdentity,tagRECT,std::less<DockInputIdentity>,std::allocator<std::pair<DockInputIdentity const,tagRECT>>,0>>::_Find_lower_bound<DockInputIdentity>(
        __int64 *a1,
        _QWORD *a2,
        __int64 a3)
{
  __int64 v3; // rax
  __int64 *v4; // rcx
  unsigned int v5; // eax
  bool v6; // cf
  unsigned __int64 v7; // rax
  int v8; // eax

  *a2 = *(_QWORD *)(*a1 + 8);
  a2[1] = 0LL;
  v3 = *a1;
  v4 = (__int64 *)*a2;
  a2[2] = v3;
  while ( !*((_BYTE *)v4 + 25) )
  {
    *a2 = v4;
    v5 = *((_DWORD *)v4 + 8);
    v6 = v5 < *(_DWORD *)a3;
    if ( v5 == *(_DWORD *)a3 )
    {
      v7 = v4[5];
      v6 = v7 < *(_QWORD *)(a3 + 8);
      if ( v7 == *(_QWORD *)(a3 + 8) )
        v6 = *((_WORD *)v4 + 24) < *(_WORD *)(a3 + 16);
    }
    if ( v6 )
    {
      v4 += 2;
      v8 = 0;
    }
    else
    {
      a2[2] = v4;
      v8 = 1;
    }
    *((_DWORD *)a2 + 2) = v8;
    v4 = (__int64 *)*v4;
  }
  return a2;
}
