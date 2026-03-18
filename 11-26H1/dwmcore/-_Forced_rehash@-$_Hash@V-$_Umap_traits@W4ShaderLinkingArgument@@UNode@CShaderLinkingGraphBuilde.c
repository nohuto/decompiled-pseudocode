/*
 * XREFs of ?_Forced_rehash@?$_Hash@V?$_Umap_traits@W4ShaderLinkingArgument@@UNode@CShaderLinkingGraphBuilder@@V?$_Uhash_compare@W4ShaderLinkingArgument@@U?$hash@W4ShaderLinkingArgument@@@std@@U?$equal_to@W4ShaderLinkingArgument@@@3@@std@@V?$allocator@U?$pair@$$CBW4ShaderLinkingArgument@@UNode@CShaderLinkingGraphBuilder@@@std@@@5@$0A@@std@@@std@@IEAAX_K@Z @ 0x1801488B0
 * Callers:
 *     ?_Rehash_for_1@?$_Hash@V?$_Umap_traits@W4ShaderLinkingArgument@@UNode@CShaderLinkingGraphBuilder@@V?$_Uhash_compare@W4ShaderLinkingArgument@@U?$hash@W4ShaderLinkingArgument@@@std@@U?$equal_to@W4ShaderLinkingArgument@@@3@@std@@V?$allocator@U?$pair@$$CBW4ShaderLinkingArgument@@UNode@CShaderLinkingGraphBuilder@@@std@@@5@$0A@@std@@@std@@IEAAXXZ @ 0x180148824 (-_Rehash_for_1@-$_Hash@V-$_Umap_traits@W4ShaderLinkingArgument@@UNode@CShaderLinkingGraphBuilder.c)
 * Callees:
 *     ?_Assign_grow@?$_Hash_vec@V?$allocator@V?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@PEAUIUnknown@@@std@@@std@@U_Iterator_base0@2@@std@@@std@@@std@@QEAAX_KV?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@PEAUIUnknown@@@std@@@std@@U_Iterator_base0@2@@2@@Z @ 0x1800E8884 (-_Assign_grow@-$_Hash_vec@V-$allocator@V-$_List_unchecked_const_iterator@V-$_List_val@U-$_List_s.c)
 *     ??R?$_Conditionally_enabled_hash@W4ShaderLinkingArgument@@$00@std@@SA_KAEBW4ShaderLinkingArgument@@@Z @ 0x18025F4F4 (--R-$_Conditionally_enabled_hash@W4ShaderLinkingArgument@@$00@std@@SA_KAEBW4ShaderLinkingArgumen.c)
 */

__int64 __fastcall std::_Hash<std::_Umap_traits<enum ShaderLinkingArgument,CShaderLinkingGraphBuilder::Node,std::_Uhash_compare<enum ShaderLinkingArgument,std::hash<enum ShaderLinkingArgument>,std::equal_to<enum ShaderLinkingArgument>>,std::allocator<std::pair<enum ShaderLinkingArgument const,CShaderLinkingGraphBuilder::Node>>,0>>::_Forced_rehash(
        _QWORD *a1,
        unsigned __int64 a2)
{
  unsigned __int64 v3; // rcx
  unsigned __int64 v4; // rdi
  unsigned __int64 v5; // rcx
  __int64 v6; // rbx
  __int64 result; // rax
  _QWORD *v8; // r11
  _QWORD *v9; // rbx
  __int64 v10; // r11
  __int64 v11; // r9
  __int64 v12; // r8
  __int16 v13; // cx
  __int64 *v14; // r10
  __int64 v15; // r8
  _QWORD *v16; // rdx
  _QWORD *v17; // rcx
  __int64 v18; // r10
  _QWORD *v19; // rdx
  _QWORD *v20; // rcx
  _QWORD *v21; // rdx
  __int64 *v22; // rcx

  _BitScanReverse64(&v3, 0xFFFFFFFFFFFFFFFuLL);
  if ( a2 > 1LL << v3 )
    std::_Xlength_error("invalid hash bucket count");
  v4 = a1[1];
  _BitScanReverse64(&v5, (a2 - 1) | 1);
  v6 = 1LL << ((unsigned __int8)v5 + 1);
  std::_Hash_vec<std::allocator<std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<IUnknown *>>,std::_Iterator_base0>>>::_Assign_grow(
    (__int64)(a1 + 3),
    2 * v6,
    v4);
  a1[7] = v6;
  result = v6 - 1;
  a1[6] = v6 - 1;
  v8 = *(_QWORD **)a1[1];
  v9 = v8;
  while ( v8 != (_QWORD *)v4 )
  {
    v9 = (_QWORD *)*v9;
    result = std::_Conditionally_enabled_hash<enum ShaderLinkingArgument,1>::operator()((unsigned __int8 *)v8 + 16);
    v11 = a1[3];
    v12 = 2 * (a1[6] & result);
    if ( *(_QWORD *)(v11 + 16 * (a1[6] & result)) == v4 )
    {
      *(_QWORD *)(v11 + 16 * (a1[6] & result)) = v10;
LABEL_6:
      *(_QWORD *)(v11 + 8 * v12 + 8) = v10;
      goto LABEL_7;
    }
    result = *(_QWORD *)(v11 + 16 * (a1[6] & result) + 8);
    v13 = *(_WORD *)(v10 + 16);
    if ( v13 == *(_WORD *)(result + 16) )
    {
      v18 = *(_QWORD *)result;
      if ( *(_QWORD *)result != v10 )
      {
        v19 = *(_QWORD **)(v10 + 8);
        *v19 = v9;
        v20 = (_QWORD *)v9[1];
        *v20 = v18;
        result = *(_QWORD *)(v18 + 8);
        *(_QWORD *)result = v10;
        *(_QWORD *)(v18 + 8) = v20;
        v9[1] = v19;
        *(_QWORD *)(v10 + 8) = result;
      }
      goto LABEL_6;
    }
    while ( 1 )
    {
      v14 = (__int64 *)(result + 8);
      if ( *(_QWORD *)(v11 + 8 * v12) == result )
        break;
      result = *v14;
      if ( v13 == *(_WORD *)(*v14 + 16) )
      {
        v15 = *(_QWORD *)result;
        v16 = *(_QWORD **)(v10 + 8);
        *v16 = v9;
        v17 = (_QWORD *)v9[1];
        *v17 = v15;
        result = *(_QWORD *)(v15 + 8);
        *(_QWORD *)result = v10;
        *(_QWORD *)(v15 + 8) = v17;
        v9[1] = v16;
        *(_QWORD *)(v10 + 8) = result;
        goto LABEL_7;
      }
    }
    v21 = *(_QWORD **)(v10 + 8);
    *v21 = v9;
    v22 = (__int64 *)v9[1];
    *v22 = result;
    result = *v14;
    *(_QWORD *)result = v10;
    *v14 = (__int64)v22;
    v9[1] = v21;
    *(_QWORD *)(v10 + 8) = result;
    *(_QWORD *)(v11 + 8 * v12) = v10;
LABEL_7:
    v8 = v9;
  }
  return result;
}
