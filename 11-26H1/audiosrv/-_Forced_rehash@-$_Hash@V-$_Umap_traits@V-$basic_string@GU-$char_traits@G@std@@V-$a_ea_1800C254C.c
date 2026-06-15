/*
 * XREFs of ?_Forced_rehash@?$_Hash@V?$_Umap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$TokenManager@VCAudioPumpDspResourceTracker@@@@V?$_Uhash_compare@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$hash@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@U?$equal_to@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$TokenManager@VCAudioPumpDspResourceTracker@@@@@std@@@2@$0A@@std@@@std@@IEAAX_K@Z @ 0x1800C254C
 * Callers:
 *     ?_Rehash_for_1@?$_Hash@V?$_Umap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$TokenManager@VCAudioPumpDspResourceTracker@@@@V?$_Uhash_compare@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$hash@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@U?$equal_to@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$TokenManager@VCAudioPumpDspResourceTracker@@@@@std@@@2@$0A@@std@@@std@@IEAAXXZ @ 0x1800C277C (-_Rehash_for_1@-$_Hash@V-$_Umap_traits@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@.c)
 * Callees:
 *     ?_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z @ 0x180047580 (-_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z.c)
 *     ??$?RV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V01@@?$_Uhash_compare@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$hash@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@U?$equal_to@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@std@@QEBA_NAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@0@Z @ 0x180047880 (--$-RV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@V01@@-$_Uhash_compare@V-$basi.c)
 *     ?_Assign_grow@?$_Hash_vec@V?$allocator@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$TokenManager@VCAudioPumpDspResourceTracker@@@@@std@@@std@@@std@@@std@@@std@@@std@@QEAAX_KV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$TokenManager@VCAudioPumpDspResourceTracker@@@@@std@@@std@@@std@@@2@@Z @ 0x1800BCB40 (-_Assign_grow@-$_Hash_vec@V-$allocator@V-$_List_unchecked_iterator@V-$_List_val@U-$_ea_1800BCB40.c)
 *     ??1_Clear_guard@?$_Hash@V?$_Umap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$TokenManager@VCAudioPumpDspResourceTracker@@@@V?$_Uhash_compare@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$hash@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@U?$equal_to@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$TokenManager@VCAudioPumpDspResourceTracker@@@@@std@@@2@$0A@@std@@@std@@QEAA@XZ @ 0x1800C1768 (--1_Clear_guard@-$_Hash@V-$_Umap_traits@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@.c)
 */

