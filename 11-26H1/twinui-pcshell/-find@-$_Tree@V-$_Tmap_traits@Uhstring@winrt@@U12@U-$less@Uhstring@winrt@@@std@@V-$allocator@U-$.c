/*
 * XREFs of ?find@?$_Tree@V?$_Tmap_traits@Uhstring@winrt@@U12@U?$less@Uhstring@winrt@@@std@@V?$allocator@U?$pair@$$CBUhstring@winrt@@U12@@std@@@4@$00@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBUhstring@winrt@@U12@@std@@@std@@@std@@@2@AEBUhstring@winrt@@@Z @ 0x180667404
 * Callers:
 *     ?GetForLaunchUri@LaunchUriData@implementation@Shell@Internal@Windows@winrt@@SA?AV?$unique_ptr@ULaunchUriData@implementation@Shell@Internal@Windows@winrt@@U?$default_delete@ULaunchUriData@implementation@Shell@Internal@Windows@winrt@@@std@@@std@@AEBUUri@Foundation@56@@Z @ 0x180666D54 (-GetForLaunchUri@LaunchUriData@implementation@Shell@Internal@Windows@winrt@@SA-AV-$unique_ptr@UL.c)
 * Callees:
 *     ??$_Traits_compare@U?$char_traits@G@std@@@std@@YAHQEBG_K01@Z @ 0x180033B70 (--$_Traits_compare@U-$char_traits@G@std@@@std@@YAHQEBG_K01@Z.c)
 *     ??Bhstring@winrt@@QEBA?AV?$basic_string_view@GU?$char_traits@G@std@@@std@@XZ @ 0x1801909B8 (--Bhstring@winrt@@QEBA-AV-$basic_string_view@GU-$char_traits@G@std@@@std@@XZ.c)
 *     ??$_Find_lower_bound@Uhstring@winrt@@@?$_Tree@V?$_Tmap_traits@Uhstring@winrt@@U12@U?$less@Uhstring@winrt@@@std@@V?$allocator@U?$pair@$$CBUhstring@winrt@@U12@@std@@@4@$0A@@std@@@std@@IEBA?AU?$_Tree_find_result@PEAU?$_Tree_node@U?$pair@$$CBUhstring@winrt@@U12@@std@@PEAX@std@@@1@AEBUhstring@winrt@@@Z @ 0x1803377FC (--$_Find_lower_bound@Uhstring@winrt@@@-$_Tree@V-$_Tmap_traits@Uhstring@winrt@@U12@U-$less@Uhstri.c)
 */

_QWORD *__fastcall std::_Tree<std::_Tmap_traits<winrt::hstring,winrt::hstring,std::less<winrt::hstring>,std::allocator<std::pair<winrt::hstring const,winrt::hstring>>,1>>::find(
        __int64 *a1,
        _QWORD *a2,
        __int64 *a3)
{
  __int64 v6; // rbx
  __m128i v7; // xmm1
  const wchar_t **v8; // rax
  int v9; // eax
  _QWORD *result; // rax
  __int64 v11; // [rsp+20h] [rbp-38h] BYREF
  _QWORD v12[2]; // [rsp+30h] [rbp-28h] BYREF
  __int64 v13; // [rsp+40h] [rbp-18h]

  std::_Tree<std::_Tmap_traits<winrt::hstring,winrt::hstring,std::less<winrt::hstring>,std::allocator<std::pair<winrt::hstring const,winrt::hstring>>,0>>::_Find_lower_bound<winrt::hstring>(
    (__int64)a1,
    v12,
    a3);
  v6 = v13;
  if ( *(_BYTE *)(v13 + 25)
    || (v7 = *(__m128i *)winrt::hstring::operator std::basic_string_view<unsigned short>((__int64 *)(v13 + 32), &v11),
        v8 = (const wchar_t **)winrt::hstring::operator std::basic_string_view<unsigned short>(a3, v12),
        LOBYTE(v9) = std::_Traits_compare<std::char_traits<unsigned short>>(
                       *v8,
                       (size_t)v8[1],
                       (const wchar_t *)v7.m128i_i64[0],
                       _mm_srli_si128(v7, 8).m128i_u64[0]),
        v9 < 0) )
  {
    v6 = *a1;
  }
  result = a2;
  *a2 = v6;
  return result;
}
