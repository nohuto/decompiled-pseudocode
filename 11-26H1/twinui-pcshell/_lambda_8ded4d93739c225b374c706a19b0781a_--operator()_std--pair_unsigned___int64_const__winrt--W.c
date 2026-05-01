/*
 * XREFs of _lambda_8ded4d93739c225b374c706a19b0781a_::operator()_std::pair_unsigned___int64_const__winrt::Windows::Internal::Shell::implementation::WindowData__&_ @ 0x18013ABF0
 * Callers:
 *     ?GetAllAppTabAllotment@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAA?AV?$unordered_map@_K_KU?$hash@_K@std@@U?$equal_to@_K@2@V?$allocator@U?$pair@$$CB_K_K@std@@@2@@std@@XZ @ 0x18002EB20 (-GetAllAppTabAllotment@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAA-AV-$unord.c)
 * Callees:
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x18002E610 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x180031D20 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ??$_Construct@$00PEBG@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXQEBG_K@Z @ 0x180031E08 (--$_Construct@$00PEBG@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXQEBG_K@Z.c)
 *     ?GetAppIdForWindow@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@QEAA?AUhstring@6@_K@Z @ 0x18013AD14 (-GetAppIdForWindow@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@QEAA-AUhstring@6@_.c)
 *     ??$_Try_emplace@AEB_K$$V@?$_Hash@V?$_Umap_traits@_KV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@2@V?$allocator@U?$pair@$$CB_KV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@@2@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_List_node@U?$pair@$$CB_KV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@PEAX@std@@_N@1@AEB_K@Z @ 0x18013ADE0 (--$_Try_emplace@AEB_K$$V@-$_Hash@V-$_Umap_traits@_KV-$basic_string@GU-$char_traits@G@std@@V-$all.c)
 *     ?assign@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z @ 0x18013BBB8 (-assign@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z.c)
 *     ??$_Try_emplace@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@$$V@?$_Hash@V?$_Umap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@_KV?$_Uhash_compare@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$hash@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@U?$equal_to@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@_K@std@@@2@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_List_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@_K@std@@PEAX@std@@_N@1@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@@Z @ 0x18013C010 (--$_Try_emplace@AEBV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@$$_ea_18013C010.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ?find@?$_Hash@V?$_Umap_traits@_KV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@2@V?$allocator@U?$pair@$$CB_KV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@@2@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@@std@@@std@@@2@AEB_K@Z @ 0x18057FAF4 (-find@-$_Hash@V-$_Umap_traits@_KV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@V-.c)
 */

// Hidden C++ exception states: #wind=3
_QWORD *__fastcall lambda_8ded4d93739c225b374c706a19b0781a_::operator()_std::pair_unsigned___int64_const__winrt::Windows::Internal::Shell::implementation::WindowData____(
        _QWORD *a1,
        _QWORD *a2)
{
  __int64 v4; // rbx
  _QWORD *result; // rax
  __int64 *AppIdForWindow; // rax
  __int64 v7; // rcx
  const WCHAR *v8; // rdx
  unsigned __int64 v9; // r8
  void **v10; // rcx
  void **v11; // rdx
  __int64 v12; // rbx
  volatile signed __int32 *v13; // [rsp+20h] [rbp-40h] BYREF
  _BYTE v14[16]; // [rsp+28h] [rbp-38h] BYREF
  void *Src[2]; // [rsp+38h] [rbp-28h] BYREF
  __int64 v16; // [rsp+48h] [rbp-18h]
  unsigned __int64 v17; // [rsp+50h] [rbp-10h]

  v4 = *a1;
  result = (_QWORD *)std::_Hash<std::_Umap_traits<unsigned __int64,std::wstring,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,std::wstring>>,0>>::find(
                       *a1,
                       &v13,
                       a2);
  if ( *result == *(_QWORD *)(v4 + 8) )
  {
    AppIdForWindow = (__int64 *)winrt::Windows::Internal::Shell::implementation::WindowTabHost::GetAppIdForWindow(
                                  a1[2],
                                  &v13,
                                  *a2);
    *(_OWORD *)Src = 0LL;
    v16 = 0LL;
    v17 = 0LL;
    v7 = *AppIdForWindow;
    if ( *AppIdForWindow )
    {
      v8 = *(const WCHAR **)(v7 + 16);
      v9 = *(unsigned int *)(v7 + 4);
    }
    else
    {
      v8 = &pvData;
      v9 = 0LL;
    }
    std::wstring::_Construct<1,unsigned short const *>((char **)Src, v8, v9);
    winrt::handle_type<winrt::impl::hstring_traits>::close(&v13);
    if ( v16 )
    {
      v10 = (void **)(*(_QWORD *)std::_Hash<std::_Umap_traits<unsigned __int64,std::wstring,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,std::wstring>>,0>>::_Try_emplace<unsigned __int64 const &,>(
                                   *a1,
                                   v14,
                                   a2)
                    + 24LL);
      if ( v10 != Src )
      {
        v11 = Src;
        if ( v17 > 7 )
          v11 = (void **)Src[0];
        std::wstring::assign(v10, v11);
      }
      v12 = *(_QWORD *)a1[3];
      *(_QWORD *)(*(_QWORD *)std::_Hash<std::_Umap_traits<std::wstring,unsigned __int64,std::_Uhash_compare<std::wstring,std::hash<std::wstring>,std::equal_to<std::wstring>>,std::allocator<std::pair<std::wstring const,unsigned __int64>>,0>>::_Try_emplace<std::wstring const &,>(
                               a1[1],
                               v14,
                               Src)
                + 48LL) = v12;
    }
    return (_QWORD *)std::wstring::_Tidy_deallocate(Src);
  }
  return result;
}
