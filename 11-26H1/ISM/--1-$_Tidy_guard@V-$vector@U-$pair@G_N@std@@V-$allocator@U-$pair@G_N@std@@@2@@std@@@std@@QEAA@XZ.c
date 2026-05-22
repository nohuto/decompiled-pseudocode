/*
 * XREFs of ??1?$_Tidy_guard@V?$vector@U?$pair@G_N@std@@V?$allocator@U?$pair@G_N@std@@@2@@std@@@std@@QEAA@XZ @ 0x18017C924
 * Callers:
 *     ??$_Construct_n@PEBU?$pair@G_N@std@@PEBU12@@?$vector@U?$pair@G_N@std@@V?$allocator@U?$pair@G_N@std@@@2@@std@@AEAAX_K$$QEAPEBU?$pair@G_N@1@1@Z @ 0x180095364 (--$_Construct_n@PEBU-$pair@G_N@std@@PEBU12@@-$vector@U-$pair@G_N@std@@V-$allocator@U-$pair@G_N@s.c)
 * Callees:
 *     ?_Tidy@?$vector@U?$pair@G_N@std@@V?$allocator@U?$pair@G_N@std@@@2@@std@@AEAAXXZ @ 0x180066368 (-_Tidy@-$vector@U-$pair@G_N@std@@V-$allocator@U-$pair@G_N@std@@@2@@std@@AEAAXXZ.c)
 */

__int64 __fastcall std::_Tidy_guard<std::vector<std::pair<unsigned short,bool>>>::~_Tidy_guard<std::vector<std::pair<unsigned short,bool>>>(
        __int64 **a1)
{
  __int64 *v1; // rcx
  __int64 result; // rax

  v1 = *a1;
  if ( v1 )
    return std::vector<std::pair<unsigned short,bool>>::_Tidy(v1);
  return result;
}
