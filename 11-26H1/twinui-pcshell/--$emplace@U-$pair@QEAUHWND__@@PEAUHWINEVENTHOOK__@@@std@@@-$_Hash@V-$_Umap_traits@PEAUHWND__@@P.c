/*
 * XREFs of ??$emplace@U?$pair@QEAUHWND__@@PEAUHWINEVENTHOOK__@@@std@@@?$_Hash@V?$_Umap_traits@PEAUHWND__@@PEAUHWINEVENTHOOK__@@V?$_Uhash_compare@PEAUHWND__@@U?$hash@PEAUHWND__@@@std@@U?$equal_to@PEAUHWND__@@@3@@std@@V?$allocator@U?$pair@QEAUHWND__@@PEAUHWINEVENTHOOK__@@@std@@@4@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAUHWND__@@PEAUHWINEVENTHOOK__@@@std@@@std@@@std@@@std@@_N@1@$$QEAU?$pair@QEAUHWND__@@PEAUHWINEVENTHOOK__@@@1@@Z @ 0x18065E1E0
 * Callers:
 *     winrt::Windows::Internal::Shell::implementation::WindowsTracker::SetEventHookForWindowAsync$_ResumeCoro$1 @ 0x18065EB90 (winrt--Windows--Internal--Shell--implementation--WindowsTracker--SetEventHookForWindowAsync$_Res.c)
 * Callees:
 *     ??$_Find_last@_K@?$_Hash@V?$_Umap_traits@_KV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@2@V?$allocator@U?$pair@$$CB_KV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@@2@$0A@@std@@@std@@IEBA?AU?$_Hash_find_last_result@PEAU?$_List_node@U?$pair@$$CB_KV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@PEAX@std@@@1@AEB_K_K@Z @ 0x18010BC30 (--$_Find_last@_K@-$_Hash@V-$_Umap_traits@_KV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G.c)
 *     ?_Insert_new_node_before@?$_Hash@V?$_Umap_traits@W4CloudPCState@Shell@Internal@Windows@winrt@@V?$shared_ptr@UConnectionStateBase@implementation@Shell@Internal@Windows@winrt@@@std@@V?$_Uhash_compare@W4CloudPCState@Shell@Internal@Windows@winrt@@U?$hash@W4CloudPCState@Shell@Internal@Windows@winrt@@@std@@U?$equal_to@W4CloudPCState@Shell@Internal@Windows@winrt@@@7@@7@V?$allocator@U?$pair@$$CBW4CloudPCState@Shell@Internal@Windows@winrt@@V?$shared_ptr@UConnectionStateBase@implementation@Shell@Internal@Windows@winrt@@@std@@@std@@@7@$0A@@std@@@std@@IEAAPEAU?$_List_node@U?$pair@$$CBW4CloudPCState@Shell@Internal@Windows@winrt@@V?$shared_ptr@UConnectionStateBase@implementation@Shell@Internal@Windows@winrt@@@std@@@std@@PEAX@2@_KQEAU32@1@Z @ 0x18013C510 (-_Insert_new_node_before@-$_Hash@V-$_Umap_traits@W4CloudPCState@Shell@Internal@Windows@winrt@@V-.c)
 *     ?_Desired_grow_bucket_count@?$_Hash@V?$_Umap_traits@Uhstring@winrt@@V?$unordered_set@IU?$hash@I@std@@U?$equal_to@I@2@V?$allocator@I@2@@std@@V?$_Uhash_compare@Uhstring@winrt@@U?$hash@Uhstring@winrt@@@std@@U?$equal_to@Uhstring@winrt@@@4@@4@V?$allocator@U?$pair@$$CBUhstring@winrt@@V?$unordered_set@IU?$hash@I@std@@U?$equal_to@I@2@V?$allocator@I@2@@std@@@std@@@4@$0A@@std@@@std@@IEBA_K_K@Z @ 0x18016DF38 (-_Desired_grow_bucket_count@-$_Hash@V-$_Umap_traits@Uhstring@winrt@@V-$unordered_set@IU-$hash@I@.c)
 *     ??1?$_Alloc_construct_ptr@V?$allocator@U?$_List_node@U?$pair@$$CBUhstring@winrt@@_N@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x18028599C (--1-$_Alloc_construct_ptr@V-$allocator@U-$_List_node@U-$pair@$$CBUhstring@winrt@@_N@std@@PEAX@st.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x180285C68 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 *     ??R?$_Conditionally_enabled_hash@PEAUHWINEVENTHOOK__@@$00@std@@SA_KAEBQEAUHWINEVENTHOOK__@@@Z @ 0x180285E40 (--R-$_Conditionally_enabled_hash@PEAUHWINEVENTHOOK__@@$00@std@@SA_KAEBQEAUHWINEVENTHOOK__@@@Z.c)
 *     ?_Forced_rehash@?$_Hash@V?$_Umap_traits@PEAUHWND__@@PEAUHWINEVENTHOOK__@@V?$_Uhash_compare@PEAUHWND__@@U?$hash@PEAUHWND__@@@std@@U?$equal_to@PEAUHWND__@@@3@@std@@V?$allocator@U?$pair@QEAUHWND__@@PEAUHWINEVENTHOOK__@@@std@@@4@$0A@@std@@@std@@IEAAX_K@Z @ 0x18065F2F0 (-_Forced_rehash@-$_Hash@V-$_Umap_traits@PEAUHWND__@@PEAUHWINEVENTHOOK__@@V-$_Uhash_compare@PEAUH.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall std::_Hash<std::_Umap_traits<HWND__ *,HWINEVENTHOOK__ *,std::_Uhash_compare<HWND__ *,std::hash<HWND__ *>,std::equal_to<HWND__ *>>,std::allocator<std::pair<HWND__ * const,HWINEVENTHOOK__ *>>,0>>::emplace<std::pair<HWND__ * const,HWINEVENTHOOK__ *>>(
        float *a1,
        __int64 a2,
        unsigned __int8 *a3)
{
  __int64 v6; // rbp
  _QWORD *v7; // r14
  __int64 v8; // rdx
  float v9; // xmm0_4
  __int64 v10; // rcx
  float v11; // xmm1_4
  __int64 v12; // rax
  __int64 v13; // rax
  _QWORD *v15; // [rsp+20h] [rbp-38h] BYREF
  _QWORD *v16; // [rsp+28h] [rbp-30h]
  _OWORD v17[2]; // [rsp+30h] [rbp-28h] BYREF

  v6 = std::_Conditionally_enabled_hash<HWINEVENTHOOK__ *,1>::operator()(a3);
  std::_Hash<std::_Umap_traits<unsigned __int64,std::wstring,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,std::wstring>>,0>>::_Find_last<unsigned __int64>(
    a1,
    (__int64 **)v17,
    a3,
    v6);
  if ( *((_QWORD *)&v17[0] + 1) )
  {
    *(_QWORD *)a2 = *((_QWORD *)&v17[0] + 1);
    *(_BYTE *)(a2 + 8) = 0;
  }
  else
  {
    if ( *((_QWORD *)a1 + 2) == 0x7FFFFFFFFFFFFFFLL )
      std::_Xlength_error("unordered_map/set too long");
    v15 = a1 + 2;
    v7 = std::_Allocate<16,std::_Default_allocate_traits>(0x20uLL);
    v16 = v7;
    *((_OWORD *)v7 + 1) = *(_OWORD *)a3;
    v8 = *((_QWORD *)a1 + 2) + 1LL;
    if ( v8 < 0 )
      v9 = (float)(v8 & 1 | (unsigned int)((unsigned __int64)v8 >> 1))
         + (float)(v8 & 1 | (unsigned int)((unsigned __int64)v8 >> 1));
    else
      v9 = (float)(int)v8;
    v10 = *((_QWORD *)a1 + 7);
    if ( v10 < 0 )
    {
      v12 = *((_QWORD *)a1 + 7) & 1LL | ((unsigned __int64)v10 >> 1);
      v11 = (float)(int)v12 + (float)(int)v12;
    }
    else
    {
      v11 = (float)(int)v10;
    }
    if ( (float)(v9 / v11) > *a1 )
    {
      v13 = std::_Hash<std::_Umap_traits<winrt::hstring,std::unordered_set<unsigned int>,std::_Uhash_compare<winrt::hstring,std::hash<winrt::hstring>,std::equal_to<winrt::hstring>>,std::allocator<std::pair<winrt::hstring const,std::unordered_set<unsigned int>>>,0>>::_Desired_grow_bucket_count(
              (__int64)a1,
              v8);
      std::_Hash<std::_Umap_traits<HWND__ *,HWINEVENTHOOK__ *,std::_Uhash_compare<HWND__ *,std::hash<HWND__ *>,std::equal_to<HWND__ *>>,std::allocator<std::pair<HWND__ * const,HWINEVENTHOOK__ *>>,0>>::_Forced_rehash(
        a1,
        v13);
      v17[0] = *(_OWORD *)std::_Hash<std::_Umap_traits<unsigned __int64,std::wstring,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,std::wstring>>,0>>::_Find_last<unsigned __int64>(
                            a1,
                            (__int64 **)v17,
                            v7 + 2,
                            v6);
    }
    v16 = 0LL;
    *(_QWORD *)a2 = std::_Hash<std::_Umap_traits<enum winrt::Windows::Internal::Shell::CloudPCState,std::shared_ptr<winrt::Windows::Internal::Shell::implementation::ConnectionStateBase>,std::_Uhash_compare<enum winrt::Windows::Internal::Shell::CloudPCState,std::hash<enum winrt::Windows::Internal::Shell::CloudPCState>,std::equal_to<enum winrt::Windows::Internal::Shell::CloudPCState>>,std::allocator<std::pair<enum winrt::Windows::Internal::Shell::CloudPCState const,std::shared_ptr<winrt::Windows::Internal::Shell::implementation::ConnectionStateBase>>>,0>>::_Insert_new_node_before(
                      a1,
                      v6,
                      *(__int64 *)&v17[0],
                      v7);
    *(_BYTE *)(a2 + 8) = 1;
    std::_Alloc_construct_ptr<std::allocator<std::_List_node<std::pair<winrt::hstring const,bool>,void *>>>::~_Alloc_construct_ptr<std::allocator<std::_List_node<std::pair<winrt::hstring const,bool>,void *>>>((__int64)&v15);
  }
  return a2;
}
