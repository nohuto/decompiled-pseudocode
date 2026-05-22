/*
 * XREFs of ?_Forced_rehash@?$_Hash@V?$_Uset_traits@KV?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@K@2@$0A@@std@@@std@@IEAAX_K@Z @ 0x180065BA4
 * Callers:
 *     ?_Rehash_for_1@?$_Hash@V?$_Uset_traits@KV?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@K@2@$0A@@std@@@std@@IEAAXXZ @ 0x180065B78 (-_Rehash_for_1@-$_Hash@V-$_Uset_traits@KV-$_Uhash_compare@KU-$hash@K@std@@U-$equal_to@K@2@@std@@.c)
 *     ??$emplace@AEBW4_Button@@@?$_Hash@V?$_Uset_traits@W4_Button@@V?$_Uhash_compare@W4_Button@@U?$hash@W4_Button@@@std@@U?$equal_to@W4_Button@@@3@@std@@V?$allocator@W4_Button@@@3@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@W4_Button@@@std@@@std@@@std@@_N@1@AEBW4_Button@@@Z @ 0x1800D9344 (--$emplace@AEBW4_Button@@@-$_Hash@V-$_Uset_traits@W4_Button@@V-$_Uhash_compare@W4_Button@@U-$has.c)
 * Callees:
 *     ?_Assign_grow@?$_Hash_vec@V?$allocator@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUMessageInfo@ResizeProcessor@@@std@@@std@@@std@@@std@@@std@@@std@@QEAAX_KV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUMessageInfo@ResizeProcessor@@@std@@@std@@@std@@@2@@Z @ 0x180011A60 (-_Assign_grow@-$_Hash_vec@V-$allocator@V-$_List_unchecked_iterator@V-$_List_val@U-$_List_simple_.c)
 *     ??R?$_Conditionally_enabled_hash@W4TestCommandMessageType@@$00@std@@SA_KAEBW4TestCommandMessageType@@@Z @ 0x18008A0A8 (--R-$_Conditionally_enabled_hash@W4TestCommandMessageType@@$00@std@@SA_KAEBW4TestCommandMessageT.c)
 */

__int64 __fastcall std::_Hash<std::_Uset_traits<unsigned long,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<unsigned long>,0>>::_Forced_rehash(
        __int64 a1,
        unsigned __int64 a2)
{
  unsigned __int64 v3; // rcx
  unsigned __int64 v4; // rbp
  unsigned __int64 v5; // rcx
  __int64 v6; // rbx
  __int64 result; // rax
  _QWORD *v8; // r11
  _QWORD *v9; // rbx
  __int64 v10; // r11
  __int64 v11; // r9
  __int64 v12; // r8
  int v13; // ecx
  __int64 v14; // r10
  _QWORD *v15; // rdx
  _QWORD *v16; // rcx
  __int64 *v17; // r10
  __int64 v18; // r8
  _QWORD *v19; // rdx
  _QWORD *v20; // rcx
  _QWORD *v21; // rdx
  __int64 *v22; // rcx

  _BitScanReverse64(&v3, 0xFFFFFFFFFFFFFFFuLL);
  if ( a2 > 1LL << v3 )
    std::_Xlength_error("invalid hash bucket count");
  v4 = *(_QWORD *)(a1 + 8);
  _BitScanReverse64(&v5, (a2 - 1) | 1);
  v6 = 1LL << ((unsigned __int8)v5 + 1);
  std::_Hash_vec<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned long const,ResizeProcessor::MessageInfo>>>>>>::_Assign_grow(
    (unsigned __int64 **)(a1 + 24),
    2 * v6,
    v4);
  *(_QWORD *)(a1 + 56) = v6;
  result = v6 - 1;
  *(_QWORD *)(a1 + 48) = v6 - 1;
  v8 = **(_QWORD ***)(a1 + 8);
  v9 = v8;
  while ( v8 != (_QWORD *)v4 )
  {
    v9 = (_QWORD *)*v9;
    result = std::_Conditionally_enabled_hash<enum TestCommandMessageType,1>::operator()((unsigned __int8 *)v8 + 16);
    v11 = *(_QWORD *)(a1 + 24);
    v12 = 2 * (*(_QWORD *)(a1 + 48) & result);
    if ( *(_QWORD *)(v11 + 16 * (*(_QWORD *)(a1 + 48) & result)) == v4 )
    {
      *(_QWORD *)(v11 + 16 * (*(_QWORD *)(a1 + 48) & result)) = v10;
LABEL_7:
      *(_QWORD *)(v11 + 8 * v12 + 8) = v10;
      goto LABEL_15;
    }
    result = *(_QWORD *)(v11 + 16 * (*(_QWORD *)(a1 + 48) & result) + 8);
    v13 = *(_DWORD *)(v10 + 16);
    if ( v13 == *(_DWORD *)(result + 16) )
    {
      v14 = *(_QWORD *)result;
      if ( *(_QWORD *)result != v10 )
      {
        v15 = *(_QWORD **)(v10 + 8);
        *v15 = v9;
        v16 = (_QWORD *)v9[1];
        *v16 = v14;
        result = *(_QWORD *)(v14 + 8);
        *(_QWORD *)result = v10;
        *(_QWORD *)(v14 + 8) = v16;
        v9[1] = v15;
        *(_QWORD *)(v10 + 8) = result;
      }
      goto LABEL_7;
    }
    while ( 1 )
    {
      v17 = (__int64 *)(result + 8);
      if ( *(_QWORD *)(v11 + 8 * v12) == result )
        break;
      result = *v17;
      if ( v13 == *(_DWORD *)(*v17 + 16) )
      {
        v18 = *(_QWORD *)result;
        v19 = *(_QWORD **)(v10 + 8);
        *v19 = v9;
        v20 = (_QWORD *)v9[1];
        *v20 = v18;
        result = *(_QWORD *)(v18 + 8);
        *(_QWORD *)result = v10;
        *(_QWORD *)(v18 + 8) = v20;
        v9[1] = v19;
        *(_QWORD *)(v10 + 8) = result;
        goto LABEL_15;
      }
    }
    v21 = *(_QWORD **)(v10 + 8);
    *v21 = v9;
    v22 = (__int64 *)v9[1];
    *v22 = result;
    result = *v17;
    *(_QWORD *)result = v10;
    *v17 = (__int64)v22;
    v9[1] = v21;
    *(_QWORD *)(v10 + 8) = result;
    *(_QWORD *)(v11 + 8 * v12) = v10;
LABEL_15:
    v8 = v9;
  }
  return result;
}
