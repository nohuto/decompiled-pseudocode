/*
 * XREFs of ?_Forced_rehash@?$_Hash@V?$_Umap_traits@Uhstring@winrt@@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$_Uhash_compare@Uhstring@winrt@@U?$hash@Uhstring@winrt@@@std@@U?$equal_to@Uhstring@winrt@@@4@@4@V?$allocator@U?$pair@$$CBUhstring@winrt@@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@@4@$0A@@std@@@std@@IEAAX_K@Z @ 0x1801376CC
 * Callers:
 *     ?_Rehash_for_1@?$_Hash@V?$_Umap_traits@Uhstring@winrt@@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$_Uhash_compare@Uhstring@winrt@@U?$hash@Uhstring@winrt@@@std@@U?$equal_to@Uhstring@winrt@@@4@@4@V?$allocator@U?$pair@$$CBUhstring@winrt@@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@@4@$0A@@std@@@std@@IEAAXXZ @ 0x180617358 (-_Rehash_for_1@-$_Hash@V-$_Umap_traits@Uhstring@winrt@@V-$basic_string@GU-$char_traits@G@std@@V-.c)
 * Callees:
 *     ?_Assign_grow@?$_Hash_vec@V?$allocator@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUhstring@winrt@@U12@@std@@@std@@@std@@@std@@@std@@@std@@QEAAX_KV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUhstring@winrt@@U12@@std@@@std@@@std@@@2@@Z @ 0x180137160 (-_Assign_grow@-$_Hash_vec@V-$allocator@V-$_List_unchecked_iterator@V-$_List_val@U-$_ea_180137160.c)
 *     ??$?RUhstring@winrt@@@?$_Uhash_compare@Uhstring@winrt@@U?$hash@Uhstring@winrt@@@std@@U?$equal_to@Uhstring@winrt@@@4@@std@@QEBA_KAEBUhstring@winrt@@@Z @ 0x18013789C (--$-RUhstring@winrt@@@-$_Uhash_compare@Uhstring@winrt@@U-$hash@Uhstring@winrt@@@std@@U-$equal_to.c)
 *     ??$?RUhstring@winrt@@U01@@?$_Uhash_compare@Uhstring@winrt@@U?$hash@Uhstring@winrt@@@std@@U?$equal_to@Uhstring@winrt@@@4@@std@@QEBA_NAEBUhstring@winrt@@0@Z @ 0x18013798C (--$-RUhstring@winrt@@U01@@-$_Uhash_compare@Uhstring@winrt@@U-$hash@Uhstring@winrt@@@std@@U-$equa.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 */

__int64 __fastcall std::_Hash<std::_Umap_traits<winrt::hstring,std::wstring,std::_Uhash_compare<winrt::hstring,std::hash<winrt::hstring>,std::equal_to<winrt::hstring>>,std::allocator<std::pair<winrt::hstring const,std::wstring>>,0>>::_Forced_rehash(
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
  __int64 result; // rax
  _QWORD *v10; // rbx
  _QWORD *v11; // rdi
  __int64 v12; // r15
  __int64 v13; // r14
  _QWORD *v14; // rsi
  __int64 v15; // r8
  _QWORD *v16; // rdx
  _QWORD *v17; // r12
  __int64 *v18; // r8
  __int64 v19; // r8
  _QWORD *v20; // rdx
  _QWORD *v21; // rdx

  v2 = a1;
  _BitScanReverse64(&v3, 0xFFFFFFFFFFFFFFFuLL);
  if ( a2 > 1LL << v3 )
    std::_Xlength_error("invalid hash bucket count");
  v4 = v2[1];
  _BitScanReverse64(&v5, (a2 - 1) | 1);
  v6 = (__int64 *)(v2 + 3);
  v7 = 1LL << ((unsigned __int8)v5 + 1);
  std::_Hash_vec<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<winrt::hstring const,winrt::hstring>>>>>>::_Assign_grow(
    (unsigned __int64 **)v2 + 3,
    2 * v7,
    v4);
  result = v7 - 1;
  v2[7] = v7;
  v2[6] = v7 - 1;
  v10 = *(_QWORD **)v2[1];
  v11 = v10;
  while ( v10 != (_QWORD *)v4 )
  {
    v11 = (_QWORD *)*v11;
    result = std::_Uhash_compare<winrt::hstring,std::hash<winrt::hstring>,std::equal_to<winrt::hstring>>::operator()<winrt::hstring>(
               v8,
               v10 + 2);
    v12 = *v6;
    v13 = 2 * (v2[6] & result);
    if ( *(_QWORD *)(v12 + 16 * (v2[6] & result)) == v4 )
    {
      *(_QWORD *)(v12 + 16 * (v2[6] & result)) = v10;
      *(_QWORD *)(v12 + 8 * v13 + 8) = v10;
    }
    else
    {
      v14 = *(_QWORD **)(v12 + 16 * (v2[6] & result) + 8);
      result = std::_Uhash_compare<winrt::hstring,std::hash<winrt::hstring>,std::equal_to<winrt::hstring>>::operator()<winrt::hstring,winrt::hstring>(
                 v8,
                 v10 + 2,
                 v14 + 2);
      if ( (_BYTE)result )
      {
        v17 = v14;
        while ( 1 )
        {
          v18 = v14 + 1;
          if ( *(_QWORD **)(v12 + 8 * v13) == v17 )
            break;
          v14 = (_QWORD *)*v18;
          v17 = (_QWORD *)*v18;
          if ( !(unsigned __int8)std::_Uhash_compare<winrt::hstring,std::hash<winrt::hstring>,std::equal_to<winrt::hstring>>::operator()<winrt::hstring,winrt::hstring>(
                                   v8,
                                   v10 + 2,
                                   *v18 + 16) )
          {
            v19 = *v14;
            v20 = (_QWORD *)v10[1];
            *v20 = v11;
            v8 = (_QWORD *)v11[1];
            *v8 = v19;
            result = *(_QWORD *)(v19 + 8);
            *(_QWORD *)result = v10;
            *(_QWORD *)(v19 + 8) = v8;
            v11[1] = v20;
            v10[1] = result;
            goto LABEL_16;
          }
        }
        v21 = (_QWORD *)v10[1];
        *v21 = v11;
        result = v11[1];
        *(_QWORD *)result = v14;
        v8 = (_QWORD *)*v18;
        *v8 = v10;
        *v18 = result;
        v11[1] = v21;
        v10[1] = v8;
        *(_QWORD *)(v12 + 8 * v13) = v10;
      }
      else
      {
        v15 = *v14;
        if ( (_QWORD *)*v14 != v10 )
        {
          v16 = (_QWORD *)v10[1];
          *v16 = v11;
          v8 = (_QWORD *)v11[1];
          *v8 = v15;
          result = *(_QWORD *)(v15 + 8);
          *(_QWORD *)result = v10;
          *(_QWORD *)(v15 + 8) = v8;
          v11[1] = v16;
          v10[1] = result;
        }
        *(_QWORD *)(v12 + 8 * v13 + 8) = v10;
      }
LABEL_16:
      v2 = a1;
    }
    v10 = v11;
    v6 = (__int64 *)(v2 + 3);
  }
  return result;
}
