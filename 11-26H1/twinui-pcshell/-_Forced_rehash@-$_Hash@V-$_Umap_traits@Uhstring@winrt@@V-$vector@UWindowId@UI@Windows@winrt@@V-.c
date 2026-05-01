/*
 * XREFs of ?_Forced_rehash@?$_Hash@V?$_Umap_traits@Uhstring@winrt@@V?$vector@UWindowId@UI@Windows@winrt@@V?$allocator@UWindowId@UI@Windows@winrt@@@std@@@std@@V?$_Uhash_compare@Uhstring@winrt@@U?$hash@Uhstring@winrt@@@std@@U?$equal_to@Uhstring@winrt@@@4@@4@V?$allocator@U?$pair@$$CBUhstring@winrt@@V?$vector@UWindowId@UI@Windows@winrt@@V?$allocator@UWindowId@UI@Windows@winrt@@@std@@@std@@@std@@@4@$0A@@std@@@std@@IEAAX_K@Z @ 0x180664710
 * Callers:
 *     ??$_Try_emplace@AEBUhstring@winrt@@$$V@?$_Hash@V?$_Umap_traits@Uhstring@winrt@@V?$vector@UWindowId@UI@Windows@winrt@@V?$allocator@UWindowId@UI@Windows@winrt@@@std@@@std@@V?$_Uhash_compare@Uhstring@winrt@@U?$hash@Uhstring@winrt@@@std@@U?$equal_to@Uhstring@winrt@@@4@@4@V?$allocator@U?$pair@$$CBUhstring@winrt@@V?$vector@UWindowId@UI@Windows@winrt@@V?$allocator@UWindowId@UI@Windows@winrt@@@std@@@std@@@std@@@4@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_List_node@U?$pair@$$CBUhstring@winrt@@V?$vector@UWindowId@UI@Windows@winrt@@V?$allocator@UWindowId@UI@Windows@winrt@@@std@@@std@@@std@@PEAX@std@@_N@1@AEBUhstring@winrt@@@Z @ 0x180662420 (--$_Try_emplace@AEBUhstring@winrt@@$$V@-$_Hash@V-$_Umap_traits@Uhstring@winrt@@V-$vector@UWindow.c)
 * Callees:
 *     ?_Assign_grow@?$_Hash_vec@V?$allocator@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUhstring@winrt@@U12@@std@@@std@@@std@@@std@@@std@@@std@@QEAAX_KV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUhstring@winrt@@U12@@std@@@std@@@std@@@2@@Z @ 0x180137160 (-_Assign_grow@-$_Hash_vec@V-$allocator@V-$_List_unchecked_iterator@V-$_List_val@U-$_ea_180137160.c)
 *     ??$?RUhstring@winrt@@@?$_Uhash_compare@Uhstring@winrt@@U?$hash@Uhstring@winrt@@@std@@U?$equal_to@Uhstring@winrt@@@4@@std@@QEBA_KAEBUhstring@winrt@@@Z @ 0x18013789C (--$-RUhstring@winrt@@@-$_Uhash_compare@Uhstring@winrt@@U-$hash@Uhstring@winrt@@@std@@U-$equal_to.c)
 *     ??$?RUhstring@winrt@@U01@@?$_Uhash_compare@Uhstring@winrt@@U?$hash@Uhstring@winrt@@@std@@U?$equal_to@Uhstring@winrt@@@4@@std@@QEBA_NAEBUhstring@winrt@@0@Z @ 0x18013798C (--$-RUhstring@winrt@@U01@@-$_Uhash_compare@Uhstring@winrt@@U-$hash@Uhstring@winrt@@@std@@U-$equa.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ??1_Clear_guard@?$_Hash@V?$_Umap_traits@Uhstring@winrt@@V?$vector@UWindowId@UI@Windows@winrt@@V?$allocator@UWindowId@UI@Windows@winrt@@@std@@@std@@V?$_Uhash_compare@Uhstring@winrt@@U?$hash@Uhstring@winrt@@@std@@U?$equal_to@Uhstring@winrt@@@4@@4@V?$allocator@U?$pair@$$CBUhstring@winrt@@V?$vector@UWindowId@UI@Windows@winrt@@V?$allocator@UWindowId@UI@Windows@winrt@@@std@@@std@@@std@@@4@$0A@@std@@@std@@QEAA@XZ @ 0x180662EE0 (--1_Clear_guard@-$_Hash@V-$_Umap_traits@Uhstring@winrt@@V-$vector@UWindowId@UI@Windows@winrt@@V-.c)
 */

