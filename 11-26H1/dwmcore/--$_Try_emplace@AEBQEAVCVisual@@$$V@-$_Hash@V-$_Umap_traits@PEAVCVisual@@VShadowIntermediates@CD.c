/*
 * XREFs of ??$_Try_emplace@AEBQEAVCVisual@@$$V@?$_Hash@V?$_Umap_traits@PEAVCVisual@@VShadowIntermediates@CDropShadow@@V?$_Uhash_compare@PEAVCVisual@@U?$hash@PEAVCVisual@@@std@@U?$equal_to@PEAVCVisual@@@3@@std@@V?$allocator@U?$pair@QEAVCVisual@@VShadowIntermediates@CDropShadow@@@std@@@5@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_List_node@U?$pair@QEAVCVisual@@VShadowIntermediates@CDropShadow@@@std@@PEAX@std@@_N@1@AEBQEAVCVisual@@@Z @ 0x1800173C0
 * Callers:
 *     ?UpdateShadowIntermediates@CDropShadow@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z @ 0x180018D34 (-UpdateShadowIntermediates@CDropShadow@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z.c)
 * Callees:
 *     ??$_Find_last@_K@?$_Hash@V?$_Umap_traits@_KV?$ComPtr@VBamoDataSourceProxy@@@WRL@Microsoft@@V?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@U?$pair@$$CB_KV?$ComPtr@VBamoDataSourceProxy@@@WRL@Microsoft@@@std@@@5@$0A@@std@@@std@@IEBA?AU?$_Hash_find_last_result@PEAU?$_List_node@U?$pair@$$CB_KV?$ComPtr@VBamoDataSourceProxy@@@WRL@Microsoft@@@std@@PEAX@std@@@1@AEB_K_K@Z @ 0x180017230 (--$_Find_last@_K@-$_Hash@V-$_Umap_traits@_KV-$ComPtr@VBamoDataSourceProxy@@@WRL@Microsoft@@V-$_U.c)
 *     ??2@YAPEAX_K@Z @ 0x1800E9260 (--2@YAPEAX_K@Z.c)
 *     ?_Desired_grow_bucket_count@?$_Hash@V?$_Umap_traits@W4ShaderLinkingArgument@@UNode@CShaderLinkingGraphBuilder@@V?$_Uhash_compare@W4ShaderLinkingArgument@@U?$hash@W4ShaderLinkingArgument@@@std@@U?$equal_to@W4ShaderLinkingArgument@@@3@@std@@V?$allocator@U?$pair@$$CBW4ShaderLinkingArgument@@UNode@CShaderLinkingGraphBuilder@@@std@@@5@$0A@@std@@@std@@IEBA_K_K@Z @ 0x1801350B0 (-_Desired_grow_bucket_count@-$_Hash@V-$_Umap_traits@W4ShaderLinkingArgument@@UNode@CShaderLinkin.c)
 *     ?_Insert_new_node_before@?$_Hash@V?$_Umap_traits@UEffectDescriptionKey@@PEAVCEffectCompilationTask@@V?$_Uhash_compare@UEffectDescriptionKey@@U?$hash@UEffectDescriptionKey@@@std@@U?$equal_to@UEffectDescriptionKey@@@3@@std@@V?$allocator@U?$pair@$$CBUEffectDescriptionKey@@PEAVCEffectCompilationTask@@@std@@@4@$0A@@std@@@std@@IEAAPEAU?$_List_node@U?$pair@$$CBUEffectDescriptionKey@@PEAVCEffectCompilationTask@@@std@@PEAX@2@_KQEAU32@1@Z @ 0x1801487D0 (-_Insert_new_node_before@-$_Hash@V-$_Umap_traits@UEffectDescriptionKey@@PEAVCEffectCompilationTa.c)
 *     ??$?0V?$tuple@AEBQEAVCVisual@@@std@@V?$tuple@$$V@1@$0A@$$Z$S@?$pair@QEAVCVisual@@VShadowIntermediates@CDropShadow@@@std@@AEAA@AEAV?$tuple@AEBQEAVCVisual@@@1@AEAV?$tuple@$$V@1@U?$integer_sequence@_K$0A@@1@U?$integer_sequence@_K$S@1@@Z @ 0x18020B9B4 (--$-0V-$tuple@AEBQEAVCVisual@@@std@@V-$tuple@$$V@1@$0A@$$Z$S@-$pair@QEAVCVisual@@VShadowIntermed.c)
 *     ??R?$_Conditionally_enabled_hash@PEAVCBaseExpression@@$00@std@@SA_KAEBQEAVCBaseExpression@@@Z @ 0x180211A54 (--R-$_Conditionally_enabled_hash@PEAVCBaseExpression@@$00@std@@SA_KAEBQEAVCBaseExpression@@@Z.c)
 *     ?_Forced_rehash@?$_Hash@V?$_Umap_traits@PEAVCVisual@@VShadowIntermediates@CDropShadow@@V?$_Uhash_compare@PEAVCVisual@@U?$hash@PEAVCVisual@@@std@@U?$equal_to@PEAVCVisual@@@3@@std@@V?$allocator@U?$pair@QEAVCVisual@@VShadowIntermediates@CDropShadow@@@std@@@5@$0A@@std@@@std@@IEAAX_K@Z @ 0x18026D5F8 (-_Forced_rehash@-$_Hash@V-$_Umap_traits@PEAVCVisual@@VShadowIntermediates@CDropShadow@@V-$_Uhash.c)
 */

