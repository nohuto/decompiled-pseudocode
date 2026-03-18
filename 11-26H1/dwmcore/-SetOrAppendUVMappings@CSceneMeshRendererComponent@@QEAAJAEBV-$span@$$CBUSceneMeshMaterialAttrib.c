/*
 * XREFs of ?SetOrAppendUVMappings@CSceneMeshRendererComponent@@QEAAJAEBV?$span@$$CBUSceneMeshMaterialAttributeData@@$0?0@gsl@@_N@Z @ 0x1802801B0
 * Callers:
 *     ?ProcessSetUVMappings@CSceneMeshRendererComponent@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_SCENEMESHRENDERERCOMPONENT_SETUVMAPPINGS@@PEBXI@Z @ 0x180280110 (-ProcessSetUVMappings@CSceneMeshRendererComponent@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_SCENEM.c)
 * Callees:
 *     ??$_Erase_tree_and_orphan@V?$allocator@U?$_Tree_node@U?$pair@$$CBW4Enum@SceneMaterialInputType@@I@std@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBW4Enum@SceneMaterialInputType@@I@std@@@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@U?$pair@$$CBW4Enum@SceneMaterialInputType@@I@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@$$CBW4Enum@SceneMaterialInputType@@I@std@@PEAX@1@@Z @ 0x1801C4AB0 (--$_Erase_tree_and_orphan@V-$allocator@U-$_Tree_node@U-$pair@$$CBW4Enum@SceneMaterialInputType@@.c)
 *     ??$_Try_emplace@AEBW4Enum@SceneMaterialInputType@@$$V@?$map@W4Enum@SceneMaterialInputType@@IU?$less@W4Enum@SceneMaterialInputType@@@std@@V?$allocator@U?$pair@$$CBW4Enum@SceneMaterialInputType@@I@std@@@4@@std@@AEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CBW4Enum@SceneMaterialInputType@@I@std@@PEAX@std@@_N@1@AEBW4Enum@SceneMaterialInputType@@@Z @ 0x18027FD18 (--$_Try_emplace@AEBW4Enum@SceneMaterialInputType@@$$V@-$map@W4Enum@SceneMaterialInputType@@IU-$l.c)
 *     ??C?$span_iterator@$$CBUSceneMeshMaterialAttributeData@@@details@gsl@@QEBAPEBUSceneMeshMaterialAttributeData@@XZ @ 0x18027FE74 (--C-$span_iterator@$$CBUSceneMeshMaterialAttributeData@@@details@gsl@@QEBAPEBUSceneMeshMaterialA.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CSceneMeshRendererComponent::SetOrAppendUVMappings(__int64 a1, __int64 *a2, char a3)
{
  __int64 v5; // rdi
  _QWORD *v6; // rbx
  unsigned __int64 v7; // rsi
  __int64 v8; // rax
  unsigned __int64 v9; // rdi
  unsigned __int64 v10; // rbp
  __int64 v11; // rcx
  __int64 v12; // rdx
  int v13; // ebx
  _BYTE v15[16]; // [rsp+20h] [rbp-48h] BYREF
  unsigned __int64 v16[2]; // [rsp+30h] [rbp-38h] BYREF
  unsigned __int64 v17; // [rsp+40h] [rbp-28h]
  int v18; // [rsp+80h] [rbp+18h] BYREF

  if ( !a3 )
  {
    v5 = a1 + 104;
    v6 = *(_QWORD **)(a1 + 104);
    std::_Tree_val<std::_Tree_simple_types<std::pair<enum SceneMaterialInputType::Enum const,unsigned int>>>::_Erase_tree_and_orphan<std::allocator<std::_Tree_node<std::pair<enum SceneMaterialInputType::Enum const,unsigned int>,void *>>>(
      a1 + 104,
      a1 + 104,
      v6[1]);
    v6[1] = v6;
    *v6 = v6;
    v6[2] = v6;
    *(_QWORD *)(v5 + 8) = 0LL;
  }
  v7 = a2[1];
  v8 = *a2;
  v9 = v7;
  v16[0] = v7;
  v17 = v7;
  v10 = v7 + 8 * v8;
  v16[1] = v10;
  while ( 1 )
  {
    v11 = a2[1];
    if ( v7 != v11 || (v12 = v11 + 8 * *a2, v10 != v12) )
LABEL_13:
      ((void (*)(void))`gsl::details::get_terminate_handler'::`2'::handler)();
    if ( v9 == v12 )
      break;
    v18 = *(_DWORD *)gsl::details::span_iterator<SceneMeshMaterialAttributeData const>::operator->(v16);
    v13 = *(_DWORD *)(gsl::details::span_iterator<SceneMeshMaterialAttributeData const>::operator->(v16) + 4);
    *(_DWORD *)(*(_QWORD *)std::map<enum SceneMaterialInputType::Enum,unsigned int>::_Try_emplace<enum SceneMaterialInputType::Enum const &,>(
                             (__int64 *)(a1 + 104),
                             (__int64)v15,
                             &v18)
              + 32LL) = v13;
    if ( !v7 || !v9 || !v10 || v9 >= v10 )
      goto LABEL_13;
    v9 += 8LL;
    v17 = v9;
  }
  *(_BYTE *)(a1 + 120) = 1;
  return 0LL;
}
