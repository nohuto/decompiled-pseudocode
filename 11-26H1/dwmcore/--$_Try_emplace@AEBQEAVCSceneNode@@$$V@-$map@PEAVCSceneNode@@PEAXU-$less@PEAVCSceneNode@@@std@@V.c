/*
 * XREFs of ??$_Try_emplace@AEBQEAVCSceneNode@@$$V@?$map@PEAVCSceneNode@@PEAXU?$less@PEAVCSceneNode@@@std@@V?$allocator@U?$pair@QEAVCSceneNode@@PEAX@std@@@3@@std@@AEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@QEAVCSceneNode@@PEAX@std@@PEAX@std@@_N@1@AEBQEAVCSceneNode@@@Z @ 0x18028AF50
 * Callers:
 *     ?HydrateSpectreResources@CSceneComponent@@QEAAJPEAVCSceneNode@@@Z @ 0x18028B1A0 (-HydrateSpectreResources@CSceneComponent@@QEAAJPEAVCSceneNode@@@Z.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x1800E95D0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 *     ?_Insert_node@?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAVCResource@@V?$com_ptr_t@UISpectreTexture@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@QEAVCResource@@V?$com_ptr_t@UISpectreTexture@@Uerr_returncode_policy@wil@@@wil@@@std@@PEAX@2@U?$_Tree_id@PEAU?$_Tree_node@U?$pair@QEAVCResource@@V?$com_ptr_t@UISpectreTexture@@Uerr_returncode_policy@wil@@@wil@@@std@@PEAX@std@@@2@QEAU32@@Z @ 0x1801608F0 (-_Insert_node@-$_Tree_val@U-$_Tree_simple_types@U-$pair@QEAVCResource@@V-$com_ptr_t@UISpectreTex.c)
 *     ??$_Find_lower_bound@PEBVCVisualTree@@@?$_Tree@V?$_Tmap_traits@PEBVCVisualTree@@UVisualPropertyData@CProjectedShadowCaster@@U?$less@PEBVCVisualTree@@@std@@V?$allocator@U?$pair@QEBVCVisualTree@@UVisualPropertyData@CProjectedShadowCaster@@@std@@@5@$0A@@std@@@std@@IEBA?AU?$_Tree_find_result@PEAU?$_Tree_node@U?$pair@QEBVCVisualTree@@UVisualPropertyData@CProjectedShadowCaster@@@std@@PEAX@std@@@1@AEBQEBVCVisualTree@@@Z @ 0x1801715D4 (--$_Find_lower_bound@PEBVCVisualTree@@@-$_Tree@V-$_Tmap_traits@PEBVCVisualTree@@UVisualPropertyD.c)
 *     ??1?$_Alloc_construct_ptr@V?$allocator@U?$_Tree_node@U?$pair@QEAVCSceneMeshRendererComponent@@V?$com_ptr_t@UISpectreMaterial@@Uerr_returncode_policy@wil@@@wil@@@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x1801D40A8 (--1-$_Alloc_construct_ptr@V-$allocator@U-$_Tree_node@U-$pair@QEAVCSceneMeshRendererComponent@@V-.c)
 *     ??$?0AEBQEAVCResource@@$$Z$$V@?$pair@QEAVCResource@@V?$com_ptr_t@UISpectreTexture@@Uerr_returncode_policy@wil@@@wil@@@std@@QEAA@Upiecewise_construct_t@1@V?$tuple@AEBQEAVCResource@@@1@V?$tuple@$$V@1@@Z @ 0x180209434 (--$-0AEBQEAVCResource@@$$Z$$V@-$pair@QEAVCResource@@V-$com_ptr_t@UISpectreTexture@@Uerr_returnco.c)
 *     ?_Throw_tree_length_error@std@@YAXXZ @ 0x180210300 (-_Throw_tree_length_error@std@@YAXXZ.c)
 */

__int64 __fastcall std::map<CSceneNode *,void *>::_Try_emplace<CSceneNode * const &,>(
        __int64 *a1,
        __int64 a2,
        _QWORD *a3)
{
  _QWORD *v6; // r8
  __int64 v7; // rbx
  LPVOID v8; // rax
  __int64 v9; // rdi
  __int64 v10; // rdx
  __int128 v12; // [rsp+20h] [rbp-48h] BYREF
  __int128 v13; // [rsp+30h] [rbp-38h] BYREF
  __int64 v14; // [rsp+40h] [rbp-28h]
  _QWORD *v15; // [rsp+88h] [rbp+20h] BYREF

  std::_Tree<std::_Tmap_traits<CVisualTree const *,CProjectedShadowCaster::VisualPropertyData,std::less<CVisualTree const *>,std::allocator<std::pair<CVisualTree const * const,CProjectedShadowCaster::VisualPropertyData>>,0>>::_Find_lower_bound<CVisualTree const *>(
    a1,
    &v13,
    a3);
  if ( *(_BYTE *)(v14 + 25) || *v6 < *(_QWORD *)(v14 + 32) )
  {
    if ( a1[1] == 0x555555555555555LL )
      std::_Throw_tree_length_error();
    v7 = *a1;
    *(_QWORD *)&v12 = a1;
    v8 = std::_Allocate<16,std::_Default_allocate_traits>(0x30uLL, v14);
    v15 = a3;
    v9 = (__int64)v8;
    ____0AEBQEAVCResource____Z__V___pair_QEAVCResource__V__com_ptr_t_UISpectreTexture__Uerr_returncode_policy_wil___wil___std__QEAA_Upiecewise_construct_t_1_V__tuple_AEBQEAVCResource___1_V__tuple___V_1__Z(
      (__int64)v8 + 32,
      v10,
      (__int64)&v15);
    *(_QWORD *)v9 = v7;
    *(_QWORD *)(v9 + 8) = v7;
    *(_QWORD *)(v9 + 16) = v7;
    *(_WORD *)(v9 + 24) = 0;
    *((_QWORD *)&v12 + 1) = 0LL;
    std::_Alloc_construct_ptr<std::allocator<std::_Tree_node<std::pair<CSceneMeshRendererComponent * const,wil::com_ptr_t<ISpectreMaterial,wil::err_returncode_policy>>,void *>>>::~_Alloc_construct_ptr<std::allocator<std::_Tree_node<std::pair<CSceneMeshRendererComponent * const,wil::com_ptr_t<ISpectreMaterial,wil::err_returncode_policy>>,void *>>>((__int64)&v12);
    v12 = v13;
    *(_QWORD *)a2 = std::_Tree_val<std::_Tree_simple_types<std::pair<CResource * const,wil::com_ptr_t<ISpectreTexture,wil::err_returncode_policy>>>>::_Insert_node(
                      a1,
                      (__int64)&v12,
                      v9);
    *(_BYTE *)(a2 + 8) = 1;
  }
  else
  {
    *(_QWORD *)a2 = v14;
    *(_BYTE *)(a2 + 8) = 0;
  }
  return a2;
}
