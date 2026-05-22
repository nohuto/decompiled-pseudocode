/*
 * XREFs of ??$emplace@K@?$_Hash@V?$_Uset_traits@KV?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@K@2@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@K@std@@@std@@@std@@_N@1@$$QEAK@Z @ 0x18003E05C
 * Callers:
 *     ?List@PointerMetadata@@YAXPEAUInputInfo@@AEAV?$unordered_set@KU?$hash@K@std@@U?$equal_to@K@2@V?$allocator@K@2@@std@@@Z @ 0x18003DFF0 (-List@PointerMetadata@@YAXPEAUInputInfo@@AEAV-$unordered_set@KU-$hash@K@std@@U-$equal_to@K@2@V-$.c)
 * Callees:
 *     ?_Assign_grow@?$_Hash_vec@V?$allocator@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUMessageInfo@ResizeProcessor@@@std@@@std@@@std@@@std@@@std@@@std@@QEAAX_KV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUMessageInfo@ResizeProcessor@@@std@@@std@@@std@@@2@@Z @ 0x180011A60 (-_Assign_grow@-$_Hash_vec@V-$allocator@V-$_List_unchecked_iterator@V-$_List_val@U-$_List_simple_.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x1800880DC (--$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 *     ??R?$_Conditionally_enabled_hash@W4TestCommandMessageType@@$00@std@@SA_KAEBW4TestCommandMessageType@@@Z @ 0x18008A0A8 (--R-$_Conditionally_enabled_hash@W4TestCommandMessageType@@$00@std@@SA_KAEBW4TestCommandMessageT.c)
 *     _o_ceilf_0 @ 0x18009AB30 (_o_ceilf_0.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall std::_Hash<std::_Uset_traits<unsigned long,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<unsigned long>,0>>::emplace<unsigned long>(
        __int64 a1,
        __int64 a2,
        unsigned __int8 *a3)
{
  __int64 *v6; // r13
  __int64 v7; // rax
  unsigned __int64 v8; // rcx
  unsigned __int64 *v9; // r12
  unsigned __int64 v10; // rbx
  __int64 v11; // rax
  __int64 *v12; // rdx
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v17; // rsi
  unsigned __int64 v18; // rdi
  __int64 v19; // rcx
  float v20; // xmm0_4
  float v21; // xmm2_4
  float v22; // xmm0_4
  unsigned __int64 v23; // rcx
  unsigned __int64 v24; // rax
  unsigned __int64 v25; // rcx
  unsigned __int64 v26; // rcx
  __int64 v27; // r9
  _QWORD *v28; // rbx
  __int64 v29; // rax
  __int64 v30; // r11
  __int64 v31; // r8
  __int64 v32; // r9
  _QWORD *v33; // r11
  unsigned __int64 v34; // rax
  _QWORD *v35; // rax
  int v36; // ecx
  _QWORD *v37; // r10
  _QWORD *v38; // rdx
  _QWORD *v39; // rcx
  _QWORD *v40; // rax
  __int64 v41; // r10
  _QWORD *v42; // rdx
  _QWORD *v43; // rcx
  _QWORD *v44; // rax
  __int64 v45; // r8
  _QWORD *v46; // rdx
  _QWORD *v47; // rcx
  _QWORD *v48; // rax
  unsigned __int64 v49; // rcx
  __int64 v50; // rbx
  unsigned __int64 v51; // r15
  __int64 v52; // [rsp+80h] [rbp+18h]

  v52 = std::_Conditionally_enabled_hash<enum TestCommandMessageType,1>::operator()(a3);
  v6 = (__int64 *)(a1 + 24);
  v7 = *(_QWORD *)(a1 + 24);
  v8 = *(_QWORD *)(v7 + 16 * (*(_QWORD *)(a1 + 48) & v52) + 8);
  v9 = (unsigned __int64 *)(a1 + 8);
  v10 = *(_QWORD *)(a1 + 8);
  if ( v8 != v10 )
  {
    v11 = *(_QWORD *)(v7 + 16 * (*(_QWORD *)(a1 + 48) & v52));
    while ( 1 )
    {
      if ( *(_DWORD *)a3 == *(_DWORD *)(v8 + 16) )
      {
        *(_QWORD *)a2 = v8;
        *(_BYTE *)(a2 + 8) = 0;
        return a2;
      }
      if ( v8 == v11 )
        break;
      v8 = *(_QWORD *)(v8 + 8);
    }
    v10 = v8;
  }
  if ( *(_QWORD *)(a1 + 16) == 0xAAAAAAAAAAAAAAALL )
    std::_Xlength_error("unordered_map/set too long");
  v17 = std::_Allocate<16,std::_Default_allocate_traits>(24LL);
  *(_DWORD *)(v17 + 16) = *(_DWORD *)a3;
  v18 = *(_QWORD *)(a1 + 56);
  v19 = *(_QWORD *)(a1 + 16) + 1LL;
  if ( v19 < 0 )
    v20 = (float)(v19 & 1 | (unsigned int)((unsigned __int64)v19 >> 1))
        + (float)(v19 & 1 | (unsigned int)((unsigned __int64)v19 >> 1));
  else
    v20 = (float)(int)v19;
  if ( (v18 & 0x8000000000000000uLL) != 0LL )
    v21 = (float)(int)(v18 & 1 | (v18 >> 1)) + (float)(int)(v18 & 1 | (v18 >> 1));
  else
    v21 = (float)(int)v18;
  if ( (float)(v20 / v21) <= *(float *)a1 )
  {
    v27 = v52;
    goto LABEL_10;
  }
  v22 = o_ceilf_0(v20 / *(float *)a1);
  v23 = 0LL;
  if ( v22 >= 9.223372e18 )
  {
    v22 = v22 - 9.223372e18;
    if ( v22 < 9.223372e18 )
      v23 = 0x8000000000000000uLL;
  }
  v24 = v23 + (unsigned int)(int)v22;
  v25 = 8LL;
  if ( v24 > 8 )
    v25 = v24;
  if ( v18 < v25 )
  {
    if ( v18 >= 0x200 || (v18 *= 8LL, v18 < v25) )
      v18 = v25;
  }
  _BitScanReverse64(&v26, 0xFFFFFFFFFFFFFFFuLL);
  if ( v18 > 1LL << v26 )
    std::_Xlength_error("invalid hash bucket count");
  _BitScanReverse64(&v49, (v18 - 1) | 1);
  v50 = 1LL << ((unsigned __int8)v49 + 1);
  v51 = *v9;
  std::_Hash_vec<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned long const,ResizeProcessor::MessageInfo>>>>>>::_Assign_grow(
    (unsigned __int64 **)(a1 + 24),
    2 * v50,
    *v9);
  *(_QWORD *)(a1 + 48) = v50 - 1;
  *(_QWORD *)(a1 + 56) = v50;
  v33 = *(_QWORD **)*v9;
  v28 = v33;
  while ( v33 != (_QWORD *)v51 )
  {
    v28 = (_QWORD *)*v28;
    v29 = std::_Conditionally_enabled_hash<enum TestCommandMessageType,1>::operator()((unsigned __int8 *)v33 + 16);
    v31 = 2 * (*(_QWORD *)(a1 + 48) & v29);
    v32 = *v6;
    if ( *(_QWORD *)(*v6 + 16 * (*(_QWORD *)(a1 + 48) & v29)) == v51 )
    {
      *(_QWORD *)(v32 + 16 * (*(_QWORD *)(a1 + 48) & v29)) = v30;
LABEL_42:
      *(_QWORD *)(v32 + 8 * v31 + 8) = v30;
      goto LABEL_43;
    }
    v35 = *(_QWORD **)(v32 + 16 * (*(_QWORD *)(a1 + 48) & v29) + 8);
    v36 = *(_DWORD *)(v30 + 16);
    if ( v36 == *((_DWORD *)v35 + 4) )
    {
      v41 = *v35;
      if ( *v35 != v30 )
      {
        v42 = *(_QWORD **)(v30 + 8);
        *v42 = v28;
        v43 = (_QWORD *)v28[1];
        *v43 = v41;
        v44 = *(_QWORD **)(v41 + 8);
        *v44 = v30;
        *(_QWORD *)(v41 + 8) = v43;
        v28[1] = v42;
        *(_QWORD *)(v30 + 8) = v44;
      }
      goto LABEL_42;
    }
    do
    {
      v37 = v35 + 1;
      if ( *(_QWORD **)(v32 + 8 * v31) == v35 )
      {
        v38 = *(_QWORD **)(v30 + 8);
        *v38 = v28;
        v39 = (_QWORD *)v28[1];
        *v39 = v35;
        v40 = (_QWORD *)*v37;
        *v40 = v30;
        *v37 = v39;
        v28[1] = v38;
        *(_QWORD *)(v30 + 8) = v40;
        *(_QWORD *)(v32 + 8 * v31) = v30;
        goto LABEL_43;
      }
      v35 = (_QWORD *)*v37;
    }
    while ( v36 != *(_DWORD *)(*v37 + 16LL) );
    v45 = *v35;
    v46 = *(_QWORD **)(v30 + 8);
    *v46 = v28;
    v47 = (_QWORD *)v28[1];
    *v47 = v45;
    v48 = *(_QWORD **)(v45 + 8);
    *v48 = v30;
    *(_QWORD *)(v45 + 8) = v47;
    v28[1] = v46;
    *(_QWORD *)(v30 + 8) = v48;
LABEL_43:
    v33 = v28;
  }
  v27 = v52;
  v34 = *(_QWORD *)(*v6 + 16 * (v52 & *(_QWORD *)(a1 + 48)) + 8);
  v10 = *v9;
  if ( v34 != *v9 )
  {
    while ( 1 )
    {
      if ( *(_DWORD *)(v17 + 16) == *(_DWORD *)(v34 + 16) )
      {
        v10 = *(_QWORD *)v34;
        goto LABEL_10;
      }
      if ( v34 == *(_QWORD *)(*v6 + 16 * (v52 & *(_QWORD *)(a1 + 48))) )
        break;
      v34 = *(_QWORD *)(v34 + 8);
    }
    v10 = v34;
  }
LABEL_10:
  v12 = *(__int64 **)(v10 + 8);
  ++*(_QWORD *)(a1 + 16);
  *(_QWORD *)v17 = v10;
  *(_QWORD *)(v17 + 8) = v12;
  *v12 = v17;
  *(_QWORD *)(v10 + 8) = v17;
  v13 = 2 * (v27 & *(_QWORD *)(a1 + 48));
  v14 = *v6;
  v15 = *(_QWORD *)(*v6 + 16 * (v27 & *(_QWORD *)(a1 + 48)));
  if ( v15 == *v9 )
  {
    *(_QWORD *)(v14 + 16 * (v27 & *(_QWORD *)(a1 + 48))) = v17;
    goto LABEL_12;
  }
  if ( v15 == v10 )
  {
    *(_QWORD *)(v14 + 16 * (v27 & *(_QWORD *)(a1 + 48))) = v17;
  }
  else if ( *(__int64 **)(v14 + 16 * (v27 & *(_QWORD *)(a1 + 48)) + 8) == v12 )
  {
LABEL_12:
    *(_QWORD *)(v14 + 8 * v13 + 8) = v17;
  }
  *(_QWORD *)a2 = v17;
  *(_BYTE *)(a2 + 8) = 1;
  return a2;
}
