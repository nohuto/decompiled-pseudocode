/*
 * XREFs of ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@_KG@Z @ 0x1800F2514
 * Callers:
 *     ?make@?$string_maker@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@details@wil@@QEAAJPEBG_K@Z @ 0x1800585DC (-make@-$string_maker@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@@details@wil@.c)
 *     ?InitUserConfig@Theming@@YAXXZ @ 0x1800F1F4C (-InitUserConfig@Theming@@YAXXZ.c)
 *     ?copy_name@reg_iterator_details@reg@wil@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEBV45@_K@Z @ 0x1803B2D50 (-copy_name@reg_iterator_details@reg@wil@@YA-AV-$basic_string@GU-$char_traits@G@std@@V-$allocator.c)
 *     ?to_wstring@std@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@N@Z @ 0x18046A124 (-to_wstring@std@@YA-AV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@1@N@Z.c)
 *     ?GetDisplayNameFromWindow@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEAUHWND__@@@Z @ 0x180552B60 (-GetDisplayNameFromWindow@@YA-AV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@PEA.c)
 *     ?IsFileSystemSupported@LockScreenWidgetPackageHelperBase@@IEAA_NUPackageVolume@Deployment@Management@Windows@winrt@@@Z @ 0x1805B03C4 (-IsFileSystemSupported@LockScreenWidgetPackageHelperBase@@IEAA_NUPackageVolume@Deployment@Manage.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180029F1C (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Get_size_of_n@$01@std@@YA_K_K@Z @ 0x180029F78 (--$_Get_size_of_n@$01@std@@YA_K_K@Z.c)
 *     ?_Xlen_string@std@@YAXXZ @ 0x1802D0044 (-_Xlen_string@std@@YAXXZ.c)
 */

__int64 __fastcall std::wstring::wstring(__int64 a1, unsigned __int64 a2, __int16 a3)
{
  __int64 v4; // rdi
  size_t size_of; // rax
  _WORD *v8; // rdx
  _WORD *v9; // rdi
  unsigned __int64 j; // rcx
  _WORD *v12; // rdi
  unsigned __int64 i; // rcx

  v4 = 0x7FFFFFFFFFFFFFFELL;
  *(_OWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 24) = 0LL;
  if ( a2 > 0x7FFFFFFFFFFFFFFELL )
    std::_Xlen_string();
  *(_QWORD *)(a1 + 24) = 7LL;
  if ( a2 <= 7 )
  {
    *(_QWORD *)(a1 + 16) = a2;
    if ( a2 )
    {
      v12 = (_WORD *)a1;
      for ( i = a2; i; --i )
        *v12++ = a3;
    }
    *(_WORD *)(a1 + 2 * a2) = 0;
  }
  else
  {
    if ( (a2 | 7) <= 0x7FFFFFFFFFFFFFFELL )
    {
      v4 = a2 | 7;
      if ( (a2 | 7) < 0xA )
        v4 = 10LL;
    }
    size_of = std::_Get_size_of_n<2>(v4 + 1);
    v8 = std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
    *(_QWORD *)a1 = v8;
    *(_QWORD *)(a1 + 24) = v4;
    *(_QWORD *)(a1 + 16) = a2;
    v9 = v8;
    for ( j = a2; j; --j )
      *v9++ = a3;
    v8[a2] = 0;
  }
  return a1;
}
