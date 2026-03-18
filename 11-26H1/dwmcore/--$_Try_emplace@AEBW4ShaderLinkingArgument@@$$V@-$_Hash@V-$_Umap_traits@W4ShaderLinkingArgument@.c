/*
 * XREFs of ??$_Try_emplace@AEBW4ShaderLinkingArgument@@$$V@?$_Hash@V?$_Umap_traits@W4ShaderLinkingArgument@@UNode@CShaderLinkingGraphBuilder@@V?$_Uhash_compare@W4ShaderLinkingArgument@@U?$hash@W4ShaderLinkingArgument@@@std@@U?$equal_to@W4ShaderLinkingArgument@@@3@@std@@V?$allocator@U?$pair@$$CBW4ShaderLinkingArgument@@UNode@CShaderLinkingGraphBuilder@@@std@@@5@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_List_node@U?$pair@$$CBW4ShaderLinkingArgument@@UNode@CShaderLinkingGraphBuilder@@@std@@PEAX@std@@_N@1@AEBW4ShaderLinkingArgument@@@Z @ 0x180147DF4
 * Callers:
 *     ?AppendNode@CShaderLinkingGraphBuilder@@QEAAJW4ShaderLinkingArgument@@PEBDPEAUID3D11Module@@1V?$span@$$CBW4ShaderLinkingArgument@@$0?0@gsl@@@Z @ 0x180146EBC (-AppendNode@CShaderLinkingGraphBuilder@@QEAAJW4ShaderLinkingArgument@@PEBDPEAUID3D11Module@@1V-$.c)
 *     ?CopyNode@CShaderLinkingGraphBuilder@@QEAAJW4ShaderLinkingArgument@@0@Z @ 0x180147D3C (-CopyNode@CShaderLinkingGraphBuilder@@QEAAJW4ShaderLinkingArgument@@0@Z.c)
 *     ?CreateNodeFromOutputArgument@CShaderLinkingGraphBuilder@@QEAAJW4ShaderLinkingArgument@@0H@Z @ 0x18025F508 (-CreateNodeFromOutputArgument@CShaderLinkingGraphBuilder@@QEAAJW4ShaderLinkingArgument@@0H@Z.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x1800E95D0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 *     ?_Check_rehash_required_1@?$_Hash@V?$_Umap_traits@PEAVCInteractionTrackerBase@@W4InteractionTrackerBindingModeFlags@@V?$_Uhash_compare@PEAVCInteractionTrackerBase@@U?$hash@PEAVCInteractionTrackerBase@@@std@@U?$equal_to@PEAVCInteractionTrackerBase@@@3@@std@@V?$allocator@U?$pair@QEAVCInteractionTrackerBase@@W4InteractionTrackerBindingModeFlags@@@std@@@4@$0A@@std@@@std@@IEBA_NXZ @ 0x1801363E4 (-_Check_rehash_required_1@-$_Hash@V-$_Umap_traits@PEAVCInteractionTrackerBase@@W4InteractionTrac.c)
 *     ?_Check_max_size@?$_Hash@V?$_Umap_traits@W4ShaderLinkingArgument@@UNode@CShaderLinkingGraphBuilder@@V?$_Uhash_compare@W4ShaderLinkingArgument@@U?$hash@W4ShaderLinkingArgument@@@std@@U?$equal_to@W4ShaderLinkingArgument@@@3@@std@@V?$allocator@U?$pair@$$CBW4ShaderLinkingArgument@@UNode@CShaderLinkingGraphBuilder@@@std@@@5@$0A@@std@@@std@@IEBAXXZ @ 0x180148798 (-_Check_max_size@-$_Hash@V-$_Umap_traits@W4ShaderLinkingArgument@@UNode@CShaderLinkingGraphBuild.c)
 *     ?_Insert_new_node_before@?$_Hash@V?$_Umap_traits@UEffectDescriptionKey@@PEAVCEffectCompilationTask@@V?$_Uhash_compare@UEffectDescriptionKey@@U?$hash@UEffectDescriptionKey@@@std@@U?$equal_to@UEffectDescriptionKey@@@3@@std@@V?$allocator@U?$pair@$$CBUEffectDescriptionKey@@PEAVCEffectCompilationTask@@@std@@@4@$0A@@std@@@std@@IEAAPEAU?$_List_node@U?$pair@$$CBUEffectDescriptionKey@@PEAVCEffectCompilationTask@@@std@@PEAX@2@_KQEAU32@1@Z @ 0x1801487D0 (-_Insert_new_node_before@-$_Hash@V-$_Umap_traits@UEffectDescriptionKey@@PEAVCEffectCompilationTa.c)
 *     ?_Rehash_for_1@?$_Hash@V?$_Umap_traits@W4ShaderLinkingArgument@@UNode@CShaderLinkingGraphBuilder@@V?$_Uhash_compare@W4ShaderLinkingArgument@@U?$hash@W4ShaderLinkingArgument@@@std@@U?$equal_to@W4ShaderLinkingArgument@@@3@@std@@V?$allocator@U?$pair@$$CBW4ShaderLinkingArgument@@UNode@CShaderLinkingGraphBuilder@@@std@@@5@$0A@@std@@@std@@IEAAXXZ @ 0x180148824 (-_Rehash_for_1@-$_Hash@V-$_Umap_traits@W4ShaderLinkingArgument@@UNode@CShaderLinkingGraphBuilder.c)
 *     ??$?0V?$tuple@AEBW4ShaderLinkingArgument@@@std@@V?$tuple@$$V@1@$0A@$$Z$S@?$pair@$$CBW4ShaderLinkingArgument@@UNode@CShaderLinkingGraphBuilder@@@std@@AEAA@AEAV?$tuple@AEBW4ShaderLinkingArgument@@@1@AEAV?$tuple@$$V@1@U?$integer_sequence@_K$0A@@1@U?$integer_sequence@_K$S@1@@Z @ 0x18025F328 (--$-0V-$tuple@AEBW4ShaderLinkingArgument@@@std@@V-$tuple@$$V@1@$0A@$$Z$S@-$pair@$$CBW4ShaderLink.c)
 *     ??R?$_Conditionally_enabled_hash@W4ShaderLinkingArgument@@$00@std@@SA_KAEBW4ShaderLinkingArgument@@@Z @ 0x18025F4F4 (--R-$_Conditionally_enabled_hash@W4ShaderLinkingArgument@@$00@std@@SA_KAEBW4ShaderLinkingArgumen.c)
 */

