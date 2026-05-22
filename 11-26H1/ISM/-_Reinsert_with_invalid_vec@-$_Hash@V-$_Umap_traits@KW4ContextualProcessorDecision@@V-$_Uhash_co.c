/*
 * XREFs of ?_Reinsert_with_invalid_vec@?$_Hash@V?$_Umap_traits@KW4ContextualProcessorDecision@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKW4ContextualProcessorDecision@@@std@@@3@$0A@@std@@@std@@IEAAXXZ @ 0x180019AC4
 * Callers:
 *     ?DeliverInput@ContextualProcessorBuffer@@UEAAJPEAUInputInfo@@@Z @ 0x1800176E0 (-DeliverInput@ContextualProcessorBuffer@@UEAAJPEAUInputInfo@@@Z.c)
 *     ?MakeContextualProcessorDecision@ContextualProcessorBuffer@@AEAAJPEAUInputInfo@@AEAUContextualProcessorResponse@@AEAUContextualProcessorMetadata@1@AEAV?$unordered_map@KV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@U?$hash@K@std@@U?$equal_to@K@5@V?$allocator@U?$pair@$$CBKV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@std@@@5@@std@@AEAV?$unordered_set@KU?$hash@K@std@@U?$equal_to@K@2@V?$allocator@K@2@@6@@Z @ 0x180018FB0 (-MakeContextualProcessorDecision@ContextualProcessorBuffer@@AEAAJPEAUInputInfo@@AEAUContextualPr.c)
 *     ??4?$_Hash@V?$_Umap_traits@KW4ContextualProcessorDecision@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKW4ContextualProcessorDecision@@@std@@@3@$0A@@std@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x18001B3C4 (--4-$_Hash@V-$_Umap_traits@KW4ContextualProcessorDecision@@V-$_Uhash_compare@KU-$hash@K@std@@U-$.c)
 * Callees:
 *     ??$fill@PEAV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KPEAUIMPCTarget@@@std@@@std@@@std@@@std@@V12@@std@@YAXQEAV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KPEAUIMPCTarget@@@std@@@std@@@std@@@0@0AEBV10@@Z @ 0x18001E3B0 (--$fill@PEAV-$_List_unchecked_iterator@V-$_List_val@U-$_List_simple_types@U-$pair@$$CB_KPEAUIMPC.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x1800880DC (--$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 *     ??R?$_Conditionally_enabled_hash@W4TestCommandMessageType@@$00@std@@SA_KAEBW4TestCommandMessageType@@@Z @ 0x18008A0A8 (--R-$_Conditionally_enabled_hash@W4TestCommandMessageType@@$00@std@@SA_KAEBW4TestCommandMessageT.c)
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x18008A790 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 *     ?_Throw_bad_array_new_length@std@@YAXXZ @ 0x18009891C (-_Throw_bad_array_new_length@std@@YAXXZ.c)
 *     _o_ceilf_0 @ 0x18009AB30 (_o_ceilf_0.c)
 */

