/*
 * XREFs of ?_Forced_rehash@?$_Hash@V?$_Umap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@_KV?$_Uhash_compare@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$hash@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@U?$equal_to@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@_K@std@@@2@$0A@@std@@@std@@IEAAX_K@Z @ 0x18057EBF4
 * Callers:
 *     ?GetAllAppTabAllotment@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAA?AV?$unordered_map@_K_KU?$hash@_K@std@@U?$equal_to@_K@2@V?$allocator@U?$pair@$$CB_K_K@std@@@2@@std@@XZ @ 0x18002EB20 (-GetAllAppTabAllotment@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAA-AV-$unord.c)
 *     ??$_Try_emplace@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@$$V@?$_Hash@V?$_Umap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@_KV?$_Uhash_compare@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$hash@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@U?$equal_to@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@_K@std@@@2@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_List_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@_K@std@@PEAX@std@@_N@1@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@@Z @ 0x18013C010 (--$_Try_emplace@AEBV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@$$_ea_18013C010.c)
 * Callees:
 *     ??$?RV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V01@@?$_Uhash_compare@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$hash@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@U?$equal_to@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@std@@QEBA_NAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@0@Z @ 0x18003037C (--$-RV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@V01@@-$_Uhash_compare@V-$basi.c)
 *     ?_Assign_grow@?$_Hash_vec@V?$allocator@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@_K@std@@@std@@@std@@@std@@@std@@@std@@QEAAX_KV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@_K@std@@@std@@@std@@@2@@Z @ 0x1801B2B44 (-_Assign_grow@-$_Hash_vec@V-$allocator@V-$_List_unchecked_iterator@V-$_List_val@U-$_ea_1801B2B44.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ??R?$_Conditionally_enabled_hash@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@$00@std@@SA_KAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@@Z @ 0x1803EB7C8 (--R-$_Conditionally_enabled_hash@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@$.c)
 *     ??1_Clear_guard@?$_Hash@V?$_Umap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@_KV?$_Uhash_compare@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$hash@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@U?$equal_to@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@_K@std@@@2@$0A@@std@@@std@@QEAA@XZ @ 0x18057D768 (--1_Clear_guard@-$_Hash@V-$_Umap_traits@V-$basic_string@GU-$char_traits@G@std@@V-$a_ea_18057D768.c)
 */

