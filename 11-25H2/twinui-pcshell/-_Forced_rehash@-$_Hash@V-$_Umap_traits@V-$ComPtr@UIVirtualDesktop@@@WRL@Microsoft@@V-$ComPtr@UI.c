/*
 * XREFs of ?_Forced_rehash@?$_Hash@V?$_Umap_traits@V?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@V?$ComPtr@UIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@@23@V?$_Uhash_compare@V?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@U?$hash@V?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@@std@@U?$equal_to@V?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@@5@@std@@V?$allocator@U?$pair@$$CBV?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@V?$ComPtr@UIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@@23@@std@@@6@$0A@@std@@@std@@IEAAX_K@Z @ 0x180484BD0
 * Callers:
 *     ?_Rehash_for_1@?$_Hash@V?$_Umap_traits@V?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@V?$ComPtr@UIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@@23@V?$_Uhash_compare@V?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@U?$hash@V?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@@std@@U?$equal_to@V?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@@5@@std@@V?$allocator@U?$pair@$$CBV?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@V?$ComPtr@UIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@@23@@std@@@6@$0A@@std@@@std@@IEAAXXZ @ 0x180484DB4 (-_Rehash_for_1@-$_Hash@V-$_Umap_traits@V-$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@V-$ComPtr@UIV.c)
 * Callees:
 *     ?_Assign_grow@?$_Hash_vec@V?$allocator@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KUWindowData@implementation@Shell@Internal@Windows@winrt@@@std@@@std@@@std@@@std@@@std@@@std@@QEAAX_KV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KUWindowData@implementation@Shell@Internal@Windows@winrt@@@std@@@std@@@std@@@2@@Z @ 0x180063850 (-_Assign_grow@-$_Hash_vec@V-$allocator@V-$_List_unchecked_iterator@V-$_List_val@U-$_ea_180063850.c)
 *     ??$?RV?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@@?$_Uhash_compare@V?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@U?$hash@V?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@@std@@U?$equal_to@V?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@@5@@std@@QEBA_KAEBV?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@@Z @ 0x18007BCEC (--$-RV-$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@@-$_Uhash_compare@V-$ComPtr@UIVirtualDesktop@@@.c)
 *     ??$?RV?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@V012@@?$_Uhash_compare@V?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@U?$hash@V?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@@std@@U?$equal_to@V?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@@5@@std@@QEBA_NAEBV?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@0@Z @ 0x1801AAD94 (--$-RV-$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@V012@@-$_Uhash_compare@V-$ComPtr@UIVirtualDeskt.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     ??1_Clear_guard@?$_Hash@V?$_Umap_traits@V?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@V?$ComPtr@UIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@@23@V?$_Uhash_compare@V?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@U?$hash@V?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@@std@@U?$equal_to@V?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@@5@@std@@V?$allocator@U?$pair@$$CBV?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@V?$ComPtr@UIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@@23@@std@@@6@$0A@@std@@@std@@QEAA@XZ @ 0x180483CDC (--1_Clear_guard@-$_Hash@V-$_Umap_traits@V-$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@V-$ComPtr@UI.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall std::_Hash<std::_Umap_traits<Microsoft::WRL::ComPtr<IVirtualDesktop>,Microsoft::WRL::ComPtr<Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop>,std::_Uhash_compare<Microsoft::WRL::ComPtr<IVirtualDesktop>,std::hash<Microsoft::WRL::ComPtr<IVirtualDesktop>>,std::equal_to<Microsoft::WRL::ComPtr<IVirtualDesktop>>>,std::allocator<std::pair<Microsoft::WRL::ComPtr<IVirtualDesktop> const,Microsoft::WRL::ComPtr<Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop>>>,0>>::_Forced_rehash(
        _QWORD *a1,
        unsigned __int64 a2)
{
  _QWORD *v2; // rsi
  unsigned __int64 v3; // rcx
  unsigned __int64 v4; // rcx
  __int64 v5; // rbx
  unsigned __int64 v6; // rbp
  __int64 *v7; // r15
  _QWORD *v8; // rcx
  _QWORD *v9; // rbx
  _QWORD *v10; // rdi
  __int64 v11; // rax
  __int64 v12; // r14
  __int64 v13; // r15
  _QWORD *v14; // rsi
  __int64 v15; // r8
  _QWORD *v16; // rdx
  _QWORD *v17; // rax
  _QWORD *v18; // r13
  __int64 v19; // r8
  _QWORD *v20; // rdx
  _QWORD *v21; // rax
  _QWORD *v22; // rdx
  _QWORD *v23; // rax
  _QWORD *v26; // [rsp+28h] [rbp-50h] BYREF

  v2 = a1;
  LODWORD(v26) = 0;
  _BitScanReverse64(&v3, 0xFFFFFFFFFFFFFFFuLL);
  if ( a2 > 1LL << v3 )
    std::_Xlength_error("invalid hash bucket count");
  LODWORD(v26) = 0;
  _BitScanReverse64(&v4, (a2 - 1) | 1);
  v5 = 1LL << ((unsigned __int8)v4 + 1);
  v6 = v2[1];
  v7 = v2 + 3;
  std::_Hash_vec<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned __int64 const,winrt::Windows::Internal::Shell::implementation::WindowData>>>>>>::_Assign_grow(
    (__int64)(v2 + 3),
    2 * v5,
    v6);
  v2[6] = v5 - 1;
  v2[7] = v5;
  v26 = v2;
  v9 = *(_QWORD **)v2[1];
  v10 = v9;
  while ( v9 != (_QWORD *)v6 )
  {
    v10 = (_QWORD *)*v10;
    v11 = std::_Uhash_compare<Microsoft::WRL::ComPtr<IVirtualDesktop>,std::hash<Microsoft::WRL::ComPtr<IVirtualDesktop>>,std::equal_to<Microsoft::WRL::ComPtr<IVirtualDesktop>>>::operator()<Microsoft::WRL::ComPtr<IVirtualDesktop>>(
            (__int64)v8,
            (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))v9 + 2);
    v12 = 2 * (v2[6] & v11);
    v13 = *v7;
    if ( *(_QWORD *)(v13 + 16 * (v2[6] & v11)) == v6 )
    {
      *(_QWORD *)(v13 + 16 * (v2[6] & v11)) = v9;
      *(_QWORD *)(v13 + 8 * v12 + 8) = v9;
    }
    else
    {
      v14 = *(_QWORD **)(v13 + 16 * (v2[6] & v11) + 8);
      if ( std::_Uhash_compare<Microsoft::WRL::ComPtr<IVirtualDesktop>,std::hash<Microsoft::WRL::ComPtr<IVirtualDesktop>>,std::equal_to<Microsoft::WRL::ComPtr<IVirtualDesktop>>>::operator()<Microsoft::WRL::ComPtr<IVirtualDesktop>,Microsoft::WRL::ComPtr<IVirtualDesktop>>(
             (__int64)v8,
             (int (__fastcall ****)(_QWORD, GUID *, __int64 *))v9 + 2,
             v14 + 2) )
      {
        v18 = v14;
        while ( *(_QWORD **)(v13 + 8 * v12) != v18 )
        {
          v14 = (_QWORD *)v14[1];
          v18 = v14;
          if ( !std::_Uhash_compare<Microsoft::WRL::ComPtr<IVirtualDesktop>,std::hash<Microsoft::WRL::ComPtr<IVirtualDesktop>>,std::equal_to<Microsoft::WRL::ComPtr<IVirtualDesktop>>>::operator()<Microsoft::WRL::ComPtr<IVirtualDesktop>,Microsoft::WRL::ComPtr<IVirtualDesktop>>(
                  (__int64)v8,
                  (int (__fastcall ****)(_QWORD, GUID *, __int64 *))v9 + 2,
                  v14 + 2) )
          {
            v19 = *v14;
            v20 = (_QWORD *)v9[1];
            *v20 = v10;
            v8 = (_QWORD *)v10[1];
            *v8 = v19;
            v21 = *(_QWORD **)(v19 + 8);
            *v21 = v9;
            *(_QWORD *)(v19 + 8) = v8;
            v10[1] = v20;
            v9[1] = v21;
            goto LABEL_16;
          }
        }
        v22 = (_QWORD *)v9[1];
        *v22 = v10;
        v8 = (_QWORD *)v10[1];
        *v8 = v14;
        v23 = (_QWORD *)v14[1];
        *v23 = v9;
        v14[1] = v8;
        v10[1] = v22;
        v9[1] = v23;
        *(_QWORD *)(v13 + 8 * v12) = v9;
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
        *(_QWORD *)(v13 + 8 * v12 + 8) = v9;
      }
LABEL_16:
      v2 = a1;
    }
    v9 = v10;
    v7 = v2 + 3;
  }
  v26 = 0LL;
  return std::_Hash<std::_Umap_traits<Microsoft::WRL::ComPtr<IVirtualDesktop>,Microsoft::WRL::ComPtr<Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop>,std::_Uhash_compare<Microsoft::WRL::ComPtr<IVirtualDesktop>,std::hash<Microsoft::WRL::ComPtr<IVirtualDesktop>>,std::equal_to<Microsoft::WRL::ComPtr<IVirtualDesktop>>>,std::allocator<std::pair<Microsoft::WRL::ComPtr<IVirtualDesktop> const,Microsoft::WRL::ComPtr<Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop>>>,0>>::_Clear_guard::~_Clear_guard(&v26);
}
