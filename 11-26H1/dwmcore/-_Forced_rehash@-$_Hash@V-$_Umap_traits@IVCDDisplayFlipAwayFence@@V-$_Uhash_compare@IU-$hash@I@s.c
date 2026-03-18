/*
 * XREFs of ?_Forced_rehash@?$_Hash@V?$_Umap_traits@IVCDDisplayFlipAwayFence@@V?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@U?$pair@$$CBIVCDDisplayFlipAwayFence@@@std@@@3@$0A@@std@@@std@@IEAAX_K@Z @ 0x18029B44C
 * Callers:
 *     ??$emplace@AEBUpiecewise_construct_t@std@@V?$tuple@AEAI@2@V?$tuple@$$QEAV?$com_ptr_t@UID3D11Fence@@Uerr_returncode_policy@wil@@@wil@@$$QEAV?$unique_any_t@V?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@@2@$$QEAV?$com_ptr_t@UIDisplayFence@Core@Display@Devices@Windows@@Uerr_returncode_policy@wil@@@2@@2@@?$_Hash@V?$_Umap_traits@IVCDDisplayFlipAwayFence@@V?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@U?$pair@$$CBIVCDDisplayFlipAwayFence@@@std@@@3@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBIVCDDisplayFlipAwayFence@@@std@@@std@@@std@@@std@@_N@1@AEBUpiecewise_construct_t@1@$$QEAV?$tuple@AEAI@1@$$QEAV?$tuple@$$QEAV?$com_ptr_t@UID3D11Fence@@Uerr_returncode_policy@wil@@@wil@@$$QEAV?$unique_any_t@V?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@@2@$$QEAV?$com_ptr_t@UIDisplayFence@Core@Display@Devices@Windows@@Uerr_returncode_policy@wil@@@2@@1@@Z @ 0x18029A008 (--$emplace@AEBUpiecewise_construct_t@std@@V-$tuple@AEAI@2@V-$tuple@$$QEAV-$com_ptr_t@UID3D11Fenc.c)
 * Callees:
 *     ?_Assign_grow@?$_Hash_vec@V?$allocator@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUDCOMPOSITION_PROPERTY_ID@@U1@@std@@@std@@@std@@@std@@@std@@@std@@QEAAX_KV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUDCOMPOSITION_PROPERTY_ID@@U1@@std@@@std@@@std@@@2@@Z @ 0x1801C2C60 (-_Assign_grow@-$_Hash_vec@V-$allocator@V-$_List_unchecked_iterator@V-$_List_val@U-$_ea_1801C2C60.c)
 *     ??R?$_Conditionally_enabled_hash@I$00@std@@SA_KAEBI@Z @ 0x180266F00 (--R-$_Conditionally_enabled_hash@I$00@std@@SA_KAEBI@Z.c)
 *     ??1_Clear_guard@?$_Hash@V?$_Umap_traits@IVCDDisplayFlipAwayFence@@V?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@U?$pair@$$CBIVCDDisplayFlipAwayFence@@@std@@@3@$0A@@std@@@std@@QEAA@XZ @ 0x18029A658 (--1_Clear_guard@-$_Hash@V-$_Umap_traits@IVCDDisplayFlipAwayFence@@V-$_Uhash_compare@IU-$hash@I@s.c)
 */