__int64 __fastcall std::_Hash<std::_Umap_traits<enum ShaderLinkingArgument,CShaderLinkingGraphBuilder::Node,std::_Uhash_compare<enum ShaderLinkingArgument,std::hash<enum ShaderLinkingArgument>,std::equal_to<enum ShaderLinkingArgument>>,std::allocator<std::pair<enum ShaderLinkingArgument const,CShaderLinkingGraphBuilder::Node>>,0>>::_Try_emplace<enum ShaderLinkingArgument const &,>(
        _QWORD *a1,
        __int64 a2,
        unsigned __int8 *a3)
{
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // r15
  __int64 v9; // rdi
  __int64 v10; // rcx
  __int64 inserted; // rax
  __int64 v12; // rdx
  __int64 v14; // rdx
  char *v15; // rax
  char *v16; // rbp
  __int64 v17; // rdx
  __int64 v18; // rax
  unsigned __int8 *v19; // [rsp+50h] [rbp+8h] BYREF

  v6 = std::_Conditionally_enabled_hash<enum ShaderLinkingArgument,1>::operator()(a3);
  v7 = a1[3];
  v8 = v6;
  v9 = a1[1];
  v10 = 2 * (a1[6] & v6);
  inserted = *(_QWORD *)(v7 + 16 * (a1[6] & v6) + 8);
  if ( inserted != v9 )
  {
    v12 = *(_QWORD *)(v7 + 8 * v10);
    while ( 1 )
    {
      if ( *(_WORD *)a3 == *(_WORD *)(inserted + 16) )
      {
        *(_BYTE *)(a2 + 8) = 0;
        goto LABEL_7;
      }
      if ( inserted == v12 )
        break;
      inserted = *(_QWORD *)(inserted + 8);
    }
    v9 = inserted;
  }
  std::_Hash<std::_Umap_traits<enum ShaderLinkingArgument,CShaderLinkingGraphBuilder::Node,std::_Uhash_compare<enum ShaderLinkingArgument,std::hash<enum ShaderLinkingArgument>,std::equal_to<enum ShaderLinkingArgument>>,std::allocator<std::pair<enum ShaderLinkingArgument const,CShaderLinkingGraphBuilder::Node>>,0>>::_Check_max_size(a1);
  v15 = (char *)std::_Allocate<16,std::_Default_allocate_traits>(0x28uLL, v14);
  v19 = a3;
  v16 = v15;
  ____0V__tuple_AEBW4ShaderLinkingArgument___std__V__tuple___V_1__0A___Z_S___pair___CBW4ShaderLinkingArgument__UNode_CShaderLinkingGraphBuilder___std__AEAA_AEAV__tuple_AEBW4ShaderLinkingArgument___1_AEAV__tuple___V_1_U__integer_sequence__K_0A__1_U__integer_sequence__K_S_1__Z(
    v15 + 16,
    &v19);
  if ( std::_Hash<std::_Umap_traits<CInteractionTrackerBase *,enum InteractionTrackerBindingModeFlags,std::_Uhash_compare<CInteractionTrackerBase *,std::hash<CInteractionTrackerBase *>,std::equal_to<CInteractionTrackerBase *>>,std::allocator<std::pair<CInteractionTrackerBase * const,enum InteractionTrackerBindingModeFlags>>,0>>::_Check_rehash_required_1((__int64)a1) )
  {
    std::_Hash<std::_Umap_traits<enum ShaderLinkingArgument,CShaderLinkingGraphBuilder::Node,std::_Uhash_compare<enum ShaderLinkingArgument,std::hash<enum ShaderLinkingArgument>,std::equal_to<enum ShaderLinkingArgument>>,std::allocator<std::pair<enum ShaderLinkingArgument const,CShaderLinkingGraphBuilder::Node>>,0>>::_Rehash_for_1(a1);
    v17 = a1[3];
    v9 = a1[1];
    v18 = *(_QWORD *)(v17 + 16 * (v8 & a1[6]) + 8);
    if ( v18 != v9 )
    {
      while ( 1 )
      {
        if ( *((_WORD *)v16 + 8) == *(_WORD *)(v18 + 16) )
        {
          v9 = *(_QWORD *)v18;
          goto LABEL_6;
        }
        if ( v18 == *(_QWORD *)(v17 + 16 * (v8 & a1[6])) )
          break;
        v18 = *(_QWORD *)(v18 + 8);
      }
      v9 = v18;
    }
  }
LABEL_6:
  inserted = std::_Hash<std::_Umap_traits<EffectDescriptionKey,CEffectCompilationTask *,std::_Uhash_compare<EffectDescriptionKey,std::hash<EffectDescriptionKey>,std::equal_to<EffectDescriptionKey>>,std::allocator<std::pair<EffectDescriptionKey const,CEffectCompilationTask *>>,0>>::_Insert_new_node_before(
               a1,
               v8,
               v9,
               v16);
  *(_BYTE *)(a2 + 8) = 1;
LABEL_7:
  *(_QWORD *)a2 = inserted;
  return a2;
}
