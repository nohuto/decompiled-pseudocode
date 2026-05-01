/*
 * XREFs of ?_Getblock@?$deque@V?$time_point@Usystem_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@23@@chrono@std@@V?$allocator@V?$time_point@Usystem_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@23@@chrono@std@@@3@@std@@AEBA_J_K@Z @ 0x18057F2E8
 * Callers:
 *     ??$_Emplace_front_internal@AEBV?$time_point@Usystem_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@23@@chrono@std@@@?$deque@V?$time_point@Usystem_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@23@@chrono@std@@V?$allocator@V?$time_point@Usystem_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@23@@chrono@std@@@3@@std@@AEAAXAEBV?$time_point@Usystem_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@23@@chrono@1@@Z @ 0x180162A74 (--$_Emplace_front_internal@AEBV-$time_point@Usystem_clock@chrono@std@@V-$duration@_JU-$ratio@$00.c)
 *     ??$_Emplace_back_internal@AEBV?$time_point@Usystem_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@23@@chrono@std@@@?$deque@V?$time_point@Usystem_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@23@@chrono@std@@V?$allocator@V?$time_point@Usystem_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@23@@chrono@std@@@3@@std@@AEAAXAEBV?$time_point@Usystem_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@23@@chrono@1@@Z @ 0x180162D6C (--$_Emplace_back_internal@AEBV-$time_point@Usystem_clock@chrono@std@@V-$duration@_JU-$ratio@$00$.c)
 *     ??$_Emplace_front_internal@AEB_K@?$deque@_KV?$allocator@_K@std@@@std@@AEAAXAEB_K@Z @ 0x1801C90D0 (--$_Emplace_front_internal@AEB_K@-$deque@_KV-$allocator@_K@std@@@std@@AEAAXAEB_K@Z.c)
 *     ??$_Emplace_back_internal@AEB_K@?$deque@_KV?$allocator@_K@std@@@std@@AEAAXAEB_K@Z @ 0x1801C9184 (--$_Emplace_back_internal@AEB_K@-$deque@_KV-$allocator@_K@std@@@std@@AEAAXAEB_K@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::deque<std::chrono::time_point<std::chrono::system_clock,std::chrono::duration<__int64,std::ratio<1,10000000>>>>::_Getblock(
        __int64 a1,
        unsigned __int64 a2)
{
  return (a2 >> 1) & (*(_QWORD *)(a1 + 16) - 1LL);
}
