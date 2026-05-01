/*
 * XREFs of ??$_Emplace_front_internal@UApplicationViewHistory@SnapEducationHandler@@@?$deque@UApplicationViewHistory@SnapEducationHandler@@V?$allocator@UApplicationViewHistory@SnapEducationHandler@@@std@@@std@@AEAAX$$QEAUApplicationViewHistory@SnapEducationHandler@@@Z @ 0x1801B6C70
 * Callers:
 *     ??$emplace_front@UApplicationViewHistory@SnapEducationHandler@@@?$deque@UApplicationViewHistory@SnapEducationHandler@@V?$allocator@UApplicationViewHistory@SnapEducationHandler@@@std@@@std@@QEAAAEAUApplicationViewHistory@SnapEducationHandler@@$$QEAU23@@Z @ 0x1805B7528 (--$emplace_front@UApplicationViewHistory@SnapEducationHandler@@@-$deque@UApplicationViewHistory@.c)
 * Callees:
 *     ??0?$deque@V?$time_point@Usystem_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@23@@chrono@std@@V?$allocator@V?$time_point@Usystem_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@23@@chrono@std@@@3@@std@@QEAA@$$QEAV01@@Z @ 0x1801B6D2C (--0-$deque@V-$time_point@Usystem_clock@chrono@std@@V-$duration@_JU-$ratio@$00$0JIJG_ea_1801B6D2C.c)
 *     ?_Growmap@?$deque@UApplicationViewHistory@SnapEducationHandler@@V?$allocator@UApplicationViewHistory@SnapEducationHandler@@@std@@@std@@AEAAX_K@Z @ 0x1801B6DF4 (-_Growmap@-$deque@UApplicationViewHistory@SnapEducationHandler@@V-$allocator@UApplicationViewHis.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x180285C68 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 *     ?_Address_subscript@?$_Deque_val@U?$_Deque_simple_types@UtagPRESENTFRAME@@@std@@@std@@QEAAPEAUtagPRESENTFRAME@@_K@Z @ 0x180357948 (-_Address_subscript@-$_Deque_val@U-$_Deque_simple_types@UtagPRESENTFRAME@@@std@@@std@@QEAAPEAUta.c)
 *     ?_Getblock@?$deque@UtagPRESENTFRAME@@V?$allocator@UtagPRESENTFRAME@@@std@@@std@@AEBA_J_K@Z @ 0x18035838C (-_Getblock@-$deque@UtagPRESENTFRAME@@V-$allocator@UtagPRESENTFRAME@@@std@@@std@@AEBA_J_K@Z.c)
 */

__int64 __fastcall std::deque<SnapEducationHandler::ApplicationViewHistory>::_Emplace_front_internal<SnapEducationHandler::ApplicationViewHistory>(
        _QWORD *a1,
        _QWORD *a2)
{
  __int64 v4; // rcx
  bool v5; // zf
  __int64 v6; // rsi
  __int64 v7; // rsi
  __int64 v8; // rbp
  _QWORD *v9; // rax
  __int64 result; // rax

  if ( a1[2] <= (unsigned __int64)(a1[4] + 1LL) )
    std::deque<SnapEducationHandler::ApplicationViewHistory>::_Growmap();
  v4 = a1[2];
  v5 = ((v4 - 1) & a1[3]) == 0;
  a1[3] &= v4 - 1;
  v6 = a1[3];
  if ( v5 )
    v6 = v4;
  v7 = v6 - 1;
  v8 = std::deque<tagPRESENTFRAME>::_Getblock(a1, v7);
  if ( !*(_QWORD *)(a1[1] + 8 * v8) )
    *(_QWORD *)(a1[1] + 8 * v8) = std::_Allocate<16,std::_Default_allocate_traits>(56LL);
  v9 = (_QWORD *)std::_Deque_val<std::_Deque_simple_types<tagPRESENTFRAME>>::_Address_subscript(a1, v7);
  *v9 = *a2;
  v9[1] = a2[1];
  result = std::deque<std::chrono::time_point<std::chrono::system_clock,std::chrono::duration<__int64,std::ratio<1,10000000>>>>::deque<std::chrono::time_point<std::chrono::system_clock,std::chrono::duration<__int64,std::ratio<1,10000000>>>>(
             v9 + 2,
             a2 + 2);
  a1[3] = v7;
  ++a1[4];
  return result;
}
