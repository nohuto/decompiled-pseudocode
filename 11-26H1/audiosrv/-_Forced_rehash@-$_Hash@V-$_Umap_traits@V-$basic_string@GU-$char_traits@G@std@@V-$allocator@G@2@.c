/*
 * XREFs of ?_Forced_rehash@?$_Hash@V?$_Umap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$com_ptr_t@VCEndpointCharacteristics@@Uerr_returncode_policy@wil@@@wil@@V?$_Uhash_compare@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$hash@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@U?$equal_to@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$com_ptr_t@VCEndpointCharacteristics@@Uerr_returncode_policy@wil@@@wil@@@std@@@2@$0A@@std@@@std@@IEAAX_K@Z @ 0x1800AB864
 * Callers:
 *     ??$emplace@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAV?$com_ptr_t@VCEndpointCharacteristics@@Uerr_returncode_policy@wil@@@wil@@@?$_Hash@V?$_Umap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$com_ptr_t@VCEndpointCharacteristics@@Uerr_returncode_policy@wil@@@wil@@V?$_Uhash_compare@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$hash@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@U?$equal_to@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$com_ptr_t@VCEndpointCharacteristics@@Uerr_returncode_policy@wil@@@wil@@@std@@@2@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$com_ptr_t@VCEndpointCharacteristics@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@std@@@std@@_N@1@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@AEAV?$com_ptr_t@VCEndpointCharacteristics@@Uerr_returncode_policy@wil@@@wil@@@Z @ 0x1801344E4 (--$emplace@AEAV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAV-$com_ptr_t@VCEn.c)
 * Callees:
 *     ?_Assign_grow@?$_Hash_vec@V?$allocator@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$com_ptr_t@VCEndpointCharacteristics@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@std@@@std@@@std@@@std@@QEAAX_KV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$com_ptr_t@VCEndpointCharacteristics@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@std@@@2@@Z @ 0x18003F730 (-_Assign_grow@-$_Hash_vec@V-$allocator@V-$_List_unchecked_iterator@V-$_List_val@U-$_ea_18003F730.c)
 *     ??$?RV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V01@@?$_Uhash_compare@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$hash@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@U?$equal_to@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@std@@QEBA_NAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@0@Z @ 0x180047880 (--$-RV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@V01@@-$_Uhash_compare@V-$basi.c)
 *     ??R?$_Conditionally_enabled_hash@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@$00@std@@SA_KAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@@Z @ 0x1800ABA18 (--R-$_Conditionally_enabled_hash@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@$.c)
 */

