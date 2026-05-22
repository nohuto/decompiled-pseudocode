/*
 * XREFs of ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@$$QEAV01@@Z @ 0x1800C4ACC
 * Callers:
 *     ??$?HDU?$char_traits@D@std@@V?$allocator@D@1@@std@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@0@$$QEAV10@QEBD@Z @ 0x1800C482C (--$-HDU-$char_traits@D@std@@V-$allocator@D@1@@std@@YA-AV-$basic_string@DU-$char_tra_ea_1800C482C.c)
 * Callees:
 *     ?_Take_contents@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXAEAV12@@Z @ 0x1800C601C (-_Take_contents@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@AEAAXAEAV12@@Z.c)
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
