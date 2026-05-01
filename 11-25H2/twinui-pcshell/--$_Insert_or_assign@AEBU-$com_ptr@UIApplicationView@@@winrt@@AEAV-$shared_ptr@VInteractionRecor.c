/*
 * XREFs of ??$_Insert_or_assign@AEBU?$com_ptr@UIApplicationView@@@winrt@@AEAV?$shared_ptr@VInteractionRecord@SnapInteraction@@@std@@@?$map@U?$com_ptr@UIApplicationView@@@winrt@@V?$shared_ptr@VInteractionRecord@SnapInteraction@@@std@@U?$less@U?$com_ptr@UIApplicationView@@@winrt@@@4@V?$allocator@U?$pair@$$CBU?$com_ptr@UIApplicationView@@@winrt@@V?$shared_ptr@VInteractionRecord@SnapInteraction@@@std@@@std@@@4@@std@@AEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CBU?$com_ptr@UIApplicationView@@@winrt@@V?$shared_ptr@VInteractionRecord@SnapInteraction@@@std@@@std@@PEAX@std@@_N@1@AEBU?$com_ptr@UIApplicationView@@@winrt@@AEAV?$shared_ptr@VInteractionRecord@SnapInteraction@@@1@@Z @ 0x1801B1F94
 * Callers:
 *     ??$insert_or_assign@AEAV?$shared_ptr@VInteractionRecord@SnapInteraction@@@std@@@?$map@U?$com_ptr@UIApplicationView@@@winrt@@V?$shared_ptr@VInteractionRecord@SnapInteraction@@@std@@U?$less@U?$com_ptr@UIApplicationView@@@winrt@@@4@V?$allocator@U?$pair@$$CBU?$com_ptr@UIApplicationView@@@winrt@@V?$shared_ptr@VInteractionRecord@SnapInteraction@@@std@@@std@@@4@@std@@QEAA?AU?$pair@V?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBU?$com_ptr@UIApplicationView@@@winrt@@V?$shared_ptr@VInteractionRecord@SnapInteraction@@@std@@@std@@@std@@@std@@@std@@_N@1@AEBU?$com_ptr@UIApplicationView@@@winrt@@AEAV?$shared_ptr@VInteractionRecord@SnapInteraction@@@1@@Z @ 0x1801B1F60 (--$insert_or_assign@AEAV-$shared_ptr@VInteractionRecord@SnapInteraction@@@std@@@-$map@U-$com_ptr.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180020878 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??4?$shared_ptr@VFlyoutView@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x180028EF8 (--4-$shared_ptr@VFlyoutView@@@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180029F1C (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?_Insert_node@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBU?$com_ptr@UIApplicationView@@@winrt@@V?$shared_ptr@VInteractionRecord@SnapInteraction@@@std@@@std@@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBU?$com_ptr@UIApplicationView@@@winrt@@V?$shared_ptr@VInteractionRecord@SnapInteraction@@@std@@@std@@PEAX@2@U?$_Tree_id@PEAU?$_Tree_node@U?$pair@$$CBU?$com_ptr@UIApplicationView@@@winrt@@V?$shared_ptr@VInteractionRecord@SnapInteraction@@@std@@@std@@PEAX@std@@@2@QEAU32@@Z @ 0x18002A2D8 (-_Insert_node@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBU-$com_ptr@UIApplicationView@@@winrt.c)
 *     ??0?$shared_ptr@VInputAppViewCoodinatorHandler@@@std@@QEAA@AEBV01@@Z @ 0x18002A564 (--0-$shared_ptr@VInputAppViewCoodinatorHandler@@@std@@QEAA@AEBV01@@Z.c)
 *     ?_Throw_tree_length_error@std@@YAXXZ @ 0x180318F84 (-_Throw_tree_length_error@std@@YAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall std::map<winrt::com_ptr<IApplicationView>,std::shared_ptr<SnapInteraction::InteractionRecord>>::_Insert_or_assign<winrt::com_ptr<IApplicationView> const &,std::shared_ptr<SnapInteraction::InteractionRecord> &>(
        _QWORD *a1,
        __int64 a2,
        unsigned __int64 *a3,
        _QWORD *a4)
{
  __int64 *v8; // rbp
  __int64 *v9; // rax
  __int64 *v10; // rbx
  unsigned __int64 v11; // rcx
  _QWORD *v12; // rdi
  __int128 v14; // [rsp+20h] [rbp-48h] BYREF
  __int128 v15; // [rsp+30h] [rbp-38h]

  v8 = (__int64 *)*a1;
  v9 = *(__int64 **)(*a1 + 8LL);
  v15 = (unsigned __int64)v9;
  v10 = v8;
  if ( !*((_BYTE *)v9 + 25) )
  {
    v11 = *a3;
    do
    {
      *(_QWORD *)&v15 = v9;
      if ( v9[4] >= v11 )
      {
        DWORD2(v15) = 1;
        v10 = v9;
        v9 = (__int64 *)*v9;
      }
      else
      {
        DWORD2(v15) = 0;
        v9 = (__int64 *)v9[2];
      }
    }
    while ( !*((_BYTE *)v9 + 25) );
  }
  if ( *((_BYTE *)v10 + 25) || *a3 < v10[4] )
  {
    if ( a1[1] == 0x492492492492492LL )
      std::_Throw_tree_length_error();
    v14 = (unsigned __int64)a1;
    v12 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x38uLL);
    v12[4] = *a3;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(v12 + 4);
    std::shared_ptr<InputAppViewCoodinatorHandler>::shared_ptr<InputAppViewCoodinatorHandler>(v12 + 5, a4);
    *v12 = v8;
    v12[1] = v8;
    v12[2] = v8;
    *((_WORD *)v12 + 12) = 0;
    v14 = v15;
    *(_QWORD *)a2 = std::_Tree_val<std::_Tree_simple_types<std::pair<winrt::com_ptr<IApplicationView> const,std::shared_ptr<SnapInteraction::InteractionRecord>>>>::_Insert_node(
                      a1,
                      (__int64)&v14,
                      (__int64)v12);
    *(_BYTE *)(a2 + 8) = 1;
  }
  else
  {
    std::shared_ptr<FlyoutView>::operator=(v10 + 5, a4);
    *(_QWORD *)a2 = v10;
    *(_BYTE *)(a2 + 8) = 0;
  }
  return a2;
}