char __fastcall std::_Hash<std::_Umap_traits<std::wstring,wil::com_ptr_t<CEndpointCharacteristics,wil::err_returncode_policy>,std::_Uhash_compare<std::wstring,std::hash<std::wstring>,std::equal_to<std::wstring>>,std::allocator<std::pair<std::wstring const,wil::com_ptr_t<CEndpointCharacteristics,wil::err_returncode_policy>>>,0>>::_Forced_rehash(
        _QWORD *a1,
        unsigned __int64 a2)
{
  _QWORD *v2; // rsi
  unsigned __int64 v3; // rcx
  unsigned __int64 v4; // rbp
  unsigned __int64 v5; // rcx
  __int64 *v6; // r15
  __int64 v7; // rbx
  __int64 v8; // rax
  _QWORD *v9; // rbx
  _QWORD *v10; // rdi
  __int64 v11; // rcx
  __int64 v12; // r15
  __int64 v13; // r14
  _QWORD *v14; // rsi
  __int64 v15; // rcx
  __int64 v16; // r8
  _QWORD *v17; // rdx
  _QWORD *v18; // rcx
  _QWORD *v19; // r12
  __int64 *v20; // r8
  __int64 v21; // r8
  _QWORD *v22; // rdx
  _QWORD *v23; // rcx
  _QWORD *v24; // rdx
  _QWORD *v25; // rcx

  v2 = a1;
  _BitScanReverse64(&v3, 0xFFFFFFFFFFFFFFFuLL);
  if ( a2 > 1LL << v3 )
    std::_Xlength_error("invalid hash bucket count");
  v4 = v2[1];
  _BitScanReverse64(&v5, (a2 - 1) | 1);
  v6 = v2 + 3;
  v7 = 1LL << ((unsigned __int8)v5 + 1);
  std::_Hash_vec<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<std::wstring const,wil::com_ptr_t<CEndpointCharacteristics,wil::err_returncode_policy>>>>>>>::_Assign_grow(
    (__int64)(v2 + 3),
    2 * v7,
    v4);
  LOBYTE(v8) = v7 - 1;
  v2[7] = v7;
  v2[6] = v7 - 1;
  v9 = *(_QWORD **)v2[1];
  v10 = v9;
  while ( v9 != (_QWORD *)v4 )
  {
    v10 = (_QWORD *)*v10;
    v8 = std::_Conditionally_enabled_hash<std::wstring,1>::operator()((unsigned __int8 *)v9 + 16);
    v12 = *v6;
    v13 = 2 * (v2[6] & v8);
    if ( *(_QWORD *)(v12 + 16 * (v2[6] & v8)) == v4 )
    {
      *(_QWORD *)(v12 + 16 * (v2[6] & v8)) = v9;
      *(_QWORD *)(v12 + 8 * v13 + 8) = v9;
    }
    else
    {
      v14 = *(_QWORD **)(v12 + 16 * (v2[6] & v8) + 8);
      LOBYTE(v8) = std::_Uhash_compare<std::wstring,std::hash<std::wstring>,std::equal_to<std::wstring>>::operator()<std::wstring,std::wstring>(
                     v11,
                     (__int64)(v9 + 2),
                     (__int64)(v14 + 2));
      if ( (_BYTE)v8 )
      {
        v19 = v14;
        while ( 1 )
        {
          v20 = v14 + 1;
          if ( *(_QWORD **)(v12 + 8 * v13) == v19 )
            break;
          v14 = (_QWORD *)*v20;
          v19 = (_QWORD *)*v20;
          if ( !std::_Uhash_compare<std::wstring,std::hash<std::wstring>,std::equal_to<std::wstring>>::operator()<std::wstring,std::wstring>(
                  v15,
                  (__int64)(v9 + 2),
                  *v20 + 16) )
          {
            v21 = *v14;
            v22 = (_QWORD *)v9[1];
            *v22 = v10;
            v23 = (_QWORD *)v10[1];
            *v23 = v21;
            v8 = *(_QWORD *)(v21 + 8);
            *(_QWORD *)v8 = v9;
            *(_QWORD *)(v21 + 8) = v23;
            v10[1] = v22;
            v9[1] = v8;
            goto LABEL_16;
          }
        }
        v24 = (_QWORD *)v9[1];
        *v24 = v10;
        v8 = v10[1];
        *(_QWORD *)v8 = v14;
        v25 = (_QWORD *)*v20;
        *v25 = v9;
        *v20 = v8;
        v10[1] = v24;
        v9[1] = v25;
        *(_QWORD *)(v12 + 8 * v13) = v9;
      }
      else
      {
        v16 = *v14;
        if ( (_QWORD *)*v14 != v9 )
        {
          v17 = (_QWORD *)v9[1];
          *v17 = v10;
          v18 = (_QWORD *)v10[1];
          *v18 = v16;
          v8 = *(_QWORD *)(v16 + 8);
          *(_QWORD *)v8 = v9;
          *(_QWORD *)(v16 + 8) = v18;
          v10[1] = v17;
          v9[1] = v8;
        }
        *(_QWORD *)(v12 + 8 * v13 + 8) = v9;
      }
LABEL_16:
      v2 = a1;
    }
    v9 = v10;
    v6 = v2 + 3;
  }
  return v8;
}
