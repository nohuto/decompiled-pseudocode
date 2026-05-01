/*
 * XREFs of ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@$$QEAV01@@Z @ 0x1803100BC
 * Callers:
 *     ?_Makestr@_System_error@std@@CA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@2@Verror_code@2@V32@@Z @ 0x180314EB8 (-_Makestr@_System_error@std@@CA-AV-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@2@Verr.c)
 *     ?to_string@winrt@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$basic_string_view@GU?$char_traits@G@std@@@3@@Z @ 0x180664DFC (-to_string@winrt@@YA-AV-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@V-$basic_str.c)
 * Callees:
 *     ?_Take_contents@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXAEAV12@@Z @ 0x180315108 (-_Take_contents@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@AEAAXAEAV12@@Z.c)
 */

__int64 __fastcall std::string::string(__int64 a1)
{
  __int64 v1; // rcx

  *(_OWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 24) = 0LL;
  std::string::_Take_contents();
  return v1;
}
