/*
 * XREFs of ??$_Try_emplace@AEBQEAUHWND__@@$$V@?$map@PEAUHWND__@@UWindowCloakInfo@CDesktopPositioner@@U?$less@PEAUHWND__@@@std@@V?$allocator@U?$pair@QEAUHWND__@@UWindowCloakInfo@CDesktopPositioner@@@std@@@5@@std@@AEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@QEAUHWND__@@UWindowCloakInfo@CDesktopPositioner@@@std@@PEAX@std@@_N@1@AEBQEAUHWND__@@@Z @ 0x18016DAA0
 * Callers:
 *     ?_OnViewGainedForeground@CDesktopPositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x180054830 (-_OnViewGainedForeground@CDesktopPositioner@@AEAAJPEAUIApplicationView@@@Z.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180029F1C (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?_Insert_node@?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAUHWND__@@UWindowCloakInfo@CDesktopPositioner@@@std@@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@QEAUHWND__@@UWindowCloakInfo@CDesktopPositioner@@@std@@PEAX@2@U?$_Tree_id@PEAU?$_Tree_node@U?$pair@QEAUHWND__@@UWindowCloakInfo@CDesktopPositioner@@@std@@PEAX@std@@@2@QEAU32@@Z @ 0x18016DBC8 (-_Insert_node@-$_Tree_val@U-$_Tree_simple_types@U-$pair@QEAUHWND__@@UWindowCloakInfo@CDesktopPos.c)
 *     ?_Throw_tree_length_error@std@@YAXXZ @ 0x180318F84 (-_Throw_tree_length_error@std@@YAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall std::map<HWND__ *,CDesktopPositioner::WindowCloakInfo>::_Try_emplace<HWND__ * const &,>(
        _QWORD *a1,
        __int64 a2,
        unsigned __int64 *a3)
{
  __int64 *v6; // rbp
  __int64 *v7; // rax
  __int64 *v8; // rdx
  unsigned __int64 v9; // rcx
  char *v10; // rax
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
        v7 = (__int64 *)*v7;
      }
      else
      {
        DWORD2(v13) = 0;
        v7 = (__int64 *)v7[2];
      }
    }
    while ( !*((_BYTE *)v7 + 25) );
  }
  if ( *((_BYTE *)v8 + 25) || *a3 < v8[4] )
  {
    if ( a1[1] == 0x555555555555555LL )
      std::_Throw_tree_length_error();
    v12 = (unsigned __int64)a1;
    v10 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(0x30uLL);
    *((_QWORD *)v10 + 4) = *a3;
    *(_WORD *)(v10 + 41) = 0;
    *((_WORD *)v10 + 20) = 0;
    v10[42] = 0;
    *(_QWORD *)v10 = v6;
    *((_QWORD *)v10 + 1) = v6;
    *((_QWORD *)v10 + 2) = v6;
    *((_WORD *)v10 + 12) = 0;
    v12 = v13;
    *(_QWORD *)a2 = std::_Tree_val<std::_Tree_simple_types<std::pair<HWND__ * const,CDesktopPositioner::WindowCloakInfo>>>::_Insert_node(
                      a1,
                      &v12,
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
