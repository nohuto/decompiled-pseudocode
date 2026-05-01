/*
 * XREFs of ??$_Find_lower_bound@Uhstring@winrt@@@?$_Tree@V?$_Tmap_traits@Uhstring@winrt@@U12@U?$less@Uhstring@winrt@@@std@@V?$allocator@U?$pair@$$CBUhstring@winrt@@U12@@std@@@4@$0A@@std@@@std@@IEBA?AU?$_Tree_find_result@PEAU?$_Tree_node@U?$pair@$$CBUhstring@winrt@@U12@@std@@PEAX@std@@@1@AEBUhstring@winrt@@@Z @ 0x1803377FC
 * Callers:
 *     ??$_Emplace@AEBUhstring@winrt@@AEBU12@@?$_Tree@V?$_Tmap_traits@Uhstring@winrt@@U12@U?$less@Uhstring@winrt@@@std@@V?$allocator@U?$pair@$$CBUhstring@winrt@@U12@@std@@@4@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CBUhstring@winrt@@U12@@std@@PEAX@std@@_N@1@AEBUhstring@winrt@@0@Z @ 0x180337628 (--$_Emplace@AEBUhstring@winrt@@AEBU12@@-$_Tree@V-$_Tmap_traits@Uhstring@winrt@@U12@U-$less@Uhstr.c)
 *     ??$_Find@Uhstring@winrt@@@?$_Tree@V?$_Tmap_traits@Uhstring@winrt@@U12@U?$less@Uhstring@winrt@@@std@@V?$allocator@U?$pair@$$CBUhstring@winrt@@U12@@std@@@4@$0A@@std@@@std@@AEBAPEAU?$_Tree_node@U?$pair@$$CBUhstring@winrt@@U12@@std@@PEAX@1@AEBUhstring@winrt@@@Z @ 0x1803377B4 (--$_Find@Uhstring@winrt@@@-$_Tree@V-$_Tmap_traits@Uhstring@winrt@@U12@U-$less@Uhstring@winrt@@@s.c)
 *     ??$_Emplace@AEBUhstring@winrt@@AEBURemoteSystem@Shell@Internal@Windows@2@@?$_Tree@V?$_Tmap_traits@Uhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@U?$less@Uhstring@winrt@@@std@@V?$allocator@U?$pair@$$CBUhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@@std@@@8@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CBUhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@@std@@PEAX@std@@_N@1@AEBUhstring@winrt@@AEBURemoteSystem@Shell@Internal@Windows@4@@Z @ 0x18064490C (--$_Emplace@AEBUhstring@winrt@@AEBURemoteSystem@Shell@Internal@Windows@2@@-$_Tree@V-$_Tmap_trait.c)
 *     ?find@?$_Tree@V?$_Tmap_traits@Uhstring@winrt@@U12@U?$less@Uhstring@winrt@@@std@@V?$allocator@U?$pair@$$CBUhstring@winrt@@U12@@std@@@4@$00@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBUhstring@winrt@@U12@@std@@@std@@@std@@@2@AEBUhstring@winrt@@@Z @ 0x180667404 (-find@-$_Tree@V-$_Tmap_traits@Uhstring@winrt@@U12@U-$less@Uhstring@winrt@@@std@@V-$allocator@U-$.c)
 * Callees:
 *     ??$_Traits_compare@U?$char_traits@G@std@@@std@@YAHQEBG_K01@Z @ 0x180033B70 (--$_Traits_compare@U-$char_traits@G@std@@@std@@YAHQEBG_K01@Z.c)
 *     ??Bhstring@winrt@@QEBA?AV?$basic_string_view@GU?$char_traits@G@std@@@std@@XZ @ 0x1801909B8 (--Bhstring@winrt@@QEBA-AV-$basic_string_view@GU-$char_traits@G@std@@@std@@XZ.c)
 */

_QWORD *__fastcall std::_Tree<std::_Tmap_traits<winrt::hstring,winrt::hstring,std::less<winrt::hstring>,std::allocator<std::pair<winrt::hstring const,winrt::hstring>>,0>>::_Find_lower_bound<winrt::hstring>(
        __int64 a1,
        _QWORD *a2,
        __int64 *a3)
{
  __int64 *v5; // r9
  __int64 *v6; // rbx
  __m128i v7; // xmm1
  const wchar_t **v8; // rax
  int v9; // eax
  int v10; // eax
  __int64 v12; // [rsp+20h] [rbp-28h] BYREF
  _QWORD v13[3]; // [rsp+30h] [rbp-18h] BYREF

  v5 = *(__int64 **)(*(_QWORD *)a1 + 8LL);
  *a2 = v5;
  v6 = v5;
  a2[1] = 0LL;
  for ( a2[2] = *(_QWORD *)a1; !*((_BYTE *)v6 + 25); v6 = (__int64 *)*v6 )
  {
    *a2 = v6;
    v7 = *(__m128i *)winrt::hstring::operator std::basic_string_view<unsigned short>(a3, &v12);
    v8 = (const wchar_t **)winrt::hstring::operator std::basic_string_view<unsigned short>(v6 + 4, v13);
    LOBYTE(v9) = std::_Traits_compare<std::char_traits<unsigned short>>(
                   *v8,
                   (size_t)v8[1],
                   (const wchar_t *)v7.m128i_i64[0],
                   _mm_srli_si128(v7, 8).m128i_u64[0]);
    if ( v9 >= 0 )
    {
      a2[2] = v6;
      v10 = 1;
    }
    else
    {
      v6 += 2;
      v10 = 0;
    }
    *((_DWORD *)a2 + 2) = v10;
  }
  return a2;
}
