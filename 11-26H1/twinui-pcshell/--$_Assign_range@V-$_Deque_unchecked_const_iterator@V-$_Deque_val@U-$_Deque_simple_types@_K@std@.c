/*
 * XREFs of ??$_Assign_range@V?$_Deque_unchecked_const_iterator@V?$_Deque_val@U?$_Deque_simple_types@_K@std@@@std@@@std@@V12@@?$deque@_KV?$allocator@_K@std@@@std@@AEAAXV?$_Deque_unchecked_const_iterator@V?$_Deque_val@U?$_Deque_simple_types@_K@std@@@std@@@1@V21@@Z @ 0x18057C6A4
 * Callers:
 *     ?RemoveTabsFromWindowOrder@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAAXAEBV?$vector@Uguid@winrt@@V?$allocator@Uguid@winrt@@@std@@@std@@AEBV?$unordered_map@_KUguid@winrt@@U?$hash@_K@std@@U?$equal_to@_K@4@V?$allocator@U?$pair@$$CB_KUguid@winrt@@@std@@@4@@8@@Z @ 0x18002C14C (-RemoveTabsFromWindowOrder@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAAXAEBV-.c)
 * Callees:
 *     ??D?$_Deque_unchecked_iterator@V?$_Deque_val@U?$_Deque_simple_types@V?$time_point@Usystem_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@23@@chrono@std@@@std@@@std@@@std@@QEBAAEAV?$time_point@Usystem_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@23@@chrono@1@XZ @ 0x18016328C (--D-$_Deque_unchecked_iterator@V-$_Deque_val@U-$_Deque_simple_types@V-$time_point@Usystem_clock@.c)
 *     ??D?$_Deque_unchecked_const_iterator@V?$_Deque_val@U?$_Deque_simple_types@V?$time_point@Usystem_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@23@@chrono@std@@@std@@@std@@@std@@QEBAAEBV?$time_point@Usystem_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@23@@chrono@1@XZ @ 0x180163298 (--D-$_Deque_unchecked_const_iterator@V-$_Deque_val@U-$_Deque_simple_types@V-$time_point@Usystem_.c)
 *     ??$_Emplace_back_internal@AEB_K@?$deque@_KV?$allocator@_K@std@@@std@@AEAAXAEB_K@Z @ 0x1801C9184 (--$_Emplace_back_internal@AEB_K@-$deque@_KV-$allocator@_K@std@@@std@@AEAAXAEB_K@Z.c)
 *     ?pop_back@?$deque@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@QEAAXXZ @ 0x1802655BC (-pop_back@-$deque@UtagRECT@@V-$allocator@UtagRECT@@@std@@@std@@QEAAXXZ.c)
 */

void __fastcall std::deque<unsigned __int64>::_Assign_range<std::_Deque_unchecked_const_iterator<std::_Deque_val<std::_Deque_simple_types<unsigned __int64>>>,std::_Deque_unchecked_const_iterator<std::_Deque_val<std::_Deque_simple_types<unsigned __int64>>>>(
        __int64 a1,
        _QWORD *a2,
        __int64 a3)
{
  __int64 v3; // r11
  __int64 v6; // r10
  __int64 v8; // rsi
  _QWORD *v9; // rax
  _QWORD *v10; // r9
  __int64 v11; // r11
  __int64 v12; // r10
  __int64 v13; // rsi
  _QWORD *v14; // rax
  _QWORD v15[3]; // [rsp+20h] [rbp-18h] BYREF

  v3 = *(_QWORD *)(a1 + 24);
  v6 = v3 + *(_QWORD *)(a1 + 32);
  v15[0] = a1;
  while ( 1 )
  {
    v15[1] = v3;
    if ( v3 == v6 )
    {
      while ( 1 )
      {
        v13 = a2[1];
        if ( v13 == *(_QWORD *)(a3 + 8) )
          break;
        v14 = (_QWORD *)std::_Deque_unchecked_const_iterator<std::_Deque_val<std::_Deque_simple_types<std::chrono::time_point<std::chrono::system_clock,std::chrono::duration<__int64,std::ratio<1,10000000>>>>>>::operator*(a2);
        std::deque<unsigned __int64>::_Emplace_back_internal<unsigned __int64 const &>(a1, v14);
        a2[1] = v13 + 1;
      }
      return;
    }
    v8 = a2[1];
    if ( v8 == *(_QWORD *)(a3 + 8) )
      break;
    std::_Deque_unchecked_const_iterator<std::_Deque_val<std::_Deque_simple_types<std::chrono::time_point<std::chrono::system_clock,std::chrono::duration<__int64,std::ratio<1,10000000>>>>>>::operator*(a2);
    v9 = (_QWORD *)std::_Deque_unchecked_iterator<std::_Deque_val<std::_Deque_simple_types<std::chrono::time_point<std::chrono::system_clock,std::chrono::duration<__int64,std::ratio<1,10000000>>>>>>::operator*((__int64)v15);
    v3 = v11 + 1;
    *v9 = *v10;
    a2[1] = v8 + 1;
  }
  if ( v6 != v3 )
  {
    do
      std::deque<tagRECT>::pop_back(a1);
    while ( v12 != 1 );
  }
}
