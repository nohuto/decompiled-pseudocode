/*
 * XREFs of ?to_string@winrt@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$basic_string_view@GU?$char_traits@G@std@@@3@@Z @ 0x180664DFC
 * Callers:
 *     _lambda_8c1f6654c547dc66508309fc47ecefe4_::operator()_std::unordered_map_winrt::hstring_std::unordered_set_unsigned_int_std::hash_unsigned_int__std::equal_to_unsigned_int__std::allocator_unsigned_int____std::hash_winrt::hstring__std::equal_to_winrt::hstring__std::allocator_std::pair_winrt::hstring_const__std::unordered_set_unsigned_int_std::hash_unsigned_int__std::equal_to_unsigned_int__std::allocator_unsigned_int___________ @ 0x18066186C (_lambda_8c1f6654c547dc66508309fc47ecefe4_--operator()_std--unordered_map_winrt--hstring_std--uno.c)
 *     _lambda_8c1f6654c547dc66508309fc47ecefe4_::operator()_std::unordered_map_winrt::hstring_std::unordered_set_unsigned___int64_std::hash_unsigned___int64__std::equal_to_unsigned___int64__std::allocator_unsigned___int64____std::hash_winrt::hstring__std::equal_to_winrt::hstring__std::allocator_std::pair_winrt::hstring_const__std::unordered_set_unsigned___int64_std::hash_unsigned___int64__std::equal_to_unsigned___int64__std::allocator_unsigned___int64___________ @ 0x180661B9C (_lambda_8c1f6654c547dc66508309fc47ecefe4_--operator()_std--unordered_map_winrt--hst_ea_180661B9C.c)
 *     ?HandleProviderAppLaunchResult@BootProviderActivator@implementation@Shell@Internal@Windows@winrt@@UEAAXAEBU?$IAsyncOperation@_N@Foundation@56@@Z @ 0x180668F70 (-HandleProviderAppLaunchResult@BootProviderActivator@implementation@Shell@Internal@Windows@winrt.c)
 * Callees:
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     WINRT_IMPL_WideCharToMultiByte @ 0x1802CA463 (WINRT_IMPL_WideCharToMultiByte.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@$$QEAV01@@Z @ 0x1803100BC (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@$$QEAV01@@Z.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@XZ @ 0x1803101A0 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@XZ.c)
 *     ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ @ 0x180315204 (-_Tidy_deallocate@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@AEAAXXZ.c)
 *     ??$_Construct@$0A@D@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXD_K@Z @ 0x180661ED0 (--$_Construct@$0A@D@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@AEAAXD_K@Z.c)
 */

__int64 __fastcall winrt::to_string(__int64 a1, __int64 a2)
{
  const WCHAR *v2; // rbp
  int v4; // esi
  int v5; // eax
  __int64 v6; // rdx
  int cbMultiByte; // edi
  CHAR *lpMultiByteStr; // rax
  LPSTR v10[2]; // [rsp+50h] [rbp-48h] BYREF
  __int128 v11; // [rsp+60h] [rbp-38h]

  v2 = *(const WCHAR **)a2;
  v4 = *(_DWORD *)(a2 + 8);
  v5 = WINRT_IMPL_WideCharToMultiByte(0xFDE9u, 0, *(LPCWCH *)a2, v4, 0LL, 0, 0LL, 0LL);
  cbMultiByte = v5;
  if ( v5 )
  {
    *(_OWORD *)v10 = 0LL;
    v11 = 0LL;
    std::string::_Construct<0,char>(v10, v6, v5);
    lpMultiByteStr = (CHAR *)v10;
    if ( *((_QWORD *)&v11 + 1) > 0xFuLL )
      lpMultiByteStr = v10[0];
    WINRT_IMPL_WideCharToMultiByte(0xFDE9u, 0, v2, v4, lpMultiByteStr, cbMultiByte, 0LL, 0LL);
    std::string::string(a1);
    std::string::_Tidy_deallocate((__int64)v10);
  }
  else
  {
    std::string::string(a1);
  }
  return a1;
}
