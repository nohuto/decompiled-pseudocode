/*
 * XREFs of ?_Forced_rehash@?$_Hash@V?$_Umap_traits@Uhstring@winrt@@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$_Uhash_compare@Uhstring@winrt@@U?$hash@Uhstring@winrt@@@std@@U?$equal_to@Uhstring@winrt@@@4@@4@V?$allocator@U?$pair@$$CBUhstring@winrt@@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@@4@$0A@@std@@@std@@IEAAX_K@Z @ 0x1801AD1B4
 * Callers:
 *     ?_Rehash_for_1@?$_Hash@V?$_Umap_traits@Uhstring@winrt@@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$_Uhash_compare@Uhstring@winrt@@U?$hash@Uhstring@winrt@@@std@@U?$equal_to@Uhstring@winrt@@@4@@4@V?$allocator@U?$pair@$$CBUhstring@winrt@@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@@4@$0A@@std@@@std@@IEAAXXZ @ 0x1805F2C48 (-_Rehash_for_1@-$_Hash@V-$_Umap_traits@Uhstring@winrt@@V-$basic_string@GU-$char_traits@G@std@@V-.c)
 * Callees:
 *     ?_Assign_grow@?$_Hash_vec@V?$allocator@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUhstring@winrt@@U12@@std@@@std@@@std@@@std@@@std@@@std@@QEAAX_KV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUhstring@winrt@@U12@@std@@@std@@@std@@@2@@Z @ 0x1800FCF1C (-_Assign_grow@-$_Hash_vec@V-$allocator@V-$_List_unchecked_iterator@V-$_List_val@U-$_ea_1800FCF1C.c)
 *     ??$?RUhstring@winrt@@@?$_Uhash_compare@Uhstring@winrt@@U?$hash@Uhstring@winrt@@@std@@U?$equal_to@Uhstring@winrt@@@4@@std@@QEBA_KAEBUhstring@winrt@@@Z @ 0x1801AD370 (--$-RUhstring@winrt@@@-$_Uhash_compare@Uhstring@winrt@@U-$hash@Uhstring@winrt@@@std@@U-$equal_to.c)
 *     ??$?RUhstring@winrt@@U01@@?$_Uhash_compare@Uhstring@winrt@@U?$hash@Uhstring@winrt@@@std@@U?$equal_to@Uhstring@winrt@@@4@@std@@QEBA_NAEBUhstring@winrt@@0@Z @ 0x1801AD460 (--$-RUhstring@winrt@@U01@@-$_Uhash_compare@Uhstring@winrt@@U-$hash@Uhstring@winrt@@@std@@U-$equa.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 */

__int64 __fastcall std::_Hash<std::_Umap_traits<winrt::hstring,std::wstring,std::_Uhash_compare<winrt::hstring,std::hash<winrt::hstring>,std::equal_to<winrt::hstring>>,std::allocator<std::pair<winrt::hstring const,std::wstring>>,0>>::_Forced_rehash(
        _QWORD *a1,
        unsigned __int64 a2)
{
  unsigned __int64 v3; // rcx
  unsigned __int64 v4; // rsi
  __int64 *v5; // rdi
  unsigned __int64 v6; // rcx
  __int64 v7; // rbx
  _QWORD *v8; // rcx
  __int64 result; // rax
  _QWORD *v10; // r11
  _QWORD *v11; // rbx
  _QWORD *v12; // r12
  __int64 v13; // r11
  __int64 v14; // rbp
  __int64 v15; // r14
  _QWORD *v16; // rdi
  __int64 v17; // r11
  __int64 v18; // r8
  _QWORD *v19; // rdx
  _QWORD *v20; // r15
  __int64 v21; // r8
  _QWORD *v22; // rdx
  _QWORD *v23; // rdx

  _BitScanReverse64(&v3, 0xFFFFFFFFFFFFFFFuLL);
  if ( a2 > 1LL << v3 )
    std::_Xlength_error("invalid hash bucket count");
  v4 = a1[1];
  v5 = a1 + 3;
  _BitScanReverse64(&v6, (a2 - 1) | 1);
  v7 = 1LL << ((unsigned __int8)v6 + 1);
  std::_Hash_vec<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<winrt::hstring const,winrt::hstring>>>>>>::_Assign_grow(
    (__int64)(a1 + 3),
    2 * v7,
    v4);
  a1[7] = v7;
  result = v7 - 1;
  a1[6] = v7 - 1;
  v10 = *(_QWORD **)a1[1];
  v11 = v10;
  while ( v10 != (_QWORD *)v4 )
  {
    v11 = (_QWORD *)*v11;
    v12 = v10 + 2;
    result = std::_Uhash_compare<winrt::hstring,std::hash<winrt::hstring>,std::equal_to<winrt::hstring>>::operator()<winrt::hstring>(
               v8,
               v10 + 2);
    v14 = *v5;
    v15 = 2 * (a1[6] & result);
    if ( *(_QWORD *)(*v5 + 16 * (a1[6] & result)) == v4 )
    {
      *(_QWORD *)(v14 + 16 * (a1[6] & result)) = v13;
      *(_QWORD *)(v14 + 8 * v15 + 8) = v13;
    }
    else
    {
      v16 = *(_QWORD **)(v14 + 16 * (a1[6] & result) + 8);
      result = std::_Uhash_compare<winrt::hstring,std::hash<winrt::hstring>,std::equal_to<winrt::hstring>>::operator()<winrt::hstring,winrt::hstring>(
                 v8,
                 v12,
                 v16 + 2);
      if ( (_BYTE)result )
      {
        v20 = v16;
        while ( *(_QWORD **)(v14 + 8 * v15) != v20 )
        {
          v16 = (_QWORD *)v16[1];
          v20 = v16;
          if ( !(unsigned __int8)std::_Uhash_compare<winrt::hstring,std::hash<winrt::hstring>,std::equal_to<winrt::hstring>>::operator()<winrt::hstring,winrt::hstring>(
                                   v8,
                                   v12,
                                   v16 + 2) )
          {
            v21 = *v16;
            v22 = *(_QWORD **)(v17 + 8);
            *v22 = v11;
            v8 = (_QWORD *)v11[1];
            *v8 = v21;
            result = *(_QWORD *)(v21 + 8);
            *(_QWORD *)result = v17;
            *(_QWORD *)(v21 + 8) = v8;
            v11[1] = v22;
            *(_QWORD *)(v17 + 8) = result;
            goto LABEL_16;
          }
        }
        v23 = *(_QWORD **)(v17 + 8);
        *v23 = v11;
        v8 = (_QWORD *)v11[1];
        *v8 = v16;
        result = v16[1];
        *(_QWORD *)result = v17;
        v16[1] = v8;
        v11[1] = v23;
        *(_QWORD *)(v17 + 8) = result;
        *(_QWORD *)(v14 + 8 * v15) = v17;
      }
      else
      {
        v18 = *v16;
        if ( *v16 != v17 )
        {
          v19 = *(_QWORD **)(v17 + 8);
          *v19 = v11;
          v8 = (_QWORD *)v11[1];
          *v8 = v18;
          result = *(_QWORD *)(v18 + 8);
          *(_QWORD *)result = v17;
          *(_QWORD *)(v18 + 8) = v8;
          v11[1] = v19;
          *(_QWORD *)(v17 + 8) = result;
        }
        *(_QWORD *)(v14 + 8 * v15 + 8) = v17;
      }
LABEL_16:
      v5 = a1 + 3;
    }
    v10 = v11;
  }
  return result;
}
