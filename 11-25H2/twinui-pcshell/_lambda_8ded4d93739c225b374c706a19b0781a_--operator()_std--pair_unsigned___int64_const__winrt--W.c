/*
 * XREFs of _lambda_8ded4d93739c225b374c706a19b0781a_::operator()_std::pair_unsigned___int64_const__winrt::Windows::Internal::Shell::implementation::WindowData__&_ @ 0x1800639B0
 * Callers:
 *     ?GetAllAppTabAllotment@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAA?AV?$unordered_map@_K_KU?$hash@_K@std@@U?$equal_to@_K@2@V?$allocator@U?$pair@$$CB_K_K@std@@@2@@std@@XZ @ 0x18006295C (-GetAllAppTabAllotment@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAA-AV-$unord.c)
 * Callees:
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x180058780 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ?GetAppIdForWindow@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@QEAA?AUhstring@6@_K@Z @ 0x180064178 (-GetAppIdForWindow@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@QEAA-AUhstring@6@_.c)
 *     ??$?0Uhstring@winrt@@$0A@@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@AEBUhstring@winrt@@AEBV?$allocator@G@1@@Z @ 0x1800642C8 (--$-0Uhstring@winrt@@$0A@@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@AEBU.c)
 *     ??$_Try_emplace@AEB_K$$V@?$_Hash@V?$_Umap_traits@_KV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@2@V?$allocator@U?$pair@$$CB_KV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@@2@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_List_node@U?$pair@$$CB_KV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@PEAX@std@@_N@1@AEB_K@Z @ 0x1800643A4 (--$_Try_emplace@AEB_K$$V@-$_Hash@V-$_Umap_traits@_KV-$basic_string@GU-$char_traits@G@std@@V-$all.c)
 *     ?assign@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z @ 0x180065104 (-assign@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z.c)
 *     ??$_Try_emplace@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@$$V@?$_Hash@V?$_Umap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@_KV?$_Uhash_compare@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$hash@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@U?$equal_to@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@_K@std@@@2@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_List_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@_K@std@@PEAX@std@@_N@1@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@@Z @ 0x180065478 (--$_Try_emplace@AEBV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@$$V@-$_Hash@V-$.c)
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x1800AC1A4 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall lambda_8ded4d93739c225b374c706a19b0781a_::operator()_std::pair_unsigned___int64_const__winrt::Windows::Internal::Shell::implementation::WindowData____(
        __int64 a1,
        _QWORD *a2)
{
  _QWORD *v4; // rsi
  __int64 v5; // rdx
  unsigned __int64 i; // r8
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 AppIdForWindow; // rax
  void **v12; // rcx
  void **v13; // rdx
  __int64 v14; // rbx
  _BYTE v15[8]; // [rsp+20h] [rbp-40h] BYREF
  _BYTE v16[16]; // [rsp+28h] [rbp-38h] BYREF
  void *Src[4]; // [rsp+38h] [rbp-28h] BYREF

  v4 = *(_QWORD **)a1;
  v5 = 0xCBF29CE484222325uLL;
  for ( i = 0LL; i < 8; ++i )
    v5 = 0x100000001B3LL * (*((unsigned __int8 *)a2 + i) ^ (unsigned __int64)v5);
  v7 = 2 * (v5 & v4[6]);
  v8 = v4[3];
  v9 = *(_QWORD *)(v8 + 8 * v7 + 8);
  if ( v9 == v4[1] )
  {
LABEL_8:
    v9 = 0LL;
  }
  else
  {
    v10 = *(_QWORD *)(v8 + 8 * v7);
    while ( *a2 != *(_QWORD *)(v9 + 16) )
    {
      if ( v9 == v10 )
        goto LABEL_8;
      v9 = *(_QWORD *)(v9 + 8);
    }
  }
  if ( !v9 )
    v9 = v4[1];
  if ( v9 == v4[1] )
  {
    AppIdForWindow = winrt::Windows::Internal::Shell::implementation::WindowTabHost::GetAppIdForWindow(
                       *(_QWORD *)(a1 + 16),
                       v15,
                       *a2);
    std::wstring::wstring(Src, AppIdForWindow);
    winrt::handle_type<winrt::impl::hstring_traits>::close(v15);
    if ( Src[2] )
    {
      v12 = (void **)(*(_QWORD *)std::_Hash<std::_Umap_traits<unsigned __int64,std::wstring,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,std::wstring>>,0>>::_Try_emplace<unsigned __int64 const &,>(
                                   v4,
                                   v16,
                                   a2)
                    + 24LL);
      if ( v12 != Src )
      {
        v13 = Src;
        if ( Src[3] > (void *)7 )
          v13 = (void **)Src[0];
        std::wstring::assign(v12, v13);
      }
      v14 = **(_QWORD **)(a1 + 24);
      *(_QWORD *)(*(_QWORD *)std::_Hash<std::_Umap_traits<std::wstring,unsigned __int64,std::_Uhash_compare<std::wstring,std::hash<std::wstring>,std::equal_to<std::wstring>>,std::allocator<std::pair<std::wstring const,unsigned __int64>>,0>>::_Try_emplace<std::wstring const &,>(
                               *(_QWORD *)(a1 + 8),
                               v16,
                               Src)
                + 48LL) = v14;
    }
    std::wstring::_Tidy_deallocate(Src);
  }
}
