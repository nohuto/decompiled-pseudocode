/*
 * XREFs of ?_Forced_rehash@?$_Hash@V?$_Umap_traits@V?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@V?$ComPtr@UIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@@23@V?$_Uhash_compare@V?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@U?$hash@V?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@@std@@U?$equal_to@V?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@@5@@std@@V?$allocator@U?$pair@$$CBV?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@V?$ComPtr@UIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@@23@@std@@@6@$0A@@std@@@std@@IEAAX_K@Z @ 0x1804955F8
 * Callers:
 *     ?_Rehash_for_1@?$_Hash@V?$_Umap_traits@V?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@V?$ComPtr@UIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@@23@V?$_Uhash_compare@V?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@U?$hash@V?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@@std@@U?$equal_to@V?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@@5@@std@@V?$allocator@U?$pair@$$CBV?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@V?$ComPtr@UIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@@23@@std@@@6@$0A@@std@@@std@@IEAAXXZ @ 0x1804957E0 (-_Rehash_for_1@-$_Hash@V-$_Umap_traits@V-$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@V-$ComPtr@UIV.c)
 * Callees:
 *     ??$?RV?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@@?$_Uhash_compare@V?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@U?$hash@V?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@@std@@U?$equal_to@V?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@@5@@std@@QEBA_KAEBV?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@@Z @ 0x180092860 (--$-RV-$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@@-$_Uhash_compare@V-$ComPtr@UIVirtualDesktop@@@.c)
 *     ?_Assign_grow@?$_Hash_vec@V?$allocator@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KUWindowData@implementation@Shell@Internal@Windows@winrt@@@std@@@std@@@std@@@std@@@std@@@std@@QEAAX_KV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KUWindowData@implementation@Shell@Internal@Windows@winrt@@@std@@@std@@@std@@@2@@Z @ 0x180136968 (-_Assign_grow@-$_Hash_vec@V-$allocator@V-$_List_unchecked_iterator@V-$_List_val@U-$_List_simple_.c)
 *     ??$?RV?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@V012@@?$_Uhash_compare@V?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@U?$hash@V?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@@std@@U?$equal_to@V?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@@5@@std@@QEBA_NAEBV?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@0@Z @ 0x1801A2520 (--$-RV-$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@V012@@-$_Uhash_compare@V-$ComPtr@UIVirtualDeskt.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ??1_Clear_guard@?$_Hash@V?$_Umap_traits@V?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@V?$ComPtr@UIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@@23@V?$_Uhash_compare@V?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@U?$hash@V?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@@std@@U?$equal_to@V?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@@5@@std@@V?$allocator@U?$pair@$$CBV?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@V?$ComPtr@UIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@@23@@std@@@6@$0A@@std@@@std@@QEAA@XZ @ 0x1804946B4 (--1_Clear_guard@-$_Hash@V-$_Umap_traits@V-$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@V-$ComPtr@UI.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall std::_Hash<std::_Umap_traits<Microsoft::WRL::ComPtr<IVirtualDesktop>,Microsoft::WRL::ComPtr<Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop>,std::_Uhash_compare<Microsoft::WRL::ComPtr<IVirtualDesktop>,std::hash<Microsoft::WRL::ComPtr<IVirtualDesktop>>,std::equal_to<Microsoft::WRL::ComPtr<IVirtualDesktop>>>,std::allocator<std::pair<Microsoft::WRL::ComPtr<IVirtualDesktop> const,Microsoft::WRL::ComPtr<Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop>>>,0>>::_Forced_rehash(
        unsigned __int64 *a1,
        unsigned __int64 a2)
{
  unsigned __int64 *v2; // rsi
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
  _QWORD *v18; // r12
  _QWORD *v19; // r8
  __int64 v20; // r8
  _QWORD *v21; // rdx
  _QWORD *v22; // rax
  _QWORD *v23; // rdx
  _QWORD *v24; // rax
  unsigned __int64 *v27; // [rsp+28h] [rbp-50h] BYREF

  v2 = a1;
  LODWORD(v27) = 0;
  _BitScanReverse64(&v3, 0xFFFFFFFFFFFFFFFuLL);
  if ( a2 > 1LL << v3 )
    std::_Xlength_error("invalid hash bucket count");
  LODWORD(v27) = 0;
  _BitScanReverse64(&v4, (a2 - 1) | 1);
  v5 = 1LL << ((unsigned __int8)v4 + 1);
  v6 = v2[1];
  v7 = (__int64 *)(v2 + 3);
  std::_Hash_vec<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned __int64 const,winrt::Windows::Internal::Shell::implementation::WindowData>>>>>>::_Assign_grow(
    (unsigned __int64 **)v2 + 3,
    2 * v5,
    v6);
  v2[6] = v5 - 1;
  v2[7] = v5;
  v27 = v2;
  v9 = *(_QWORD **)v2[1];
  v10 = v9;
  while ( v9 != (_QWORD *)v6 )
  {
    v10 = (_QWORD *)*v10;
    v11 = std::_Uhash_compare<Microsoft::WRL::ComPtr<IVirtualDesktop>,std::hash<Microsoft::WRL::ComPtr<IVirtualDesktop>>,std::equal_to<Microsoft::WRL::ComPtr<IVirtualDesktop>>>::operator()<Microsoft::WRL::ComPtr<IVirtualDesktop>>(
            (__int64)v8,
            (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))v9 + 2);
    v12 = 2 * (v11 & v2[6]);
    v13 = *v7;
    if ( *(_QWORD *)(v13 + 16 * (v11 & v2[6])) == v6 )
    {
      *(_QWORD *)(v13 + 16 * (v11 & v2[6])) = v9;
      *(_QWORD *)(v13 + 8 * v12 + 8) = v9;
    }
    else
    {
      v14 = *(_QWORD **)(v13 + 16 * (v11 & v2[6]) + 8);
      if ( std::_Uhash_compare<Microsoft::WRL::ComPtr<IVirtualDesktop>,std::hash<Microsoft::WRL::ComPtr<IVirtualDesktop>>,std::equal_to<Microsoft::WRL::ComPtr<IVirtualDesktop>>>::operator()<Microsoft::WRL::ComPtr<IVirtualDesktop>,Microsoft::WRL::ComPtr<IVirtualDesktop>>(
             (__int64)v8,
             (int (__fastcall ****)(_QWORD, GUID *, __int64 *))v9 + 2,
             v14 + 2) )
      {
        v18 = v14;
        while ( 1 )
        {
          v19 = v14 + 1;
          if ( *(_QWORD **)(v13 + 8 * v12) == v18 )
            break;
          v14 = (_QWORD *)*v19;
          v18 = (_QWORD *)*v19;
          if ( !std::_Uhash_compare<Microsoft::WRL::ComPtr<IVirtualDesktop>,std::hash<Microsoft::WRL::ComPtr<IVirtualDesktop>>,std::equal_to<Microsoft::WRL::ComPtr<IVirtualDesktop>>>::operator()<Microsoft::WRL::ComPtr<IVirtualDesktop>,Microsoft::WRL::ComPtr<IVirtualDesktop>>(
                  (__int64)v8,
                  (int (__fastcall ****)(_QWORD, GUID *, __int64 *))v9 + 2,
                  (_QWORD *)(*v19 + 16LL)) )
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
    v7 = (__int64 *)(v2 + 3);
  }
  v27 = 0LL;
  return std::_Hash<std::_Umap_traits<Microsoft::WRL::ComPtr<IVirtualDesktop>,Microsoft::WRL::ComPtr<Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop>,std::_Uhash_compare<Microsoft::WRL::ComPtr<IVirtualDesktop>,std::hash<Microsoft::WRL::ComPtr<IVirtualDesktop>>,std::equal_to<Microsoft::WRL::ComPtr<IVirtualDesktop>>>,std::allocator<std::pair<Microsoft::WRL::ComPtr<IVirtualDesktop> const,Microsoft::WRL::ComPtr<Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop>>>,0>>::_Clear_guard::~_Clear_guard(&v27);
}
