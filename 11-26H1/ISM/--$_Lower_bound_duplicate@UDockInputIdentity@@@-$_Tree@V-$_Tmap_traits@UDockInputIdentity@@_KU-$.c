/*
 * XREFs of ??$_Lower_bound_duplicate@UDockInputIdentity@@@?$_Tree@V?$_Tmap_traits@UDockInputIdentity@@_KU?$less@UDockInputIdentity@@@std@@V?$allocator@U?$pair@$$CBUDockInputIdentity@@_K@std@@@3@$0A@@std@@@std@@IEBA_NQEAU?$_Tree_node@U?$pair@$$CBUDockInputIdentity@@_K@std@@PEAX@1@AEBUDockInputIdentity@@@Z @ 0x180182CDC
 * Callers:
 *     ??$_Emplace@AEBUDockInputIdentity@@AEAUtagRECT@@@?$_Tree@V?$_Tmap_traits@UDockInputIdentity@@UtagRECT@@U?$less@UDockInputIdentity@@@std@@V?$allocator@U?$pair@$$CBUDockInputIdentity@@UtagRECT@@@std@@@4@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CBUDockInputIdentity@@UtagRECT@@@std@@PEAX@std@@_N@1@AEBUDockInputIdentity@@AEAUtagRECT@@@Z @ 0x180182914 (--$_Emplace@AEBUDockInputIdentity@@AEAUtagRECT@@@-$_Tree@V-$_Tmap_traits@UDockInputIdentity@@Uta.c)
 *     ?OnDockInput@DeviceDockServer@@QEAAJPEAUDockInputInfo@@@Z @ 0x180183E08 (-OnDockInput@DeviceDockServer@@QEAAJPEAUDockInputInfo@@@Z.c)
 *     ??$_Emplace@AEBUDockInputIdentity@@AEA_K@?$_Tree@V?$_Tmap_traits@UDockInputIdentity@@_KU?$less@UDockInputIdentity@@@std@@V?$allocator@U?$pair@$$CBUDockInputIdentity@@_K@std@@@3@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CBUDockInputIdentity@@_K@std@@PEAX@std@@_N@1@AEBUDockInputIdentity@@AEA_K@Z @ 0x1801961FC (--$_Emplace@AEBUDockInputIdentity@@AEA_K@-$_Tree@V-$_Tmap_traits@UDockInputIdentity@@_KU-$less@U.c)
 *     ?BroadcastContextMessage@ISMHeatFrameworkHost@@IEAAJPEAV?$variant@Umonostate@std@@UInputConfigContextMessage@@UDisplayOcclusionContextMessage@@UVirtualTouchpadContextMessage@@UMIT_WIN32K_INPUTDESKTOP_STATE_MESSAGE@@@std@@PEAUIHeatSystemContextClient@@@Z @ 0x180197658 (-BroadcastContextMessage@ISMHeatFrameworkHost@@IEAAJPEAV-$variant@Umonostate@std@@UInputConfigCo.c)
 * Callees:
 *     <none>
 */

char __fastcall std::_Tree<std::_Tmap_traits<DockInputIdentity,unsigned __int64,std::less<DockInputIdentity>,std::allocator<std::pair<DockInputIdentity const,unsigned __int64>>,0>>::_Lower_bound_duplicate<DockInputIdentity>(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  char v3; // cl
  unsigned int v5; // edx
  bool v6; // cf
  unsigned __int64 v7; // r9

  v3 = 0;
  if ( !*(_BYTE *)(a2 + 25) )
  {
    v5 = *(_DWORD *)(a2 + 32);
    v6 = *(_DWORD *)a3 < v5;
    if ( *(_DWORD *)a3 == v5 )
    {
      v7 = *(_QWORD *)(a2 + 40);
      v6 = *(_QWORD *)(a3 + 8) < v7;
      if ( *(_QWORD *)(a3 + 8) == v7 )
        v6 = *(_WORD *)(a3 + 16) < *(_WORD *)(a2 + 48);
    }
    if ( !v6 )
      return 1;
  }
  return v3;
}