__int64 __fastcall std::_Hash<std::_Umap_traits<unsigned long,enum ContextualProcessorDecision,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,enum ContextualProcessorDecision>>,0>>::_Reinsert_with_invalid_vec(
        __int64 a1)
{
  unsigned __int64 v1; // rbx
  __int64 v3; // rcx
  float v4; // xmm0_4
  float v5; // xmm0_4
  unsigned __int64 v6; // rcx
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rcx
  unsigned __int64 v9; // rcx
  __int64 v10; // rdx
  _QWORD *v11; // rdi
  unsigned __int64 v12; // rcx
  __int64 v13; // r14
  unsigned __int64 v14; // rax
  __int64 v15; // r15
  __int64 v16; // rax
  __int64 v17; // rcx
  _QWORD *v18; // rbx
  __int64 v19; // rdx
  _QWORD *v20; // rax
  __int64 result; // rax
  _QWORD *v22; // r11
  _QWORD *v23; // rbx
  __int64 v24; // r11
  __int64 v25; // r9
  __int64 v26; // r8
  int v27; // ecx
  __int64 *v28; // r10
  _QWORD *v29; // rdx
  __int64 *v30; // rcx
  __int64 v31; // r10
  _QWORD *v32; // rdx
  _QWORD *v33; // rcx
  __int64 v34; // r8
  _QWORD *v35; // rdx
  _QWORD *v36; // rcx
  _QWORD *v37; // [rsp+40h] [rbp+8h] BYREF

  v1 = *(_QWORD *)(a1 + 56);
  v3 = *(_QWORD *)(a1 + 16);
  if ( v3 < 0 )
    v4 = (float)(v3 & 1 | (unsigned int)((unsigned __int64)v3 >> 1))
       + (float)(v3 & 1 | (unsigned int)((unsigned __int64)v3 >> 1));
  else
    v4 = (float)(int)v3;
  v5 = o_ceilf_0(v4 / *(float *)a1);
  v6 = 0LL;
  if ( v5 >= 9.223372e18 )
  {
    v5 = v5 - 9.223372e18;
    if ( v5 < 9.223372e18 )
      v6 = 0x8000000000000000uLL;
  }
  v7 = v6 + (unsigned int)(int)v5;
  v8 = 8LL;
  if ( v7 > 8 )
    v8 = v7;
  if ( v1 < v8 )
  {
    if ( v1 >= 0x200 || (v1 *= 8LL, v1 < v8) )
      v1 = v8;
  }
  LODWORD(v37) = 0;
  _BitScanReverse64(&v9, 0xFFFFFFFFFFFFFFFuLL);
  if ( v1 > 1LL << v9 )
    std::_Xlength_error("invalid hash bucket count");
  v10 = *(_QWORD *)(a1 + 32);
  v11 = *(_QWORD **)(a1 + 8);
  _BitScanReverse64(&v12, (v1 - 1) | 1);
  LODWORD(v37) = 0;
  v13 = 1LL << ((unsigned __int8)v12 + 1);
  v14 = (v10 - *(_QWORD *)(a1 + 24)) >> 3;
  v37 = v11;
  if ( v14 >= 2 * v13 )
  {
    std::fill<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned __int64 const,IMPCTarget *>>>> *,std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned __int64 const,IMPCTarget *>>>>>(
      *(_QWORD *)(a1 + 24),
      v10,
      &v37);
  }
  else
  {
    if ( (unsigned __int64)(2 * v13) > 0x1FFFFFFFFFFFFFFFLL )
      std::_Throw_bad_array_new_length();
    v15 = 2 * v13;
    v16 = std::_Allocate<16,std::_Default_allocate_traits>(16 * v13);
    v17 = *(_QWORD *)(a1 + 24);
    v18 = (_QWORD *)v16;
    v19 = (*(_QWORD *)(a1 + 40) - v17) >> 3;
    if ( v19 )
      std::_Deallocate<16>(v17, 8 * v19);
    v20 = &v18[v15];
    *(_QWORD *)(a1 + 24) = v18;
    *(_QWORD *)(a1 + 32) = &v18[v15];
    *(_QWORD *)(a1 + 40) = &v18[v15];
    while ( v18 != v20 )
      *v18++ = v11;
  }
  *(_QWORD *)(a1 + 56) = v13;
  result = v13 - 1;
  *(_QWORD *)(a1 + 48) = v13 - 1;
  v22 = **(_QWORD ***)(a1 + 8);
  v23 = v22;
  while ( v22 != v11 )
  {
    v23 = (_QWORD *)*v23;
    result = std::_Conditionally_enabled_hash<enum TestCommandMessageType,1>::operator()((unsigned __int8 *)v22 + 16);
    v25 = *(_QWORD *)(a1 + 24);
    v26 = 2 * (*(_QWORD *)(a1 + 48) & result);
    if ( *(_QWORD **)(v25 + 16 * (*(_QWORD *)(a1 + 48) & result)) == v11 )
    {
      *(_QWORD *)(v25 + 16 * (*(_QWORD *)(a1 + 48) & result)) = v24;
LABEL_34:
      *(_QWORD *)(v25 + 8 * v26 + 8) = v24;
      goto LABEL_25;
    }
    result = *(_QWORD *)(v25 + 16 * (*(_QWORD *)(a1 + 48) & result) + 8);
    v27 = *(_DWORD *)(v24 + 16);
    if ( v27 == *(_DWORD *)(result + 16) )
    {
      v31 = *(_QWORD *)result;
      if ( *(_QWORD *)result != v24 )
      {
        v32 = *(_QWORD **)(v24 + 8);
        *v32 = v23;
        v33 = (_QWORD *)v23[1];
        *v33 = v31;
        result = *(_QWORD *)(v31 + 8);
        *(_QWORD *)result = v24;
        *(_QWORD *)(v31 + 8) = v33;
        v23[1] = v32;
        *(_QWORD *)(v24 + 8) = result;
      }
      goto LABEL_34;
    }
    do
    {
      v28 = (__int64 *)(result + 8);
      if ( *(_QWORD *)(v25 + 8 * v26) == result )
      {
        v29 = *(_QWORD **)(v24 + 8);
        *v29 = v23;
        v30 = (__int64 *)v23[1];
        *v30 = result;
        result = *v28;
        *(_QWORD *)result = v24;
        *v28 = (__int64)v30;
        v23[1] = v29;
        *(_QWORD *)(v24 + 8) = result;
        *(_QWORD *)(v25 + 8 * v26) = v24;
        goto LABEL_25;
      }
      result = *v28;
    }
    while ( v27 != *(_DWORD *)(*v28 + 16) );
    v34 = *(_QWORD *)result;
    v35 = *(_QWORD **)(v24 + 8);
    *v35 = v23;
    v36 = (_QWORD *)v23[1];
    *v36 = v34;
    result = *(_QWORD *)(v34 + 8);
    *(_QWORD *)result = v24;
    *(_QWORD *)(v34 + 8) = v36;
    v23[1] = v35;
    *(_QWORD *)(v24 + 8) = result;
LABEL_25:
    v22 = v23;
  }
  return result;
}
