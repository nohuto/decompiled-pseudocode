/*
 * XREFs of ??$_Construct@$0A@G@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXG_K@Z @ 0x180032C58
 * Callers:
 *     ?StartupToastNotifier@StartupAppMonitor@@CAXPEAV1@@Z @ 0x180030EA0 (-StartupToastNotifier@StartupAppMonitor@@CAXPEAV1@@Z.c)
 *     ?make@?$string_maker@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@details@wil@@QEAAJPEBG_K@Z @ 0x180032D0C (-make@-$string_maker@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@@details@wil@.c)
 *     ?InitUserConfig@Theming@@YAXXZ @ 0x180123CB8 (-InitUserConfig@Theming@@YAXXZ.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@_KG@Z @ 0x1801DBBF8 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@_KG@Z.c)
 * Callees:
 *     ??$_Get_size_of_n@$01@std@@YA_K_K@Z @ 0x180033648 (--$_Get_size_of_n@$01@std@@YA_K_K@Z.c)
 *     ?_Calculate_growth@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@CA_K_K00@Z @ 0x180033F54 (-_Calculate_growth@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@CA_K_K00@Z.c)
 *     wmemset @ 0x1801C35CC (wmemset.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x180285C68 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 *     ?_Xlen_string@std@@YAXXZ @ 0x1802C72B8 (-_Xlen_string@std@@YAXXZ.c)
 */

wchar_t *__fastcall std::wstring::_Construct<0,unsigned short>(__int64 a1, wchar_t a2, size_t a3)
{
  wchar_t *result; // rax
  __int64 v7; // rbx
  __int64 size_of; // rax
  wchar_t *v9; // rax
  __int64 v10; // r10

  if ( a3 > 0x7FFFFFFFFFFFFFFELL )
    std::_Xlen_string();
  if ( a3 > 7 )
  {
    v7 = std::wstring::_Calculate_growth(a3, 7LL);
    size_of = std::_Get_size_of_n<2>(v7 + 1);
    v9 = (wchar_t *)std::_Allocate<16,std::_Default_allocate_traits>(size_of);
    *(_QWORD *)a1 = v9;
    *(_QWORD *)(a1 + 16) = a3;
    *(_QWORD *)(a1 + 24) = v7;
    result = wmemset(v9, a2, a3);
    *(_WORD *)(v10 + 2 * a3) = 0;
  }
  else
  {
    *(_QWORD *)(a1 + 24) = 7LL;
    *(_QWORD *)(a1 + 16) = a3;
    result = wmemset((wchar_t *)a1, a2, a3);
    *(_WORD *)(a1 + 2 * a3) = 0;
  }
  return result;
}
