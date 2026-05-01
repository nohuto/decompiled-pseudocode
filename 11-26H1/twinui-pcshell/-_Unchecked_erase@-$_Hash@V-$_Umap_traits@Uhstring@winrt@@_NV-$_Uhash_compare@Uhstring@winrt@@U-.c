/*
 * XREFs of ?_Unchecked_erase@?$_Hash@V?$_Umap_traits@Uhstring@winrt@@_NV?$_Uhash_compare@Uhstring@winrt@@U?$hash@Uhstring@winrt@@@std@@U?$equal_to@Uhstring@winrt@@@4@@std@@V?$allocator@U?$pair@$$CBUhstring@winrt@@_N@std@@@4@$0A@@std@@@std@@AEAAPEAU?$_List_node@U?$pair@$$CBUhstring@winrt@@_N@std@@PEAX@2@PEAU32@QEAU32@@Z @ 0x180617424
 * Callers:
 *     ??1_Clear_guard@?$_Hash@V?$_Umap_traits@Uhstring@winrt@@_NV?$_Uhash_compare@Uhstring@winrt@@U?$hash@Uhstring@winrt@@@std@@U?$equal_to@Uhstring@winrt@@@4@@std@@V?$allocator@U?$pair@$$CBUhstring@winrt@@_N@std@@@4@$0A@@std@@@std@@QEAA@XZ @ 0x1806128D4 (--1_Clear_guard@-$_Hash@V-$_Umap_traits@Uhstring@winrt@@_NV-$_Uhash_compare@Uhstring@winrt@@U-$h.c)
 * Callees:
 *     ??$?RUhstring@winrt@@@?$_Uhash_compare@Uhstring@winrt@@U?$hash@Uhstring@winrt@@@std@@U?$equal_to@Uhstring@winrt@@@4@@std@@QEBA_KAEBUhstring@winrt@@@Z @ 0x18013789C (--$-RUhstring@winrt@@@-$_Uhash_compare@Uhstring@winrt@@U-$hash@Uhstring@winrt@@@std@@U-$equal_to.c)
 *     ?_Bump_erased@_Range_eraser@?$_Hash@V?$_Umap_traits@Uhstring@winrt@@_NV?$_Uhash_compare@Uhstring@winrt@@U?$hash@Uhstring@winrt@@@std@@U?$equal_to@Uhstring@winrt@@@4@@std@@V?$allocator@U?$pair@$$CBUhstring@winrt@@_N@std@@@4@$0A@@std@@@std@@QEAAXXZ @ 0x18061694C (-_Bump_erased@_Range_eraser@-$_Hash@V-$_Umap_traits@Uhstring@winrt@@_NV-$_Uhash_compare@Uhstring.c)
 */

__int64 __fastcall std::_Hash<std::_Umap_traits<winrt::hstring,bool,std::_Uhash_compare<winrt::hstring,std::hash<winrt::hstring>,std::equal_to<winrt::hstring>>,std::allocator<std::pair<winrt::hstring const,bool>>,0>>::_Unchecked_erase(
        _QWORD *a1,
        __int64 a2,
        __int64 a3)
{
  _QWORD *v6; // r12
  _QWORD *v7; // r15
  __int64 v8; // rsi
  __int64 v9; // rax
  __int64 v10; // r11
  __int64 v11; // r14
  __int64 v12; // rax
  __int64 v13; // r13
  bool v14; // bl
  __int64 v15; // rcx
  _QWORD *v16; // rax
  __int64 v18; // rax
  __int64 v19; // r12
  bool v20; // bl
  _QWORD *v21; // [rsp+20h] [rbp-58h] BYREF
  _QWORD *v22; // [rsp+28h] [rbp-50h]
  __int64 v23; // [rsp+30h] [rbp-48h]
  __int64 v25; // [rsp+88h] [rbp+10h]

  if ( a2 != a3 )
  {
    v6 = *(_QWORD **)(a2 + 8);
    v7 = (_QWORD *)a1[1];
    v8 = a1[3];
    v21 = a1 + 1;
    v22 = v6;
    v23 = a2;
    v9 = std::_Uhash_compare<winrt::hstring,std::hash<winrt::hstring>,std::equal_to<winrt::hstring>>::operator()<winrt::hstring>(
           (__int64)a1,
           (__int64 *)(a2 + 16));
    v11 = 2 * (a1[6] & v9);
    v12 = *(_QWORD *)(v8 + 16 * (a1[6] & v9) + 8);
    v13 = *(_QWORD *)(v8 + 8 * v11);
    v25 = *(_QWORD *)(v8 + 8 * v11 + 8);
    while ( 1 )
    {
      v14 = v10 == v12;
      std::_Hash<std::_Umap_traits<winrt::hstring,bool,std::_Uhash_compare<winrt::hstring,std::hash<winrt::hstring>,std::equal_to<winrt::hstring>>,std::allocator<std::pair<winrt::hstring const,bool>>,0>>::_Range_eraser::_Bump_erased(&v21);
      if ( v14 )
        break;
      v10 = v23;
      v12 = v25;
      if ( v23 == a3 )
      {
        if ( v13 == a2 )
LABEL_6:
          *(_QWORD *)(v8 + 8 * v11) = v10;
        goto LABEL_7;
      }
    }
    if ( v13 == a2 )
    {
      *(_QWORD *)(v8 + 8 * v11) = v7;
      v6 = v7;
    }
    for ( *(_QWORD *)(v8 + 8 * v11 + 8) = v6; ; *(_QWORD *)(v8 + 8 * v11 + 8) = v7 )
    {
      v10 = v23;
      if ( v23 == a3 )
        break;
      v18 = std::_Uhash_compare<winrt::hstring,std::hash<winrt::hstring>,std::equal_to<winrt::hstring>>::operator()<winrt::hstring>(
              v15,
              (__int64 *)(v23 + 16));
      v11 = 2 * (a1[6] & v18);
      v19 = *(_QWORD *)(v8 + 16 * (a1[6] & v18) + 8);
      while ( 1 )
      {
        v20 = v10 == v19;
        std::_Hash<std::_Umap_traits<winrt::hstring,bool,std::_Uhash_compare<winrt::hstring,std::hash<winrt::hstring>,std::equal_to<winrt::hstring>>,std::allocator<std::pair<winrt::hstring const,bool>>,0>>::_Range_eraser::_Bump_erased(&v21);
        if ( v20 )
          break;
        v10 = v23;
        if ( v23 == a3 )
          goto LABEL_6;
      }
      *(_QWORD *)(v8 + 8 * v11) = v7;
    }
LABEL_7:
    v16 = v22;
    *v22 = v10;
    *(_QWORD *)(v10 + 8) = v16;
  }
  return a3;
}
