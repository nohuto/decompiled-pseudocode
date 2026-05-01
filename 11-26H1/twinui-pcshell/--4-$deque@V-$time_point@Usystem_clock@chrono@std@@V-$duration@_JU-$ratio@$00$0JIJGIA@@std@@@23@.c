/*
 * XREFs of ??4?$deque@V?$time_point@Usystem_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@23@@chrono@std@@V?$allocator@V?$time_point@Usystem_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@23@@chrono@std@@@3@@std@@QEAAAEAV01@AEBV01@@Z @ 0x180163684
 * Callers:
 *     ?WindowFocusChanged@SnapEducationHandler@@AEAAXPEAUHWND__@@@Z @ 0x180162E20 (-WindowFocusChanged@SnapEducationHandler@@AEAAXPEAUHWND__@@@Z.c)
 * Callees:
 *     ??$_Emplace_back_internal@AEBV?$time_point@Usystem_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@23@@chrono@std@@@?$deque@V?$time_point@Usystem_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@23@@chrono@std@@V?$allocator@V?$time_point@Usystem_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@23@@chrono@std@@@3@@std@@AEAAXAEBV?$time_point@Usystem_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@23@@chrono@1@@Z @ 0x180162D6C (--$_Emplace_back_internal@AEBV-$time_point@Usystem_clock@chrono@std@@V-$duration@_JU-$ratio@$00$.c)
 *     ??D?$_Deque_unchecked_iterator@V?$_Deque_val@U?$_Deque_simple_types@V?$time_point@Usystem_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@23@@chrono@std@@@std@@@std@@@std@@QEBAAEAV?$time_point@Usystem_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@23@@chrono@1@XZ @ 0x18016328C (--D-$_Deque_unchecked_iterator@V-$_Deque_val@U-$_Deque_simple_types@V-$time_point@Usystem_clock@.c)
 *     ??D?$_Deque_unchecked_const_iterator@V?$_Deque_val@U?$_Deque_simple_types@V?$time_point@Usystem_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@23@@chrono@std@@@std@@@std@@@std@@QEBAAEBV?$time_point@Usystem_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@23@@chrono@1@XZ @ 0x180163298 (--D-$_Deque_unchecked_const_iterator@V-$_Deque_val@U-$_Deque_simple_types@V-$time_point@Usystem_.c)
 *     ?pop_back@?$deque@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@QEAAXXZ @ 0x1802655BC (-pop_back@-$deque@UtagRECT@@V-$allocator@UtagRECT@@@std@@@std@@QEAAXXZ.c)
 */

__int64 __fastcall std::deque<std::chrono::time_point<std::chrono::system_clock,std::chrono::duration<__int64,std::ratio<1,10000000>>>>::operator=(
        __int64 a1,
        __int64 a2)
{
  __int64 v3; // rbx
  __int64 v4; // r11
  __int64 v5; // rsi
  __int64 v6; // r10
  _QWORD *v7; // rax
  _QWORD *v8; // rax
  _QWORD *v9; // r9
  __int64 v10; // r11
  __int64 v11; // r10
  __int64 v13; // [rsp+20h] [rbp-28h] BYREF
  __int64 v14; // [rsp+28h] [rbp-20h]
  _QWORD v15[3]; // [rsp+30h] [rbp-18h] BYREF

  if ( a1 != a2 )
  {
    v3 = *(_QWORD *)(a2 + 24);
    v4 = *(_QWORD *)(a1 + 24);
    v5 = v3 + *(_QWORD *)(a2 + 32);
    v6 = v4 + *(_QWORD *)(a1 + 32);
    v13 = a2;
    v15[0] = a1;
    while ( 1 )
    {
      v15[1] = v4;
      v14 = v3;
      if ( v4 == v6 )
      {
        while ( v3 != v5 )
        {
          v7 = (_QWORD *)std::_Deque_unchecked_const_iterator<std::_Deque_val<std::_Deque_simple_types<std::chrono::time_point<std::chrono::system_clock,std::chrono::duration<__int64,std::ratio<1,10000000>>>>>>::operator*(&v13);
          std::deque<std::chrono::time_point<std::chrono::system_clock,std::chrono::duration<__int64,std::ratio<1,10000000>>>>::_Emplace_back_internal<std::chrono::time_point<std::chrono::system_clock,std::chrono::duration<__int64,std::ratio<1,10000000>>> const &>(
            a1,
            v7);
          v14 = ++v3;
        }
        return a1;
      }
      if ( v3 == v5 )
        break;
      std::_Deque_unchecked_const_iterator<std::_Deque_val<std::_Deque_simple_types<std::chrono::time_point<std::chrono::system_clock,std::chrono::duration<__int64,std::ratio<1,10000000>>>>>>::operator*(&v13);
      v8 = (_QWORD *)std::_Deque_unchecked_iterator<std::_Deque_val<std::_Deque_simple_types<std::chrono::time_point<std::chrono::system_clock,std::chrono::duration<__int64,std::ratio<1,10000000>>>>>>::operator*((__int64)v15);
      v4 = v10 + 1;
      ++v3;
      *v8 = *v9;
    }
    if ( v6 != v4 )
    {
      do
        std::deque<tagRECT>::pop_back(a1);
      while ( v11 != 1 );
    }
  }
  return a1;
}
