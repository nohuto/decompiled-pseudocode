/*
 * XREFs of ??$_Try_emplace@AEBW4Enum@SceneMaterialInputType@@$$V@?$map@W4Enum@SceneMaterialInputType@@IU?$less@W4Enum@SceneMaterialInputType@@@std@@V?$allocator@U?$pair@$$CBW4Enum@SceneMaterialInputType@@I@std@@@4@@std@@AEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CBW4Enum@SceneMaterialInputType@@I@std@@PEAX@std@@_N@1@AEBW4Enum@SceneMaterialInputType@@@Z @ 0x18027FD18
 * Callers:
 *     ?SetOrAppendUVMappings@CSceneMeshRendererComponent@@QEAAJAEBV?$span@$$CBUSceneMeshMaterialAttributeData@@$0?0@gsl@@_N@Z @ 0x1802801B0 (-SetOrAppendUVMappings@CSceneMeshRendererComponent@@QEAAJAEBV-$span@$$CBUSceneMeshMaterialAttrib.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x1800E95D0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 *     ?_Insert_node@?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAVCResource@@V?$com_ptr_t@UISpectreTexture@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@QEAVCResource@@V?$com_ptr_t@UISpectreTexture@@Uerr_returncode_policy@wil@@@wil@@@std@@PEAX@2@U?$_Tree_id@PEAU?$_Tree_node@U?$pair@QEAVCResource@@V?$com_ptr_t@UISpectreTexture@@Uerr_returncode_policy@wil@@@wil@@@std@@PEAX@std@@@2@QEAU32@@Z @ 0x1801608F0 (-_Insert_node@-$_Tree_val@U-$_Tree_simple_types@U-$pair@QEAVCResource@@V-$com_ptr_t@UISpectreTex.c)
 *     ??$_Get_size_of_n@$0CI@@std@@YA_K_K@Z @ 0x1801B18E0 (--$_Get_size_of_n@$0CI@@std@@YA_K_K@Z.c)
 *     ??1?$_Alloc_construct_ptr@V?$allocator@U?$_Tree_node@U?$pair@$$CBW4Enum@SceneMaterialInputType@@I@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x1801D20E4 (--1-$_Alloc_construct_ptr@V-$allocator@U-$_Tree_node@U-$pair@$$CBW4Enum@SceneMaterialInputType@@.c)
 *     ?_Throw_tree_length_error@std@@YAXXZ @ 0x180210300 (-_Throw_tree_length_error@std@@YAXXZ.c)
 *     ??$?0AEBW4Enum@SceneMaterialInputType@@$$Z$$V@?$pair@$$CBW4Enum@SceneMaterialInputType@@I@std@@QEAA@Upiecewise_construct_t@1@V?$tuple@AEBW4Enum@SceneMaterialInputType@@@1@V?$tuple@$$V@1@@Z @ 0x18027FC5C (--$-0AEBW4Enum@SceneMaterialInputType@@$$Z$$V@-$pair@$$CBW4Enum@SceneMaterialInputType@@I@std@@Q.c)
 *     ??$_Find_lower_bound@W4Enum@SceneMaterialInputType@@@?$_Tree@V?$_Tmap_traits@W4Enum@SceneMaterialInputType@@IU?$less@W4Enum@SceneMaterialInputType@@@std@@V?$allocator@U?$pair@$$CBW4Enum@SceneMaterialInputType@@I@std@@@4@$0A@@std@@@std@@IEBA?AU?$_Tree_find_result@PEAU?$_Tree_node@U?$pair@$$CBW4Enum@SceneMaterialInputType@@I@std@@PEAX@std@@@1@AEBW4Enum@SceneMaterialInputType@@@Z @ 0x18027FCC4 (--$_Find_lower_bound@W4Enum@SceneMaterialInputType@@@-$_Tree@V-$_Tmap_traits@W4Enum@SceneMateria.c)
 */

__int64 __fastcall std::map<enum SceneMaterialInputType::Enum,unsigned int>::_Try_emplace<enum SceneMaterialInputType::Enum const &,>(
        __int64 *a1,
        __int64 a2,
        _DWORD *a3)
{
  _DWORD *v6; // r8
  __int64 v7; // rbx
  SIZE_T size_of; // rax
  __int64 v9; // rdx
  LPVOID v10; // rax
  __int64 v11; // rdi
  __int64 v12; // rdx
  __int128 v14; // [rsp+20h] [rbp-48h] BYREF
  __int128 v15; // [rsp+30h] [rbp-38h] BYREF
  __int64 v16; // [rsp+40h] [rbp-28h]
  _DWORD *v17; // [rsp+88h] [rbp+20h] BYREF

  std::_Tree<std::_Tmap_traits<enum SceneMaterialInputType::Enum,unsigned int,std::less<enum SceneMaterialInputType::Enum>,std::allocator<std::pair<enum SceneMaterialInputType::Enum const,unsigned int>>,0>>::_Find_lower_bound<enum SceneMaterialInputType::Enum>(
    a1,
    &v15,
    a3);
  if ( *(_BYTE *)(v16 + 25) || *v6 < *(_DWORD *)(v16 + 28) )
  {
    if ( a1[1] == 0x666666666666666LL )
      std::_Throw_tree_length_error();
    v7 = *a1;
    *(_QWORD *)&v14 = a1;
    size_of = std::_Get_size_of_n<40>(1uLL);
    v10 = std::_Allocate<16,std::_Default_allocate_traits>(size_of, v9);
    v17 = a3;
    v11 = (__int64)v10;
    ____0AEBW4Enum_SceneMaterialInputType____Z__V___pair___CBW4Enum_SceneMaterialInputType__I_std__QEAA_Upiecewise_construct_t_1_V__tuple_AEBW4Enum_SceneMaterialInputType___1_V__tuple___V_1__Z(
      (__int64)v10 + 28,
      v12,
      (__int64)&v17);
    *(_QWORD *)v11 = v7;
    *(_QWORD *)(v11 + 8) = v7;
    *(_QWORD *)(v11 + 16) = v7;
    *(_WORD *)(v11 + 24) = 0;
    *((_QWORD *)&v14 + 1) = 0LL;
    std::_Alloc_construct_ptr<std::allocator<std::_Tree_node<std::pair<enum SceneMaterialInputType::Enum const,unsigned int>,void *>>>::~_Alloc_construct_ptr<std::allocator<std::_Tree_node<std::pair<enum SceneMaterialInputType::Enum const,unsigned int>,void *>>>((__int64)&v14);
    v14 = v15;
    *(_QWORD *)a2 = std::_Tree_val<std::_Tree_simple_types<std::pair<CResource * const,wil::com_ptr_t<ISpectreTexture,wil::err_returncode_policy>>>>::_Insert_node(
                      a1,
                      (__int64)&v14,
                      v11);
    *(_BYTE *)(a2 + 8) = 1;
  }
  else
  {
    *(_QWORD *)a2 = v16;
    *(_BYTE *)(a2 + 8) = 0;
  }
  return a2;
}
