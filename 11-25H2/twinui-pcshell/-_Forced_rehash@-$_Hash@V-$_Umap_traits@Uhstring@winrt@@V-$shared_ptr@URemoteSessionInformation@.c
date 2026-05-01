/*
 * XREFs of ?_Forced_rehash@?$_Hash@V?$_Umap_traits@Uhstring@winrt@@V?$shared_ptr@URemoteSessionInformation@implementation@Shell@Internal@Windows@winrt@@@std@@V?$_Uhash_compare@Uhstring@winrt@@U?$hash@Uhstring@winrt@@@std@@U?$equal_to@Uhstring@winrt@@@4@@4@V?$allocator@U?$pair@$$CBUhstring@winrt@@V?$shared_ptr@URemoteSessionInformation@implementation@Shell@Internal@Windows@winrt@@@std@@@std@@@4@$0A@@std@@@std@@IEAAX_K@Z @ 0x180636FC8
 * Callers:
 *     ??$emplace@U?$pair@$$CBUhstring@winrt@@V?$shared_ptr@URemoteSessionInformation@implementation@Shell@Internal@Windows@winrt@@@std@@@std@@@?$_Hash@V?$_Umap_traits@Uhstring@winrt@@V?$shared_ptr@URemoteSessionInformation@implementation@Shell@Internal@Windows@winrt@@@std@@V?$_Uhash_compare@Uhstring@winrt@@U?$hash@Uhstring@winrt@@@std@@U?$equal_to@Uhstring@winrt@@@4@@4@V?$allocator@U?$pair@$$CBUhstring@winrt@@V?$shared_ptr@URemoteSessionInformation@implementation@Shell@Internal@Windows@winrt@@@std@@@std@@@4@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUhstring@winrt@@V?$shared_ptr@URemoteSessionInformation@implementation@Shell@Internal@Windows@winrt@@@std@@@std@@@std@@@std@@@std@@_N@1@$$QEAU?$pair@$$CBUhstring@winrt@@V?$shared_ptr@URemoteSessionInformation@implementation@Shell@Internal@Windows@winrt@@@std@@@1@@Z @ 0x1806310B4 (--$emplace@U-$pair@$$CBUhstring@winrt@@V-$shared_ptr@URemoteSessionInformation@implementation@Sh.c)
 * Callees:
 *     ?_Assign_grow@?$_Hash_vec@V?$allocator@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUhstring@winrt@@U12@@std@@@std@@@std@@@std@@@std@@@std@@QEAAX_KV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUhstring@winrt@@U12@@std@@@std@@@std@@@2@@Z @ 0x1800FCF1C (-_Assign_grow@-$_Hash_vec@V-$allocator@V-$_List_unchecked_iterator@V-$_List_val@U-$_ea_1800FCF1C.c)
 *     ??$?RUhstring@winrt@@@?$_Uhash_compare@Uhstring@winrt@@U?$hash@Uhstring@winrt@@@std@@U?$equal_to@Uhstring@winrt@@@4@@std@@QEBA_KAEBUhstring@winrt@@@Z @ 0x1801AD370 (--$-RUhstring@winrt@@@-$_Uhash_compare@Uhstring@winrt@@U-$hash@Uhstring@winrt@@@std@@U-$equal_to.c)
 *     ??$?RUhstring@winrt@@U01@@?$_Uhash_compare@Uhstring@winrt@@U?$hash@Uhstring@winrt@@@std@@U?$equal_to@Uhstring@winrt@@@4@@std@@QEBA_NAEBUhstring@winrt@@0@Z @ 0x1801AD460 (--$-RUhstring@winrt@@U01@@-$_Uhash_compare@Uhstring@winrt@@U-$hash@Uhstring@winrt@@@std@@U-$equa.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     ??1_Clear_guard@?$_Hash@V?$_Umap_traits@Uhstring@winrt@@V?$shared_ptr@URemoteSessionInformation@implementation@Shell@Internal@Windows@winrt@@@std@@V?$_Uhash_compare@Uhstring@winrt@@U?$hash@Uhstring@winrt@@@std@@U?$equal_to@Uhstring@winrt@@@4@@4@V?$allocator@U?$pair@$$CBUhstring@winrt@@V?$shared_ptr@URemoteSessionInformation@implementation@Shell@Internal@Windows@winrt@@@std@@@std@@@4@$0A@@std@@@std@@QEAA@XZ @ 0x1806331AC (--1_Clear_guard@-$_Hash@V-$_Umap_traits@Uhstring@winrt@@V-$shared_ptr@URemoteSessionInformation@.c)
 */

