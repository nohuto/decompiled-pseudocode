/*
 * XREFs of ?_Unchecked_erase@?$_Hash@V?$_Umap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$TokenManager@VCAudioPumpDspResourceTracker@@@@V?$_Uhash_compare@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$hash@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@U?$equal_to@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$TokenManager@VCAudioPumpDspResourceTracker@@@@@std@@@2@$0A@@std@@@std@@AEAAPEAU?$_List_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$TokenManager@VCAudioPumpDspResourceTracker@@@@@std@@PEAX@2@PEAU32@QEAU32@@Z @ 0x1800C2844
 * Callers:
 *     ?clear@?$_Hash@V?$_Umap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$TokenManager@VCAudioPumpDspResourceTracker@@@@V?$_Uhash_compare@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$hash@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@U?$equal_to@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$TokenManager@VCAudioPumpDspResourceTracker@@@@@std@@@2@$0A@@std@@@std@@QEAAXXZ @ 0x1800C29B8 (-clear@-$_Hash@V-$_Umap_traits@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@V-$.c)
 * Callees:
 *     ?_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z @ 0x180047580 (-_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z.c)
 *     ?_Bump_erased@_Range_eraser@?$_Hash@V?$_Umap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$TokenManager@VCAudioPumpDspResourceTracker@@@@V?$_Uhash_compare@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$hash@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@U?$equal_to@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$TokenManager@VCAudioPumpDspResourceTracker@@@@@std@@@2@$0A@@std@@@std@@QEAAXXZ @ 0x1800C24C4 (-_Bump_erased@_Range_eraser@-$_Hash@V-$_Umap_traits@V-$basic_string@GU-$char_traits@G@std@@V-$al.c)
 */

_QWORD *__fastcall std::_Hash<std::_Umap_traits<std::wstring,TokenManager<CAudioPumpDspResourceTracker>,std::_Uhash_compare<std::wstring,std::hash<std::wstring>,std::equal_to<std::wstring>>,std::allocator<std::pair<std::wstring const,TokenManager<CAudioPumpDspResourceTracker>>>,0>>::_Unchecked_erase(
        _QWORD *a1,
        _QWORD *a2,
        _QWORD *a3)
{
  _QWORD *v6; // r13
  _QWORD *v7; // r12
  __int64 v8; // rsi
  __int64 v9; // r8
  const unsigned __int8 *v10; // rdx
  __int64 appended; // rax
  _QWORD *i; // r11
  __int64 v13; // r15
  _QWORD *v14; // rax
  bool v15; // bl
  __int64 v16; // rcx
  const unsigned __int8 *v17; // rdx
  __int64 v18; // rax
  __int64 v19; // r14
  _QWORD *v20; // r13
  bool v21; // bl
  _QWORD *v22; // rax
  _QWORD *v24; // [rsp+20h] [rbp-20h] BYREF
  _QWORD *v25; // [rsp+28h] [rbp-18h]
  _QWORD *v26; // [rsp+30h] [rbp-10h]
  _QWORD *v28; // [rsp+88h] [rbp+48h]
  _QWORD *v29; // [rsp+90h] [rbp+50h]

  if ( a2 != a3 )
  {
    v6 = (_QWORD *)a2[1];
    v7 = (_QWORD *)a1[1];
    v8 = a1[3];
    v9 = a2[4];
    v26 = a2;
    v10 = (const unsigned __int8 *)(a2 + 2);
    v24 = a1 + 1;
    v25 = v6;
    if ( *((_QWORD *)v10 + 3) > 7uLL )
      v10 = *(const unsigned __int8 **)v10;
    appended = std::_Fnv1a_append_bytes((__int64)a1, v10, 2 * v9);
    v13 = 2 * (a1[6] & appended);
    v28 = *(_QWORD **)(v8 + 16 * (a1[6] & appended));
    v14 = *(_QWORD **)(v8 + 16 * (a1[6] & appended) + 8);
    v29 = v14;
    while ( 1 )
    {
      v15 = i == v14;
      std::_Hash<std::_Umap_traits<std::wstring,TokenManager<CAudioPumpDspResourceTracker>,std::_Uhash_compare<std::wstring,std::hash<std::wstring>,std::equal_to<std::wstring>>,std::allocator<std::pair<std::wstring const,TokenManager<CAudioPumpDspResourceTracker>>>,0>>::_Range_eraser::_Bump_erased(&v24);
      if ( v15 )
        break;
      i = v26;
      v14 = v29;
      if ( v26 == a3 )
      {
        if ( v28 == a2 )
          *(_QWORD *)(v8 + 8 * v13) = v26;
        goto LABEL_18;
      }
    }
    if ( v28 == a2 )
    {
      *(_QWORD *)(v8 + 8 * v13) = v7;
      v6 = v7;
    }
    *(_QWORD *)(v8 + 8 * v13 + 8) = v6;
    for ( i = v26; i != a3; *(_QWORD *)(v8 + 8 * v19 + 8) = v7 )
    {
      v17 = (const unsigned __int8 *)(i + 2);
      if ( i[5] > 7uLL )
        v17 = *(const unsigned __int8 **)v17;
      v18 = std::_Fnv1a_append_bytes(v16, v17, 2LL * i[4]);
      v19 = 2 * (a1[6] & v18);
      v20 = *(_QWORD **)(v8 + 16 * (a1[6] & v18) + 8);
      while ( 1 )
      {
        v21 = i == v20;
        std::_Hash<std::_Umap_traits<std::wstring,TokenManager<CAudioPumpDspResourceTracker>,std::_Uhash_compare<std::wstring,std::hash<std::wstring>,std::equal_to<std::wstring>>,std::allocator<std::pair<std::wstring const,TokenManager<CAudioPumpDspResourceTracker>>>,0>>::_Range_eraser::_Bump_erased(&v24);
        i = v26;
        if ( v21 )
          break;
        if ( v26 == a3 )
        {
          *(_QWORD *)(v8 + 8 * v19) = v26;
          goto LABEL_18;
        }
      }
      *(_QWORD *)(v8 + 8 * v19) = v7;
    }
LABEL_18:
    v22 = v25;
    *v25 = i;
    i[1] = v22;
  }
  return a3;
}
