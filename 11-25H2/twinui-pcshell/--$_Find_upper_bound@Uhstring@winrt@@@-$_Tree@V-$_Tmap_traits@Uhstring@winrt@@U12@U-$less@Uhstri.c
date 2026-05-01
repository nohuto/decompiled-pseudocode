/*
 * XREFs of ??$_Find_upper_bound@Uhstring@winrt@@@?$_Tree@V?$_Tmap_traits@Uhstring@winrt@@U12@U?$less@Uhstring@winrt@@@std@@V?$allocator@U?$pair@$$CBUhstring@winrt@@U12@@std@@@4@$00@std@@@std@@IEBA?AU?$_Tree_find_result@PEAU?$_Tree_node@U?$pair@$$CBUhstring@winrt@@U12@@std@@PEAX@std@@@1@AEBUhstring@winrt@@@Z @ 0x180641034
 * Callers:
 *     ??$_Emplace@Uhstring@winrt@@U12@@?$_Tree@V?$_Tmap_traits@Uhstring@winrt@@U12@U?$less@Uhstring@winrt@@@std@@V?$allocator@U?$pair@$$CBUhstring@winrt@@U12@@std@@@4@$00@std@@@std@@IEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CBUhstring@winrt@@U12@@std@@PEAX@std@@_N@1@$$QEAUhstring@winrt@@0@Z @ 0x180640F2C (--$_Emplace@Uhstring@winrt@@U12@@-$_Tree@V-$_Tmap_traits@Uhstring@winrt@@U12@U-$less@Uhstring@wi.c)
 * Callees:
 *     ??$_Traits_compare@U?$char_traits@G@std@@@std@@YAHQEBG_K01@Z @ 0x1800B062C (--$_Traits_compare@U-$char_traits@G@std@@@std@@YAHQEBG_K01@Z.c)
 *     ??Bhstring@winrt@@QEBA?AV?$basic_string_view@GU?$char_traits@G@std@@@std@@XZ @ 0x180198578 (--Bhstring@winrt@@QEBA-AV-$basic_string_view@GU-$char_traits@G@std@@@std@@XZ.c)
 */

__int64 **__fastcall std::_Tree<std::_Tmap_traits<winrt::hstring,winrt::hstring,std::less<winrt::hstring>,std::allocator<std::pair<winrt::hstring const,winrt::hstring>>,1>>::_Find_upper_bound<winrt::hstring>(
        __int64 a1,
        __int64 **a2,
        __int64 *a3)
{
  __int64 **v4; // r11
  __int64 *v5; // r9
  __int64 *v6; // rbx
  __m128i v7; // xmm1
  __int64 *v8; // rax
  int v9; // eax
  __int64 v11; // [rsp+20h] [rbp-28h] BYREF
  _QWORD v12[3]; // [rsp+30h] [rbp-18h] BYREF

  v4 = a2;
  v5 = *(__int64 **)(*(_QWORD *)a1 + 8LL);
  *((_DWORD *)a2 + 2) = 0;
  *a2 = v5;
  *((_DWORD *)a2 + 3) = 0;
  v6 = *a2;
  a2[2] = *(__int64 **)a1;
  while ( !*((_BYTE *)v6 + 25) )
  {
    *v4 = v6;
    v7 = *(__m128i *)winrt::hstring::operator std::basic_string_view<unsigned short>(v6 + 4, &v11);
    v8 = winrt::hstring::operator std::basic_string_view<unsigned short>(a3, v12);
    LOBYTE(v9) = std::_Traits_compare<std::char_traits<unsigned short>>(
                   *v8,
                   v8[1],
                   (unsigned __int16 *)v7.m128i_i64[0],
                   _mm_srli_si128(v7, 8).m128i_u64[0]);
    if ( v9 >= 0 )
    {
      *((_DWORD *)v4 + 2) = 0;
      v6 = (__int64 *)v6[2];
    }
    else
    {
      *((_DWORD *)v4 + 2) = 1;
      v4[2] = v6;
      v6 = (__int64 *)*v6;
    }
  }
  return v4;
}
