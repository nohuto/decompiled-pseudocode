/*
 * XREFs of ?NumTabItems@AppViewDataSourceAdapter@@UEAAIXZ @ 0x1801733B0
 * Callers:
 *     <none>
 * Callees:
 *     ?_Min@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@VWin32AppInfo@@@2@@std@@@std@@@std@@SAPEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@VWin32AppInfo@@@2@@std@@PEAX@2@PEAU32@@Z @ 0x18005A364 (-_Min@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBV-$basic_string@GU-$char_traits@G@std@@V-$al.c)
 *     ?IsTabWindowOwner@@YA_NPEAUIApplicationView@@@Z @ 0x180173464 (-IsTabWindowOwner@@YA_NPEAUIApplicationView@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall AppViewDataSourceAdapter::NumTabItems(AppViewDataSourceAdapter *this)
{
  unsigned int v2; // esi
  _QWORD *i; // rbx
  struct IApplicationView *v4; // rdi
  bool v5; // al
  unsigned int v6; // edx
  __int64 v7; // rcx
  _QWORD *j; // rax

  v2 = 0;
  for ( i = (_QWORD *)**((_QWORD **)this - 4); i != *((_QWORD **)this - 4); i = j )
  {
    v4 = (struct IApplicationView *)i[4];
    if ( v4 )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v4 + 8LL))(i[4]);
    v5 = IsTabWindowOwner(v4);
    v6 = v2 + 1;
    if ( !v5 )
      v6 = v2;
    v2 = v6;
    if ( v4 )
      (*(void (__fastcall **)(struct IApplicationView *))(*(_QWORD *)v4 + 16LL))(v4);
    v7 = i[2];
    if ( *(_BYTE *)(v7 + 25) )
    {
      for ( j = (_QWORD *)i[1]; !*((_BYTE *)j + 25) && i == (_QWORD *)j[2]; j = (_QWORD *)j[1] )
        i = j;
    }
    else
    {
      j = std::_Tree_val<std::_Tree_simple_types<std::pair<std::wstring const,std::shared_ptr<Win32AppInfo>>>>::_Min((_QWORD *)v7);
    }
  }
  return v2;
}