__int64 __fastcall std::_Hash<std::_Umap_traits<std::wstring,TokenManager<CAudioPumpDspResourceTracker>,std::_Uhash_compare<std::wstring,std::hash<std::wstring>,std::equal_to<std::wstring>>,std::allocator<std::pair<std::wstring const,TokenManager<CAudioPumpDspResourceTracker>>>,0>>::_Forced_rehash(
        _QWORD *a1,
        unsigned __int64 a2)
{
  _QWORD *v2; // rsi
  unsigned __int64 v3; // rcx
  unsigned __int64 v4; // rbp
  unsigned __int64 v5; // rcx
  __int64 *v6; // r15
  __int64 v7; // rbx
  _QWORD *v8; // rcx
  _QWORD *v9; // rbx
  _QWORD *v10; // rdi
  const unsigned __int8 *v11; // rdx
  __int64 appended; // rax
  __int64 v13; // r15
  __int64 v14; // r14
  _QWORD *v15; // rsi
  __int64 v16; // r8
  _QWORD *v17; // rdx
  _QWORD *v18; // rax
  _QWORD *v19; // r13
  _QWORD **v20; // r8
  _QWORD *v21; // r8
  _QWORD *v22; // rdx
  _QWORD *v23; // rax
  _QWORD *v24; // rdx
  _QWORD *v25; // rax
  __int64 v28; // [rsp+68h] [rbp+10h] BYREF

  LODWORD(v28) = 0;
  v2 = a1;
  _BitScanReverse64(&v3, 0xFFFFFFFFFFFFFFFuLL);
  if ( a2 > 1LL << v3 )
    std::_Xlength_error("invalid hash bucket count");
  v4 = v2[1];
  LODWORD(v28) = 0;
  _BitScanReverse64(&v5, (a2 - 1) | 1);
  v6 = v2 + 3;
  v7 = 1LL << ((unsigned __int8)v5 + 1);
  std::_Hash_vec<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<std::wstring const,TokenManager<CAudioPumpDspResourceTracker>>>>>>>::_Assign_grow(
    (__int64)(v2 + 3),
    2 * v7,
    v4);
  v2[7] = v7;
  v2[6] = v7 - 1;
  v9 = *(_QWORD **)v2[1];
  v10 = v9;
  while ( v9 != (_QWORD *)v4 )
  {
    v10 = (_QWORD *)*v10;
    v11 = (const unsigned __int8 *)(v9 + 2);
    if ( v9[5] > 7uLL )
      v11 = (const unsigned __int8 *)v9[2];
    appended = std::_Fnv1a_append_bytes((__int64)v8, v11, 2LL * v9[4]);
    v13 = *v6;
    v14 = 2 * (v2[6] & appended);
    if ( *(_QWORD *)(v13 + 16 * (v2[6] & appended)) == v4 )
    {
      *(_QWORD *)(v13 + 16 * (v2[6] & appended)) = v9;
      *(_QWORD *)(v13 + 8 * v14 + 8) = v9;
    }
    else
    {
      v15 = *(_QWORD **)(v13 + 16 * (v2[6] & appended) + 8);
      if ( std::_Uhash_compare<std::wstring,std::hash<std::wstring>,std::equal_to<std::wstring>>::operator()<std::wstring,std::wstring>(
             (__int64)v8,
             (__int64)(v9 + 2),
             (__int64)(v15 + 2)) )
      {
        v19 = v15;
        while ( 1 )
        {
          v20 = (_QWORD **)(v15 + 1);
          if ( *(_QWORD **)(v13 + 8 * v14) == v19 )
            break;
          v15 = *v20;
          v19 = *v20;
          if ( !std::_Uhash_compare<std::wstring,std::hash<std::wstring>,std::equal_to<std::wstring>>::operator()<std::wstring,std::wstring>(
                  (__int64)v8,
                  (__int64)(v9 + 2),
                  (__int64)(*v20 + 2)) )
          {
            v21 = (_QWORD *)*v15;
            v22 = (_QWORD *)v9[1];
            *v22 = v10;
            v8 = (_QWORD *)v10[1];
            *v8 = v21;
            v23 = (_QWORD *)v21[1];
            *v23 = v9;
            v21[1] = v8;
            v10[1] = v22;
            v9[1] = v23;
            goto LABEL_18;
          }
        }
        v24 = (_QWORD *)v9[1];
        *v24 = v10;
        v25 = (_QWORD *)v10[1];
        *v25 = v15;
        v8 = *v20;
        *v8 = v9;
        *v20 = v25;
        v10[1] = v24;
        v9[1] = v8;
        *(_QWORD *)(v13 + 8 * v14) = v9;
      }
      else
      {
        v16 = *v15;
        if ( (_QWORD *)*v15 != v9 )
        {
          v17 = (_QWORD *)v9[1];
          *v17 = v10;
          v8 = (_QWORD *)v10[1];
          *v8 = v16;
          v18 = *(_QWORD **)(v16 + 8);
          *v18 = v9;
          *(_QWORD *)(v16 + 8) = v8;
          v10[1] = v17;
          v9[1] = v18;
        }
        *(_QWORD *)(v13 + 8 * v14 + 8) = v9;
      }
LABEL_18:
      v2 = a1;
    }
    v9 = v10;
    v6 = v2 + 3;
  }
  v28 = 0LL;
  return std::_Hash<std::_Umap_traits<std::wstring,TokenManager<CAudioPumpDspResourceTracker>,std::_Uhash_compare<std::wstring,std::hash<std::wstring>,std::equal_to<std::wstring>>,std::allocator<std::pair<std::wstring const,TokenManager<CAudioPumpDspResourceTracker>>>,0>>::_Clear_guard::~_Clear_guard(&v28);
}
