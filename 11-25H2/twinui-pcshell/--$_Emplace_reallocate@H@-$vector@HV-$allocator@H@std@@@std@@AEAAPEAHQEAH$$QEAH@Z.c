/*
 * XREFs of ??$_Emplace_reallocate@H@?$vector@HV?$allocator@H@std@@@std@@AEAAPEAHQEAH$$QEAH@Z @ 0x180224298
 * Callers:
 *     ?push_back@?$vector@HV?$allocator@H@std@@@std@@QEAAX$$QEAH@Z @ 0x180469C3C (-push_back@-$vector@HV-$allocator@H@std@@@std@@QEAAX$$QEAH@Z.c)
 * Callees:
 *     ??$_Get_size_of_n@$03@std@@YA_K_K@Z @ 0x180029C20 (--$_Get_size_of_n@$03@std@@YA_K_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180029F1C (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?_Change_array@?$vector@UWindowId@WindowManagement@ApplicationModel@Internal@Windows@winrt@@V?$allocator@UWindowId@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@std@@@std@@AEAAXQEAUWindowId@WindowManagement@ApplicationModel@Internal@Windows@winrt@@_K1@Z @ 0x1802A6870 (-_Change_array@-$vector@UWindowId@WindowManagement@ApplicationModel@Internal@Windows@winrt@@V-$a.c)
 *     ??$_Uninitialized_move@PEAHV?$allocator@H@std@@@std@@YAPEAHQEAH0PEAHAEAV?$allocator@H@0@@Z @ 0x1802A68D8 (--$_Uninitialized_move@PEAHV-$allocator@H@std@@@std@@YAPEAHQEAH0PEAHAEAV-$allocator@H@0@@Z.c)
 *     ?_Xlength@?$vector@U?$com_ptr@UIApplicationView@@@winrt@@V?$allocator@U?$com_ptr@UIApplicationView@@@winrt@@@std@@@std@@CAXXZ @ 0x1802B070C (-_Xlength@-$vector@U-$com_ptr@UIApplicationView@@@winrt@@V-$allocator@U-$com_ptr@UIApplicationVi.c)
 */

char *__fastcall std::vector<int>::_Emplace_reallocate<int>(void **a1, _BYTE *a2, _DWORD *a3)
{
  __int64 v6; // r14
  __int64 v7; // rax
  unsigned __int64 v8; // rbx
  unsigned __int64 v9; // r15
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rdx
  size_t size_of; // rax
  char *v13; // rdi
  char *v14; // r14
  void *v15; // rcx

  v6 = (a2 - (_BYTE *)*a1) >> 2;
  v7 = ((_BYTE *)a1[1] - (_BYTE *)*a1) >> 2;
  v8 = 0x3FFFFFFFFFFFFFFFLL;
  if ( v7 == 0x3FFFFFFFFFFFFFFFLL )
    std::vector<winrt::com_ptr<IApplicationView>>::_Xlength();
  v9 = v7 + 1;
  v10 = ((_BYTE *)a1[2] - (_BYTE *)*a1) >> 2;
  v11 = v10 >> 1;
  if ( v10 <= 0x3FFFFFFFFFFFFFFFLL - (v10 >> 1) )
  {
    v8 = v11 + v10;
    if ( v11 + v10 < v9 )
      v8 = v7 + 1;
  }
  size_of = std::_Get_size_of_n<4>(v8);
  v13 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  v14 = &v13[4 * v6];
  *(_DWORD *)v14 = *a3;
  v15 = *a1;
  if ( a2 != a1[1] )
  {
    std::_Uninitialized_move<int *>(v15);
    v15 = a2;
  }
  std::_Uninitialized_move<int *>(v15);
  std::vector<winrt::Windows::Internal::ApplicationModel::WindowManagement::WindowId>::_Change_array(a1, v13, v9, v8);
  return v14;
}
