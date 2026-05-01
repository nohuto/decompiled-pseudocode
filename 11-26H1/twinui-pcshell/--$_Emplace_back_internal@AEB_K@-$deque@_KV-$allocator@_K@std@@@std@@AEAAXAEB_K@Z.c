/*
 * XREFs of ??$_Emplace_back_internal@AEB_K@?$deque@_KV?$allocator@_K@std@@@std@@AEAAXAEB_K@Z @ 0x1801C9184
 * Callers:
 *     ?RemoveTabsFromWindowOrder@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAAXAEBV?$vector@Uguid@winrt@@V?$allocator@Uguid@winrt@@@std@@@std@@AEBV?$unordered_map@_KUguid@winrt@@U?$hash@_K@std@@U?$equal_to@_K@4@V?$allocator@U?$pair@$$CB_KUguid@winrt@@@std@@@4@@8@@Z @ 0x18002C14C (-RemoveTabsFromWindowOrder@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAAXAEBV-.c)
 *     ??$_Assign_range@V?$_Deque_unchecked_const_iterator@V?$_Deque_val@U?$_Deque_simple_types@_K@std@@@std@@@std@@V12@@?$deque@_KV?$allocator@_K@std@@@std@@AEAAXV?$_Deque_unchecked_const_iterator@V?$_Deque_val@U?$_Deque_simple_types@_K@std@@@std@@@1@V21@@Z @ 0x18057C6A4 (--$_Assign_range@V-$_Deque_unchecked_const_iterator@V-$_Deque_val@U-$_Deque_simple_types@_K@std@.c)
 *     ??0?$deque@_KV?$allocator@_K@std@@@std@@QEAA@_KAEB_K@Z @ 0x18057D5E4 (--0-$deque@_KV-$allocator@_K@std@@@std@@QEAA@_KAEB_K@Z.c)
 * Callees:
 *     ?_Growmap@?$deque@_KV?$allocator@_K@std@@@std@@AEAAX_K@Z @ 0x180163514 (-_Growmap@-$deque@_KV-$allocator@_K@std@@@std@@AEAAX_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x180285C68 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 *     ?_Subscript@?$_Deque_val@U?$_Deque_simple_types@V?$time_point@Usystem_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@23@@chrono@std@@@std@@@std@@QEBAAEBV?$time_point@Usystem_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@23@@chrono@2@_K@Z @ 0x18057E944 (-_Subscript@-$_Deque_val@U-$_Deque_simple_types@V-$time_point@Usystem_clock@chrono@std@@V-$durat.c)
 *     ?_Getblock@?$deque@V?$time_point@Usystem_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@23@@chrono@std@@V?$allocator@V?$time_point@Usystem_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@23@@chrono@std@@@3@@std@@AEBA_J_K@Z @ 0x18057F2E8 (-_Getblock@-$deque@V-$time_point@Usystem_clock@chrono@std@@V-$duration@_JU-$ratio@$00$0JIJGIA@@s.c)
 */

_QWORD *__fastcall std::deque<unsigned __int64>::_Emplace_back_internal<unsigned __int64 const &>(
        __int64 a1,
        _QWORD *a2)
{
  __int64 v4; // rcx
  __int64 v5; // rsi
  __int64 v6; // rdi
  _QWORD *result; // rax

  v4 = *(_QWORD *)(a1 + 32);
  if ( ((*(_BYTE *)(a1 + 24) + (_BYTE)v4) & 1) == 0 && *(_QWORD *)(a1 + 16) <= (unsigned __int64)(v4 + 2) >> 1 )
    std::deque<unsigned __int64>::_Growmap((_QWORD *)a1);
  *(_QWORD *)(a1 + 24) &= 2LL * *(_QWORD *)(a1 + 16) - 1;
  v5 = *(_QWORD *)(a1 + 32) + *(_QWORD *)(a1 + 24);
  v6 = std::deque<std::chrono::time_point<std::chrono::system_clock,std::chrono::duration<__int64,std::ratio<1,10000000>>>>::_Getblock(
         a1,
         v5);
  if ( !*(_QWORD *)(*(_QWORD *)(a1 + 8) + 8 * v6) )
    *(_QWORD *)(*(_QWORD *)(a1 + 8) + 8 * v6) = std::_Allocate<16,std::_Default_allocate_traits>(16LL);
  result = (_QWORD *)std::_Deque_val<std::_Deque_simple_types<std::chrono::time_point<std::chrono::system_clock,std::chrono::duration<__int64,std::ratio<1,10000000>>>>>::_Subscript(
                       a1,
                       v5);
  *result = *a2;
  ++*(_QWORD *)(a1 + 32);
  return result;
}
