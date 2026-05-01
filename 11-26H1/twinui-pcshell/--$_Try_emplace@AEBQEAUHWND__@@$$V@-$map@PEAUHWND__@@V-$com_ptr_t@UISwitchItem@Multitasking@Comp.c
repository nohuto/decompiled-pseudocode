/*
 * XREFs of ??$_Try_emplace@AEBQEAUHWND__@@$$V@?$map@PEAUHWND__@@V?$com_ptr_t@UISwitchItem@Multitasking@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@U?$less@PEAUHWND__@@@std@@V?$allocator@U?$pair@QEAUHWND__@@V?$com_ptr_t@UISwitchItem@Multitasking@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@@std@@@5@@std@@AEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@QEAUHWND__@@V?$com_ptr_t@UISwitchItem@Multitasking@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@@std@@PEAX@std@@_N@1@AEBQEAUHWND__@@@Z @ 0x1800CD134
 * Callers:
 *     ?SortItems@AppViewSwitchItemZOrderSort@@UEAAJPEAU?$IVectorView@PEAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Collections@Foundation@Windows@@PEAPEAU2345@@Z @ 0x1800CCB60 (-SortItems@AppViewSwitchItemZOrderSort@@UEAAJPEAU-$IVectorView@PEAUISwitchItem@Multitasking@Comp.c)
 * Callees:
 *     ?_Insert_node@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$ComPtr@UIApplicationView@@@WRL@Microsoft@@V?$shared_ptr@UBroadcastDVRActiveAppInfo@@@std@@@std@@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBV?$ComPtr@UIApplicationView@@@WRL@Microsoft@@V?$shared_ptr@UBroadcastDVRActiveAppInfo@@@std@@@std@@PEAX@2@U?$_Tree_id@PEAU?$_Tree_node@U?$pair@$$CBV?$ComPtr@UIApplicationView@@@WRL@Microsoft@@V?$shared_ptr@UBroadcastDVRActiveAppInfo@@@std@@@std@@PEAX@std@@@2@QEAU32@@Z @ 0x1800CD25C (-_Insert_node@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBV-$ComPtr@UIApplicationView@@@WRL@Mi.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x180285C68 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 *     ?_Throw_tree_length_error@std@@YAXXZ @ 0x1803151E4 (-_Throw_tree_length_error@std@@YAXXZ.c)
 *     ??$?0V?$tuple@AEB_K@std@@V?$tuple@$$V@1@$0A@$$Z$S@?$pair@$$CB_K_K@std@@AEAA@AEAV?$tuple@AEB_K@1@AEAV?$tuple@$$V@1@U?$integer_sequence@_K$0A@@1@U?$integer_sequence@_K$S@1@@Z @ 0x18057C5A4 (--$-0V-$tuple@AEB_K@std@@V-$tuple@$$V@1@$0A@$$Z$S@-$pair@$$CB_K_K@std@@AEAA@AEAV-$tuple@AEB_K@1@.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall std::map<HWND__ *,wil::com_ptr_t<Windows::Internal::ComposableShell::Multitasking::ISwitchItem,wil::err_exception_policy>>::_Try_emplace<HWND__ * const &,>(
        _QWORD *a1,
        __int64 a2,
        unsigned __int64 *a3)
{
  __int64 *v6; // r14
  __int64 *v7; // r9
  __int64 *v8; // rdx
  unsigned __int64 v9; // r8
  char v10; // cl
  __int64 *v11; // rax
  __int64 v12; // rax
  __int64 v13; // r8
  __int128 v15; // [rsp+30h] [rbp-30h] BYREF
  __int128 v16; // [rsp+40h] [rbp-20h]
  unsigned __int64 *v17; // [rsp+80h] [rbp+20h] BYREF

  v6 = (__int64 *)*a1;
  v7 = *(__int64 **)(*a1 + 8LL);
  v16 = (unsigned __int64)v7;
  v8 = v6;
  if ( !*((_BYTE *)v7 + 25) )
  {
    v9 = *a3;
    do
    {
      *(_QWORD *)&v16 = v7;
      if ( v7[4] < v9 )
      {
        v10 = 1;
        DWORD2(v16) = 0;
      }
      else
      {
        v10 = 0;
        DWORD2(v16) = 1;
        v8 = v7;
      }
      v11 = v7 + 2;
      if ( !v10 )
        v11 = v7;
      v7 = (__int64 *)*v11;
    }
    while ( !*(_BYTE *)(*v11 + 25) );
  }
  if ( *((_BYTE *)v8 + 25) || *a3 < v8[4] )
  {
    if ( a1[1] == 0x555555555555555LL )
      std::_Throw_tree_length_error();
    v12 = std::_Allocate<16,std::_Default_allocate_traits>(48LL);
    v17 = a3;
    ____0V__tuple_AEB_K_std__V__tuple___V_1__0A___Z_S___pair___CB_K_K_std__AEAA_AEAV__tuple_AEB_K_1_AEAV__tuple___V_1_U__integer_sequence__K_0A__1_U__integer_sequence__K_S_1__Z(
      v12 + 32,
      &v17,
      v12);
    *(_QWORD *)v13 = v6;
    *(_QWORD *)(v13 + 8) = v6;
    *(_QWORD *)(v13 + 16) = v6;
    *(_WORD *)(v13 + 24) = 0;
    v15 = v16;
    *(_QWORD *)a2 = std::_Tree_val<std::_Tree_simple_types<std::pair<Microsoft::WRL::ComPtr<IApplicationView> const,std::shared_ptr<BroadcastDVRActiveAppInfo>>>>::_Insert_node(
                      a1,
                      &v15);
    *(_BYTE *)(a2 + 8) = 1;
  }
  else
  {
    *(_QWORD *)a2 = v8;
    *(_BYTE *)(a2 + 8) = 0;
  }
  return a2;
}
