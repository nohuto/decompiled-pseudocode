/*
 * XREFs of ?_Forced_rehash@?$_Hash@V?$_Uset_traits@Uguid@winrt@@V?$_Uhash_compare@Uguid@winrt@@U?$hash@Uguid@winrt@@@std@@U?$equal_to@Uguid@winrt@@@4@@std@@V?$allocator@Uguid@winrt@@@4@$0A@@std@@@std@@IEAAX_K@Z @ 0x18016DFDC
 * Callers:
 *     ?SyncWindowTabDataModel@WindowData@implementation@Shell@Internal@Windows@winrt@@QEAA_KW4AltTabFilterScope@MultiTasking@SystemSettings@@_K@Z @ 0x180029C64 (-SyncWindowTabDataModel@WindowData@implementation@Shell@Internal@Windows@winrt@@QEAA_KW4AltTabFi.c)
 *     ??$emplace@AEBUguid@winrt@@@?$_Hash@V?$_Uset_traits@Uguid@winrt@@V?$_Uhash_compare@Uguid@winrt@@U?$hash@Uguid@winrt@@@std@@U?$equal_to@Uguid@winrt@@@4@@std@@V?$allocator@Uguid@winrt@@@4@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@Uguid@winrt@@@std@@@std@@@std@@_N@1@AEBUguid@winrt@@@Z @ 0x18002BEA0 (--$emplace@AEBUguid@winrt@@@-$_Hash@V-$_Uset_traits@Uguid@winrt@@V-$_Uhash_compare@Uguid@winrt@@.c)
 * Callees:
 *     ?_Assign_grow@?$_Hash_vec@V?$allocator@V?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@Uguid@winrt@@@std@@@std@@U_Iterator_base0@2@@std@@@std@@@std@@QEAAX_KV?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@Uguid@winrt@@@std@@@std@@U_Iterator_base0@2@@2@@Z @ 0x1800549DC (-_Assign_grow@-$_Hash_vec@V-$allocator@V-$_List_unchecked_const_iterator@V-$_List_val@U-$_List_s.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 */

_QWORD *__fastcall std::_Hash<std::_Uset_traits<winrt::guid,std::_Uhash_compare<winrt::guid,std::hash<winrt::guid>,std::equal_to<winrt::guid>>,std::allocator<winrt::guid>,0>>::_Forced_rehash(
        _QWORD *a1,
        unsigned __int64 a2)
{
  unsigned __int64 v3; // rcx
  __int64 v4; // rsi
  unsigned __int64 v5; // rcx
  __int64 v6; // rbx
  _QWORD *result; // rax
  _QWORD *v8; // rcx
  __int64 v9; // r8
  unsigned __int64 i; // r9
  __int64 v11; // rdx
  __int64 v12; // r11
  __int64 v13; // r10
  _QWORD *v14; // rdx
  __int64 v15; // r8
  _QWORD *v16; // rbx
  _QWORD *v17; // r9
  _QWORD *v18; // r8
  _QWORD *v19; // rdx
  _QWORD *v20; // rbx
  __int64 v21; // r8
  _QWORD *v22; // r10
  _QWORD *v23; // r9
  _QWORD *v24; // r8
  _QWORD *v25; // rdx
  _QWORD *v26; // r9
  _QWORD *v27; // r8
  _QWORD *v28; // rdx

  _BitScanReverse64(&v3, 0xFFFFFFFFFFFFFFFuLL);
  if ( a2 > 1LL << v3 )
    std::_Xlength_error("invalid hash bucket count");
  v4 = a1[1];
  _BitScanReverse64(&v5, (a2 - 1) | 1);
  v6 = 1LL << ((unsigned __int8)v5 + 1);
  std::_Hash_vec<std::allocator<std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<winrt::guid>>,std::_Iterator_base0>>>::_Assign_grow(
    a1 + 3,
    2 * v6,
    v4);
  a1[7] = v6;
  a1[6] = v6 - 1;
  result = *(_QWORD **)a1[1];
  v8 = result;
  while ( result != (_QWORD *)v4 )
  {
    v8 = (_QWORD *)*v8;
    v9 = 0xCBF29CE484222325uLL;
    for ( i = 0LL; i < 0x10; ++i )
    {
      v11 = *((unsigned __int8 *)result + i + 16);
      v9 = 0x100000001B3LL * (v11 ^ v9);
    }
    v12 = a1[3];
    v13 = 2 * (v9 & a1[6]);
    if ( *(_QWORD *)(v12 + 16 * (v9 & a1[6])) == v4 )
    {
      *(_QWORD *)(v12 + 16 * (v9 & a1[6])) = result;
LABEL_8:
      *(_QWORD *)(v12 + 8 * v13 + 8) = result;
      goto LABEL_9;
    }
    v14 = *(_QWORD **)(v12 + 16 * (v9 & a1[6]) + 8);
    v15 = result[2] - v14[2];
    if ( !v15 )
      v15 = result[3] - v14[3];
    if ( !v15 )
    {
      v16 = (_QWORD *)*v14;
      if ( (_QWORD *)*v14 != result )
      {
        v17 = (_QWORD *)result[1];
        *v17 = v8;
        v18 = (_QWORD *)v8[1];
        *v18 = v16;
        v19 = (_QWORD *)v16[1];
        *v19 = result;
        v16[1] = v18;
        v8[1] = v17;
        result[1] = v19;
      }
      goto LABEL_8;
    }
    while ( 1 )
    {
      v20 = v14 + 1;
      if ( *(_QWORD **)(v12 + 8 * v13) == v14 )
        break;
      v14 = (_QWORD *)*v20;
      v21 = result[2] - *(_QWORD *)(*v20 + 16LL);
      if ( !v21 )
        v21 = result[3] - v14[3];
      if ( !v21 )
      {
        v22 = (_QWORD *)*v14;
        v23 = (_QWORD *)result[1];
        *v23 = v8;
        v24 = (_QWORD *)v8[1];
        *v24 = v22;
        v25 = (_QWORD *)v22[1];
        *v25 = result;
        v22[1] = v24;
        v8[1] = v23;
        result[1] = v25;
        goto LABEL_9;
      }
    }
    v26 = (_QWORD *)result[1];
    *v26 = v8;
    v27 = (_QWORD *)v8[1];
    *v27 = v14;
    v28 = (_QWORD *)*v20;
    *v28 = result;
    *v20 = v27;
    v8[1] = v26;
    result[1] = v28;
    *(_QWORD *)(v12 + 8 * v13) = result;
LABEL_9:
    result = v8;
  }
  return result;
}
