/*
 * XREFs of ??$_Lower_bound_duplicate@Uhstring@winrt@@@?$_Tree@V?$_Tmap_traits@Uhstring@winrt@@U12@U?$less@Uhstring@winrt@@@std@@V?$allocator@U?$pair@$$CBUhstring@winrt@@U12@@std@@@4@$0A@@std@@@std@@IEBA_NQEAU?$_Tree_node@U?$pair@$$CBUhstring@winrt@@U12@@std@@PEAX@1@AEBUhstring@winrt@@@Z @ 0x180337DA0
 * Callers:
 *     ??$_Emplace@AEBUhstring@winrt@@AEBU12@@?$_Tree@V?$_Tmap_traits@Uhstring@winrt@@U12@U?$less@Uhstring@winrt@@@std@@V?$allocator@U?$pair@$$CBUhstring@winrt@@U12@@std@@@4@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CBUhstring@winrt@@U12@@std@@PEAX@std@@_N@1@AEBUhstring@winrt@@0@Z @ 0x180337B24 (--$_Emplace@AEBUhstring@winrt@@AEBU12@@-$_Tree@V-$_Tmap_traits@Uhstring@winrt@@U12@U-$less@Uhstr.c)
 *     ??$_Find@Uhstring@winrt@@@?$_Tree@V?$_Tmap_traits@Uhstring@winrt@@U12@U?$less@Uhstring@winrt@@@std@@V?$allocator@U?$pair@$$CBUhstring@winrt@@U12@@std@@@4@$0A@@std@@@std@@AEBAPEAU?$_Tree_node@U?$pair@$$CBUhstring@winrt@@U12@@std@@PEAX@1@AEBUhstring@winrt@@@Z @ 0x180337CB0 (--$_Find@Uhstring@winrt@@@-$_Tree@V-$_Tmap_traits@Uhstring@winrt@@U12@U-$less@Uhstring@winrt@@@s.c)
 *     ??$_Emplace@AEBUhstring@winrt@@AEBURemoteSystem@Shell@Internal@Windows@2@@?$_Tree@V?$_Tmap_traits@Uhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@U?$less@Uhstring@winrt@@@std@@V?$allocator@U?$pair@$$CBUhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@@std@@@8@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CBUhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@@std@@PEAX@std@@_N@1@AEBUhstring@winrt@@AEBURemoteSystem@Shell@Internal@Windows@4@@Z @ 0x18061EE18 (--$_Emplace@AEBUhstring@winrt@@AEBURemoteSystem@Shell@Internal@Windows@2@@-$_Tree@V-$_Tmap_trait.c)
 * Callees:
 *     ??$_Traits_compare@U?$char_traits@G@std@@@std@@YAHQEBG_K01@Z @ 0x1800B062C (--$_Traits_compare@U-$char_traits@G@std@@@std@@YAHQEBG_K01@Z.c)
 *     ??Bhstring@winrt@@QEBA?AV?$basic_string_view@GU?$char_traits@G@std@@@std@@XZ @ 0x180198578 (--Bhstring@winrt@@QEBA-AV-$basic_string_view@GU-$char_traits@G@std@@@std@@XZ.c)
 */

char __fastcall std::_Tree<std::_Tmap_traits<winrt::hstring,winrt::hstring,std::less<winrt::hstring>,std::allocator<std::pair<winrt::hstring const,winrt::hstring>>,0>>::_Lower_bound_duplicate<winrt::hstring>(
        __int64 a1,
        __int64 a2)
{
  char v2; // r11
  __m128i v3; // xmm1
  __int64 *v4; // r9
  __int64 *v5; // rax
  int v6; // eax
  __int64 v8; // [rsp+20h] [rbp-28h] BYREF
  _QWORD v9[3]; // [rsp+30h] [rbp-18h] BYREF

  v2 = 0;
  if ( !*(_BYTE *)(a2 + 25) )
  {
    v3 = *(__m128i *)winrt::hstring::operator std::basic_string_view<unsigned short>((__int64 *)(a2 + 32), &v8);
    v5 = winrt::hstring::operator std::basic_string_view<unsigned short>(v4, v9);
    LOBYTE(v6) = std::_Traits_compare<std::char_traits<unsigned short>>(
                   *v5,
                   v5[1],
                   (unsigned __int16 *)v3.m128i_i64[0],
                   _mm_srli_si128(v3, 8).m128i_u64[0]);
    if ( v6 >= 0 )
      return 1;
  }
  return v2;
}