__int64 __fastcall std::_Hash<std::_Umap_traits<CVisual *,CDropShadow::ShadowIntermediates,std::_Uhash_compare<CVisual *,std::hash<CVisual *>,std::equal_to<CVisual *>>,std::allocator<std::pair<CVisual * const,CDropShadow::ShadowIntermediates>>,0>>::_Try_emplace<CVisual * const &,>(
        float *a1,
        __int64 a2,
        unsigned __int8 *a3)
{
  __int64 v6; // rbp
  char *v8; // rax
  char *v9; // r14
  __int64 v10; // rdx
  float v11; // xmm0_4
  __int64 v12; // rcx
  float v13; // xmm1_4
  __int64 v14; // rax
  __int64 v15; // rax
  _OWORD v16[2]; // [rsp+30h] [rbp-28h] BYREF
  unsigned __int8 *v17; // [rsp+60h] [rbp+8h] BYREF

  v6 = std::_Conditionally_enabled_hash<CBaseExpression *,1>::operator()(a3);
  std::_Hash<std::_Umap_traits<unsigned __int64,Microsoft::WRL::ComPtr<BamoDataSourceProxy>,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,Microsoft::WRL::ComPtr<BamoDataSourceProxy>>>,0>>::_Find_last<unsigned __int64>(
    a1,
    (__int64 **)v16,
    a3,
    v6);
  if ( *((_QWORD *)&v16[0] + 1) )
  {
    *(_QWORD *)a2 = *((_QWORD *)&v16[0] + 1);
    *(_BYTE *)(a2 + 8) = 0;
  }
  else
  {
    if ( *((_QWORD *)a1 + 2) == 0x2AAAAAAAAAAAAAALL )
      std::_Xlength_error("unordered_map/set too long");
    v8 = (char *)operator new(0x60uLL);
    v17 = a3;
    v9 = v8;
    ____0V__tuple_AEBQEAVCVisual___std__V__tuple___V_1__0A___Z_S___pair_QEAVCVisual__VShadowIntermediates_CDropShadow___std__AEAA_AEAV__tuple_AEBQEAVCVisual___1_AEAV__tuple___V_1_U__integer_sequence__K_0A__1_U__integer_sequence__K_S_1__Z(
      v8 + 16,
      &v17);
    v10 = *((_QWORD *)a1 + 2) + 1LL;
    if ( v10 < 0 )
      v11 = (float)(v10 & 1 | (unsigned int)((unsigned __int64)v10 >> 1))
          + (float)(v10 & 1 | (unsigned int)((unsigned __int64)v10 >> 1));
    else
      v11 = (float)(int)v10;
    v12 = *((_QWORD *)a1 + 7);
    if ( v12 < 0 )
    {
      v14 = *((_QWORD *)a1 + 7) & 1LL | (*((_QWORD *)a1 + 7) >> 1);
      v13 = (float)(int)v14 + (float)(int)v14;
    }
    else
    {
      v13 = (float)(int)v12;
    }
    if ( (float)(v11 / v13) > *a1 )
    {
      v15 = std::_Hash<std::_Umap_traits<enum ShaderLinkingArgument,CShaderLinkingGraphBuilder::Node,std::_Uhash_compare<enum ShaderLinkingArgument,std::hash<enum ShaderLinkingArgument>,std::equal_to<enum ShaderLinkingArgument>>,std::allocator<std::pair<enum ShaderLinkingArgument const,CShaderLinkingGraphBuilder::Node>>,0>>::_Desired_grow_bucket_count(a1);
      std::_Hash<std::_Umap_traits<CVisual *,CDropShadow::ShadowIntermediates,std::_Uhash_compare<CVisual *,std::hash<CVisual *>,std::equal_to<CVisual *>>,std::allocator<std::pair<CVisual * const,CDropShadow::ShadowIntermediates>>,0>>::_Forced_rehash(
        a1,
        v15);
      v16[0] = *(_OWORD *)std::_Hash<std::_Umap_traits<unsigned __int64,Microsoft::WRL::ComPtr<BamoDataSourceProxy>,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,Microsoft::WRL::ComPtr<BamoDataSourceProxy>>>,0>>::_Find_last<unsigned __int64>(
                            a1,
                            (__int64 **)v16,
                            (_QWORD *)v9 + 2,
                            v6);
    }
    *(_QWORD *)a2 = std::_Hash<std::_Umap_traits<EffectDescriptionKey,CEffectCompilationTask *,std::_Uhash_compare<EffectDescriptionKey,std::hash<EffectDescriptionKey>,std::equal_to<EffectDescriptionKey>>,std::allocator<std::pair<EffectDescriptionKey const,CEffectCompilationTask *>>,0>>::_Insert_new_node_before(
                      a1,
                      v6,
                      *(_QWORD *)&v16[0],
                      v9);
    *(_BYTE *)(a2 + 8) = 1;
  }
  return a2;
}