unsigned __int64 __fastcall std::_Hash<std::_Umap_traits<std::wstring,unsigned __int64,std::_Uhash_compare<std::wstring,std::hash<std::wstring>,std::equal_to<std::wstring>>,std::allocator<std::pair<std::wstring const,unsigned __int64>>,0>>::_Forced_rehash(
        unsigned __int64 *a1,
        unsigned __int64 a2)
{
  unsigned __int64 *v2; // rsi
  unsigned __int64 v3; // rcx
  unsigned __int64 v4; // rbp
  unsigned __int64 v5; // rcx
  __int64 *v6; // r15
  __int64 v7; // rbx
  _QWORD *v8; // rbx
  _QWORD *v9; // rdi
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // r15
  __int64 v13; // r14
  _QWORD *v14; // rsi
  __int64 v15; // rcx
  __int64 v16; // r8
  _QWORD *v17; // rdx
  _QWORD *v18; // rcx
  _QWORD *v19; // rax
  _QWORD *v20; // r12
  _QWORD *v21; // r8
  __int64 v22; // r8
  _QWORD *v23; // rdx
  _QWORD *v24; // rcx
  _QWORD *v25; // rax
  _QWORD *v26; // rdx
  _QWORD *v27; // rax
  _QWORD *v28; // rcx
  unsigned __int64 *v30; // [rsp+20h] [rbp-58h] BYREF
  int v31; // [rsp+28h] [rbp-50h]

  v30 = a1;
  v2 = a1;
  v31 = 0;
  _BitScanReverse64(&v3, 0xFFFFFFFFFFFFFFFuLL);
  if ( a2 > 1LL << v3 )
    std::_Xlength_error("invalid hash bucket count");
  v4 = v2[1];
  v31 = 0;
  _BitScanReverse64(&v5, (a2 - 1) | 1);
  v6 = (__int64 *)(v2 + 3);
  v7 = 1LL << ((unsigned __int8)v5 + 1);
  std::_Hash_vec<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<std::wstring const,unsigned __int64>>>>>>::_Assign_grow(
    (unsigned __int64 **)v2 + 3,
    2 * v7,
    v4);
  v2[7] = v7;
  v2[6] = v7 - 1;
  v8 = *(_QWORD **)v2[1];
  v9 = v8;
  while ( v8 != (_QWORD *)v4 )
  {
    v9 = (_QWORD *)*v9;
    v10 = std::_Conditionally_enabled_hash<std::wstring,1>::operator()((unsigned __int8 *)v8 + 16);
    v12 = *v6;
    v13 = 2 * (v2[6] & v10);
    if ( *(_QWORD *)(v12 + 16 * (v2[6] & v10)) == v4 )
    {
      *(_QWORD *)(v12 + 16 * (v2[6] & v10)) = v8;
      *(_QWORD *)(v12 + 8 * v13 + 8) = v8;
    }
    else
    {
      v14 = *(_QWORD **)(v12 + 16 * (v2[6] & v10) + 8);
      if ( std::_Uhash_compare<std::wstring,std::hash<std::wstring>,std::equal_to<std::wstring>>::operator()<std::wstring,std::wstring>(
             v11,
             v8 + 2,
             v14 + 2) )
      {
        v20 = v14;
        while ( 1 )
        {
          v21 = v14 + 1;
          if ( *(_QWORD **)(v12 + 8 * v13) == v20 )
            break;
          v14 = (_QWORD *)*v21;
          v20 = (_QWORD *)*v21;
          if ( !std::_Uhash_compare<std::wstring,std::hash<std::wstring>,std::equal_to<std::wstring>>::operator()<std::wstring,std::wstring>(
                  v15,
                  v8 + 2,
                  (_QWORD *)(*v21 + 16LL)) )
          {
            v22 = *v14;
            v23 = (_QWORD *)v8[1];
            *v23 = v9;
            v24 = (_QWORD *)v9[1];
            *v24 = v22;
            v25 = *(_QWORD **)(v22 + 8);
            *v25 = v8;
            *(_QWORD *)(v22 + 8) = v24;
            v9[1] = v23;
            v8[1] = v25;
            goto LABEL_16;
          }
        }
        v26 = (_QWORD *)v8[1];
        *v26 = v9;
        v27 = (_QWORD *)v9[1];
        *v27 = v14;
        v28 = (_QWORD *)*v21;
        *v28 = v8;
        *v21 = v27;
        v9[1] = v26;
        v8[1] = v28;
        *(_QWORD *)(v12 + 8 * v13) = v8;
      }
      else
      {
        v16 = *v14;
        if ( (_QWORD *)*v14 != v8 )
        {
          v17 = (_QWORD *)v8[1];
          *v17 = v9;
          v18 = (_QWORD *)v9[1];
          *v18 = v16;
          v19 = *(_QWORD **)(v16 + 8);
          *v19 = v8;
          *(_QWORD *)(v16 + 8) = v18;
          v9[1] = v17;
          v8[1] = v19;
        }
        *(_QWORD *)(v12 + 8 * v13 + 8) = v8;
      }
LABEL_16:
      v2 = v30;
    }
    v8 = v9;
    v6 = (__int64 *)(v2 + 3);
  }
  v30 = 0LL;
  return std::_Hash<std::_Umap_traits<std::wstring,unsigned __int64,std::_Uhash_compare<std::wstring,std::hash<std::wstring>,std::equal_to<std::wstring>>,std::allocator<std::pair<std::wstring const,unsigned __int64>>,0>>::_Clear_guard::~_Clear_guard(&v30);
}
