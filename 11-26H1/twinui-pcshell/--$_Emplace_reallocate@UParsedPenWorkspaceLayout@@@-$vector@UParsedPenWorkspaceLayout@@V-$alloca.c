/*
 * XREFs of ??$_Emplace_reallocate@UParsedPenWorkspaceLayout@@@?$vector@UParsedPenWorkspaceLayout@@V?$allocator@UParsedPenWorkspaceLayout@@@std@@@std@@AEAAPEAUParsedPenWorkspaceLayout@@QEAU2@$$QEAU2@@Z @ 0x1803F19A8
 * Callers:
 *     ?ParsePWSLayoutCollectionNode@PWSLayoutParser@@UEAAJAEAV?$ComPtr@UIXMLDOMNode@@@WRL@Microsoft@@AEAV?$CCoSimpleArray@V?$ComPtr@UIPenWorkspaceLayoutItem@@@WRL@Microsoft@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIPenWorkspaceLayoutItem@@@WRL@Microsoft@@@@@@@Z @ 0x1803F2120 (-ParsePWSLayoutCollectionNode@PWSLayoutParser@@UEAAJAEAV-$ComPtr@UIXMLDOMNode@@@WRL@Microsoft@@A.c)
 * Callees:
 *     ?_Xlength@?$vector@U?$com_ptr@UIApplicationView@@@winrt@@V?$allocator@U?$com_ptr@UIApplicationView@@@winrt@@@std@@@std@@CAXXZ @ 0x180285304 (-_Xlength@-$vector@U-$com_ptr@UIApplicationView@@@winrt@@V-$allocator@U-$com_ptr@UIApplicationVi.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x180285C68 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 *     ??$_Get_size_of_n@$0II@@std@@YA_K_K@Z @ 0x18031C0C0 (--$_Get_size_of_n@$0II@@std@@YA_K_K@Z.c)
 *     ??$_Uninitialized_move@PEAUParsedPenWorkspaceLayout@@V?$allocator@UParsedPenWorkspaceLayout@@@std@@@std@@YAPEAUParsedPenWorkspaceLayout@@QEAU1@0PEAU1@AEAV?$allocator@UParsedPenWorkspaceLayout@@@0@@Z @ 0x1803F1B24 (--$_Uninitialized_move@PEAUParsedPenWorkspaceLayout@@V-$allocator@UParsedPenWorkspaceLayout@@@st.c)
 *     ??$construct@UParsedPenWorkspaceLayout@@U1@@?$_Default_allocator_traits@V?$allocator@UParsedPenWorkspaceLayout@@@std@@@std@@SAXAEAV?$allocator@UParsedPenWorkspaceLayout@@@1@QEAUParsedPenWorkspaceLayout@@$$QEAU3@@Z @ 0x1803F1B98 (--$construct@UParsedPenWorkspaceLayout@@U1@@-$_Default_allocator_traits@V-$allocator@UParsedPenW.c)
 *     ??1_Reallocation_guard@?$vector@UParsedPenWorkspaceLayout@@V?$allocator@UParsedPenWorkspaceLayout@@@std@@@std@@QEAA@XZ @ 0x1803F1DE4 (--1_Reallocation_guard@-$vector@UParsedPenWorkspaceLayout@@V-$allocator@UParsedPenWorkspaceLayou.c)
 *     ?_Change_array@?$vector@UParsedPenWorkspaceLayout@@V?$allocator@UParsedPenWorkspaceLayout@@@std@@@std@@AEAAXQEAUParsedPenWorkspaceLayout@@_K1@Z @ 0x1803F2B74 (-_Change_array@-$vector@UParsedPenWorkspaceLayout@@V-$allocator@UParsedPenWorkspaceLayout@@@std@.c)
 */

// Hidden C++ exception states: #wind=1
char *__fastcall std::vector<ParsedPenWorkspaceLayout>::_Emplace_reallocate<ParsedPenWorkspaceLayout>(
        _QWORD *a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v6; // rbp
  unsigned __int64 v7; // r14
  unsigned __int64 v8; // rbx
  unsigned __int64 v9; // r14
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rdx
  unsigned __int64 size_of; // rax
  char *v13; // rsi
  char *v14; // r15
  char *v15; // rbp
  __int64 v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // rcx
  _QWORD *v20; // [rsp+20h] [rbp-58h] BYREF
  char *v21; // [rsp+28h] [rbp-50h]
  unsigned __int64 v22; // [rsp+30h] [rbp-48h]
  char *v23; // [rsp+38h] [rbp-40h]
  char *v24; // [rsp+40h] [rbp-38h]

  v6 = (a2 - *a1) / 136;
  v7 = 0xF0F0F0F0F0F0F0F1uLL * ((__int64)(a1[1] - *a1) >> 3);
  v8 = 0x1E1E1E1E1E1E1E1LL;
  if ( v7 == 0x1E1E1E1E1E1E1E1LL )
    std::vector<winrt::com_ptr<IApplicationView>>::_Xlength();
  v9 = v7 + 1;
  v10 = 0xF0F0F0F0F0F0F0F1uLL * ((__int64)(a1[2] - *a1) >> 3);
  v11 = v10 >> 1;
  if ( v10 <= 0x1E1E1E1E1E1E1E1LL - (v10 >> 1) )
  {
    v8 = v11 + v10;
    if ( v11 + v10 < v9 )
      v8 = v9;
  }
  size_of = std::_Get_size_of_n<136>(v8);
  v13 = (char *)std::_Allocate<16,std::_Default_allocate_traits>(size_of);
  v14 = &v13[136 * v6];
  v15 = v14 + 136;
  v20 = a1;
  v21 = v13;
  v22 = v8;
  v24 = v14 + 136;
  std::_Default_allocator_traits<std::allocator<ParsedPenWorkspaceLayout>>::construct<ParsedPenWorkspaceLayout,ParsedPenWorkspaceLayout>(
    v16,
    v14,
    a3);
  v23 = v14;
  v17 = a1[1];
  v18 = *a1;
  if ( a2 == v17 )
  {
    v15 = v13;
  }
  else
  {
    std::_Uninitialized_move<ParsedPenWorkspaceLayout *>(v18, a2, v13, a1);
    v23 = v13;
    v18 = a2;
    v17 = a1[1];
  }
  std::_Uninitialized_move<ParsedPenWorkspaceLayout *>(v18, v17, v15, a1);
  v21 = 0LL;
  std::vector<ParsedPenWorkspaceLayout>::_Change_array(a1, v13, v9, v8);
  std::vector<ParsedPenWorkspaceLayout>::_Reallocation_guard::~_Reallocation_guard(&v20);
  return v14;
}
