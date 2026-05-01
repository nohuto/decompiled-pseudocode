/*
 * XREFs of ??$_Construct@$00PEB_W@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@AEAAXQEB_W_K@Z @ 0x18069E3D4
 * Callers:
 *     ?GenerateCandidateListForTelemetry@@YA?AV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@AEBU?$IVectorView@UISwitchItem@Multitasking@ComposableShell@Internal@Windows@winrt@@@Collections@Foundation@Windows@winrt@@@Z @ 0x1801AFA90 (-GenerateCandidateListForTelemetry@@YA-AV-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W.c)
 * Callees:
 *     ??$_Get_size_of_n@$01@std@@YA_K_K@Z @ 0x180033648 (--$_Get_size_of_n@$01@std@@YA_K_K@Z.c)
 *     ?_Calculate_growth@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@CA_K_K00@Z @ 0x180033F54 (-_Calculate_growth@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@CA_K_K00@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x180285C68 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 *     ?_Xlen_string@std@@YAXXZ @ 0x1802C72B8 (-_Xlen_string@std@@YAXXZ.c)
 *     memcpy_0 @ 0x1802CE20A (memcpy_0.c)
 */

__int64 __fastcall std::wstring::_Construct<1,wchar_t const *>(char **a1, __int64 a2, unsigned __int64 a3)
{
  __int64 v5; // r15
  __int64 result; // rax
  unsigned __int64 v7; // rbx
  unsigned __int64 size_of; // rax
  char *v9; // rax
  char *v10; // rdi

  if ( a3 > 0x7FFFFFFFFFFFFFFELL )
    std::_Xlen_string();
  v5 = 2 * a3;
  if ( a3 > 7 )
  {
    v7 = std::wstring::_Calculate_growth(a3, 7uLL, 0x7FFFFFFFFFFFFFFEuLL);
    size_of = std::_Get_size_of_n<2>(v7 + 1);
    v9 = (char *)std::_Allocate<16,std::_Default_allocate_traits>(size_of);
    *a1 = v9;
    a1[2] = (char *)a3;
    a1[3] = (char *)v7;
    v10 = v9;
    memcpy_0(v9, &pvData, 2 * a3);
    result = 0LL;
    *(_WORD *)&v10[v5] = 0;
  }
  else
  {
    a1[3] = (char *)7;
    a1[2] = (char *)a3;
    memcpy_0(a1, &pvData, 2 * a3);
    result = 0LL;
    *(_WORD *)((char *)a1 + v5) = 0;
  }
  return result;
}
