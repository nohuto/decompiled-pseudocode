/*
 * XREFs of ?_Forced_rehash@?$_Hash@V?$_Umap_traits@Uhstring@winrt@@_NV?$_Uhash_compare@Uhstring@winrt@@U?$hash@Uhstring@winrt@@@std@@U?$equal_to@Uhstring@winrt@@@4@@std@@V?$allocator@U?$pair@$$CBUhstring@winrt@@_N@std@@@4@$0A@@std@@@std@@IEAAX_K@Z @ 0x180616C44
 * Callers:
 *     ?_Rehash_for_1@?$_Hash@V?$_Umap_traits@Uhstring@winrt@@_NV?$_Uhash_compare@Uhstring@winrt@@U?$hash@Uhstring@winrt@@@std@@U?$equal_to@Uhstring@winrt@@@4@@std@@V?$allocator@U?$pair@$$CBUhstring@winrt@@_N@std@@@4@$0A@@std@@@std@@IEAAXXZ @ 0x180617384 (-_Rehash_for_1@-$_Hash@V-$_Umap_traits@Uhstring@winrt@@_NV-$_Uhash_compare@Uhstring@winrt@@U-$ha.c)
 * Callees:
 *     ?_Assign_grow@?$_Hash_vec@V?$allocator@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUhstring@winrt@@U12@@std@@@std@@@std@@@std@@@std@@@std@@QEAAX_KV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUhstring@winrt@@U12@@std@@@std@@@std@@@2@@Z @ 0x180137160 (-_Assign_grow@-$_Hash_vec@V-$allocator@V-$_List_unchecked_iterator@V-$_List_val@U-$_ea_180137160.c)
 *     ??$?RUhstring@winrt@@@?$_Uhash_compare@Uhstring@winrt@@U?$hash@Uhstring@winrt@@@std@@U?$equal_to@Uhstring@winrt@@@4@@std@@QEBA_KAEBUhstring@winrt@@@Z @ 0x18013789C (--$-RUhstring@winrt@@@-$_Uhash_compare@Uhstring@winrt@@U-$hash@Uhstring@winrt@@@std@@U-$equal_to.c)
 *     ??$?RUhstring@winrt@@U01@@?$_Uhash_compare@Uhstring@winrt@@U?$hash@Uhstring@winrt@@@std@@U?$equal_to@Uhstring@winrt@@@4@@std@@QEBA_NAEBUhstring@winrt@@0@Z @ 0x18013798C (--$-RUhstring@winrt@@U01@@-$_Uhash_compare@Uhstring@winrt@@U-$hash@Uhstring@winrt@@@std@@U-$equa.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ??1_Clear_guard@?$_Hash@V?$_Umap_traits@Uhstring@winrt@@_NV?$_Uhash_compare@Uhstring@winrt@@U?$hash@Uhstring@winrt@@@std@@U?$equal_to@Uhstring@winrt@@@4@@std@@V?$allocator@U?$pair@$$CBUhstring@winrt@@_N@std@@@4@$0A@@std@@@std@@QEAA@XZ @ 0x1806128D4 (--1_Clear_guard@-$_Hash@V-$_Umap_traits@Uhstring@winrt@@_NV-$_Uhash_compare@Uhstring@winrt@@U-$h.c)
 */

