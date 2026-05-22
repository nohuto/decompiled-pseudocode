/*
 * XREFs of ?_Forced_rehash@?$_Hash@V?$_Umap_traits@KW4ContextualProcessorDecision@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKW4ContextualProcessorDecision@@@std@@@3@$0A@@std@@@std@@IEAAX_K@Z @ 0x18001E428
 * Callers:
 *     ?_Rehash_for_1@?$_Hash@V?$_Umap_traits@KW4ContextualProcessorDecision@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKW4ContextualProcessorDecision@@@std@@@3@$0A@@std@@@std@@IEAAXXZ @ 0x18001E850 (-_Rehash_for_1@-$_Hash@V-$_Umap_traits@KW4ContextualProcessorDecision@@V-$_Uhash_compare@KU-$has.c)
 * Callees:
 *     ??$fill@PEAV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KPEAUIMPCTarget@@@std@@@std@@@std@@@std@@V12@@std@@YAXQEAV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KPEAUIMPCTarget@@@std@@@std@@@std@@@0@0AEBV10@@Z @ 0x18001E3B0 (--$fill@PEAV-$_List_unchecked_iterator@V-$_List_val@U-$_List_simple_types@U-$pair@$$CB_KPEAUIMPC.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x1800880DC (--$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 *     ??R?$_Conditionally_enabled_hash@W4TestCommandMessageType@@$00@std@@SA_KAEBW4TestCommandMessageType@@@Z @ 0x18008A0A8 (--R-$_Conditionally_enabled_hash@W4TestCommandMessageType@@$00@std@@SA_KAEBW4TestCommandMessageT.c)
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x18008A790 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 *     ?_Throw_bad_array_new_length@std@@YAXXZ @ 0x18009891C (-_Throw_bad_array_new_length@std@@YAXXZ.c)
 */

