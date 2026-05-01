/*
 * XREFs of ??$_Emplace@U?$pair@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@V?$shared_ptr@UBroadcastDVRActiveAppInfo@@@std@@@std@@@?$_Tree@V?$_Tmap_traits@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@V?$shared_ptr@UBroadcastDVRActiveAppInfo@@@std@@U?$less@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@@5@V?$allocator@U?$pair@$$CBV?$ComPtr@UIApplicationView@@@WRL@Microsoft@@V?$shared_ptr@UBroadcastDVRActiveAppInfo@@@std@@@std@@@5@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CBV?$ComPtr@UIApplicationView@@@WRL@Microsoft@@V?$shared_ptr@UBroadcastDVRActiveAppInfo@@@std@@@std@@PEAX@std@@_N@1@$$QEAU?$pair@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@V?$shared_ptr@UBroadcastDVRActiveAppInfo@@@std@@@1@@Z @ 0x1801643A0
 * Callers:
 *     ?OnApplicationViewChangedTask@BroadcastDVRComponent@@AEAAXPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@@Z @ 0x180035E18 (-OnApplicationViewChangedTask@BroadcastDVRComponent@@AEAAXPEAUIApplicationView@@W4APPLICATION_VI.c)
 * Callees:
 *     ?_Insert_node@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$ComPtr@UIApplicationView@@@WRL@Microsoft@@V?$shared_ptr@UBroadcastDVRActiveAppInfo@@@std@@@std@@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBV?$ComPtr@UIApplicationView@@@WRL@Microsoft@@V?$shared_ptr@UBroadcastDVRActiveAppInfo@@@std@@@std@@PEAX@2@U?$_Tree_id@PEAU?$_Tree_node@U?$pair@$$CBV?$ComPtr@UIApplicationView@@@WRL@Microsoft@@V?$shared_ptr@UBroadcastDVRActiveAppInfo@@@std@@@std@@PEAX@std@@@2@QEAU32@@Z @ 0x1800CD25C (-_Insert_node@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBV-$ComPtr@UIApplicationView@@@WRL@Mi.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x180285C68 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 *     ?_Throw_tree_length_error@std@@YAXXZ @ 0x1803151E4 (-_Throw_tree_length_error@std@@YAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall std::_Tree<std::_Tmap_traits<Microsoft::WRL::ComPtr<IApplicationView>,std::shared_ptr<BroadcastDVRActiveAppInfo>,std::less<Microsoft::WRL::ComPtr<IApplicationView>>,std::allocator<std::pair<Microsoft::WRL::ComPtr<IApplicationView> const,std::shared_ptr<BroadcastDVRActiveAppInfo>>>,0>>::_Emplace<std::pair<Microsoft::WRL::ComPtr<IApplicationView>,std::shared_ptr<BroadcastDVRActiveAppInfo>>>(
        _QWORD *a1,
        __int64 a2,
        unsigned __int64 *a3)
{
  __int64 *v6; // rbp
  __int64 *v7; // rax
  __int64 *v8; // rdx
  unsigned __int64 v9; // rcx
  __int64 v10; // rax
  __int128 v12; // [rsp+20h] [rbp-38h] BYREF
  __int128 v13; // [rsp+30h] [rbp-28h]

  v6 = (__int64 *)*a1;
  v7 = *(__int64 **)(*a1 + 8LL);
  v13 = (unsigned __int64)v7;
  v8 = v6;
  if ( !*((_BYTE *)v7 + 25) )
  {
    v9 = *a3;
    do
    {
      *(_QWORD *)&v13 = v7;
      if ( v7[4] >= v9 )
      {
        DWORD2(v13) = 1;
        v8 = v7;
      }
      else
      {
        DWORD2(v13) = 0;
        v7 += 2;
      }
      v7 = (__int64 *)*v7;
    }
    while ( !*((_BYTE *)v7 + 25) );
  }
  if ( *((_BYTE *)v8 + 25) || *a3 < v8[4] )
  {
    if ( a1[1] == 0x492492492492492LL )
      std::_Throw_tree_length_error();
    v12 = (unsigned __int64)a1;
    v10 = std::_Allocate<16,std::_Default_allocate_traits>(56LL);
    *(_QWORD *)(v10 + 32) = 0LL;
    if ( (unsigned __int64 *)(v10 + 32) != a3 )
    {
      *(_QWORD *)(v10 + 32) = *a3;
      *a3 = 0LL;
    }
    *(_QWORD *)(v10 + 40) = 0LL;
    *(_QWORD *)(v10 + 48) = 0LL;
    *(_QWORD *)(v10 + 40) = a3[1];
    *(_QWORD *)(v10 + 48) = a3[2];
    a3[1] = 0LL;
    a3[2] = 0LL;
    *(_QWORD *)v10 = v6;
    *(_QWORD *)(v10 + 8) = v6;
    *(_QWORD *)(v10 + 16) = v6;
    *(_WORD *)(v10 + 24) = 0;
    v12 = v13;
    *(_QWORD *)a2 = std::_Tree_val<std::_Tree_simple_types<std::pair<Microsoft::WRL::ComPtr<IApplicationView> const,std::shared_ptr<BroadcastDVRActiveAppInfo>>>>::_Insert_node(
                      a1,
                      (__int64)&v12,
                      v10);
    *(_BYTE *)(a2 + 8) = 1;
  }
  else
  {
    *(_QWORD *)a2 = v8;
    *(_BYTE *)(a2 + 8) = 0;
  }
  return a2;
}
