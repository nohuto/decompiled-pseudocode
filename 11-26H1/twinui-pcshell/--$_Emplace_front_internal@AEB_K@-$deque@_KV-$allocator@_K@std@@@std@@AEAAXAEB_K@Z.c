/*
 * XREFs of ??$_Emplace_front_internal@AEB_K@?$deque@_KV?$allocator@_K@std@@@std@@AEAAXAEB_K@Z @ 0x1801C90D0
 * Callers:
 *     ?push_front@?$deque@_KV?$allocator@_K@std@@@std@@QEAAXAEB_K@Z @ 0x18057FE08 (-push_front@-$deque@_KV-$allocator@_K@std@@@std@@QEAAXAEB_K@Z.c)
 * Callees:
 *     ?_Growmap@?$deque@_KV?$allocator@_K@std@@@std@@AEAAX_K@Z @ 0x180163514 (-_Growmap@-$deque@_KV-$allocator@_K@std@@@std@@AEAAX_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x180285C68 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 *     ?_Subscript@?$_Deque_val@U?$_Deque_simple_types@V?$time_point@Usystem_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@23@@chrono@std@@@std@@@std@@QEBAAEBV?$time_point@Usystem_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@23@@chrono@2@_K@Z @ 0x18057E944 (-_Subscript@-$_Deque_val@U-$_Deque_simple_types@V-$time_point@Usystem_clock@chrono@std@@V-$durat.c)
 *     ?_Getblock@?$deque@V?$time_point@Usystem_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@23@@chrono@std@@V?$allocator@V?$time_point@Usystem_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@23@@chrono@std@@@3@@std@@AEBA_J_K@Z @ 0x18057F2E8 (-_Getblock@-$deque@V-$time_point@Usystem_clock@chrono@std@@V-$duration@_JU-$ratio@$00$0JIJGIA@@s.c)
 */

_QWORD *__fastcall std::deque<unsigned __int64>::_Emplace_front_internal<unsigned __int64 const &>(
        _QWORD *a1,
        _QWORD *a2)
{
  __int64 v4; // rcx
  bool v5; // zf
  __int64 v6; // rdi
  __int64 v7; // rdi
  __int64 v8; // rbp
  _QWORD *result; // rax

  if ( (a1[3] & 1) == 0 && a1[2] <= (unsigned __int64)(a1[4] + 2LL) >> 1 )
    std::deque<unsigned __int64>::_Growmap(a1);
  v4 = 2LL * a1[2];
  v5 = ((v4 - 1) & a1[3]) == 0;
  a1[3] &= v4 - 1;
  v6 = a1[3];
  if ( v5 )
    v6 = v4;
  v7 = v6 - 1;
  v8 = std::deque<std::chrono::time_point<std::chrono::system_clock,std::chrono::duration<__int64,std::ratio<1,10000000>>>>::_Getblock(
         a1,
         v7);
  if ( !*(_QWORD *)(a1[1] + 8 * v8) )
    *(_QWORD *)(a1[1] + 8 * v8) = std::_Allocate<16,std::_Default_allocate_traits>(16LL);
  result = (_QWORD *)std::_Deque_val<std::_Deque_simple_types<std::chrono::time_point<std::chrono::system_clock,std::chrono::duration<__int64,std::ratio<1,10000000>>>>>::_Subscript(
                       a1,
                       v7);
  *result = *a2;
  a1[3] = v7;
  ++a1[4];
  return result;
}