__int64 __fastcall std::_Hash<std::_Umap_traits<unsigned long,enum ContextualProcessorDecision,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,enum ContextualProcessorDecision>>,0>>::_Forced_rehash(
        __int64 a1,
        unsigned __int64 a2)
{
  unsigned __int64 v3; // rcx
  unsigned __int64 v4; // rdi
  unsigned __int64 v5; // rax
  unsigned __int64 *v6; // rdx
  unsigned __int64 v7; // rcx
  __int64 v8; // r14
  unsigned __int64 v9; // rax
  __int64 v10; // r15
  __int64 v11; // rax
  __int64 v12; // rcx
  unsigned __int64 *v13; // rbx
  __int64 v14; // rdx
  unsigned __int64 *v15; // rax
  __int64 result; // rax
  _QWORD *v17; // r11
  _QWORD *v18; // rbx
  __int64 v19; // r11
  __int64 v20; // r9
  __int64 v21; // r8
  int v22; // ecx
  __int64 *v23; // r10
  _QWORD *v24; // rdx
  __int64 *v25; // rcx
  __int64 v26; // r10
  _QWORD *v27; // rdx
  _QWORD *v28; // rcx
  __int64 v29; // r8
  _QWORD *v30; // rdx
  _QWORD *v31; // rcx
  unsigned __int64 v32; // [rsp+48h] [rbp+10h] BYREF

  LODWORD(v32) = 0;
  _BitScanReverse64(&v3, 0xFFFFFFFFFFFFFFFuLL);
  if ( a2 > 1LL << v3 )
    std::_Xlength_error("invalid hash bucket count");
  v4 = *(_QWORD *)(a1 + 8);
  v5 = a2 - 1;
  v6 = *(unsigned __int64 **)(a1 + 32);
  _BitScanReverse64(&v7, v5 | 1);
  LODWORD(v32) = 0;
  v8 = 1LL << ((unsigned __int8)v7 + 1);
  v9 = ((__int64)v6 - *(_QWORD *)(a1 + 24)) >> 3;
  v32 = v4;
  if ( v9 >= 2 * v8 )
  {
    std::fill<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned __int64 const,IMPCTarget *>>>> *,std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned __int64 const,IMPCTarget *>>>>>(
      *(unsigned __int64 **)(a1 + 24),
      v6,
      &v32);
  }
  else
  {
    if ( (unsigned __int64)(2 * v8) > 0x1FFFFFFFFFFFFFFFLL )
      std::_Throw_bad_array_new_length();
    v10 = 2 * v8;
    v11 = std::_Allocate<16,std::_Default_allocate_traits>(16 * v8);
    v12 = *(_QWORD *)(a1 + 24);
    v13 = (unsigned __int64 *)v11;
    v14 = (*(_QWORD *)(a1 + 40) - v12) >> 3;
    if ( v14 )
      std::_Deallocate<16>(v12, 8 * v14);
    v15 = &v13[v10];
    *(_QWORD *)(a1 + 24) = v13;
    *(_QWORD *)(a1 + 32) = &v13[v10];
    *(_QWORD *)(a1 + 40) = &v13[v10];
    while ( v13 != v15 )
      *v13++ = v4;
  }
  *(_QWORD *)(a1 + 56) = v8;
  result = v8 - 1;
  *(_QWORD *)(a1 + 48) = v8 - 1;
  v17 = **(_QWORD ***)(a1 + 8);
  v18 = v17;
  while ( v17 != (_QWORD *)v4 )
  {
    v18 = (_QWORD *)*v18;
    result = std::_Conditionally_enabled_hash<enum TestCommandMessageType,1>::operator()((unsigned __int8 *)v17 + 16);
    v20 = *(_QWORD *)(a1 + 24);
    v21 = 2 * (*(_QWORD *)(a1 + 48) & result);
    if ( *(_QWORD *)(v20 + 16 * (*(_QWORD *)(a1 + 48) & result)) == v4 )
    {
      *(_QWORD *)(v20 + 16 * (*(_QWORD *)(a1 + 48) & result)) = v19;
LABEL_24:
      *(_QWORD *)(v20 + 8 * v21 + 8) = v19;
      goto LABEL_15;
    }
    result = *(_QWORD *)(v20 + 16 * (*(_QWORD *)(a1 + 48) & result) + 8);
    v22 = *(_DWORD *)(v19 + 16);
    if ( v22 == *(_DWORD *)(result + 16) )
    {
      v26 = *(_QWORD *)result;
      if ( *(_QWORD *)result != v19 )
      {
        v27 = *(_QWORD **)(v19 + 8);
        *v27 = v18;
        v28 = (_QWORD *)v18[1];
        *v28 = v26;
        result = *(_QWORD *)(v26 + 8);
        *(_QWORD *)result = v19;
        *(_QWORD *)(v26 + 8) = v28;
        v18[1] = v27;
        *(_QWORD *)(v19 + 8) = result;
      }
      goto LABEL_24;
    }
    do
    {
      v23 = (__int64 *)(result + 8);
      if ( *(_QWORD *)(v20 + 8 * v21) == result )
      {
        v24 = *(_QWORD **)(v19 + 8);
        *v24 = v18;
        v25 = (__int64 *)v18[1];
        *v25 = result;
        result = *v23;
        *(_QWORD *)result = v19;
        *v23 = (__int64)v25;
        v18[1] = v24;
        *(_QWORD *)(v19 + 8) = result;
        *(_QWORD *)(v20 + 8 * v21) = v19;
        goto LABEL_15;
      }
      result = *v23;
    }
    while ( v22 != *(_DWORD *)(*v23 + 16) );
    v29 = *(_QWORD *)result;
    v30 = *(_QWORD **)(v19 + 8);
    *v30 = v18;
    v31 = (_QWORD *)v18[1];
    *v31 = v29;
    result = *(_QWORD *)(v29 + 8);
    *(_QWORD *)result = v19;
    *(_QWORD *)(v29 + 8) = v31;
    v18[1] = v30;
    *(_QWORD *)(v19 + 8) = result;
LABEL_15:
    v17 = v18;
  }
  return result;
}