unsigned __int64 __fastcall std::_Hash<std::_Umap_traits<winrt::hstring,bool,std::_Uhash_compare<winrt::hstring,std::hash<winrt::hstring>,std::equal_to<winrt::hstring>>,std::allocator<std::pair<winrt::hstring const,bool>>,0>>::_Forced_rehash(
        __int64 a1,
        unsigned __int64 a2)
{
  unsigned __int64 v2; // rcx
  winrt::Windows::Internal::Shell::implementation::AppBackupListener *v3; // rbp
  unsigned __int64 v4; // rcx
  __int64 v5; // rbx
  winrt::Windows::Internal::Shell::implementation::AppBackupListener **v6; // rcx
  winrt::Windows::Internal::Shell::implementation::AppBackupListener *v7; // rbx
  winrt::Windows::Internal::Shell::implementation::AppBackupListener *v8; // rdi
  __int64 v9; // rax
  __int64 v10; // r11
  __int64 v11; // r15
  __int64 v12; // r14
  winrt::Windows::Internal::Shell::implementation::AppBackupListener **v13; // rsi
  winrt::Windows::Internal::Shell::implementation::AppBackupListener *v14; // r8
  winrt::Windows::Internal::Shell::implementation::AppBackupListener **v15; // rdx
  winrt::Windows::Internal::Shell::implementation::AppBackupListener **v16; // rax
  winrt::Windows::Internal::Shell::implementation::AppBackupListener **v17; // r12
  winrt::Windows::Internal::Shell::implementation::AppBackupListener ***v18; // r8
  winrt::Windows::Internal::Shell::implementation::AppBackupListener *v19; // r8
  winrt::Windows::Internal::Shell::implementation::AppBackupListener **v20; // rdx
  winrt::Windows::Internal::Shell::implementation::AppBackupListener **v21; // rax
  winrt::Windows::Internal::Shell::implementation::AppBackupListener **v22; // rdx
  winrt::Windows::Internal::Shell::implementation::AppBackupListener **v23; // rax
  __int64 v25; // [rsp+20h] [rbp-38h] BYREF

  LODWORD(v25) = 0;
  _BitScanReverse64(&v2, 0xFFFFFFFFFFFFFFFuLL);
  if ( a2 > 1LL << v2 )
    std::_Xlength_error("invalid hash bucket count");
  v3 = qword_1808DEF08;
  LODWORD(v25) = 0;
  _BitScanReverse64(&v4, (a2 - 1) | 1);
  v5 = 1LL << ((unsigned __int8)v4 + 1);
  std::_Hash_vec<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<winrt::hstring const,winrt::hstring>>>>>>::_Assign_grow(
    (unsigned __int64 **)&qword_1808DEF18,
    2 * v5,
    (unsigned __int64)qword_1808DEF08);
  qword_1808DEF38 = v5;
  qword_1808DEF30 = v5 - 1;
  v7 = *(winrt::Windows::Internal::Shell::implementation::AppBackupListener **)qword_1808DEF08;
  v8 = *(winrt::Windows::Internal::Shell::implementation::AppBackupListener **)qword_1808DEF08;
  while ( v7 != v3 )
  {
    v8 = *(winrt::Windows::Internal::Shell::implementation::AppBackupListener **)v8;
    v9 = std::_Uhash_compare<winrt::hstring,std::hash<winrt::hstring>,std::equal_to<winrt::hstring>>::operator()<winrt::hstring>(
           (__int64)v6,
           (__int64 *)v7 + 2);
    v11 = qword_1808DEF18;
    v12 = 2 * (v10 & v9);
    if ( *(winrt::Windows::Internal::Shell::implementation::AppBackupListener **)(qword_1808DEF18 + 16 * (v10 & v9)) == v3 )
    {
      *(_QWORD *)(qword_1808DEF18 + 16 * (v10 & v9)) = v7;
LABEL_7:
      *(_QWORD *)(v11 + 8 * v12 + 8) = v7;
      goto LABEL_16;
    }
    v13 = *(winrt::Windows::Internal::Shell::implementation::AppBackupListener ***)(qword_1808DEF18 + 16 * (v10 & v9) + 8);
    if ( !std::_Uhash_compare<winrt::hstring,std::hash<winrt::hstring>,std::equal_to<winrt::hstring>>::operator()<winrt::hstring,winrt::hstring>(
            (__int64)v6,
            (__int64 *)v7 + 2,
            (__int64 *)v13 + 2) )
    {
      v14 = *v13;
      if ( *v13 != v7 )
      {
        v15 = (winrt::Windows::Internal::Shell::implementation::AppBackupListener **)*((_QWORD *)v7 + 1);
        *v15 = v8;
        v6 = (winrt::Windows::Internal::Shell::implementation::AppBackupListener **)*((_QWORD *)v8 + 1);
        *v6 = v14;
        v16 = (winrt::Windows::Internal::Shell::implementation::AppBackupListener **)*((_QWORD *)v14 + 1);
        *v16 = v7;
        *((_QWORD *)v14 + 1) = v6;
        *((_QWORD *)v8 + 1) = v15;
        *((_QWORD *)v7 + 1) = v16;
      }
      goto LABEL_7;
    }
    v17 = v13;
    while ( 1 )
    {
      v18 = (winrt::Windows::Internal::Shell::implementation::AppBackupListener ***)(v13 + 1);
      if ( *(winrt::Windows::Internal::Shell::implementation::AppBackupListener ***)(v11 + 8 * v12) == v17 )
        break;
      v13 = *v18;
      v17 = *v18;
      if ( !std::_Uhash_compare<winrt::hstring,std::hash<winrt::hstring>,std::equal_to<winrt::hstring>>::operator()<winrt::hstring,winrt::hstring>(
              (__int64)v6,
              (__int64 *)v7 + 2,
              (__int64 *)*v18 + 2) )
      {
        v19 = *v13;
        v20 = (winrt::Windows::Internal::Shell::implementation::AppBackupListener **)*((_QWORD *)v7 + 1);
        *v20 = v8;
        v6 = (winrt::Windows::Internal::Shell::implementation::AppBackupListener **)*((_QWORD *)v8 + 1);
        *v6 = v19;
        v21 = (winrt::Windows::Internal::Shell::implementation::AppBackupListener **)*((_QWORD *)v19 + 1);
        *v21 = v7;
        *((_QWORD *)v19 + 1) = v6;
        *((_QWORD *)v8 + 1) = v20;
        *((_QWORD *)v7 + 1) = v21;
        goto LABEL_16;
      }
    }
    v22 = (winrt::Windows::Internal::Shell::implementation::AppBackupListener **)*((_QWORD *)v7 + 1);
    *v22 = v8;
    v23 = (winrt::Windows::Internal::Shell::implementation::AppBackupListener **)*((_QWORD *)v8 + 1);
    *v23 = (winrt::Windows::Internal::Shell::implementation::AppBackupListener *)v13;
    v6 = *v18;
    *v6 = v7;
    *v18 = v23;
    *((_QWORD *)v8 + 1) = v22;
    *((_QWORD *)v7 + 1) = v6;
    *(_QWORD *)(v11 + 8 * v12) = v7;
LABEL_16:
    v7 = v8;
  }
  v25 = 0LL;
  return std::_Hash<std::_Umap_traits<winrt::hstring,bool,std::_Uhash_compare<winrt::hstring,std::hash<winrt::hstring>,std::equal_to<winrt::hstring>>,std::allocator<std::pair<winrt::hstring const,bool>>,0>>::_Clear_guard::~_Clear_guard(&v25);
}