__int64 __fastcall std::_Hash<std::_Umap_traits<unsigned int,CDDisplayFlipAwayFence,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,CDDisplayFlipAwayFence>>,0>>::_Forced_rehash(
        _QWORD *a1,
        unsigned __int64 a2)
{
  unsigned __int64 v3; // rcx
  unsigned __int64 v4; // rdi
  unsigned __int64 v5; // rcx
  __int64 v6; // rbx
  _QWORD *v7; // r11
  _QWORD *v8; // rbx
  __int64 v9; // rax
  __int64 v10; // r11
  __int64 v11; // r9
  __int64 v12; // r8
  __int64 *v13; // rax
  int v14; // ecx
  __int64 v15; // r10
  _QWORD *v16; // rdx
  _QWORD *v17; // rcx
  _QWORD *v18; // rax
  __int64 **v19; // r10
  __int64 v20; // r8
  _QWORD *v21; // rdx
  _QWORD *v22; // rcx
  _QWORD *v23; // rax
  _QWORD *v24; // rdx
  __int64 **v25; // rcx
  __int64 *v26; // rax
  __int64 v28; // [rsp+48h] [rbp+10h] BYREF

  LODWORD(v28) = 0;
  _BitScanReverse64(&v3, 0xFFFFFFFFFFFFFFFuLL);
  if ( a2 > 1LL << v3 )
    std::_Xlength_error("invalid hash bucket count");
  v4 = a1[1];
  LODWORD(v28) = 0;
  _BitScanReverse64(&v5, (a2 - 1) | 1);
  v6 = 1LL << ((unsigned __int8)v5 + 1);
  std::_Hash_vec<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<DCOMPOSITION_PROPERTY_ID const,DCOMPOSITION_PROPERTY_ID>>>>>>::_Assign_grow(
    (__int64)(a1 + 3),
    2 * v6,
    v4);
  a1[7] = v6;
  a1[6] = v6 - 1;
  v7 = *(_QWORD **)a1[1];
  v8 = v7;
  while ( v7 != (_QWORD *)v4 )
  {
    v8 = (_QWORD *)*v8;
    v9 = std::_Conditionally_enabled_hash<unsigned int,1>::operator()((unsigned __int8 *)v7 + 16);
    v11 = a1[3];
    v12 = 2 * (a1[6] & v9);
    if ( *(_QWORD *)(v11 + 16 * (a1[6] & v9)) == v4 )
    {
      *(_QWORD *)(v11 + 16 * (a1[6] & v9)) = v10;
LABEL_7:
      *(_QWORD *)(v11 + 8 * v12 + 8) = v10;
      goto LABEL_15;
    }
    v13 = *(__int64 **)(v11 + 16 * (a1[6] & v9) + 8);
    v14 = *(_DWORD *)(v10 + 16);
    if ( v14 == *((_DWORD *)v13 + 4) )
    {
      v15 = *v13;
      if ( *v13 != v10 )
      {
        v16 = *(_QWORD **)(v10 + 8);
        *v16 = v8;
        v17 = (_QWORD *)v8[1];
        *v17 = v15;
        v18 = *(_QWORD **)(v15 + 8);
        *v18 = v10;
        *(_QWORD *)(v15 + 8) = v17;
        v8[1] = v16;
        *(_QWORD *)(v10 + 8) = v18;
      }
      goto LABEL_7;
    }
    while ( 1 )
    {
      v19 = (__int64 **)(v13 + 1);
      if ( *(__int64 **)(v11 + 8 * v12) == v13 )
        break;
      v13 = *v19;
      if ( v14 == *((_DWORD *)*v19 + 4) )
      {
        v20 = *v13;
        v21 = *(_QWORD **)(v10 + 8);
        *v21 = v8;
        v22 = (_QWORD *)v8[1];
        *v22 = v20;
        v23 = *(_QWORD **)(v20 + 8);
        *v23 = v10;
        *(_QWORD *)(v20 + 8) = v22;
        v8[1] = v21;
        *(_QWORD *)(v10 + 8) = v23;
        goto LABEL_15;
      }
    }
    v24 = *(_QWORD **)(v10 + 8);
    *v24 = v8;
    v25 = (__int64 **)v8[1];
    *v25 = v13;
    v26 = *v19;
    *v26 = v10;
    *v19 = (__int64 *)v25;
    v8[1] = v24;
    *(_QWORD *)(v10 + 8) = v26;
    *(_QWORD *)(v11 + 8 * v12) = v10;
LABEL_15:
    v7 = v8;
  }
  v28 = 0LL;
  return std::_Hash<std::_Umap_traits<unsigned int,CDDisplayFlipAwayFence,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,CDDisplayFlipAwayFence>>,0>>::_Clear_guard::~_Clear_guard(&v28);
}
