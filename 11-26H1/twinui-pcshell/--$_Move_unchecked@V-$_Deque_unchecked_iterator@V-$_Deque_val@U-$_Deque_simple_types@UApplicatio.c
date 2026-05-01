/*
 * XREFs of ??$_Move_unchecked@V?$_Deque_unchecked_iterator@V?$_Deque_val@U?$_Deque_simple_types@UApplicationViewHistory@SnapEducationHandler@@@std@@@std@@@std@@V12@@std@@YA?AV?$_Deque_unchecked_iterator@V?$_Deque_val@U?$_Deque_simple_types@UApplicationViewHistory@SnapEducationHandler@@@std@@@std@@@0@V10@00@Z @ 0x1801632AC
 * Callers:
 *     ?erase@?$deque@UApplicationViewHistory@SnapEducationHandler@@V?$allocator@UApplicationViewHistory@SnapEducationHandler@@@std@@@std@@QEAA?AV?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@UApplicationViewHistory@SnapEducationHandler@@@std@@@std@@@2@V?$_Deque_const_iterator@V?$_Deque_val@U?$_Deque_simple_types@UApplicationViewHistory@SnapEducationHandler@@@std@@@std@@@2@0@Z @ 0x1801633C4 (-erase@-$deque@UApplicationViewHistory@SnapEducationHandler@@V-$allocator@UApplicationViewHistor.c)
 * Callees:
 *     ?_Tidy@?$deque@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@AEAAXXZ @ 0x1800CB854 (-_Tidy@-$deque@UtagRECT@@V-$allocator@UtagRECT@@@std@@@std@@AEAAXXZ.c)
 *     ??D?$_Deque_unchecked_iterator@V?$_Deque_val@U?$_Deque_simple_types@UApplicationViewHistory@SnapEducationHandler@@@std@@@std@@@std@@QEBAAEAUApplicationViewHistory@SnapEducationHandler@@XZ @ 0x1800CBBE8 (--D-$_Deque_unchecked_iterator@V-$_Deque_val@U-$_Deque_simple_types@UApplicationViewHistory@Snap.c)
 *     ?_Take_contents@?$deque@V?$time_point@Usystem_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@23@@chrono@std@@V?$allocator@V?$time_point@Usystem_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@23@@chrono@std@@@3@@std@@AEAAXAEAV12@@Z @ 0x1801CEF74 (-_Take_contents@-$deque@V-$time_point@Usystem_clock@chrono@std@@V-$duration@_JU-$ratio@$00$0JIJG.c)
 */

_OWORD *__fastcall std::_Move_unchecked<std::_Deque_unchecked_iterator<std::_Deque_val<std::_Deque_simple_types<SnapEducationHandler::ApplicationViewHistory>>>,std::_Deque_unchecked_iterator<std::_Deque_val<std::_Deque_simple_types<SnapEducationHandler::ApplicationViewHistory>>>>(
        _OWORD *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v4; // r15
  __int64 v8; // rbp
  _QWORD *v9; // rax
  _QWORD *v10; // r9
  _QWORD *v11; // r12
  _QWORD *v12; // r14
  _OWORD *result; // rax

  v4 = *(_QWORD *)(a3 + 8);
  while ( 1 )
  {
    v8 = *(_QWORD *)(a2 + 8);
    if ( v8 == v4 )
      break;
    std::_Deque_unchecked_iterator<std::_Deque_val<std::_Deque_simple_types<SnapEducationHandler::ApplicationViewHistory>>>::operator*(a2);
    v9 = (_QWORD *)std::_Deque_unchecked_iterator<std::_Deque_val<std::_Deque_simple_types<SnapEducationHandler::ApplicationViewHistory>>>::operator*(a4);
    v11 = v10 + 2;
    *v9 = *v10;
    v12 = v9 + 2;
    v9[1] = v10[1];
    if ( v9 + 2 != v10 + 2 )
    {
      std::deque<tagRECT>::_Tidy(v9 + 2);
      std::deque<std::chrono::time_point<std::chrono::system_clock,std::chrono::duration<__int64,std::ratio<1,10000000>>>>::_Take_contents(
        v12,
        v11);
    }
    ++*(_QWORD *)(a4 + 8);
    *(_QWORD *)(a2 + 8) = v8 + 1;
  }
  result = a1;
  *a1 = *(_OWORD *)a4;
  return result;
}