unsigned __int64 __fastcall std::_Hash<std::_Umap_traits<winrt::hstring,std::shared_ptr<winrt::Windows::Internal::Shell::implementation::RemoteSessionInformation>,std::_Uhash_compare<winrt::hstring,std::hash<winrt::hstring>,std::equal_to<winrt::hstring>>,std::allocator<std::pair<winrt::hstring const,std::shared_ptr<winrt::Windows::Internal::Shell::implementation::RemoteSessionInformation>>>,0>>::_Forced_rehash(
        _QWORD *a1,
        unsigned __int64 a2)
{
  unsigned __int64 v3; // rcx
  unsigned __int64 v4; // rsi
  __int64 *v5; // rdi
  unsigned __int64 v6; // rcx
  __int64 v7; // rbx
  _QWORD *v8; // rcx
  _QWORD *v9; // r11
  _QWORD *v10; // rbx
  __int64 *v11; // r12
  unsigned __int64 v12; // rax
  __int64 v13; // r11
  __int64 v14; // rbp
  __int64 v15; // r14
  _QWORD *v16; // rdi
  __int64 v17; // r11
  __int64 v18; // r8
  _QWORD *v19; // rdx
  _QWORD *v20; // rax
  _QWORD *v21; // r15
  __int64 v22; // r8
  _QWORD *v23; // rdx
  _QWORD *v24; // rax
  _QWORD *v25; // rdx
  _QWORD *v26; // rax
  __int64 v28; // [rsp+20h] [rbp-48h] BYREF

  LODWORD(v28) = 0;
  _BitScanReverse64(&v3, 0xFFFFFFFFFFFFFFFuLL);
  if ( a2 > 1LL << v3 )
    std::_Xlength_error("invalid hash bucket count");
  LODWORD(v28) = 0;
  v4 = a1[1];
  v5 = a1 + 3;
  _BitScanReverse64(&v6, (a2 - 1) | 1);
  v7 = 1LL << ((unsigned __int8)v6 + 1);
  std::_Hash_vec<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<winrt::hstring const,winrt::hstring>>>>>>::_Assign_grow(
    (__int64)(a1 + 3),
    2 * v7,
    v4);
  a1[7] = v7;
  a1[6] = v7 - 1;
  v9 = *(_QWORD **)a1[1];
  v10 = v9;
  while ( v9 != (_QWORD *)v4 )
  {
    v10 = (_QWORD *)*v10;
    v11 = v9 + 2;
    v12 = std::_Uhash_compare<winrt::hstring,std::hash<winrt::hstring>,std::equal_to<winrt::hstring>>::operator()<winrt::hstring>(
            (__int64)v8,
            v9 + 2);
    v14 = *v5;
    v15 = 2 * (a1[6] & v12);
    if ( *(_QWORD *)(*v5 + 16 * (a1[6] & v12)) == v4 )
    {
      *(_QWORD *)(v14 + 16 * (a1[6] & v12)) = v13;
      *(_QWORD *)(v14 + 8 * v15 + 8) = v13;
    }
    else
    {
      v16 = *(_QWORD **)(v14 + 16 * (a1[6] & v12) + 8);
      if ( std::_Uhash_compare<winrt::hstring,std::hash<winrt::hstring>,std::equal_to<winrt::hstring>>::operator()<winrt::hstring,winrt::hstring>(
             (__int64)v8,
             v11,
             v16 + 2) )
      {
        v21 = v16;
        while ( *(_QWORD **)(v14 + 8 * v15) != v21 )
        {
          v16 = (_QWORD *)v16[1];
          v21 = v16;
          if ( !std::_Uhash_compare<winrt::hstring,std::hash<winrt::hstring>,std::equal_to<winrt::hstring>>::operator()<winrt::hstring,winrt::hstring>(
                  (__int64)v8,
                  v11,
                  v16 + 2) )
          {
            v22 = *v16;
            v23 = *(_QWORD **)(v17 + 8);
            *v23 = v10;
            v8 = (_QWORD *)v10[1];
            *v8 = v22;
            v24 = *(_QWORD **)(v22 + 8);
            *v24 = v17;
            *(_QWORD *)(v22 + 8) = v8;
            v10[1] = v23;
            *(_QWORD *)(v17 + 8) = v24;
            goto LABEL_16;
          }
        }
        v25 = *(_QWORD **)(v17 + 8);
        *v25 = v10;
        v8 = (_QWORD *)v10[1];
        *v8 = v16;
        v26 = (_QWORD *)v16[1];
        *v26 = v17;
        v16[1] = v8;
        v10[1] = v25;
        *(_QWORD *)(v17 + 8) = v26;
        *(_QWORD *)(v14 + 8 * v15) = v17;
      }
      else
      {
        v18 = *v16;
        if ( *v16 != v17 )
        {
          v19 = *(_QWORD **)(v17 + 8);
          *v19 = v10;
          v8 = (_QWORD *)v10[1];
          *v8 = v18;
          v20 = *(_QWORD **)(v18 + 8);
          *v20 = v17;
          *(_QWORD *)(v18 + 8) = v8;
          v10[1] = v19;
          *(_QWORD *)(v17 + 8) = v20;
        }
        *(_QWORD *)(v14 + 8 * v15 + 8) = v17;
      }
LABEL_16:
      v5 = a1 + 3;
    }
    v9 = v10;
  }
  v28 = 0LL;
  return std::_Hash<std::_Umap_traits<winrt::hstring,std::shared_ptr<winrt::Windows::Internal::Shell::implementation::RemoteSessionInformation>,std::_Uhash_compare<winrt::hstring,std::hash<winrt::hstring>,std::equal_to<winrt::hstring>>,std::allocator<std::pair<winrt::hstring const,std::shared_ptr<winrt::Windows::Internal::Shell::implementation::RemoteSessionInformation>>>,0>>::_Clear_guard::~_Clear_guard(&v28);
}