unsigned __int64 __fastcall std::_Hash<std::_Umap_traits<winrt::hstring,std::vector<winrt::Windows::UI::WindowId>,std::_Uhash_compare<winrt::hstring,std::hash<winrt::hstring>,std::equal_to<winrt::hstring>>,std::allocator<std::pair<winrt::hstring const,std::vector<winrt::Windows::UI::WindowId>>>,0>>::_Forced_rehash(
        unsigned __int64 *a1,
        unsigned __int64 a2)
{
  unsigned __int64 *v2; // rsi
  unsigned __int64 v3; // rcx
  unsigned __int64 v4; // rbp
  unsigned __int64 v5; // rcx
  __int64 *v6; // r15
  __int64 v7; // rbx
  _QWORD *v8; // rcx
  _QWORD *v9; // rbx
  _QWORD *v10; // rdi
  __int64 v11; // rax
  __int64 v12; // r15
  __int64 v13; // r14
  _QWORD *v14; // rsi
  __int64 v15; // r8
  _QWORD *v16; // rdx
  _QWORD *v17; // rax
  _QWORD *v18; // r12
  _QWORD *v19; // r8
  __int64 v20; // r8
  _QWORD *v21; // rdx
  _QWORD *v22; // rax
  _QWORD *v23; // rdx
  _QWORD *v24; // rax
  unsigned __int64 *v26; // [rsp+20h] [rbp-58h] BYREF
  int v27; // [rsp+28h] [rbp-50h]

  v26 = a1;
  v2 = a1;
  v27 = 0;
  _BitScanReverse64(&v3, 0xFFFFFFFFFFFFFFFuLL);
  if ( a2 > 1LL << v3 )
    std::_Xlength_error("invalid hash bucket count");
  v4 = v2[1];
  v27 = 0;
  _BitScanReverse64(&v5, (a2 - 1) | 1);
  v6 = (__int64 *)(v2 + 3);
  v7 = 1LL << ((unsigned __int8)v5 + 1);
  std::_Hash_vec<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<winrt::hstring const,winrt::hstring>>>>>>::_Assign_grow(
    (unsigned __int64 **)v2 + 3,
    2 * v7,
    v4);
  v2[7] = v7;
  v2[6] = v7 - 1;
  v9 = *(_QWORD **)v2[1];
  v10 = v9;
  while ( v9 != (_QWORD *)v4 )
  {
    v10 = (_QWORD *)*v10;
    v11 = std::_Uhash_compare<winrt::hstring,std::hash<winrt::hstring>,std::equal_to<winrt::hstring>>::operator()<winrt::hstring>(
            (__int64)v8,
            v9 + 2);
    v12 = *v6;
    v13 = 2 * (v2[6] & v11);
    if ( *(_QWORD *)(v12 + 16 * (v2[6] & v11)) == v4 )
    {
      *(_QWORD *)(v12 + 16 * (v2[6] & v11)) = v9;
      *(_QWORD *)(v12 + 8 * v13 + 8) = v9;
    }
    else
    {
      v14 = *(_QWORD **)(v12 + 16 * (v2[6] & v11) + 8);
      if ( std::_Uhash_compare<winrt::hstring,std::hash<winrt::hstring>,std::equal_to<winrt::hstring>>::operator()<winrt::hstring,winrt::hstring>(
             (__int64)v8,
             v9 + 2,
             v14 + 2) )
      {
        v18 = v14;
        while ( 1 )
        {
          v19 = v14 + 1;
          if ( *(_QWORD **)(v12 + 8 * v13) == v18 )
            break;
          v14 = (_QWORD *)*v19;
          v18 = (_QWORD *)*v19;
          if ( !std::_Uhash_compare<winrt::hstring,std::hash<winrt::hstring>,std::equal_to<winrt::hstring>>::operator()<winrt::hstring,winrt::hstring>(
                  (__int64)v8,
                  v9 + 2,
                  (__int64 *)(*v19 + 16LL)) )
          {
            v20 = *v14;
            v21 = (_QWORD *)v9[1];
            *v21 = v10;
            v8 = (_QWORD *)v10[1];
            *v8 = v20;
            v22 = *(_QWORD **)(v20 + 8);
            *v22 = v9;
            *(_QWORD *)(v20 + 8) = v8;
            v10[1] = v21;
            v9[1] = v22;
            goto LABEL_16;
          }
        }
        v23 = (_QWORD *)v9[1];
        *v23 = v10;
        v24 = (_QWORD *)v10[1];
        *v24 = v14;
        v8 = (_QWORD *)*v19;
        *v8 = v9;
        *v19 = v24;
        v10[1] = v23;
        v9[1] = v8;
        *(_QWORD *)(v12 + 8 * v13) = v9;
      }
      else
      {
        v15 = *v14;
        if ( (_QWORD *)*v14 != v9 )
        {
          v16 = (_QWORD *)v9[1];
          *v16 = v10;
          v8 = (_QWORD *)v10[1];
          *v8 = v15;
          v17 = *(_QWORD **)(v15 + 8);
          *v17 = v9;
          *(_QWORD *)(v15 + 8) = v8;
          v10[1] = v16;
          v9[1] = v17;
        }
        *(_QWORD *)(v12 + 8 * v13 + 8) = v9;
      }
LABEL_16:
      v2 = v26;
    }
    v9 = v10;
    v6 = (__int64 *)(v2 + 3);
  }
  v26 = 0LL;
  return std::_Hash<std::_Umap_traits<winrt::hstring,std::vector<winrt::Windows::UI::WindowId>,std::_Uhash_compare<winrt::hstring,std::hash<winrt::hstring>,std::equal_to<winrt::hstring>>,std::allocator<std::pair<winrt::hstring const,std::vector<winrt::Windows::UI::WindowId>>>,0>>::_Clear_guard::~_Clear_guard(&v26);
}
